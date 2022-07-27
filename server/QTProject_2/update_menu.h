#ifndef UPDATE_MENU_H
#define UPDATE_MENU_H

#include <QMainWindow>

namespace Ui {
class update_menu;
}

class update_menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit update_menu(QWidget *parent = nullptr);
    ~update_menu();

private:
    Ui::update_menu *ui;
};

#endif // UPDATE_MENU_H
