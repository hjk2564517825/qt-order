#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QMainWindow>
//#include "loginscreen.h"
#include "orderscreen.h"
#include "foodcontrol.h"
#include <QDebug>
#include <QMap>
#include <QVector>
#include <QMessageBox>
#include <QTimer>
#include <QTime>
#include <QDate>
#include <QTcpSocket>
#include <udptransfer.h>

//#include <QJsonArray>
//#include "orderscreen.h"

namespace Ui {
class MainScreen;
}

class MainScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainScreen(QString worknum,QWidget *parent = 0);
    ~MainScreen();
    QVector<FoodControl*> get_menu();
    int get_number();
    int get_table_num();
    //   void keyPressEvent(QKeyEvent *event);
    QTcpSocket &get_socket();

private slots:
    void add_foodclick();
    void on_orderBtn_clicked();

    void update_time();
    void on_settleBtn_clicked();

    void get_confirm_menu(bool now);
    void on_spinBox_valueChanged(int arg1);

    void on_serveBtn_clicked();

    void recvjson(QByteArray &array);
    void recvheader(QByteArray &array);
    void recvname(QByteArray &array);
    void on_updateBtn_clicked();

private:
    Ui::MainScreen *ui;
    OrderScreen *os;
    QVector<FoodControl*> varr;
    QTcpSocket msock;
    QTimer *mtime;
    int menuprice;
    int dine_number;
    int table_number;
    bool confirm;
    bool ispayment;

    QString str1;
    QString str2;
    QString file_name;
    UdpTransfer *recvNamePtr;
    UdpTransfer *recvHeaderPtr;
    UdpTransfer *recvJsonPtr;

    //QMap<QString, int> menu;
    //QMap<QString, QString> menuprice;
};

#endif // MAINSCREEN_H
