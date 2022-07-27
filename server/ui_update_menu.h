/********************************************************************************
** Form generated from reading UI file 'update_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_MENU_H
#define UI_UPDATE_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_update_menu
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *update_menu)
    {
        if (update_menu->objectName().isEmpty())
            update_menu->setObjectName(QString::fromUtf8("update_menu"));
        update_menu->resize(647, 457);
        centralwidget = new QWidget(update_menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 110, 371, 258));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 1, 0, 1, 1);

        textEdit_3 = new QTextEdit(layoutWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        gridLayout->addWidget(textEdit_3, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        update_menu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(update_menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        update_menu->setStatusBar(statusbar);

        retranslateUi(update_menu);

        QMetaObject::connectSlotsByName(update_menu);
    } // setupUi

    void retranslateUi(QMainWindow *update_menu)
    {
        update_menu->setWindowTitle(QCoreApplication::translate("update_menu", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("update_menu", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class update_menu: public Ui_update_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_MENU_H
