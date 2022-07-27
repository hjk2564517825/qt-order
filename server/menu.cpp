#include "menu.h"
#include "ui_menu.h"
#include <QLineEdit>
#include <QFile>
#include <QDebug>
#include <QFileDialog>


menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}


void menu::on_sendBtn_clicked()
{
    QString data_1 = ui->id_Edit->toPlainText();

    msocket.write(data_1.toUtf8());

}
