#ifndef YU_PIAO_CHAXUN_H
#define YU_PIAO_CHAXUN_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTextBrowser>
#include "yu_piao_xinxi.h"

class yu_piao_chaxun : public QWidget
{
    Q_OBJECT
public:
    explicit yu_piao_chaxun(QWidget *parent = nullptr);

    void sendSlot11();

    void change2();
    void dealSub2();

signals:
    void mySingal11();


public slots:

private:
    QPushButton c;
    QPushButton *c1;
    QLabel *c2;
    QLabel *c3;
    QTextBrowser *c4;
    QTextBrowser *c5;

    yu_piao_xinxi w;

};

#endif // YU_PIAO_CHAXUN_H
