#ifndef TUI_PIAO_CHENGGONG_H
#define TUI_PIAO_CHENGGONG_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

class tui_piao_chenggong : public QWidget
{
    Q_OBJECT
public:
    explicit tui_piao_chenggong(QWidget *parent = nullptr);

    void sendSlot3();

signals:

    void mySingal3();
public slots:

private:
    QPushButton d;
    QPushButton d1;
    QLabel d2;

};

#endif // TUI_PIAO_CHENGGONG_H
