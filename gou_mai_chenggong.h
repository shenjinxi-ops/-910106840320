#ifndef GOU_MAI_CHENGGONG_H
#define GOU_MAI_CHENGGONG_H

#include <QWidget>
#include <QPushButton>

class gou_mai_chenggong : public QWidget
{
    Q_OBJECT
public:
    explicit gou_mai_chenggong(QWidget *parent = nullptr);

    void sendSlot3();
signals:

    void mysingal3();
public slots:

private:
    QPushButton d;
};

#endif // GOU_MAI_CHENGGONG_H
