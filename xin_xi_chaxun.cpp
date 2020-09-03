#include "xin_xi_chaxun.h"

xin_xi_chaxun::xin_xi_chaxun(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("信息查询");
    e.setParent(this);
    e.setText("返回");

    connect(&e,&QPushButton::clicked,this,&xin_xi_chaxun::sendSlot);

    resize(500,400);

}

void xin_xi_chaxun::sendSlot()
{
    emit mySingal();
}
