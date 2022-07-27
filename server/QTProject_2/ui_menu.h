/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *sendBtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *num_Edit;
    QPlainTextEdit *name_Edit;
    QPlainTextEdit *id_Edit;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(400, 400);
        menu->setStyleSheet(QString::fromUtf8(""));
        sendBtn = new QPushButton(menu);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setGeometry(QRect(160, 260, 91, 23));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sendBtn->sizePolicy().hasHeightForWidth());
        sendBtn->setSizePolicy(sizePolicy);
        widget = new QWidget(menu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(73, 80, 258, 131));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        num_Edit = new QPlainTextEdit(widget);
        num_Edit->setObjectName(QString::fromUtf8("num_Edit"));

        verticalLayout->addWidget(num_Edit);

        name_Edit = new QPlainTextEdit(widget);
        name_Edit->setObjectName(QString::fromUtf8("name_Edit"));

        verticalLayout->addWidget(name_Edit);

        id_Edit = new QPlainTextEdit(widget);
        id_Edit->setObjectName(QString::fromUtf8("id_Edit"));

        verticalLayout->addWidget(id_Edit);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Form", nullptr));
        sendBtn->setText(QCoreApplication::translate("menu", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
