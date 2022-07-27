#include "orderserver.h"
#include "ui_orderserver.h"
#include <QMessageBox>
#include "mainserver.h"

OrderServer::OrderServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OrderServer)
{
    ui->setupUi(this);

}

OrderServer::~OrderServer()
{
    delete ui;
}

void OrderServer::on_pushButton_clicked()
{
    QString npass = "123456";
    QString pass = ui->lineEdit->text();
    if(pass != npass){
        QMessageBox::warning(this, "提示", "密码错误!");
        return;
    }
    MainServer *ms = new MainServer();
    ms->show();
    this->close();
}

