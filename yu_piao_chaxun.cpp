#include "yu_piao_chaxun.h"

yu_piao_chaxun::yu_piao_chaxun(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("余票查询");
    c.setParent(this);
    c.setText("返回");

    connect(&c,&QPushButton::clicked,this,&yu_piao_chaxun::sendSlot11);

    resize(500,400);

    c1=new QPushButton(this);
    c1->setText("查询");
    c1->move(200,200);

    c2=new QLabel(this);
    c2->setText("起点站");
    c2->move(80,80);

    c3=new QLabel(this);
    c3->setText("终点站");
    c3->move(80,120);


    c4=new QLineEdit(this);
    c4->setPlaceholderText("请输入1-10之间的数字");
    c4->resize(200,25);
    c4->move(150,80);

    c5=new QLineEdit(this);
    c5->setPlaceholderText("请输入1-10之间的数字");
    c5->resize(200,25);
    c5->move(150,120);





    //下级窗口

    connect(c1,&QPushButton::released,this,&yu_piao_chaxun::change2);//跳转到已经查询好的界面

    connect(&w,yu_piao_xinxi::mySingal,this,&yu_piao_chaxun::dealSub2);


}

void yu_piao_chaxun::sendSlot11()
{
    emit mySingal11();
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

