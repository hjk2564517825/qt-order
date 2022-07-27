#include "mainscreen.h"
#include "ui_mainscreen.h"
#include "loginscreen.h"
#include "ui_loginscreen.h"
#include <QIcon>
#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QWidget>
#include <QPixmap>
#include <QLabel>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonValue>
#include <QBuffer>

MainScreen::MainScreen(QString worknum,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScreen)
{
//    typeof(array)
    ui->setupUi(this);
    this->menuprice = 0;
    this->confirm = false;		//订单提交标志位
    this->ispayment = false;
    this->msock.connectToHost("127.0.0.1", 9672);
    this->dine_number = ui->spinBox->text().toInt();
    str1 = worknum;
    str2 = "kfc"+worknum;
    ui->snum->setText(str2);
    ui->tnum->setText(str1);
    this->table_number =ui->tnum->text().toInt();

    mtime = new QTimer(this);
    mtime->start(1000);
    recvHeaderPtr = new UdpTransfer(UdpTransfer::RECV,9526);
    recvJsonPtr = new UdpTransfer(UdpTransfer::RECV,9525);
    recvNamePtr = new UdpTransfer(UdpTransfer::RECV,9524);

    connect(recvJsonPtr, &UdpTransfer::recviceFinished, this, &MainScreen::recvjson);
    connect(recvHeaderPtr, &UdpTransfer::recviceFinished,this, &MainScreen::recvheader);
    connect(recvNamePtr, &UdpTransfer::recviceFinished,this, &MainScreen::recvname);
//connected--》链接上服务器信号

    connect(mtime, &QTimer::timeout, this, &MainScreen::update_time);


//    菜单信息

    //汉堡
    QFile han_bao("./info/汉堡信息.txt");
    han_bao.open(QIODevice::ReadOnly);
    QString frL1 = han_bao.readAll();
    QStringList list1 = frL1.split("@");

    QString f1 = list1[0];QString f2 = list1[1];QString f3 = list1[2];
    QString f4 = list1[3];QString f5 = list1[4];QString f6 = list1[5];
    QString f7 = list1[6];QString f8 = list1[7];QString f9 = list1[8];
    QString f10 = list1[9];QString f11 = list1[10];QString f12 = list1[11];
    QString f13 = list1[12];QString f14 = list1[13];QString f15 = list1[14];
    QString f16 = list1[15];QString f17 = list1[16];QString f18 = list1[17];

    ui->frame_1->setStyle(1,f1,f2,f3);
    ui->frame_2->setStyle(2,f4,f5,f6);
    ui->frame_3->setStyle(3,f7,f8,f9);
    ui->frame_4->setStyle(4,f10,f11,f12);
    ui->frame_5->setStyle(5,f13,f14,f15);
    ui->frame_6->setStyle(6,f16,f17,f18);

    connect(ui->frame_1, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->frame_2, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->frame_3, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->frame_4, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->frame_5, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->frame_6, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    han_bao.close();

    //小吃
    QFile xiao_chi("./info/小吃信息.txt");
    xiao_chi.open(QIODevice::ReadOnly);
    QString frL2 = xiao_chi.readAll();
    QStringList list2 = frL2.split("@");

    QString t1 = list2[0];QString t2 = list2[1];QString t3 = list2[2];
    QString t4 = list2[3];QString t5 = list2[4];QString t6 = list2[5];
    QString t7 = list2[6];QString t8 = list2[7];QString t9 = list2[8];
    QString t10 = list2[9];QString t11 = list2[10];QString t12 = list2[11];
    QString t13 = list2[12];QString t14 = list2[13];QString t15 = list2[14];
    QString t16 = list2[15];QString t17 = list2[16];QString t18 = list2[17];

    ui->tab2_1->setStyle(1,t1,t2,t3);
    ui->tab2_2->setStyle(2,t4,t5,t6);
    ui->tab2_3->setStyle(3,t7,t8,t9);
    ui->tab2_4->setStyle(4,t10,t11,t12);
    ui->tab2_5->setStyle(5,t13,t14,t15);
    ui->tab2_6->setStyle(6,t16,t17,t18);

    connect(ui->tab2_1, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab2_2, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab2_3, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab2_4, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab2_5, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab2_6, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    xiao_chi.close();

    //炸鸡
    QFile zha_ji("./info/炸鸡信息.txt");
    zha_ji.open(QIODevice::ReadOnly);
    QString frL3 = zha_ji.readAll();
    QStringList list3 = frL3.split("@");

    QString z1 = list3[0];QString z2 = list3[1];QString z3 = list3[2];
    QString z4 = list3[3];QString z5 = list3[4];QString z6 = list3[5];
    QString z7 = list3[6];QString z8 = list3[7];QString z9 = list3[8];
    QString z10 = list3[9];QString z11 = list3[10];QString z12 = list3[11];
    QString z13 = list3[12];QString z14 = list3[13];QString z15 = list3[14];
    QString z16 = list3[15];QString z17 = list3[16];QString z18 = list3[17];

    ui->tab3_1->setStyle(1,z1,z2,z3);
    ui->tab3_2->setStyle(2,z4,z5,z6);
    ui->tab3_3->setStyle(3,z7,z8,z9);
    ui->tab3_4->setStyle(4,z10,z11,z12);
    ui->tab3_5->setStyle(5,z13,z14,z15);
    ui->tab3_6->setStyle(6,z16,z17,z18);

    connect(ui->tab3_1, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab3_2, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab3_3, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab3_4, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab3_5, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab3_6, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    zha_ji.close();

    //饮品
    QFile yin_pin("./info/饮品信息.txt");
    yin_pin.open(QIODevice::ReadOnly);
    QString frL4 = yin_pin.readAll();
    QStringList list4 = frL4.split("@");

    QString y1 = list4[0];QString y2 = list4[1];QString y3 = list4[2];
    QString y4 = list4[3];QString y5 = list4[4];QString y6 = list4[5];
    QString y7 = list4[6];QString y8 = list4[7];QString y9 = list4[8];
    QString y10 = list4[9];QString y11 = list4[10];QString y12 = list4[11];
    QString y13 = list4[12];QString y14 = list4[13];QString y15 = list4[14];
    QString y16 = list4[15];QString y17 = list4[16];QString y18 = list4[17];

    ui->tab4_1->setStyle(1,y1,y2,y3);
    ui->tab4_2->setStyle(2,y4,y5,y6);
    ui->tab4_3->setStyle(3,y7,y8,y9);
    ui->tab4_4->setStyle(4,y10,y11,y12);
    ui->tab4_5->setStyle(5,y13,y14,y15);
    ui->tab4_6->setStyle(6,y16,y17,y18);

    connect(ui->tab4_1, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab4_2, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab4_3, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab4_4, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab4_5, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab4_6, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    yin_pin.close();

    //冰淇淋
    QFile ice("./info/冰淇淋信息.txt");
    ice.open(QIODevice::ReadOnly);
    QString frL5 = ice.readAll();
    QStringList list5 = frL5.split("@");

    QString i1 = list5[0];QString i2 = list5[1];QString i3 = list5[2];
    QString i4 = list5[3];QString i5 = list5[4];QString i6 = list5[5];
    QString i7 = list5[6];QString i8 = list5[7];QString i9 = list5[8];
    QString i10 = list5[9];QString i11 = list5[10];QString i12 = list5[11];
    QString i13 = list5[12];QString i14 = list5[13];QString i15 = list5[14];
    QString i16 = list5[15];QString i17 = list5[16];QString i18 = list5[17];

    ui->tab5_1->setStyle(1,i1,i2,i3);
    ui->tab5_2->setStyle(2,i4,i5,i6);
    ui->tab5_3->setStyle(3,i7,i8,i9);
    ui->tab5_4->setStyle(4,i10,i11,i12);
    ui->tab5_5->setStyle(5,i13,i14,i15);
    ui->tab5_6->setStyle(6,i16,i17,i18);

    connect(ui->tab5_1, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab5_2, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab5_3, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab5_4, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab5_5, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    connect(ui->tab5_6, &FoodControl::addsignals, this, &MainScreen::add_foodclick);
    ice.close();
}

MainScreen::~MainScreen()
{
    delete ui;
}


QVector<FoodControl *> MainScreen::get_menu()
{
    return this->varr;
}

int MainScreen::get_number()
{
    return this->dine_number;
}

int MainScreen::get_table_num()
{
   return this->table_number;
}

QTcpSocket &MainScreen::get_socket()
{
    return this->msock;
}

void MainScreen::add_foodclick()
{
    FoodControl *fc = (FoodControl *)sender();
    int flag = true;
    if(varr.size() == 0)
        varr.append(fc);
    else {
        for(int i=0; i<varr.size(); i++){
            if(varr.at(i)->get_foodname() == fc->get_foodname())
            {
                if(varr.at(i)->food_num() == 0)
                    varr.removeAt(i);
                flag = false;
            }
        }
        if(flag) varr.append(fc);
    }
}

void MainScreen::on_orderBtn_clicked()
{

    if(this->confirm != false){
        QMessageBox::warning(this, "提示","已提交订单，如需修改请联系前台！");

        return;
    }
    if(this->varr.size() == 0){
        QMessageBox::warning(this, "提示","请先选菜品！");
        return;
    }
    int price = 0;
    for(int i =0; i< varr.size(); i++){
        price += varr.at(i)->get_foodprice().toInt() * varr.at(i)->food_num();
        qDebug() << varr.at(i)->get_foodname() << varr.at(i)->food_num();
    }
    this->menuprice = price;
    os = new OrderScreen(this);
    connect(os, &OrderScreen::ret_confirm_menu, this, &MainScreen::get_confirm_menu);
    os->show();
    this->confirm = os->confirm_menu();

    qDebug() << "--------";
}

void MainScreen::update_time()
{
    ui->timeLB->setText(QDate::currentDate().toString("yyyy-MM-dd")+" "+QTime::currentTime().toString("hh:mm:ss"));
}

void MainScreen::on_settleBtn_clicked()
{
    if(!confirm){
        QMessageBox::warning(this,"提示", "请确认订单后再付款！");
        return;
    }else{
        if(ispayment){
            QMessageBox::information(this, "提示", "你已支付订单");
            return;
        }
        int ret = QMessageBox::information(this, "支付", QString("你需要支付%1元").arg(this->menuprice), QMessageBox::No,QMessageBox::Yes);
        if(ret == QMessageBox::Yes)
        {
            ui->onum->setText(QDate::currentDate().toString("MMdd")+QTime::currentTime().toString("hhmmss"));
            QString pay = "B.(订单号:"+ ui->onum->text() +")"+ui->tnum->text() + "号桌已支付"+ QString::number(menuprice) + "元";
            msock.write(pay.toUtf8());
            ui->snum->setText("007");
            this->ispayment = true;
        }
    }
}

void MainScreen::get_confirm_menu(bool now)
{
    qDebug() << "ok!";
    this->confirm = now;
}

void MainScreen::on_spinBox_valueChanged(int arg1)
{
    this->dine_number = arg1;
    qDebug() << dine_number;
}

void MainScreen::on_serveBtn_clicked()
{
    QMessageBox::information(this, "提示", "已通知前台，请稍等！");
    QString waiter = "A."+ui->tnum->text()+"号桌需要人工服务!";
    this->msock.write(waiter.toUtf8());
}

void MainScreen::recvjson(QByteArray& array)
{
    //接收修改的菜单
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(array,&err);
    if(err.error != QJsonParseError::NoError)
    {
        qDebug()<<"json err";
        return ;
    }
    QJsonObject obj = doc.object();
    qDebug()<< obj;
    if(obj.value("lei").toString() == "汉堡")
    {
        if(obj.value("num").toInt() == 1)
        {
            QFile han_bao("./info/汉堡信息.txt");
            han_bao.open(QIODevice::ReadOnly);
            QString frL1 = han_bao.readAll();
            QStringList list1 = frL1.split("@");

            if(frL1.contains(list1[0], Qt::CaseInsensitive))
            {
                frL1.replace(list1[0],obj.value("name").toString());
                frL1.replace(list1[1],("./images/")+obj.value("pic").toString());
                frL1.replace(list1[2],obj.value("price").toString());
            }

            list1[0]=obj.value("name").toString();
            list1[1]=("./images/")+obj.value("pic").toString();
            list1[2]=obj.value("price").toString();
            ui->frame_1->setStyle(1,list1[0],list1[1],list1[2]);
            connect(ui->frame_1, &FoodControl::addsignals, this, &MainScreen::add_foodclick);

            han_bao.close();
            QFile::remove("./info/汉堡信息.txt");
            han_bao.open(QIODevice::WriteOnly);
            han_bao.write(frL1.toUtf8());
            han_bao.close();
        }

    }

}

void MainScreen::recvheader(QByteArray& array)
{
    QPixmap mmp;
    mmp.loadFromData(array);
    mmp.save("./images/"+file_name);
}

void MainScreen::recvname(QByteArray& array)
{
    QString data = array;
    file_name = data;
}

void MainScreen::on_updateBtn_clicked()
{

    this->close();

    this->show();

}
