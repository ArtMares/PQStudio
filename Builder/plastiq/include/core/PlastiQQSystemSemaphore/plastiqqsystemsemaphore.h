#ifndef PLASTIQQSYSTEMSEMAPHORE_H
#define PLASTIQQSYSTEMSEMAPHORE_H

#include "plastiqobject.h"

class PlastiQQSystemSemaphore : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSystemSemaphore,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSystemSemaphore();
};

#endif // PLASTIQQSYSTEMSEMAPHORE_H