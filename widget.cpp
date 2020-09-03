#include "widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("12306");

    b1=new QPushButton(this);
    b1->setText("查询余票");
    b1->move(100,200);

    b2=new QPushButton(this);
    b2->setText("车票信息查询");
    b2->move(200,200);

    b3=new QPushButton(this);
    b3->setText("退票");
    b3->move(305,200);

    b4=new QPushButton(this);
    b4->setText("关闭");
    b4->move(400,0);


    connect(b4,&QPushButton::released,this,&Widget::close);  //关闭

    connect(b1,&QPushButton::released,this,&Widget::change11);//跳转到“余票查询”界面

    connect(b2,&QPushButton::released,this,&Widget::change12); //跳转到“车票信息查询”界面

    connect(b3,&QPushButton::released,this,&Widget::change13); //跳转到“退票”界面


    connect(&w,yu_piao_chaxun::mySingal11,this,&Widget::dealSub11);

    connect(&w1,che_piao_xinxichaxun::mySingal12,this,&Widget::dealSub12);

    connect(&w2,tui_piao::mySingal13,this,&Widget::dealSub13);

    resize(500,400);

}

void Widget::change11()
{
    w.show();
    this->hide();
}

void Widget::change12()
{
    w1.show();
    this->hide();
}

void Widget::change13()
{
    w2.show();
    this->hide();
}


void Widget::dealSub11()
{
    w.hide();
    this->show();
}

void Widget::dealSub12()
{
    w1.hide();
    this->show();
}

void Widget::dealSub13()
{
    w2.hide();
    this->show();
}

Widget::~Widget()
{

}
