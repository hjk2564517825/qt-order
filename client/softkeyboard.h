#ifndef SOFTKEYBOARD_H
#define SOFTKEYBOARD_H

#include <QWidget>

namespace Ui {
class SoftKeyBoard;
}

class SoftKeyBoard : public QWidget
{
    Q_OBJECT

public:
    explicit SoftKeyBoard(QWidget *parent = 0);
    ~SoftKeyBoard();

private:
    Ui::SoftKeyBoard *ui;
};

#endif // SOFTKEYBOARD_H
