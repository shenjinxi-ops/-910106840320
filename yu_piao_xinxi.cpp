#include "yu_piao_xinxi.h"

yu_piao_xinxi::yu_piao_xinxi(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("余票信息");
    c.setParent(this);
    c.setText("返回");

    connect(&c,&QPushButton::clicked,this,&yu_piao_xinxi::sendSlot2);

    resize(500,400);

    c1=new QLabel(this);
    c1->setText("姓名");
    c1->move(80,80);

    c2=new QLabel(this);
    c2->setText("身份证号");
    c2->move(80,120);

    c3=new QPushButton(this);
    c3->setText("购买");
    c3->move(200,300);

    c4=new QTextBrowser(this);
    c4->resize(200,25);
    c4->move(150,80);

    c5=new QTextBrowser(this);
    c5->resize(200,25);
    c5->move(150,120);

    c6=new QTextBrowser(this);
    c6->resize(200,100);
    c6->move(150,150);

    //下级窗口
    connect(c3,&QPushButton::released,this,&yu_piao_xinxi::change3);
    connect(&w,gou_mai_chenggong::mysingal3,this,&yu_piao_xinxi::dealSub3);


}

void yu_piao_xinxi::sendSlot2()
{
    emit mySingal();
}

void yu_piao_xinxi::change3()
{
    w.show();
    this->hide();
}

void yu_piao_xinxi::dealSub3()
{
    w.hide();
    this->show();
}
