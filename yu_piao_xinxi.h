#ifndef YU_PIAO_XINXI_H
#define YU_PIAO_XINXI_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTextBrowser>
#include "gou_mai_chenggong.h"

class yu_piao_xinxi : public QWidget
{
    Q_OBJECT
public:
    explicit yu_piao_xinxi(QWidget *parent = nullptr);

    void sendSlot2();

    void change3();
    void dealSub3();
signals:
    void mySingal();

public slots:

private:
    QPushButton c;
    QLabel *c1;
    QLabel *c2;
    QPushButton *c3;
    QTextBrowser *c4;
    QTextBrowser *c5;

    gou_mai_chenggong w;
};

#endif // YU_PIAO_XINXI_H
