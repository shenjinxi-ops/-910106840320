#include "tui_piao.h"

tui_piao::tui_piao(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("退票");
    b.setParent(this);
    b.setText("返回");

    connect(&b,&QPushButton::clicked,this,&tui_piao::sendSlot13);

    resize(500,400);

    b1=new QPushButton(this);
    b1->setText("姓名");
    b1->move(80,80);

    b2=new QPushButton(this);
    b2->setText("使用身份证号查询");
    b2->move(50,300);

    b3=new QPushButton(this);
    b3->setText("查询");
    b3->move(400,300);

    b4=new QTextBrowser(this);
    b4->resize(200,25);
    b4->move(200,80);

    connect(b2,&QPushButton::released,this,&tui_piao::mySlot2);
    //如果想使用身份证查询，点击可将“姓名”转换为“身份证”

    //下级窗口
    connect(b3,&QPushButton::released,this,&tui_piao::change5);//跳转到已经查询好的界面

    connect(&w,&tui_piao_jiemian::mySingal,this,&tui_piao::dealSub5);

}

void tui_piao::sendSlot13()
{
    emit mySingal13();
}

void tui_piao::mySlot2()
{
    b1->setText("身份证");
    b2->setText("使用姓名查询");
}

//下级窗口的
void tui_piao::change5()
{
    w.show();
    this->hide();
}

void tui_piao::dealSub5()
{
    w.hide();
    this->show();

}

