#ifndef PLASTIQQGUIAPPLICATION_H
#define PLASTIQQGUIAPPLICATION_H

#include "plastiqobject.h"

class PlastiQQGuiApplication : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGuiApplication,QCoreApplication)
    PLASTIQ_INHERITS(QCoreApplication)
public:    ~PlastiQQGuiApplication();
};

#endif // PLASTIQQGUIAPPLICATION_H