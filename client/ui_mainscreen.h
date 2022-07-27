/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "foodcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_3;
    QLabel *LogoLB;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imageLB;
    QLabel *serveNum;
    QLabel *snum;
    QHBoxLayout *horizontalLayout_3;
    QLabel *tabNum;
    QLabel *tnum;
    QHBoxLayout *horizontalLayout;
    QLabel *pepNum;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *orderNum;
    QLabel *onum;
    QGridLayout *gridLayout;
    QPushButton *serveBtn;
    QLabel *serveLB;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *orderBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *orderLB;
    QPushButton *settleBtn;
    QLabel *settleLB;
    QPushButton *updateBtn;
    QLabel *updateLB;
    QLabel *timeLB;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_2;
    FoodControl *frame_1;
    FoodControl *frame_2;
    FoodControl *frame_3;
    FoodControl *frame_4;
    FoodControl *frame_5;
    FoodControl *frame_6;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    FoodControl *tab2_1;
    FoodControl *tab2_2;
    FoodControl *tab2_3;
    FoodControl *tab2_4;
    FoodControl *tab2_5;
    FoodControl *tab2_6;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    FoodControl *tab3_1;
    FoodControl *tab3_2;
    FoodControl *tab3_3;
    FoodControl *tab3_4;
    FoodControl *tab3_5;
    FoodControl *tab3_6;
    QWidget *tab_4;
    QGridLayout *gridLayout_6;
    FoodControl *tab4_1;
    FoodControl *tab4_2;
    FoodControl *tab4_3;
    FoodControl *tab4_4;
    FoodControl *tab4_5;
    FoodControl *tab4_6;
    QWidget *tab_5;
    QGridLayout *gridLayout_7;
    FoodControl *tab5_1;
    FoodControl *tab5_2;
    FoodControl *tab5_3;
    FoodControl *tab5_4;
    FoodControl *tab5_5;
    FoodControl *tab5_6;

    void setupUi(QMainWindow *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName(QString::fromUtf8("MainScreen"));
        MainScreen->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainScreen->sizePolicy().hasHeightForWidth());
        MainScreen->setSizePolicy(sizePolicy);
        MainScreen->setStyleSheet(QString::fromUtf8("\n"
"MainScreen{\n"
"	border-image: url(:/images/kfc_2.png);\n"
"}\n"
"\n"
"QWidget#tab_1, QWidget#tab_2,\n"
"QWidget#tab_3, QWidget#tab_4,\n"
"QWidget#tab_5{\n"
"	border-radius:40px;\n"
"	border-top-right-radius :20px;\n"
"	border-bottom-left-radius:30px ;\n"
"	border-bottom-right-radius:30px;\n"
"	background-color: rgba(0, 0, 0,55);\n"
"}\n"
"QTabWidget{ border-radius:40px;}\n"
"QTabWidget::pane{  border-radius:40px;\n"
"	 \n"
"}\n"
"\n"
"QTabBar{\n"
"	border-top:0px;\n"
"	background-color: rgba(66, 66, 0,108);\n"
"\n"
"	\n"
"}\n"
"\n"
"tabWidget{\n"
"	border: none;\n"
"	background-color:transparent;\n"
"}\n"
"\n"
"QLabel#serveNum,\n"
"QLabel#tabNum,QLabel#tnum,\n"
"QLabel#pepNum, QLabel#pnum,\n"
"QLabel#orderNum, QLabel#onum,\n"
"QLabel#serveLB, QLabel#orderLB, QLabel#settleLB,QLabel#updateLB{\n"
"	\n"
"	color: rgb(250,250,5,250);\n"
"}\n"
"\n"
"QLabel#snum{color: rgb(280,0,0,0);}\n"
"\n"
"QLabel#timeLB{\n"
"	color: rgb(168, 11, 233);\n"
"	font: 75 11pt \"Ubuntu Mono\";\n"
"	border-radius:10px;\n"
"	backgro"
                        "und-color: rgba(255, 255, 255,128);\n"
"}\n"
"\n"
"QLabel#LogoLB{\n"
"	border:1px solid #ff00ff;\n"
"	border-radius:40px;\n"
"	border-image: url(:/images/kfc_3.png);\n"
"}\n"
"\n"
"QLabel#imageLB{	\n"
"border-radius:40px;\n"
"	border-image: url(:/images/yonghu.png);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-radius:5px;\n"
"	background-color: rgba(117, 80, 123,150);\n"
"}\n"
"\n"
"QPushButton#orderBtn{\n"
"border-radius:40px;\n"
"	border-image: url(:/images/dingdan.png);\n"
"}\n"
"QPushButton#serveBtn{\n"
"border-radius:40px;\n"
"	border-image: url(:/images/cuidan.png);\n"
"}\n"
"QPushButton#settleBtn{\n"
"border-radius:40px;\n"
"	border-image: url(:/images/jiezhang.png);\n"
"}\n"
"QPushButton#updateBtn{\n"
"border-radius:40px;\n"
"	border-image: url(:/images/sub.png);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QTabBar::tab:!selected {\n"
"	margin-left: 0;\n"
"    margin-right: 0;\n"
"	\n"
"\n"
"}\n"
" \n"
"\n"
""));
        centralwidget = new QWidget(MainScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(6, 2, 791, 471));
        gridLayout_8 = new QGridLayout(layoutWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        LogoLB = new QLabel(layoutWidget);
        LogoLB->setObjectName(QString::fromUtf8("LogoLB"));
        LogoLB->setMinimumSize(QSize(100, 50));

        gridLayout_3->addWidget(LogoLB, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        imageLB = new QLabel(layoutWidget);
        imageLB->setObjectName(QString::fromUtf8("imageLB"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageLB->sizePolicy().hasHeightForWidth());
        imageLB->setSizePolicy(sizePolicy1);
        imageLB->setMinimumSize(QSize(20, 20));

        horizontalLayout_2->addWidget(imageLB);

        serveNum = new QLabel(layoutWidget);
        serveNum->setObjectName(QString::fromUtf8("serveNum"));

        horizontalLayout_2->addWidget(serveNum);

        snum = new QLabel(layoutWidget);
        snum->setObjectName(QString::fromUtf8("snum"));
        snum->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(snum);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tabNum = new QLabel(layoutWidget);
        tabNum->setObjectName(QString::fromUtf8("tabNum"));
        sizePolicy1.setHeightForWidth(tabNum->sizePolicy().hasHeightForWidth());
        tabNum->setSizePolicy(sizePolicy1);
        tabNum->setMinimumSize(QSize(50, 20));
        tabNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(tabNum);

        tnum = new QLabel(layoutWidget);
        tnum->setObjectName(QString::fromUtf8("tnum"));

        horizontalLayout_3->addWidget(tnum);


        gridLayout_3->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pepNum = new QLabel(layoutWidget);
        pepNum->setObjectName(QString::fromUtf8("pepNum"));
        sizePolicy1.setHeightForWidth(pepNum->sizePolicy().hasHeightForWidth());
        pepNum->setSizePolicy(sizePolicy1);
        pepNum->setMinimumSize(QSize(50, 20));
        pepNum->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(pepNum);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	\n"
"	background-color: rgba(245, 121, 0,100);\n"
"}"));

        horizontalLayout->addWidget(spinBox);


        gridLayout_3->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        orderNum = new QLabel(layoutWidget);
        orderNum->setObjectName(QString::fromUtf8("orderNum"));
        sizePolicy1.setHeightForWidth(orderNum->sizePolicy().hasHeightForWidth());
        orderNum->setSizePolicy(sizePolicy1);
        orderNum->setMinimumSize(QSize(50, 20));
        orderNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(orderNum);

        onum = new QLabel(layoutWidget);
        onum->setObjectName(QString::fromUtf8("onum"));

        horizontalLayout_4->addWidget(onum);


        gridLayout_3->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        serveBtn = new QPushButton(layoutWidget);
        serveBtn->setObjectName(QString::fromUtf8("serveBtn"));
        serveBtn->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(serveBtn, 0, 1, 1, 1);

        serveLB = new QLabel(layoutWidget);
        serveLB->setObjectName(QString::fromUtf8("serveLB"));
        serveLB->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(serveLB, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        orderBtn = new QPushButton(layoutWidget);
        orderBtn->setObjectName(QString::fromUtf8("orderBtn"));
        orderBtn->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(orderBtn, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        orderLB = new QLabel(layoutWidget);
        orderLB->setObjectName(QString::fromUtf8("orderLB"));
        orderLB->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(orderLB, 3, 1, 1, 1);

        settleBtn = new QPushButton(layoutWidget);
        settleBtn->setObjectName(QString::fromUtf8("settleBtn"));
        settleBtn->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(settleBtn, 4, 1, 1, 1);

        settleLB = new QLabel(layoutWidget);
        settleLB->setObjectName(QString::fromUtf8("settleLB"));
        settleLB->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(settleLB, 5, 1, 1, 1);

        updateBtn = new QPushButton(layoutWidget);
        updateBtn->setObjectName(QString::fromUtf8("updateBtn"));
        updateBtn->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(updateBtn, 6, 1, 1, 1);

        updateLB = new QLabel(layoutWidget);
        updateLB->setObjectName(QString::fromUtf8("updateLB"));
        updateLB->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(updateLB, 7, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 5, 0, 1, 1);

        timeLB = new QLabel(layoutWidget);
        timeLB->setObjectName(QString::fromUtf8("timeLB"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(timeLB->sizePolicy().hasHeightForWidth());
        timeLB->setSizePolicy(sizePolicy2);
        timeLB->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(timeLB, 6, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(600, 469));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tabWidget->setToolTipDuration(0);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setIconSize(QSize(60, 30));
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        tab_1->setMinimumSize(QSize(400, 0));
        gridLayout_2 = new QGridLayout(tab_1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_1 = new FoodControl(tab_1);
        frame_1->setObjectName(QString::fromUtf8("frame_1"));
        frame_1->setFrameShape(QFrame::StyledPanel);
        frame_1->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_1, 0, 0, 1, 1);

        frame_2 = new FoodControl(tab_1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_2, 0, 1, 1, 1);

        frame_3 = new FoodControl(tab_1);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_3, 0, 2, 1, 1);

        frame_4 = new FoodControl(tab_1);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_4, 1, 0, 1, 1);

        frame_5 = new FoodControl(tab_1);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_5, 1, 1, 1, 1);

        frame_6 = new FoodControl(tab_1);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_6, 1, 2, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ui_Hamburg.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_1, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tab2_1 = new FoodControl(tab_2);
        tab2_1->setObjectName(QString::fromUtf8("tab2_1"));
        tab2_1->setFrameShape(QFrame::StyledPanel);
        tab2_1->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(tab2_1, 0, 0, 1, 1);

        tab2_2 = new FoodControl(tab_2);
        tab2_2->setObjectName(QString::fromUtf8("tab2_2"));
        tab2_2->setFrameShape(QFrame::StyledPanel);
        tab2_2->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(tab2_2, 0, 1, 1, 1);

        tab2_3 = new FoodControl(tab_2);
        tab2_3->setObjectName(QString::fromUtf8("tab2_3"));
        tab2_3->setFrameShape(QFrame::StyledPanel);
        tab2_3->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(tab2_3, 0, 2, 1, 1);

        tab2_4 = new FoodControl(tab_2);
        tab2_4->setObjectName(QString::fromUtf8("tab2_4"));
        tab2_4->setFrameShape(QFrame::StyledPanel);
        tab2_4->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(tab2_4, 1, 0, 1, 1);

        tab2_5 = new FoodControl(tab_2);
        tab2_5->setObjectName(QString::fromUtf8("tab2_5"));
        tab2_5->setFrameShape(QFrame::StyledPanel);
        tab2_5->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(tab2_5, 1, 1, 1, 1);

        tab2_6 = new FoodControl(tab_2);
        tab2_6->setObjectName(QString::fromUtf8("tab2_6"));
        tab2_6->setFrameShape(QFrame::StyledPanel);
        tab2_6->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(tab2_6, 1, 2, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/ui_French.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon1, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tab3_1 = new FoodControl(tab_3);
        tab3_1->setObjectName(QString::fromUtf8("tab3_1"));
        tab3_1->setFrameShape(QFrame::StyledPanel);
        tab3_1->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(tab3_1, 0, 0, 1, 1);

        tab3_2 = new FoodControl(tab_3);
        tab3_2->setObjectName(QString::fromUtf8("tab3_2"));
        tab3_2->setFrameShape(QFrame::StyledPanel);
        tab3_2->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(tab3_2, 0, 1, 1, 1);

        tab3_3 = new FoodControl(tab_3);
        tab3_3->setObjectName(QString::fromUtf8("tab3_3"));
        tab3_3->setFrameShape(QFrame::StyledPanel);
        tab3_3->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(tab3_3, 0, 2, 1, 1);

        tab3_4 = new FoodControl(tab_3);
        tab3_4->setObjectName(QString::fromUtf8("tab3_4"));
        tab3_4->setFrameShape(QFrame::StyledPanel);
        tab3_4->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(tab3_4, 1, 0, 1, 1);

        tab3_5 = new FoodControl(tab_3);
        tab3_5->setObjectName(QString::fromUtf8("tab3_5"));
        tab3_5->setFrameShape(QFrame::StyledPanel);
        tab3_5->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(tab3_5, 1, 1, 1, 1);

        tab3_6 = new FoodControl(tab_3);
        tab3_6->setObjectName(QString::fromUtf8("tab3_6"));
        tab3_6->setFrameShape(QFrame::StyledPanel);
        tab3_6->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(tab3_6, 1, 2, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/ui_chicken.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_6 = new QGridLayout(tab_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tab4_1 = new FoodControl(tab_4);
        tab4_1->setObjectName(QString::fromUtf8("tab4_1"));
        tab4_1->setFrameShape(QFrame::StyledPanel);
        tab4_1->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(tab4_1, 0, 0, 1, 1);

        tab4_2 = new FoodControl(tab_4);
        tab4_2->setObjectName(QString::fromUtf8("tab4_2"));
        tab4_2->setFrameShape(QFrame::StyledPanel);
        tab4_2->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(tab4_2, 0, 1, 1, 1);

        tab4_3 = new FoodControl(tab_4);
        tab4_3->setObjectName(QString::fromUtf8("tab4_3"));
        tab4_3->setFrameShape(QFrame::StyledPanel);
        tab4_3->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(tab4_3, 0, 2, 1, 1);

        tab4_4 = new FoodControl(tab_4);
        tab4_4->setObjectName(QString::fromUtf8("tab4_4"));
        tab4_4->setFrameShape(QFrame::StyledPanel);
        tab4_4->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(tab4_4, 1, 0, 1, 1);

        tab4_5 = new FoodControl(tab_4);
        tab4_5->setObjectName(QString::fromUtf8("tab4_5"));
        tab4_5->setFrameShape(QFrame::StyledPanel);
        tab4_5->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(tab4_5, 1, 1, 1, 1);

        tab4_6 = new FoodControl(tab_4);
        tab4_6->setObjectName(QString::fromUtf8("tab4_6"));
        tab4_6->setFrameShape(QFrame::StyledPanel);
        tab4_6->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(tab4_6, 1, 2, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/ui_drink.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_7 = new QGridLayout(tab_5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tab5_1 = new FoodControl(tab_5);
        tab5_1->setObjectName(QString::fromUtf8("tab5_1"));
        tab5_1->setFrameShape(QFrame::StyledPanel);
        tab5_1->setFrameShadow(QFrame::Raised);

        gridLayout_7->addWidget(tab5_1, 0, 0, 1, 1);

        tab5_2 = new FoodControl(tab_5);
        tab5_2->setObjectName(QString::fromUtf8("tab5_2"));
        tab5_2->setFrameShape(QFrame::StyledPanel);
        tab5_2->setFrameShadow(QFrame::Raised);

        gridLayout_7->addWidget(tab5_2, 0, 1, 1, 1);

        tab5_3 = new FoodControl(tab_5);
        tab5_3->setObjectName(QString::fromUtf8("tab5_3"));
        tab5_3->setFrameShape(QFrame::StyledPanel);
        tab5_3->setFrameShadow(QFrame::Raised);

        gridLayout_7->addWidget(tab5_3, 0, 2, 1, 1);

        tab5_4 = new FoodControl(tab_5);
        tab5_4->setObjectName(QString::fromUtf8("tab5_4"));
        tab5_4->setFrameShape(QFrame::StyledPanel);
        tab5_4->setFrameShadow(QFrame::Raised);

        gridLayout_7->addWidget(tab5_4, 1, 0, 1, 1);

        tab5_5 = new FoodControl(tab_5);
        tab5_5->setObjectName(QString::fromUtf8("tab5_5"));
        tab5_5->setFrameShape(QFrame::StyledPanel);
        tab5_5->setFrameShadow(QFrame::Raised);

        gridLayout_7->addWidget(tab5_5, 1, 1, 1, 1);

        tab5_6 = new FoodControl(tab_5);
        tab5_6->setObjectName(QString::fromUtf8("tab5_6"));
        tab5_6->setFrameShape(QFrame::StyledPanel);
        tab5_6->setFrameShadow(QFrame::Raised);

        gridLayout_7->addWidget(tab5_6, 1, 2, 1, 1);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/ui_ice.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_5, icon4, QString());

        gridLayout_8->addWidget(tabWidget, 0, 1, 1, 1);

        MainScreen->setCentralWidget(centralwidget);

        retranslateUi(MainScreen);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QMainWindow *MainScreen)
    {
        MainScreen->setWindowTitle(QCoreApplication::translate("MainScreen", "\347\202\271\350\217\234\344\270\273\347\225\214\351\235\242", nullptr));
        LogoLB->setText(QString());
        imageLB->setText(QString());
        serveNum->setText(QCoreApplication::translate("MainScreen", "\345\267\245\345\217\267\346\234\215\345\212\241\357\274\232", nullptr));
        snum->setText(QString());
        tabNum->setText(QCoreApplication::translate("MainScreen", "\345\217\260    \345\217\267\357\274\232", nullptr));
        tnum->setText(QString());
        pepNum->setText(QCoreApplication::translate("MainScreen", "\344\272\272    \346\225\260\357\274\232", nullptr));
        orderNum->setText(QCoreApplication::translate("MainScreen", "\350\256\242\345\215\225\345\217\267\357\274\232", nullptr));
        onum->setText(QString());
        serveBtn->setText(QString());
        serveLB->setText(QCoreApplication::translate("MainScreen", "\346\234\215\345\212\241", nullptr));
        orderBtn->setText(QString());
        orderLB->setText(QCoreApplication::translate("MainScreen", "\350\256\242\345\215\225", nullptr));
        settleBtn->setText(QString());
        settleLB->setText(QCoreApplication::translate("MainScreen", "\347\273\223\350\264\246", nullptr));
        updateBtn->setText(QString());
        updateLB->setText(QCoreApplication::translate("MainScreen", "\346\233\264\346\226\260", nullptr));
        timeLB->setText(QCoreApplication::translate("MainScreen", "2021-11-13 09:16:00", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainScreen", "\346\261\211\345\240\241", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainScreen", "\345\260\217\345\220\203", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainScreen", "\347\202\270\351\270\241", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainScreen", "\351\245\256\345\223\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainScreen", "\345\206\260\346\267\207\346\267\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
