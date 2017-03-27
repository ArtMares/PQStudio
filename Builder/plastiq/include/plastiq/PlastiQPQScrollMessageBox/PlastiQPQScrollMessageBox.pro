#QT       -= gui
QT       += gui widgets core
TARGET = PlastiQPQScrollMessageBox
TEMPLATE = lib
CONFIG += staticlib

SOURCES += pqscrollmessagebox.cpp \
    plastiqpqscrollmessagebox.cpp

HEADERS += pqscrollmessagebox.h \
    plastiqpqscrollmessagebox.h
INCLUDEPATH += "D:/pqengine-git/PQEngine" \
    D:/pqengine-git/PlastiQExtensions
