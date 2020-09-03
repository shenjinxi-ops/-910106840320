#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "yu_piao_chaxun.h"
#include "che_piao_xinxichaxun.h"
#include "tui_piao.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void change1();
    void dealSub();

private:
    QPushButton b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b4;

    yu_piao_chaxun w;
    che_piao_xinxichaxun w1;
    tui_piao w2;

};

#endif // WIDGET_H
