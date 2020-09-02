#include "mainwidget.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.setWindowTitle("12306");//设置标题


    QPushButton b;
    b.setText("余票查询");//设置内容
    b.setParent(&w);
    b.move(50,100);

    QPushButton b1(&w);
    b1.setText("车票信息查询");
    b1.move(150,100);



    w.show();
    return a.exec();
}
