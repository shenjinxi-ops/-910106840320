#include "tui_piao_chenggong.h"

tui_piao_chenggong::tui_piao_chenggong(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("退票信息");
    d.setParent(this);
    d.setText("关闭");
    d.move(200,200);


    d2.setParent(this);
    d2.setText("退票成功");
    d2.move(200,100);

    resize(500,400);

    connect(&d,&QPushButton::released,this,&tui_piao_chenggong::close);
}
