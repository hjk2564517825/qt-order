#include "foodcontrol.h"
#include "ui_foodcontrol.h"
#include <QPixmap>

FoodControl::FoodControl(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::FoodControl)
{
    ui->setupUi(this);
    this->flag = false;
    food_count = 0;
}

FoodControl::~FoodControl()
{
    delete ui;
}

void FoodControl::setStyle(int number, QString foodname, QString path, QString money)
{
    ui->Fiamge->setStyleSheet(QString("border-image:url(%1)").arg(path));
    ui->Fname->setText(foodname);
    ui->Fmoney->setText(money+"元");
    this->foodname = foodname;
    this->foodprice = money;
    this->food_number = number;
}

QString FoodControl::get_foodname()
{
    return this->foodname;
}

QString FoodControl::get_foodprice()
{
    return this->foodprice;
}

int FoodControl::food_num()
{
    return this->food_count;
}

bool FoodControl::isPitch_On()
{
    return this->flag;
}

void FoodControl::on_addbtn_clicked()
{
    this->flag = true;
    this->food_count+=1;
    ui->Fnum->setText(QString("%1").arg(food_count));
    emit addsignals();

}

void FoodControl::on_subbtn_clicked()
{
    if(food_count == 0) {
       flag = false;
       return;
    }
    this->food_count-=1;
    ui->Fnum->setText(QString("%1").arg(food_count));
    emit addsignals();

}
