#include "softkeyboard.h"
#include "ui_softkeyboard.h"

SoftKeyBoard::SoftKeyBoard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SoftKeyBoard)
{
    ui->setupUi(this);
}

SoftKeyBoard::~SoftKeyBoard()
{
    delete ui;
}
