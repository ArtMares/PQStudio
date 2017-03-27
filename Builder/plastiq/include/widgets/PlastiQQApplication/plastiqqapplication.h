#ifndef PLASTIQQAPPLICATION_H
#define PLASTIQQAPPLICATION_H

#include "plastiqobject.h"

class PlastiQQApplication : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QApplication,QGuiApplication)
    PLASTIQ_INHERITS(QGuiApplication)
public:    ~PlastiQQApplication();
};

#endif // PLASTIQQAPPLICATION_H