#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "mainserver.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QListWidget>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:


    void on_sendBtn_clicked();

private:
    Ui::menu *ui;
    QTcpServer mserver;
    QVector<QTcpSocket* > sockets;
    QTcpSocket msocket;
};

#endif // MENU_H
