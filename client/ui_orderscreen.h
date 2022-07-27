/********************************************************************************
** Form generated from reading UI file 'orderscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSCREEN_H
#define UI_ORDERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderScreen
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OrderScreen)
    {
        if (OrderScreen->objectName().isEmpty())
            OrderScreen->setObjectName(QString::fromUtf8("OrderScreen"));
        OrderScreen->resize(400, 240);
        OrderScreen->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		background:transparent;\n"
"		color:rgb(66, 66, 174);\n"
"		border:2px solid rgb(260, 7, 162);\n"
"		border-radius:20px;\n"
"}"));
        centralwidget = new QWidget(OrderScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        OrderScreen->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(OrderScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OrderScreen->setStatusBar(statusbar);

        retranslateUi(OrderScreen);

        QMetaObject::connectSlotsByName(OrderScreen);
    } // setupUi

    void retranslateUi(QMainWindow *OrderScreen)
    {
        OrderScreen->setWindowTitle(QCoreApplication::translate("OrderScreen", "MainWindow", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("OrderScreen", "\347\241\256\350\256\244\346\217\220\344\272\244\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderScreen: public Ui_OrderScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSCREEN_H
