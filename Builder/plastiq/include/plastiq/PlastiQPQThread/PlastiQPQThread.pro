#-------------------------------------------------
#
# Project created by QtCreator 2016-10-13T14:58:24
#
#-------------------------------------------------

QT       +=  core
QT       -= gui

TARGET = PlastiQPQThread
TEMPLATE = lib
CONFIG += staticlib

SOURCES += plastiqpqthread.cpp \
    pqthread.cpp

HEADERS += plastiqpqthread.h \
    pqthread.h

INCLUDEPATH += "D:/pqengine-git/PQEngine" \
    D:/pqengine-git/PlastiQExtensions

unix {
    target.path = /usr/lib
    INSTALLS += target
}
