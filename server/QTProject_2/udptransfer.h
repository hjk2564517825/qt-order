#ifndef UDPTRANSFERDATA_H
#define UDPTRANSFERDATA_H

#include <QObject>
#include <QUdpSocket>
class UdpTransfer : public QObject
{
    Q_OBJECT
public:
    enum Type{SEND,RECV};
    explicit UdpTransfer(UdpTransfer::Type ty=SEND,quint16 port = 9527,QObject *parent = nullptr);
    ~UdpTransfer();
    void send_data(QByteArray &array, QString ip="127.0.0.1", quint16 port=9527);
    void send_data(QByteArray &array, QHostAddress addr=QHostAddress("127.0.0.1"), quint16 port=9527);
    QHostAddress getSendHost() const;

signals:
    void recviceFinished(QByteArray &array);
    void transferFinished();
private slots:
    void transfer_context();
    void recvice_context();
private:
    QUdpSocket *msocket;
    QByteArray array;//存储数据
    quint64 arrayByte; //数据大小
    quint64 times;//次数
    quint64 transferTimes;

    QHostAddress sendHost;
};
#endif // UDPTRANSFERDATA_H
