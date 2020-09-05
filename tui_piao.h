#ifndef TUI_PIAO_H
#define TUI_PIAO_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include "tui_piao_jiemian.h"

class tui_piao : public QWidget
{
    Q_OBJECT
public:
    explicit tui_piao(QWidget *parent = nullptr);

    void sendSlot13();
    void mySlot2();

    void change5();
    void dealSub5();


signals:
    void mySingal13();

public slots:

private:
    QPushButton b;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QLineEdit *b4;

    tui_piao_jiemian w;

};

#endif // TUI_PIAO_H
