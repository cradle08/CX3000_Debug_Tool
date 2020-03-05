#-------------------------------------------------
#
# Project created by QtCreator 2019-11-27T11:41:16
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CX3000_Debug_Tool
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
A
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

INCLUDEPATH  += \
        E:\CX-3000\CX3000_Debug_Tool\

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        qbloodchartview.cpp \
        qhandledatamsgthread.cpp \
        qhandlestatusmsgthread.cpp \
        qifudp.cpp \
        qmsgqueue.cpp

HEADERS += \
        mainwindow.h \
        qbloodchartview.h \
        qhandledatamsgthread.h \
        qhandlestatusmsgthread.h \
        qifudp.h \
        qmsgqueue.h

FORMS += \
        mainwindow.ui

RC_ICONS = blood_96px.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
