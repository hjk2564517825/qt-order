#-------------------------------------------------
#
# Project created by QtCreator 2021-11-10T23:51:24
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTProject
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
        loginscreen.cpp \
    mainscreen.cpp \
    foodcontrol.cpp \
    orderscreen.cpp \
    softkeyboard.cpp \
    keyboardbutton.cpp \
    udptransfer.cpp

HEADERS += \
        loginscreen.h \
    mainscreen.h \
    foodcontrol.h \
    orderscreen.h \
    softkeyboard.h \
    keyboardbutton.h \
    udptransfer.h

FORMS += \
        loginscreen.ui \
    mainscreen.ui \
    foodcontrol.ui \
    orderscreen.ui \
    softkeyboard.ui

RESOURCES += \
    images.qrc
