#include "keyboardbutton.h"


KeyBoardButton::KeyBoardButton(QWidget *parent):QPushButton(parent)
{
    connect(this, &KeyBoardButton::clicked, this, &KeyBoardButton::click_event);
}

KeyBoardButton::KeyBoardButton(const QString &text, QWidget *parent):QPushButton(text, parent)
{
    connect(this, &KeyBoardButton::clicked, this, &KeyBoardButton::click_event);
}

KeyBoardButton::KeyBoardButton(const QIcon &icon, const QString &text, QWidget *parent):QPushButton(icon, text, parent)
{
    connect(this, &KeyBoardButton::clicked, this, &KeyBoardButton::click_event);
}

void KeyBoardButton::click_event()
{
    QString btname = this->text();
    QKeyEvent *key = NULL;

    if(btname == "<--")
    {
//        qDebug() << "<--";
        key = new QKeyEvent(QKeyEvent::KeyPress,Qt::Key_Backspace, Qt::NoModifier, btname);
    }
    else if(btname == "Enter"){
        key = new QKeyEvent(QKeyEvent::KeyPress, Qt::Key_Enter, Qt::NoModifier);
    }
    else if(btname == "Tab"){
        key = new QKeyEvent(QKeyEvent::KeyPress, Qt::Key_Tab, Qt::NoModifier);
    }
    else if(btname >= "A" && btname <= "Z"){
        key = new QKeyEvent(QKeyEvent::KeyPress, btname.at(0).toLatin1(), Qt::NoModifier,btname.toLower());
//        qDebug() << btname.at(0).toLatin1();
    }else if(btname.at(0) >= '0' && btname.at(0) <= '9'){
        QString num = btname.at(0);
        key = new QKeyEvent(QKeyEvent::KeyPress, 0x30+num.toInt(), Qt::NoModifier, btname);
//        qDebug() << btname.at(0).toLatin1();
    }else if(btname == "ESC"){
        key = new QKeyEvent(QKeyEvent::KeyPress, Qt::Key_Escape, Qt::NoModifier);
    }

    QApplication::postEvent(QApplication::focusWidget(), key);
}
