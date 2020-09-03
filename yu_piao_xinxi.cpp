#include "yu_piao_xinxi.h"

yu_piao_xinxi::yu_piao_xinxi(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("余票信息");
    c.setParent(this);
    c.setText("返回");

    connect(&c,&QPushButton::clicked,this,&yu_piao_xinxi::sendSlot2);

    resize(500,400);

    c1=new QPushButton(this);
    c1->setText("姓名");
    c1->move(50,50);

    c2=new QPushButton(this);
    c2->setText("身份证号");
    c2->move(50,80);

    c3=new QPushButton(this);
    c3->setText("购买");
    c3->move(200,200);

}

void yu_piao_xinxi::sendSlot2()
{
    emit mySingal();
}
