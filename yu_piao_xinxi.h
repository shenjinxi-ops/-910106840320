#ifndef YU_PIAO_XINXI_H
#define YU_PIAO_XINXI_H

#include <QWidget>
#include <QPushButton>

class yu_piao_xinxi : public QWidget
{
    Q_OBJECT
public:
    explicit yu_piao_xinxi(QWidget *parent = nullptr);

    void sendSlot2();

    void change3();
    void dealSub3();
signals:
    void mySingal();

public slots:

private:
    QPushButton c;
    QPushButton *c1;
    QPushButton *c2;
    QPushButton *c3;
};

#endif // YU_PIAO_XINXI_H
