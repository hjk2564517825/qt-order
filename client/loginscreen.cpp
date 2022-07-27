#include "loginscreen.h"
#include "ui_loginscreen.h"
#include "mainscreen.h"
#include <QMessageBox>

LoginScreen::LoginScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
    ui->widget_2->hide();
    worknum = "001";
    password = "123456";
    ui->passEdit->installEventFilter(this);
    ui->accoEdit->installEventFilter(this);
}

LoginScreen::~LoginScreen()
{
    delete ui;
}

void LoginScreen::mousePressEvent(QMouseEvent *event)
{

        if(event->x()>250 && x()<550)
        {
                if(event->y()>0 && y()<170)
                {
                    ui->widget_2->show();
                }

        }
        else
        {
            ui->widget_2->hide();
        }
}

void LoginScreen::on_loginBtn_clicked()
{
    if(ui->passEdit->text() == password && ui->accoEdit->text() == worknum){
        MainScreen *mscreen = new MainScreen(worknum);
        mscreen->show();
        this->close();
    }else{
        QMessageBox::information(this, "提示", "密码错误或账号错误！");
    }

}
