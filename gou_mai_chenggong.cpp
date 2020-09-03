#include "gou_mai_chenggong.h"

gou_mai_chenggong::gou_mai_chenggong(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("购买信息");
    b.setParent(this);
    b.setText("关闭");
    b.move(200,200);



}
