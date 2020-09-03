#include "che_piao_xinxichaxun.h"

che_piao_xinxichaxun::che_piao_xinxichaxun(QWidget *parent) : QWidget(parent)
{

    this->setWindowTitle("车票信息查询");
    b.setParent(this);
    b.setText("返回");

    connect(&b,&QPushButton::clicked,this,&che_piao_xinxichaxun::sendSlot);

    resize(500,400);
}

void che_piao_xinxichaxun::sendSlot()
{
    emit mySingal();
}
