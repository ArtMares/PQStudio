#ifndef PLASTIQQCOREAPPLICATION_H
#define PLASTIQQCOREAPPLICATION_H

#include "plastiqobject.h"

class PlastiQQCoreApplication : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCoreApplication,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQCoreApplication();
};

#endif // PLASTIQQCOREAPPLICATION_H