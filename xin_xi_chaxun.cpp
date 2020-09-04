#include "xin_xi_chaxun.h"

xin_xi_chaxun::xin_xi_chaxun(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("信息查询");
    e.setParent(this);
    e.setText("返回");

    connect(&e,&QPushButton::clicked,this,&xin_xi_chaxun::sendSlot);

    resize(500,400);

    e1=new QPushButton(this);
    e1->setText("关闭");
    e1->move(400,0);

    connect(e1,&QPushButton::released,this,&xin_xi_chaxun::close);

    e2=new QTextBrowser(this);
    e2->move(50,50);
    e2->resize(300,200);


}

void xin_xi_chaxun::sendSlot()
{
    emit mySingal();
}
