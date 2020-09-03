#ifndef YU_PIAO_CHAXUN_H
#define YU_PIAO_CHAXUN_H

#include <QWidget>
#include <QPushButton>

class yu_piao_chaxun : public QWidget
{
    Q_OBJECT
public:
    explicit yu_piao_chaxun(QWidget *parent = nullptr);

    void sendSlot();
signals:
    void mySingal();


public slots:

private:
    QPushButton b;

};

#endif // YU_PIAO_CHAXUN_H
