#ifndef TUI_PIAO_JIEMIAN_H
#define TUI_PIAO_JIEMIAN_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTextBrowser>
#include "tui_piao_chenggong.h"

class tui_piao_jiemian : public QWidget
{
    Q_OBJECT
public:
    explicit tui_piao_jiemian(QWidget *parent = nullptr);

    void sendSlot2();

    void change3();
    void dealSub3();

signals:
    void mySingal();

public slots:


private:
    QPushButton d;
    QPushButton *d1;
    QTextBrowser *d2;
    QPushButton *d3;

    tui_piao_chenggong w;


};

#endif // TUI_PIAO_JIEMIAN_H
