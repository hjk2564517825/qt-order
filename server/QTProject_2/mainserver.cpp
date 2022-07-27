#include "mainserver.h"
#include "ui_mainserver.h"
#include <QTableWidget>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonParseError>
#include <QMessageBox>

#include <QByteArray>
#include <QFileDialog>
#include <QDir>
#include <string>

#include <QPixmap>
#include <QStringList>
#include <QProcess>
#include <QString>

#include <QApplication>
#include <QDebug>
#include "menu.h"


MainServer::MainServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainServer)
{
    ui->setupUi(this);
    this->mser.listen(QHostAddress::AnyIPv4, 9672);

    this->neuminfo.clear();
    connect(&mser, &QTcpServer::newConnection, this, &MainServer::client_link);
    sendJson = new UdpTransfer();
    sendHeader = new UdpTransfer();

}

MainServer::~MainServer()
{
    delete ui;
}

void MainServer::client_link()
{
    qDebug() << "客户端链接";
    //获取用户套接字
    msoc = mser.nextPendingConnection();
    connect(msoc, &QTcpSocket::readyRead, this, &MainServer::read_data);
}

void MainServer::read_data()
{
    QTcpSocket *now = (QTcpSocket *)sender();
    clientinfo = now->readAll();
    if(clientinfo.at(0) == (QChar)'A'){
        QStringList now = clientinfo.split(".");
        ui->listWidget->addItem(now[1]);
        return;
    }
    else if(clientinfo.at(0) == (QChar)'B'){
        QStringList now = clientinfo.split(".");
        ui->listWidget_2->addItem(now[1]);
        return;
    }

    if(this->neuminfo.isEmpty()){
        neuminfo = clientinfo;
        QStringList tat = neuminfo.split(":");
        tw = new QTableWidget();
        ui->tabWidget->addTab(tw, tat[0]+"号桌");
        this->food_num = QString(tat.at(1)).toInt();
        tw->setColumnCount(3);
        tw->setRowCount(food_num);
        tw->setHorizontalHeaderLabels(QStringList()<<"菜名"<<"单价"<<"数量");
    }else{
        QString mdata = clientinfo;
        qDebug() << mdata;
        QJsonParseError erro;
        QByteArray barr = mdata.toUtf8();
        QJsonDocument docu = QJsonDocument::fromJson(barr, &erro);
        if(erro.error != QJsonParseError::NoError){
            qDebug() << "not json data";
            return;
        }
        QJsonObject obje = docu.object();
        QStringList tat = this->neuminfo.split(":");
        QJsonArray arra = obje.value(tat.at(0)).toArray();
        for(int i=0; i<this->food_num; i++)
        {
            QJsonObject objarr = arra.at(i).toObject();
            this->tw->setItem(i, 0, new QTableWidgetItem(objarr.value("菜品").toString()));
            this->tw->setItem(i, 1, new QTableWidgetItem(objarr.value("单价").toString()));
            this->tw->setItem(i, 2, new QTableWidgetItem(QString::number(objarr.value("数量").toInt())));
        }
        neuminfo.clear();
        food_num = 0;
    }
}

void MainServer::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void MainServer::on_updateBtn_clicked()
{

    QJsonObject obj;

    obj["pic"]=ui->pic_Ed->text();
    obj["name"]=ui->name_Ed->text();
    obj["num"]=ui->num_Ed->text().toInt();
    obj["price"]=ui->price_Ed->text();
    obj["lei"]=ui->comboBox->currentText();
    QJsonDocument doc(obj);

    QByteArray data = doc.toJson();
    qDebug()<<data;
    sendJson->send_data(data, "192.168.56.1", 9525);
}


void MainServer::on_pic_Btn_clicked()
{
    QString fileName;
    file_path =QFileDialog::getOpenFileName(this);
    QFileInfo fileInfo = QFileInfo(file_path);
    //文件名
    fileName = fileInfo.fileName();

    ui->pic_label->setStyleSheet(QString("border-image:url(%1)").arg(file_path));
    ui->pic_Ed->setText(fileName);
    QString data = ui->pic_Ed->text();
    QByteArray array2 = data.toUtf8();
    sendHeader->send_data(array2,"192.168.56.1",9524);

}

void MainServer::on_send_Btn_clicked()
{
    QFile file(file_path);
    file.open(QIODevice::ReadOnly);
    QByteArray array1 = file.readAll();
    sendHeader->send_data(array1,"192.168.56.1",9526);
}
