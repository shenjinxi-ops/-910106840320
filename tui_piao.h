#ifndef TUI_PIAO_H
#define TUI_PIAO_H

#include <QWidget>
#include <QPushButton>

class tui_piao : public QWidget
{
    Q_OBJECT
public:
    explicit tui_piao(QWidget *parent = nullptr);

    void sendSlot();

signals:
    void mySingal();
public slots:

private:
    QPushButton b;
};

#endif // TUI_PIAO_H
