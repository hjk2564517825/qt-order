#ifndef MAINSERVER_H
#define MAINSERVER_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTableWidget>
#include <udptransfer.h>

namespace Ui {
class MainServer;
}

class MainServer : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainServer(QWidget *parent = 0);
    ~MainServer();

private slots:
    void client_link();
    void read_data();
    void on_tabWidget_tabCloseRequested(int index);

    void on_updateBtn_clicked();

    void on_pic_Btn_clicked();

    void on_send_Btn_clicked();

private:
    Ui::MainServer *ui;
    QTcpServer mser;
    QTcpSocket *msoc;
    QTableWidget *tw;
    QString	neuminfo;	//客户端菜单头信息
    QString clientinfo;		//客户服务信息
    int food_num;		//食物的数量
    QVector<QTcpSocket* > sockets;
    UdpTransfer *sendJson;
    UdpTransfer *sendHeader;
    QString file_path;
};

#endif // MAINSERVER_H
