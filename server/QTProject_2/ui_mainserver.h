/********************************************************************************
** Form generated from reading UI file 'mainserver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSERVER_H
#define UI_MAINSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainServer
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *listWidget_2;
    QLabel *pic_label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *pic_Ed;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *num_Ed;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *name_Ed;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *price_Ed;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pic_Btn;
    QSpacerItem *verticalSpacer;
    QPushButton *send_Btn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *updateBtn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainServer)
    {
        if (MainServer->objectName().isEmpty())
            MainServer->setObjectName(QString::fromUtf8("MainServer"));
        MainServer->resize(800, 480);
        MainServer->setStyleSheet(QString::fromUtf8("QMainWindow{border-image: url(:/images/kfc_2.png);}\n"
""));
        centralwidget = new QWidget(MainServer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 471, 341));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        verticalLayout_4->addWidget(tabWidget);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 340, 471, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 0, 1, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        listWidget = new QListWidget(layoutWidget1);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        listWidget_2 = new QListWidget(layoutWidget1);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        verticalLayout_2->addWidget(listWidget_2);


        horizontalLayout->addLayout(verticalLayout_2);

        pic_label = new QLabel(centralwidget);
        pic_label->setObjectName(QString::fromUtf8("pic_label"));
        pic_label->setGeometry(QRect(470, 290, 321, 161));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(471, 1, 331, 291));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        pic_Ed = new QLineEdit(widget);
        pic_Ed->setObjectName(QString::fromUtf8("pic_Ed"));

        horizontalLayout_6->addWidget(pic_Ed);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        num_Ed = new QLineEdit(widget);
        num_Ed->setObjectName(QString::fromUtf8("num_Ed"));

        horizontalLayout_2->addWidget(num_Ed);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        name_Ed = new QLineEdit(widget);
        name_Ed->setObjectName(QString::fromUtf8("name_Ed"));

        horizontalLayout_3->addWidget(name_Ed);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        price_Ed = new QLineEdit(widget);
        price_Ed->setObjectName(QString::fromUtf8("price_Ed"));

        horizontalLayout_4->addWidget(price_Ed);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pic_Btn = new QPushButton(widget);
        pic_Btn->setObjectName(QString::fromUtf8("pic_Btn"));

        verticalLayout_3->addWidget(pic_Btn);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        send_Btn = new QPushButton(widget);
        send_Btn->setObjectName(QString::fromUtf8("send_Btn"));

        verticalLayout_3->addWidget(send_Btn);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        updateBtn = new QPushButton(widget);
        updateBtn->setObjectName(QString::fromUtf8("updateBtn"));

        verticalLayout_3->addWidget(updateBtn);


        verticalLayout_6->addLayout(verticalLayout_3);

        MainServer->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainServer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainServer->setStatusBar(statusbar);

        retranslateUi(MainServer);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainServer);
    } // setupUi

    void retranslateUi(QMainWindow *MainServer)
    {
        MainServer->setWindowTitle(QCoreApplication::translate("MainServer", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainServer", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        label_2->setText(QCoreApplication::translate("MainServer", "\346\234\215\345\212\241\351\200\232\347\237\245", nullptr));
        label_3->setText(QCoreApplication::translate("MainServer", "\346\224\257\344\273\230\351\200\232\347\237\245", nullptr));
        pic_label->setText(QString());
        label_8->setText(QCoreApplication::translate("MainServer", "\345\233\276\347\211\207", nullptr));
        label_7->setText(QCoreApplication::translate("MainServer", "\344\275\215\347\275\256", nullptr));
        label_4->setText(QCoreApplication::translate("MainServer", "\350\217\234\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("MainServer", "\344\273\267\346\240\274", nullptr));
        label_6->setText(QCoreApplication::translate("MainServer", "\347\261\273\345\210\253", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainServer", "\346\261\211\345\240\241", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainServer", "\345\260\217\345\220\203", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainServer", "\347\202\270\351\270\241", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainServer", "\351\245\256\345\223\201", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainServer", "\345\206\260\346\267\207\346\267\213", nullptr));

        pic_Btn->setText(QCoreApplication::translate("MainServer", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        send_Btn->setText(QCoreApplication::translate("MainServer", "\345\217\221\351\200\201\345\233\276\347\211\207", nullptr));
        updateBtn->setText(QCoreApplication::translate("MainServer", "\344\277\256\346\224\271\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainServer: public Ui_MainServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSERVER_H
