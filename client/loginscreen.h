#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>
#include "softkeyboard.h"
#include <QMouseEvent>
//#include "mainscreen.h"
//#include "orderscreen.h"
//#include "foodcontrol.h"

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = 0);
    ~LoginScreen();
    void mousePressEvent(QMouseEvent *event);
private slots:
    void on_loginBtn_clicked();

private:
    Ui::LoginScreen *ui;
    SoftKeyBoard *board;
    QString password;
    QString worknum;

};

#endif // LOGINSCREEN_H
