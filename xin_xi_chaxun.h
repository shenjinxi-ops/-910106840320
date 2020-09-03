#ifndef XIN_XI_CHAXUN_H
#define XIN_XI_CHAXUN_H

#include <QWidget>
#include <QPushButton>

class xin_xi_chaxun : public QWidget
{
    Q_OBJECT
public:
    explicit xin_xi_chaxun(QWidget *parent = nullptr);

    void sendSlot();

signals:
    void mySingal();

public slots:

private:
    QPushButton e;

};

#endif // XIN_XI_CHAXUN_H
