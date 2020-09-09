#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QString>

#include "yu_piao_chaxun.h"
#include "che_piao_xinxichaxun.h"
#include "tui_piao.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void change11();
    void change12();
    void change13();

    void dealSub11();
    void dealSub12();
    void dealSub13();

private:
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b4;

    yu_piao_chaxun w0;
    che_piao_xinxichaxun w1;
    tui_piao w2;




};


#endif // WIDGET_H
