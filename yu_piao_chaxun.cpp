#include "yu_piao_chaxun.h"

yu_piao_chaxun::yu_piao_chaxun(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("余票查询");
    c.setParent(this);
    c.setText("返回");

    connect(&c,&QPushButton::clicked,this,&yu_piao_chaxun::sendSlot);

    resize(500,400);


    c1=new QPushButton(this);
    c1->setText("查询");
    c1->move(200,200);

    c2=new QPushButton(this);
    c2->setText("起点站");
    c2->move(50,50);

    c3=new QPushButton(this);
    c3->setText("终点站");
    c3->move(50,80);




    //下级窗口

    connect(c1,&QPushButton::released,this,&yu_piao_chaxun::change2);//跳转到已经查询好的界面

    connect(&w,yu_piao_xinxi::mySingal,this,&yu_piao_chaxun::dealSub2);


}

void yu_piao_chaxun::sendSlot()
{
    emit mySingal();
}

//下级窗口的
void yu_piao_chaxun::change2()
{
    w.show();
    this->hide();
}

void yu_piao_chaxun::dealSub2()
{
    w.hide();
    this->show();

}

