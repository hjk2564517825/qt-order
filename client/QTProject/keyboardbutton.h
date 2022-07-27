#ifndef KEYBOARDBUTTON_H
#define KEYBOARDBUTTON_H

#include <QObject>
#include <QPushButton>
#include <QKeyEvent>
#include <QDebug>
#include <QApplication>

class KeyBoardButton : public QPushButton
{
    Q_OBJECT
public:
    explicit KeyBoardButton(QWidget *parent = Q_NULLPTR);
    explicit KeyBoardButton(const QString &text, QWidget *parent = Q_NULLPTR);
    KeyBoardButton(const QIcon& icon, const QString &text, QWidget *parent = Q_NULLPTR);
private slots:
    void click_event();
};

#endif // KEYBOARDBUTTON_H
