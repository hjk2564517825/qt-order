/********************************************************************************
** Form generated from reading UI file 'softkeyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOFTKEYBOARD_H
#define UI_SOFTKEYBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <keyboardbutton.h>

QT_BEGIN_NAMESPACE

class Ui_SoftKeyBoard
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    KeyBoardButton *btn_one;
    KeyBoardButton *btn_two;
    KeyBoardButton *btn_three;
    KeyBoardButton *btn_four;
    KeyBoardButton *btn_five;
    KeyBoardButton *btn_six;
    KeyBoardButton *btn_seven;
    KeyBoardButton *btn_eight;
    KeyBoardButton *btn_nine;
    KeyBoardButton *btn_zero;
    KeyBoardButton *btndel;
    QHBoxLayout *horizontalLayout_3;
    KeyBoardButton *btn_Q;
    KeyBoardButton *btn_W;
    KeyBoardButton *btn_E;
    KeyBoardButton *btn_R;
    KeyBoardButton *btn_T;
    KeyBoardButton *btn_Y;
    KeyBoardButton *btn_U;
    KeyBoardButton *btn_I;
    KeyBoardButton *btn_O;
    KeyBoardButton *btn_P;
    KeyBoardButton *btnEnt;
    QHBoxLayout *horizontalLayout_2;
    KeyBoardButton *btn_A;
    KeyBoardButton *btn_S;
    KeyBoardButton *btn_D;
    KeyBoardButton *btn_F;
    KeyBoardButton *btn_G;
    KeyBoardButton *btn_H;
    KeyBoardButton *btn_J;
    KeyBoardButton *btn_K;
    KeyBoardButton *btn_L;
    KeyBoardButton *pushButton;
    QHBoxLayout *horizontalLayout;
    KeyBoardButton *btn_Z;
    KeyBoardButton *btn_X;
    KeyBoardButton *btn_C;
    KeyBoardButton *btn_V;
    KeyBoardButton *btn_B;
    KeyBoardButton *btn_N;
    KeyBoardButton *btn_M;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SoftKeyBoard)
    {
        if (SoftKeyBoard->objectName().isEmpty())
            SoftKeyBoard->setObjectName(QString::fromUtf8("SoftKeyBoard"));
        SoftKeyBoard->resize(800, 246);
        SoftKeyBoard->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	border:1px soild #9e9e9e;\n"
"	border-radius:5px;\n"
"	font-size:20px;\n"
"	\n"
"	background-color: rgba(80, 80, 80,150);\n"
"	\n"
"	color: rgb(245, 245, 245);\n"
"}\n"
"\n"
"\n"
"QToolButton:pressed{\n"
"	\n"
"	background-color: rgb(85, 170, 255);\n"
"}"));
        gridLayout = new QGridLayout(SoftKeyBoard);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_one = new KeyBoardButton(SoftKeyBoard);
        btn_one->setObjectName(QString::fromUtf8("btn_one"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_one->sizePolicy().hasHeightForWidth());
        btn_one->setSizePolicy(sizePolicy);
        btn_one->setMinimumSize(QSize(20, 50));
        btn_one->setMaximumSize(QSize(50, 16777215));
        btn_one->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_one);

        btn_two = new KeyBoardButton(SoftKeyBoard);
        btn_two->setObjectName(QString::fromUtf8("btn_two"));
        sizePolicy.setHeightForWidth(btn_two->sizePolicy().hasHeightForWidth());
        btn_two->setSizePolicy(sizePolicy);
        btn_two->setMinimumSize(QSize(20, 50));
        btn_two->setMaximumSize(QSize(50, 16777215));
        btn_two->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_two);

        btn_three = new KeyBoardButton(SoftKeyBoard);
        btn_three->setObjectName(QString::fromUtf8("btn_three"));
        sizePolicy.setHeightForWidth(btn_three->sizePolicy().hasHeightForWidth());
        btn_three->setSizePolicy(sizePolicy);
        btn_three->setMinimumSize(QSize(20, 50));
        btn_three->setMaximumSize(QSize(50, 16777215));
        btn_three->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_three);

        btn_four = new KeyBoardButton(SoftKeyBoard);
        btn_four->setObjectName(QString::fromUtf8("btn_four"));
        sizePolicy.setHeightForWidth(btn_four->sizePolicy().hasHeightForWidth());
        btn_four->setSizePolicy(sizePolicy);
        btn_four->setMinimumSize(QSize(20, 50));
        btn_four->setMaximumSize(QSize(50, 16777215));
        btn_four->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_four);

        btn_five = new KeyBoardButton(SoftKeyBoard);
        btn_five->setObjectName(QString::fromUtf8("btn_five"));
        sizePolicy.setHeightForWidth(btn_five->sizePolicy().hasHeightForWidth());
        btn_five->setSizePolicy(sizePolicy);
        btn_five->setMinimumSize(QSize(20, 50));
        btn_five->setMaximumSize(QSize(50, 16777215));
        btn_five->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_five);

        btn_six = new KeyBoardButton(SoftKeyBoard);
        btn_six->setObjectName(QString::fromUtf8("btn_six"));
        sizePolicy.setHeightForWidth(btn_six->sizePolicy().hasHeightForWidth());
        btn_six->setSizePolicy(sizePolicy);
        btn_six->setMinimumSize(QSize(20, 50));
        btn_six->setMaximumSize(QSize(50, 16777215));
        btn_six->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_six);

        btn_seven = new KeyBoardButton(SoftKeyBoard);
        btn_seven->setObjectName(QString::fromUtf8("btn_seven"));
        sizePolicy.setHeightForWidth(btn_seven->sizePolicy().hasHeightForWidth());
        btn_seven->setSizePolicy(sizePolicy);
        btn_seven->setMinimumSize(QSize(20, 50));
        btn_seven->setMaximumSize(QSize(50, 16777215));
        btn_seven->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_seven);

        btn_eight = new KeyBoardButton(SoftKeyBoard);
        btn_eight->setObjectName(QString::fromUtf8("btn_eight"));
        sizePolicy.setHeightForWidth(btn_eight->sizePolicy().hasHeightForWidth());
        btn_eight->setSizePolicy(sizePolicy);
        btn_eight->setMinimumSize(QSize(20, 50));
        btn_eight->setMaximumSize(QSize(50, 16777215));
        btn_eight->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_eight);

        btn_nine = new KeyBoardButton(SoftKeyBoard);
        btn_nine->setObjectName(QString::fromUtf8("btn_nine"));
        sizePolicy.setHeightForWidth(btn_nine->sizePolicy().hasHeightForWidth());
        btn_nine->setSizePolicy(sizePolicy);
        btn_nine->setMinimumSize(QSize(20, 50));
        btn_nine->setMaximumSize(QSize(50, 16777215));
        btn_nine->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_nine);

        btn_zero = new KeyBoardButton(SoftKeyBoard);
        btn_zero->setObjectName(QString::fromUtf8("btn_zero"));
        sizePolicy.setHeightForWidth(btn_zero->sizePolicy().hasHeightForWidth());
        btn_zero->setSizePolicy(sizePolicy);
        btn_zero->setMinimumSize(QSize(20, 50));
        btn_zero->setMaximumSize(QSize(50, 16777215));
        btn_zero->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btn_zero);

        btndel = new KeyBoardButton(SoftKeyBoard);
        btndel->setObjectName(QString::fromUtf8("btndel"));
        sizePolicy.setHeightForWidth(btndel->sizePolicy().hasHeightForWidth());
        btndel->setSizePolicy(sizePolicy);
        btndel->setMinimumSize(QSize(20, 50));
        btndel->setMaximumSize(QSize(50, 16777215));
        btndel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btndel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_Q = new KeyBoardButton(SoftKeyBoard);
        btn_Q->setObjectName(QString::fromUtf8("btn_Q"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_Q->sizePolicy().hasHeightForWidth());
        btn_Q->setSizePolicy(sizePolicy1);
        btn_Q->setMinimumSize(QSize(20, 50));
        btn_Q->setMaximumSize(QSize(50, 16777215));
        btn_Q->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_Q);

        btn_W = new KeyBoardButton(SoftKeyBoard);
        btn_W->setObjectName(QString::fromUtf8("btn_W"));
        sizePolicy1.setHeightForWidth(btn_W->sizePolicy().hasHeightForWidth());
        btn_W->setSizePolicy(sizePolicy1);
        btn_W->setMinimumSize(QSize(20, 50));
        btn_W->setMaximumSize(QSize(50, 16777215));
        btn_W->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_W);

        btn_E = new KeyBoardButton(SoftKeyBoard);
        btn_E->setObjectName(QString::fromUtf8("btn_E"));
        sizePolicy1.setHeightForWidth(btn_E->sizePolicy().hasHeightForWidth());
        btn_E->setSizePolicy(sizePolicy1);
        btn_E->setMinimumSize(QSize(20, 50));
        btn_E->setMaximumSize(QSize(50, 16777215));
        btn_E->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_E);

        btn_R = new KeyBoardButton(SoftKeyBoard);
        btn_R->setObjectName(QString::fromUtf8("btn_R"));
        sizePolicy1.setHeightForWidth(btn_R->sizePolicy().hasHeightForWidth());
        btn_R->setSizePolicy(sizePolicy1);
        btn_R->setMinimumSize(QSize(20, 50));
        btn_R->setMaximumSize(QSize(50, 16777215));
        btn_R->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_R);

        btn_T = new KeyBoardButton(SoftKeyBoard);
        btn_T->setObjectName(QString::fromUtf8("btn_T"));
        sizePolicy1.setHeightForWidth(btn_T->sizePolicy().hasHeightForWidth());
        btn_T->setSizePolicy(sizePolicy1);
        btn_T->setMinimumSize(QSize(20, 50));
        btn_T->setMaximumSize(QSize(50, 16777215));
        btn_T->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_T);

        btn_Y = new KeyBoardButton(SoftKeyBoard);
        btn_Y->setObjectName(QString::fromUtf8("btn_Y"));
        sizePolicy1.setHeightForWidth(btn_Y->sizePolicy().hasHeightForWidth());
        btn_Y->setSizePolicy(sizePolicy1);
        btn_Y->setMinimumSize(QSize(20, 50));
        btn_Y->setMaximumSize(QSize(50, 16777215));
        btn_Y->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_Y);

        btn_U = new KeyBoardButton(SoftKeyBoard);
        btn_U->setObjectName(QString::fromUtf8("btn_U"));
        sizePolicy1.setHeightForWidth(btn_U->sizePolicy().hasHeightForWidth());
        btn_U->setSizePolicy(sizePolicy1);
        btn_U->setMinimumSize(QSize(20, 50));
        btn_U->setMaximumSize(QSize(50, 16777215));
        btn_U->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_U);

        btn_I = new KeyBoardButton(SoftKeyBoard);
        btn_I->setObjectName(QString::fromUtf8("btn_I"));
        sizePolicy1.setHeightForWidth(btn_I->sizePolicy().hasHeightForWidth());
        btn_I->setSizePolicy(sizePolicy1);
        btn_I->setMinimumSize(QSize(20, 50));
        btn_I->setMaximumSize(QSize(50, 16777215));
        btn_I->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_I);

        btn_O = new KeyBoardButton(SoftKeyBoard);
        btn_O->setObjectName(QString::fromUtf8("btn_O"));
        sizePolicy1.setHeightForWidth(btn_O->sizePolicy().hasHeightForWidth());
        btn_O->setSizePolicy(sizePolicy1);
        btn_O->setMinimumSize(QSize(20, 50));
        btn_O->setMaximumSize(QSize(50, 16777215));
        btn_O->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_O);

        btn_P = new KeyBoardButton(SoftKeyBoard);
        btn_P->setObjectName(QString::fromUtf8("btn_P"));
        sizePolicy1.setHeightForWidth(btn_P->sizePolicy().hasHeightForWidth());
        btn_P->setSizePolicy(sizePolicy1);
        btn_P->setMinimumSize(QSize(20, 50));
        btn_P->setMaximumSize(QSize(50, 16777215));
        btn_P->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btn_P);

        btnEnt = new KeyBoardButton(SoftKeyBoard);
        btnEnt->setObjectName(QString::fromUtf8("btnEnt"));
        sizePolicy1.setHeightForWidth(btnEnt->sizePolicy().hasHeightForWidth());
        btnEnt->setSizePolicy(sizePolicy1);
        btnEnt->setMinimumSize(QSize(20, 50));
        btnEnt->setMaximumSize(QSize(50, 16777215));
        btnEnt->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnEnt);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_A = new KeyBoardButton(SoftKeyBoard);
        btn_A->setObjectName(QString::fromUtf8("btn_A"));
        sizePolicy1.setHeightForWidth(btn_A->sizePolicy().hasHeightForWidth());
        btn_A->setSizePolicy(sizePolicy1);
        btn_A->setMinimumSize(QSize(20, 50));
        btn_A->setMaximumSize(QSize(50, 16777215));
        btn_A->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_A);

        btn_S = new KeyBoardButton(SoftKeyBoard);
        btn_S->setObjectName(QString::fromUtf8("btn_S"));
        sizePolicy1.setHeightForWidth(btn_S->sizePolicy().hasHeightForWidth());
        btn_S->setSizePolicy(sizePolicy1);
        btn_S->setMinimumSize(QSize(20, 50));
        btn_S->setMaximumSize(QSize(50, 16777215));
        btn_S->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_S);

        btn_D = new KeyBoardButton(SoftKeyBoard);
        btn_D->setObjectName(QString::fromUtf8("btn_D"));
        sizePolicy1.setHeightForWidth(btn_D->sizePolicy().hasHeightForWidth());
        btn_D->setSizePolicy(sizePolicy1);
        btn_D->setMinimumSize(QSize(20, 50));
        btn_D->setMaximumSize(QSize(50, 16777215));
        btn_D->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_D);

        btn_F = new KeyBoardButton(SoftKeyBoard);
        btn_F->setObjectName(QString::fromUtf8("btn_F"));
        sizePolicy1.setHeightForWidth(btn_F->sizePolicy().hasHeightForWidth());
        btn_F->setSizePolicy(sizePolicy1);
        btn_F->setMinimumSize(QSize(20, 50));
        btn_F->setMaximumSize(QSize(50, 16777215));
        btn_F->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_F);

        btn_G = new KeyBoardButton(SoftKeyBoard);
        btn_G->setObjectName(QString::fromUtf8("btn_G"));
        sizePolicy1.setHeightForWidth(btn_G->sizePolicy().hasHeightForWidth());
        btn_G->setSizePolicy(sizePolicy1);
        btn_G->setMinimumSize(QSize(20, 50));
        btn_G->setMaximumSize(QSize(50, 16777215));
        btn_G->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_G);

        btn_H = new KeyBoardButton(SoftKeyBoard);
        btn_H->setObjectName(QString::fromUtf8("btn_H"));
        sizePolicy1.setHeightForWidth(btn_H->sizePolicy().hasHeightForWidth());
        btn_H->setSizePolicy(sizePolicy1);
        btn_H->setMinimumSize(QSize(20, 50));
        btn_H->setMaximumSize(QSize(50, 16777215));
        btn_H->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_H);

        btn_J = new KeyBoardButton(SoftKeyBoard);
        btn_J->setObjectName(QString::fromUtf8("btn_J"));
        sizePolicy1.setHeightForWidth(btn_J->sizePolicy().hasHeightForWidth());
        btn_J->setSizePolicy(sizePolicy1);
        btn_J->setMinimumSize(QSize(20, 50));
        btn_J->setMaximumSize(QSize(50, 16777215));
        btn_J->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_J);

        btn_K = new KeyBoardButton(SoftKeyBoard);
        btn_K->setObjectName(QString::fromUtf8("btn_K"));
        sizePolicy1.setHeightForWidth(btn_K->sizePolicy().hasHeightForWidth());
        btn_K->setSizePolicy(sizePolicy1);
        btn_K->setMinimumSize(QSize(20, 50));
        btn_K->setMaximumSize(QSize(50, 16777215));
        btn_K->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_K);

        btn_L = new KeyBoardButton(SoftKeyBoard);
        btn_L->setObjectName(QString::fromUtf8("btn_L"));
        sizePolicy1.setHeightForWidth(btn_L->sizePolicy().hasHeightForWidth());
        btn_L->setSizePolicy(sizePolicy1);
        btn_L->setMinimumSize(QSize(20, 50));
        btn_L->setMaximumSize(QSize(50, 16777215));
        btn_L->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btn_L);

        pushButton = new KeyBoardButton(SoftKeyBoard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(20, 50));
        pushButton->setMaximumSize(QSize(50, 16777215));
        pushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_Z = new KeyBoardButton(SoftKeyBoard);
        btn_Z->setObjectName(QString::fromUtf8("btn_Z"));
        sizePolicy1.setHeightForWidth(btn_Z->sizePolicy().hasHeightForWidth());
        btn_Z->setSizePolicy(sizePolicy1);
        btn_Z->setMinimumSize(QSize(20, 50));
        btn_Z->setMaximumSize(QSize(50, 16777215));
        btn_Z->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btn_Z);

        btn_X = new KeyBoardButton(SoftKeyBoard);
        btn_X->setObjectName(QString::fromUtf8("btn_X"));
        sizePolicy.setHeightForWidth(btn_X->sizePolicy().hasHeightForWidth());
        btn_X->setSizePolicy(sizePolicy);
        btn_X->setMinimumSize(QSize(20, 50));
        btn_X->setMaximumSize(QSize(50, 16777215));
        btn_X->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btn_X);

        btn_C = new KeyBoardButton(SoftKeyBoard);
        btn_C->setObjectName(QString::fromUtf8("btn_C"));
        sizePolicy.setHeightForWidth(btn_C->sizePolicy().hasHeightForWidth());
        btn_C->setSizePolicy(sizePolicy);
        btn_C->setMinimumSize(QSize(20, 50));
        btn_C->setMaximumSize(QSize(50, 16777215));
        btn_C->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btn_C);

        btn_V = new KeyBoardButton(SoftKeyBoard);
        btn_V->setObjectName(QString::fromUtf8("btn_V"));
        sizePolicy1.setHeightForWidth(btn_V->sizePolicy().hasHeightForWidth());
        btn_V->setSizePolicy(sizePolicy1);
        btn_V->setMinimumSize(QSize(20, 50));
        btn_V->setMaximumSize(QSize(50, 16777215));
        btn_V->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btn_V);

        btn_B = new KeyBoardButton(SoftKeyBoard);
        btn_B->setObjectName(QString::fromUtf8("btn_B"));
        sizePolicy1.setHeightForWidth(btn_B->sizePolicy().hasHeightForWidth());
        btn_B->setSizePolicy(sizePolicy1);
        btn_B->setMinimumSize(QSize(20, 50));
        btn_B->setMaximumSize(QSize(50, 16777215));
        btn_B->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btn_B);

        btn_N = new KeyBoardButton(SoftKeyBoard);
        btn_N->setObjectName(QString::fromUtf8("btn_N"));
        sizePolicy1.setHeightForWidth(btn_N->sizePolicy().hasHeightForWidth());
        btn_N->setSizePolicy(sizePolicy1);
        btn_N->setMinimumSize(QSize(20, 50));
        btn_N->setMaximumSize(QSize(50, 16777215));
        btn_N->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btn_N);

        btn_M = new KeyBoardButton(SoftKeyBoard);
        btn_M->setObjectName(QString::fromUtf8("btn_M"));
        sizePolicy1.setHeightForWidth(btn_M->sizePolicy().hasHeightForWidth());
        btn_M->setSizePolicy(sizePolicy1);
        btn_M->setMinimumSize(QSize(20, 50));
        btn_M->setMaximumSize(QSize(50, 16777215));
        btn_M->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btn_M);

        pushButton_2 = new QPushButton(SoftKeyBoard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(20, 50));
        pushButton_2->setMaximumSize(QSize(50, 16777215));
        pushButton_2->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SoftKeyBoard);

        QMetaObject::connectSlotsByName(SoftKeyBoard);
    } // setupUi

    void retranslateUi(QWidget *SoftKeyBoard)
    {
        SoftKeyBoard->setWindowTitle(QCoreApplication::translate("SoftKeyBoard", "Form", nullptr));
        btn_one->setText(QCoreApplication::translate("SoftKeyBoard", "1", nullptr));
        btn_two->setText(QCoreApplication::translate("SoftKeyBoard", "2", nullptr));
        btn_three->setText(QCoreApplication::translate("SoftKeyBoard", "3", nullptr));
        btn_four->setText(QCoreApplication::translate("SoftKeyBoard", "4", nullptr));
        btn_five->setText(QCoreApplication::translate("SoftKeyBoard", "5", nullptr));
        btn_six->setText(QCoreApplication::translate("SoftKeyBoard", "6", nullptr));
        btn_seven->setText(QCoreApplication::translate("SoftKeyBoard", "7", nullptr));
        btn_eight->setText(QCoreApplication::translate("SoftKeyBoard", "8", nullptr));
        btn_nine->setText(QCoreApplication::translate("SoftKeyBoard", "9", nullptr));
        btn_zero->setText(QCoreApplication::translate("SoftKeyBoard", "0", nullptr));
        btndel->setText(QCoreApplication::translate("SoftKeyBoard", "<--", nullptr));
        btn_Q->setText(QCoreApplication::translate("SoftKeyBoard", "Q", nullptr));
        btn_W->setText(QCoreApplication::translate("SoftKeyBoard", "W", nullptr));
        btn_E->setText(QCoreApplication::translate("SoftKeyBoard", "E", nullptr));
        btn_R->setText(QCoreApplication::translate("SoftKeyBoard", "R", nullptr));
        btn_T->setText(QCoreApplication::translate("SoftKeyBoard", "T", nullptr));
        btn_Y->setText(QCoreApplication::translate("SoftKeyBoard", "Y", nullptr));
        btn_U->setText(QCoreApplication::translate("SoftKeyBoard", "U", nullptr));
        btn_I->setText(QCoreApplication::translate("SoftKeyBoard", "I", nullptr));
        btn_O->setText(QCoreApplication::translate("SoftKeyBoard", "O", nullptr));
        btn_P->setText(QCoreApplication::translate("SoftKeyBoard", "P", nullptr));
        btnEnt->setText(QCoreApplication::translate("SoftKeyBoard", "Enter", nullptr));
        btn_A->setText(QCoreApplication::translate("SoftKeyBoard", "A", nullptr));
        btn_S->setText(QCoreApplication::translate("SoftKeyBoard", "S", nullptr));
        btn_D->setText(QCoreApplication::translate("SoftKeyBoard", "D", nullptr));
        btn_F->setText(QCoreApplication::translate("SoftKeyBoard", "F", nullptr));
        btn_G->setText(QCoreApplication::translate("SoftKeyBoard", "G", nullptr));
        btn_H->setText(QCoreApplication::translate("SoftKeyBoard", "H", nullptr));
        btn_J->setText(QCoreApplication::translate("SoftKeyBoard", "J", nullptr));
        btn_K->setText(QCoreApplication::translate("SoftKeyBoard", "K", nullptr));
        btn_L->setText(QCoreApplication::translate("SoftKeyBoard", "L", nullptr));
        pushButton->setText(QCoreApplication::translate("SoftKeyBoard", "Tab", nullptr));
        btn_Z->setText(QCoreApplication::translate("SoftKeyBoard", "Z", nullptr));
        btn_X->setText(QCoreApplication::translate("SoftKeyBoard", "X", nullptr));
        btn_C->setText(QCoreApplication::translate("SoftKeyBoard", "C", nullptr));
        btn_V->setText(QCoreApplication::translate("SoftKeyBoard", "V", nullptr));
        btn_B->setText(QCoreApplication::translate("SoftKeyBoard", "B", nullptr));
        btn_N->setText(QCoreApplication::translate("SoftKeyBoard", "N", nullptr));
        btn_M->setText(QCoreApplication::translate("SoftKeyBoard", "M", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SoftKeyBoard", "ESC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoftKeyBoard: public Ui_SoftKeyBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOFTKEYBOARD_H
