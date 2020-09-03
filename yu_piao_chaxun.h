#ifndef YU_PIAO_CHAXUN_H
#define YU_PIAO_CHAXUN_H

#include <QWidget>
#include <QPushButton>
#include "yu_piao_xinxi.h"

class yu_piao_chaxun : public QWidget
{
    Q_OBJECT
public:
    explicit yu_piao_chaxun(QWidget *parent = nullptr);

    void sendSlot();

    void change2();
    void dealSub2();

signals:
    void mySingal();


public slots:

private:
    QPushButton c;
    QPushButton *c1;
    QPushButton *c2;
    QPushButton *c3;


    yu_piao_xinxi w;

};

#endif // YU_PIAO_CHAXUN_H
