#include "tui_piao_jiemian.h"

tui_piao_jiemian::tui_piao_jiemian(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("信息查询");
    d.setParent(this);
    d.setText("返回");

    connect(&d,&QPushButton::clicked,this,&tui_piao_jiemian::sendSlot2);

    resize(500,400);

    d1=new QPushButton(this);
    d1->setText("关闭");
    d1->move(400,0);

    connect(d1,&QPushButton::released,this,&tui_piao_jiemian::close);

    d2=new QTextBrowser(this);
    d2->move(50,50);
    d2->resize(300,200);

    d3=new QPushButton(this);
    d3->setText("退票");
    d3->move(200,300);

    //下级窗口
    connect(d3,&QPushButton::released,this,&tui_piao_jiemian::change3);

    connect(&w,tui_piao_chenggong::mySingal3,this,&tui_piao_jiemian::dealSub3);


}
void tui_piao_jiemian::sendSlot2()
{
    emit mySingal();
}
void tui_piao_jiemian::change3()
{
    w.show();
    this->hide();
}

void tui_piao_jiemian::dealSub3()
{
    w.hide();
    this->show();
}



