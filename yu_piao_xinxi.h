#ifndef YU_PIAO_XINXI_H
#define YU_PIAO_XINXI_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTextBrowser>
#include <QLineEdit>
#include <QString>
//#include "yu_piao_chaxun.h"
#include "gou_mai_chenggong.h"
#include "yu_piao_xinxi.h"

class yu_piao_xinxi :public QWidget
        //, virtual public yu_piao_chaxun
{
    Q_OBJECT
public:
    explicit yu_piao_xinxi(QWidget *parent = nullptr);

//    yu_piao_xinxi(int m): yu_piao_chaxun::qushu(m)
//    {

//    }

    void sendSlot2();

    void change3();
    void dealSub3();

    QString name;
    QString id;

    std::string c9[100];
    std::string d9[100];
    int i;


signals:
    void mySingal2();

public slots:

private:
    QPushButton c;
    QLabel *c1;
    QLabel *c2;
    QPushButton *c3;
    QLineEdit *c4;
    QLineEdit *c5;
    QLineEdit *c6;

    gou_mai_chenggong w;






};

#endif // YU_PIAO_XINXI_H
