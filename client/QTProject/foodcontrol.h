#ifndef FOODCONTROL_H
#define FOODCONTROL_H

#include <QFrame>
#include <QKeyEvent>
//#include "orderscreen.h"

namespace Ui {
class FoodControl;
}

class FoodControl : public QFrame
{
    Q_OBJECT

public:
    explicit FoodControl(QWidget *parent = 0);
    ~FoodControl();
    void setStyle(int number, QString foodname, QString path, QString money);
    QString get_foodname();
    QString get_foodprice();
    int food_num();
    bool isPitch_On();

private slots:
    void on_addbtn_clicked();
    void on_subbtn_clicked();
signals:
    void addsignals();
private:
    Ui::FoodControl *ui;
    int food_count;
    int food_number;
    bool flag;
    QString foodname;
    QString foodprice;
    QString path;
};

#endif // FOODCONTROL_H
