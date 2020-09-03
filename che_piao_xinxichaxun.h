#ifndef CHE_PIAO_XINXICHAXUN_H
#define CHE_PIAO_XINXICHAXUN_H

#include <QWidget>
#include <QPushButton>
#include "xin_xi_chaxun.h"

class che_piao_xinxichaxun : public QWidget
{
    Q_OBJECT
public:
    explicit che_piao_xinxichaxun(QWidget *parent = nullptr);

    void sendSlot12();
    void mysolt1();

    void change4();
    void dealSub4();

signals:
void mySingal12();

public slots:



private:
    QPushButton b;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;

    xin_xi_chaxun w;

};

#endif // CHE_PIAO_XINXICHAXUN_H
