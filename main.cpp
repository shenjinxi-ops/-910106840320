#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;   //执行Widget的构造函数
    w.show();

    return a.exec();
}
