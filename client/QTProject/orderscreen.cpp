#include "orderscreen.h"
#include "ui_orderscreen.h"
#include "mainscreen.h"

bool OrderScreen::flag = true;

OrderScreen::OrderScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OrderScreen)
{
    ui->setupUi(this);
    this->confirm = false;
    this->pare = parent;
    this->Jdata = packagingJson(parent);

    MainScreen *father = (MainScreen*) parent;
    ui->tableWidget->setColumnCount(3);		//3列
    ui->tableWidget->setRowCount(father->get_menu().size());	//n行
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"菜名"<<"单价"<<"数量");	//3列表头名

    for(int i=0; i<father->get_menu().size(); i++)
    {
        //内容插入第一个参数为行，第二个参数为列， 第三个为内容
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(father->get_menu().at(i)->get_foodname()));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(father->get_menu().at(i)->get_foodprice()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString("%1").arg(father->get_menu().at(i)->food_num())));
        //ui->tableWidget->item(i,3)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    }
    ui->label->setText("用餐人数："+QString::number(father->get_number()));

    //bytesWritten-->发送完数据信号
    connect(&father->get_socket(), &QTcpSocket::bytesWritten, this, &OrderScreen::send_neum);
}

OrderScreen::~OrderScreen()
{
    delete ui;
}

bool OrderScreen::confirm_menu()
{
    return this->confirm;
}

QString OrderScreen::packagingJson(QWidget *p)
{
    QJsonObject obj;
    QJsonArray oarr;
    MainScreen *data = (MainScreen*) p;
    for(int i=0; i<data->get_menu().size(); i++)
    {
        obj.insert("数量", data->get_menu().at(i)->food_num());
        obj.insert("单价", data->get_menu().at(i)->get_foodprice());
        obj.insert("菜品", data->get_menu().at(i)->get_foodname());
        oarr.append(obj);
    }

    QJsonObject outside;
    outside.insert(QString::number(data->get_table_num()), oarr);
//    outside.insert("")

    QJsonDocument doc;
    doc.setObject(outside);

    QString Jdata = doc.toJson();
    qDebug() << Jdata;
    return Jdata;
}

void OrderScreen::on_pushButton_clicked()
{
    //发送JSon数据包

    MainScreen *m = (MainScreen *)this->pare;
    QString ninfo = QString::number(m->get_table_num()) +":"+ QString::number(m->get_menu().size());
    m->get_socket().write(ninfo.toUtf8());

    this->confirm = true;
    emit ret_confirm_menu(confirm);
    this->close();
}

void OrderScreen::send_neuminfo()
{
    qDebug() << "已链接服务器!";

}

void OrderScreen::send_neum()
{
    qDebug() << "send_neum";
    if(flag){
        MainScreen *m = (MainScreen *)this->pare;
        m->get_socket().write(Jdata.toUtf8());
        flag = false;
    }

}
