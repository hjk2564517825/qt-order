/********************************************************************************
** Form generated from reading UI file 'orderserver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSERVER_H
#define UI_ORDERSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderServer
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QMainWindow *OrderServer)
    {
        if (OrderServer->objectName().isEmpty())
            OrderServer->setObjectName(QString::fromUtf8("OrderServer"));
        OrderServer->resize(400, 240);
        OrderServer->setStyleSheet(QString::fromUtf8("QMainWindow{border-image: url(:/images/kfc.png);}\n"
"QPushButton{\n"
"		background:transparent;\n"
"		border:transparent;\n"
"		color:rgb(66, 66, 174);\n"
"\n"
"		border-radius:20px;\n"
"		\n"
"}"));
        centralWidget = new QWidget(OrderServer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 100, 121, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{border-radius:40px;\n"
"		background-color: rgba(100, 41, 41,100);}"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		border-radius:20px;\n"
"		border:2px  rgb(66, 66, 162);\n"
"}"));
        lineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        OrderServer->setCentralWidget(centralWidget);

        retranslateUi(OrderServer);

        QMetaObject::connectSlotsByName(OrderServer);
    } // setupUi

    void retranslateUi(QMainWindow *OrderServer)
    {
        OrderServer->setWindowTitle(QCoreApplication::translate("OrderServer", "OrderServer", nullptr));
        label->setText(QCoreApplication::translate("OrderServer", "\346\234\215\345\212\241\345\217\260", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderServer", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderServer: public Ui_OrderServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSERVER_H
