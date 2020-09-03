#ifndef CHE_PIAO_XINXICHAXUN_H
#define CHE_PIAO_XINXICHAXUN_H

#include <QWidget>
#include <QPushButton>

class che_piao_xinxichaxun : public QWidget
{
    Q_OBJECT
public:
    explicit che_piao_xinxichaxun(QWidget *parent = nullptr);

    void sendSlot();
signals:
    void mySingal();

public slots:

private:
    QPushButton b;
};

#endif // CHE_PIAO_XINXICHAXUN_H
