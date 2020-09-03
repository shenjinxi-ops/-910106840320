#include "yu_piao_chaxun.h"

yu_piao_chaxun::yu_piao_chaxun(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("余票查询");
    b.setParent(this);
    b.setText("返回");

    connect(&b,&QPushButton::clicked,this,&yu_piao_chaxun::sendSlot);

    resize(500,400);

}

void yu_piao_chaxun::sendSlot()
{
    emit mySingal();
}
