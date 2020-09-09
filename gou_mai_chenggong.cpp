#include "gou_mai_chenggong.h"

gou_mai_chenggong::gou_mai_chenggong(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("购买信息");
    d.setParent(this);
    d.setText("关闭");
    d.move(200,200);

    d1.setParent(this);
    d1.setText("返回");

    d2.setParent(this);
    d2.setText("购买成功");
    d2.move(200,100);

    resize(500,400);

    connect(&d,&QPushButton::released,this,&gou_mai_chenggong::close);

    //返回
    connect(&d1,&QPushButton::clicked,this,&gou_mai_chenggong::sendSlot3);//返回上一级窗口

}
void gou_mai_chenggong::sendSlot3()
{
    emit mysingal3();
}


