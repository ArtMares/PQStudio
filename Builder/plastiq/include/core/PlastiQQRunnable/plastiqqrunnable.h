#ifndef PLASTIQQRUNNABLE_H
#define PLASTIQQRUNNABLE_H

#include "plastiqobject.h"

class PlastiQQRunnable : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRunnable,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQRunnable();
};

#endif // PLASTIQQRUNNABLE_H