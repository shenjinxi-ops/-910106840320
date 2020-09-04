#-------------------------------------------------
#
# Project created by QtCreator 2020-09-02T21:35:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gerenxiangmuyuceban1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    yu_piao_chaxun.cpp \
    che_piao_xinxichaxun.cpp \
    tui_piao.cpp \
    yu_piao_xinxi.cpp \
    gou_mai_chenggong.cpp \
    xin_xi_chaxun.cpp \
    tui_piao_jiemian.cpp \
    tui_piao_chenggong.cpp

HEADERS += \
        widget.h \
    yu_piao_chaxun.h \
    che_piao_xinxichaxun.h \
    tui_piao.h \
    yu_piao_xinxi.h \
    gou_mai_chenggong.h \
    xin_xi_chaxun.h \
    tui_piao_jiemian.h \
    tui_piao_chenggong.h

CONFIG +=c++11

