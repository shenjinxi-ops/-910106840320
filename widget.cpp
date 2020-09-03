#include "widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("12306");

    b1.setParent(this);
    b1.setText("查询余票");
    b1.move(100,100);

    b2=new QPushButton(this);
    b2->setText("车票信息查询");
    b2->move(200,100);

    b3=new QPushButton(this);
    b3->setText("退票");
    b3->move(300,100);

    b4=new QPushButton(this);
    b4->setText("关闭");
    b4->move(400,0);


    connect(b4,&QPushButton::pressed,this,&Widget::close);

    connect(&b1,&QPushButton::released,this,&Widget::change1);

    connect(b2,&QPushButton::released,this,&Widget::change1);

    connect(b3,&QPushButton::released,this,&Widget::change1);


    connect(&w,yu_piao_chaxun::mySingal,this,&Widget::dealSub);

    connect(&w1,che_piao_xinxichaxun::mySingal,this,&Widget::dealSub);

    connect(&w2,tui_piao::mySingal,this,&Widget::dealSub);


    resize(500,400);


}

void Widget::change1()
{
    w.show();
    this->hide();
}

void Widget::dealSub()
{
    w.hide();
    this->show();

}

Widget::~Widget()
{

}
