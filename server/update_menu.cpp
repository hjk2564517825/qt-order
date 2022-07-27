#include "update_menu.h"
#include "ui_update_menu.h"
#include "mainserver.h"

update_menu::update_menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::update_menu)
{
    ui->setupUi(this);
}

update_menu::~update_menu()
{
    delete ui;
}
