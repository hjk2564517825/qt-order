#include "orderserver.h"
#include <QApplication>
#include "sendfile.h"
#include <QByteArray>
#include <QFileDialog>
#include <QDir>
#include <string>

#include <QPixmap>
#include <QStringList>
#include <QProcess>
#include <QDebug>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OrderServer w;
    /*
    QString file_name = QFileDialog::getOpenFileName(NULL, "获取图片", ".", "*.png");
    SendFile sfile;
    sfile.transferFile("127.0.0.1",6104,file_name);
    */
    w.show();

    return a.exec();
}
