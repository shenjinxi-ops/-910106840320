#ifndef XIN_XI_CHAXUN_H
#define XIN_XI_CHAXUN_H

#include <QWidget>
#include <QPushButton>
#include <QTextBrowser>

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
    QPushButton *e1;
    QTextBrowser *e2;

};

#endif // XIN_XI_CHAXUN_H
