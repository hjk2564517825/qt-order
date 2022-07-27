#include "udptransfer.h"
#include <QDataStream>
UdpTransfer::UdpTransfer(UdpTransfer::Type ty, quint16 port, QObject *parent) : QObject(parent)
{
    this->array.clear();
    this->times = 0;
    this->transferTimes = 0;
    msocket = new QUdpSocket();
    if(ty == SEND)
    {
        connect(msocket, &QUdpSocket::readyRead, this, &UdpTransfer::transfer_context);
    }else if(ty == RECV){
        if(msocket->bind(QHostAddress::AnyIPv4, port))
        {
            //qDebug()<<"绑定成功";
        }else
        {
            //qDebug()<<"绑定失败";
        }
        connect(msocket, &QUdpSocket::readyRead, this, &UdpTransfer::recvice_context);
    }
}
UdpTransfer::~UdpTransfer()
{

}
void UdpTransfer::send_data(QByteArray &array, QString ip, quint16 port)
{
    this->send_data(array, QHostAddress(ip),port);
    //qDebug()<<"发送header:"<<header.size();
}

void UdpTransfer::send_data(QByteArray &array, QHostAddress addr, quint16 port)
{
    //发送数据头
    this->array = array;
    this->arrayByte = array.size();
    this->times = this->arrayByte/1500+1;
    this->transferTimes = 0;

    QByteArray header;
    QDataStream stream(&header, QIODevice::WriteOnly);
    stream<<this->arrayByte<<this->times;
    msocket->writeDatagram(header,addr, port);
}
void UdpTransfer::transfer_context()
{
    if(msocket->bytesAvailable() == 4 && this->transferTimes == this->times)
    {
        //对方已经接收完毕
        emit transferFinished();
        msocket->close();
        //qDebug()<<"发送完毕";

    }else if(msocket->bytesAvailable() == 8 && this->transferTimes < this->times)
    {
        QByteArray array;
        array.resize(8);
        QHostAddress host;
        quint16 port;
        msocket->readDatagram(array.data(),8, &host, &port);
        //qDebug()<<array.toULong();

        QByteArray tmp = this->array.mid(this->transferTimes*1500, 1500);
        msocket->writeDatagram(tmp,tmp.size(),host, port);
        //qDebug()<<tmp;
        this->transferTimes += 1;

    }
}
void UdpTransfer::recvice_context()
{
    //qDebug()<<"*************"<<msocket->bytesAvailable();
    if(msocket->bytesAvailable() == 16) //读取头
    {
        this->array.clear();
        QByteArray array;
        array.resize(16);
        QHostAddress host;
        quint16 port;
        msocket->readDatagram(array.data(),16, &host, &port);
        QDataStream stream(&array, QIODevice::ReadOnly);
        stream>>arrayByte>>times;

        this->transferTimes = 0;
        QByteArray tmp;
        tmp.resize(8);
        tmp.setRawData((char*)&transferTimes, 8);
        qint64 ret = msocket->writeDatagram(tmp,tmp.size(),host, port);
        //qDebug()<<"接收header："<<transferTimes<<ret;
        this->transferTimes += 1;
    }else
    {
        QByteArray array;
        array.resize(msocket->bytesAvailable());
        QHostAddress host;
        quint16 port;
        msocket->readDatagram(array.data(),array.size(), &host, &port);
        this->array.append( array );

        if(this->array.size() == (int)arrayByte)
        {
            //qDebug()<<"接收完毕";
            this->times = 0;
            this->transferTimes = 0;
            msocket->writeDatagram("###",4,host,port);
            this->sendHost  = host;
            emit recviceFinished(this->array);
            return ;
        }
        QByteArray tmp;
        tmp.resize(8);
        tmp.setRawData((char*)&transferTimes, 8);
        msocket->writeDatagram(tmp,tmp.size(),host, port);
        //qDebug()<<"接收context："<<transferTimes;
        this->transferTimes += 1;
    }
}

QHostAddress UdpTransfer::getSendHost() const
{
    return sendHost;
}
