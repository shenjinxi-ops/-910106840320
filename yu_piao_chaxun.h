#ifndef YU_PIAO_CHAXUN_H
#define YU_PIAO_CHAXUN_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include <QTextEdit>
#include "xin_xi_chaxun.h"
#include "yu_piao_xinxi.h"

class yu_piao_chaxun : public QWidget
{
    Q_OBJECT
public:
    explicit yu_piao_chaxun(QWidget *parent = nullptr);

    void sendSlot11();
    void show1();

    void change2();
    void dealSub2();

    int a;
    int b;
    int jishu[10];
    int juli[10];
    int i,j,k,kk;
    int m,n;
    int l,ll;
    QString qstation;
    QString sstation;

signals:
    void mySingal11();




public slots:

private:

    QPushButton c;
    QPushButton *c1;
    QLabel *c2;
    QLabel *c3;
    QLineEdit *c4;
    QLineEdit *c5;
    QLineEdit *c6;
    QPushButton *c7;
    QLineEdit *c8;
    QLabel *c9;
    QLabel *c10;

    yu_piao_xinxi w;





};

#endif // YU_PIAO_CHAXUN_H
