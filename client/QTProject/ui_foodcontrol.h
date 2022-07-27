/********************************************************************************
** Form generated from reading UI file 'foodcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODCONTROL_H
#define UI_FOODCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FoodControl
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *Fiamge;
    QLabel *Fname;
    QLabel *Fmoney;
    QHBoxLayout *horizontalLayout;
    QPushButton *subbtn;
    QSpacerItem *horizontalSpacer;
    QLabel *Fnum;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addbtn;

    void setupUi(QFrame *FoodControl)
    {
        if (FoodControl->objectName().isEmpty())
            FoodControl->setObjectName(QString::fromUtf8("FoodControl"));
        FoodControl->resize(207, 287);
        FoodControl->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius:20px;\n"
"	border:1px solid rgb(245, 121, 0);\n"
"	background-color: rgba(255, 255, 255,150);\n"
"}\n"
"\n"
"QFrame:hover{\n"
"	border:2px solid rgb(245, 121, 0);\n"
"	border-radius:20px;\n"
"	background-color: rgba(53, 241, 188,100);\n"
"}\n"
"\n"
"\n"
"QLabel#Fiamge{\n"
"	border:none;\n"
"	background-color: rgb(255, 255, 0);\n"
"}\n"
"\n"
"QLabel#Fmoney{\n"
"	border:none;\n"
"	background: transparent;    \n"
"}\n"
"\n"
"QLabel#Fname{\n"
"	border:none;\n"
"	background: transparent;    \n"
"}\n"
"QLabel#Fnum{\n"
"	border:none;\n"
"	border-radius:5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton{	\n"
"	background-color: rgb(158, 237, 162);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:pressed{	\n"
"	background-color: rgba(36, 209, 235,100);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#addbtn{\n"
"	border-image: url(:/images/add.png);\n"
"}\n"
"\n"
"QPushButton#subbtn{\n"
"	border-image: url(:/images/sub.png);\n"
"}\n"
"\n"
""));
        FoodControl->setFrameShape(QFrame::StyledPanel);
        FoodControl->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(FoodControl);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Fiamge = new QLabel(FoodControl);
        Fiamge->setObjectName(QString::fromUtf8("Fiamge"));

        verticalLayout->addWidget(Fiamge);

        Fname = new QLabel(FoodControl);
        Fname->setObjectName(QString::fromUtf8("Fname"));
        Fname->setMinimumSize(QSize(20, 20));
        Fname->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Fname);

        Fmoney = new QLabel(FoodControl);
        Fmoney->setObjectName(QString::fromUtf8("Fmoney"));
        Fmoney->setMinimumSize(QSize(20, 20));
        Fmoney->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Fmoney);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        subbtn = new QPushButton(FoodControl);
        subbtn->setObjectName(QString::fromUtf8("subbtn"));
        subbtn->setMinimumSize(QSize(30, 30));
        subbtn->setMaximumSize(QSize(100, 100));

        horizontalLayout->addWidget(subbtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Fnum = new QLabel(FoodControl);
        Fnum->setObjectName(QString::fromUtf8("Fnum"));
        Fnum->setMinimumSize(QSize(50, 20));
        Fnum->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Fnum);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        addbtn = new QPushButton(FoodControl);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));
        addbtn->setMinimumSize(QSize(30, 30));
        addbtn->setMaximumSize(QSize(100, 100));

        horizontalLayout->addWidget(addbtn);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(FoodControl);

        QMetaObject::connectSlotsByName(FoodControl);
    } // setupUi

    void retranslateUi(QFrame *FoodControl)
    {
        FoodControl->setWindowTitle(QCoreApplication::translate("FoodControl", "Frame", nullptr));
        Fiamge->setText(QString());
        Fname->setText(QCoreApplication::translate("FoodControl", "TextLabel", nullptr));
        Fmoney->setText(QCoreApplication::translate("FoodControl", "TextLabel", nullptr));
        subbtn->setText(QString());
        Fnum->setText(QCoreApplication::translate("FoodControl", "0", nullptr));
        addbtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FoodControl: public Ui_FoodControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODCONTROL_H
