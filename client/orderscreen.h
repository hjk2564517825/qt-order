#ifndef ORDERSCREEN_H
#define ORDERSCREEN_H

#include <QMainWindow>
#include <QTableWidget>
#include <QTcpSocket>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonDocument>
//#include "mainscreen.h"

namespace Ui {
class OrderScreen;
//class MainScreen;
}

class OrderScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrderScreen(QWidget *parent = 0);
    ~OrderScreen();
    bool confirm_menu();

    QString packagingJson(QWidget *p);
private slots:
    void on_pushButton_clicked();
    void send_neuminfo();
    void send_neum();
signals :
    void ret_confirm_menu(bool now);
    void send_data();
private:
    Ui::OrderScreen *ui;
    static bool flag;
//    QTcpSocket osock;
    QWidget *pare;
    QString Jdata;
//    MainScreen *father;
    bool confirm;
};

#endif // ORDERSCREEN_H
