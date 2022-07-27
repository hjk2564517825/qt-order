#include "loginscreen.h"
#include <QApplication>


//typedef float (*F)(int);
//F myfun(int a, int b, int c){}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginScreen w;
    w.show();

    return a.exec();
}
