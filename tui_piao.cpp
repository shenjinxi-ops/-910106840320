#include "tui_piao.h"

tui_piao::tui_piao(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("退票");
    b.setParent(this);
    b.setText("返回");

    connect(&b,&QPushButton::clicked,this,&tui_piao::sendSlot);

    resize(500,400);
}

void tui_piao::sendSlot()
{
    emit mySingal();
}
