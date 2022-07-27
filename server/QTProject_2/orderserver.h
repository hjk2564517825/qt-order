#ifndef ORDERSERVER_H
#define ORDERSERVER_H

#include <QMainWindow>
#include <QTableWidget>

namespace Ui {
class OrderServer;
}

class OrderServer : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrderServer(QWidget *parent = 0);
    ~OrderServer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::OrderServer *ui;

};

#endif // ORDERSERVER_H
