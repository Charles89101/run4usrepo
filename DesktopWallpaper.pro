#-------------------------------------------------
#
# Project created by QtCreator 2022-05-06T02:35:22
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DesktopWallpaper
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dwplay.cpp \
    dwasset.cpp \
    dwhttp.cpp \
    dwmonitor.cpp \
    dwcrpytor.cpp \
    dwsettings.cpp \
    dwplaythread.cpp

HEADERS  += mainwindow.h \
    dwplay.h \
    dwasset.h \
    dwhttp.h \
    dwmonitor.h \
    dwcrpytor.h \
    dwsettings.h \
    dwplaythread.h

FORMS    += mainwindow.ui

RESOURCES += \
    rc.qrc
