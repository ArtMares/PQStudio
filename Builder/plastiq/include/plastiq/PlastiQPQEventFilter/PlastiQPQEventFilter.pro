#QT       -= gui
QT       += gui widgets core
TARGET = PlastiQPQEventFilter
TEMPLATE = lib
CONFIG += staticlib

SOURCES += pqeventfilter.cpp \
    plastiqpqeventfilter.cpp

HEADERS += pqeventfilter.h \
    plastiqpqeventfilter.h
INCLUDEPATH += "D:/pqengine-git/PQEngine" \
    D:/pqengine-git/PlastiQExtensions
