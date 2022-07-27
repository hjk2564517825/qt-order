/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <softkeyboard.h>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QWidget *centralWidget;
    SoftKeyBoard *widget_2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *accoEdit;
    QLineEdit *passEdit;
    QPushButton *loginBtn;

    void setupUi(QMainWindow *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->resize(800, 480);
        LoginScreen->setStyleSheet(QString::fromUtf8("QMainWindow{border-image: url(:/images/kfc_2.png);}\n"
"\n"
"\n"
"\n"
"QLineEdit{\n"
"		border-radius:20px;\n"
"		border:2px solid rgb(66, 66, 162);\n"
"}\n"
""));
        centralWidget = new QWidget(LoginScreen);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget_2 = new SoftKeyBoard(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 188, 781, 259));
        widget_2->setLayoutDirection(Qt::LeftToRight);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 10, 300, 160));
        widget->setMinimumSize(QSize(300, 160));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"		border-radius:40px;\n"
"		background-color: rgba(100, 41, 41,100);\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        accoEdit = new QLineEdit(widget);
        accoEdit->setObjectName(QString::fromUtf8("accoEdit"));
        accoEdit->setMinimumSize(QSize(145, 40));

        verticalLayout->addWidget(accoEdit);

        passEdit = new QLineEdit(widget);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setMinimumSize(QSize(150, 40));
        passEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passEdit);

        loginBtn = new QPushButton(widget);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setMinimumSize(QSize(150, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        loginBtn->setFont(font);
        loginBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:40px;}"));

        verticalLayout->addWidget(loginBtn);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        LoginScreen->setCentralWidget(centralWidget);

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QMainWindow *LoginScreen)
    {
        LoginScreen->setWindowTitle(QCoreApplication::translate("LoginScreen", "LoginScreen", nullptr));
        accoEdit->setPlaceholderText(QCoreApplication::translate("LoginScreen", "\350\264\246\345\217\267...", nullptr));
        passEdit->setPlaceholderText(QCoreApplication::translate("LoginScreen", "\345\257\206\347\240\201...", nullptr));
        loginBtn->setText(QCoreApplication::translate("LoginScreen", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
