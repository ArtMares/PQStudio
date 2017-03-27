#ifndef PLASTIQQSEMAPHORE_H
#define PLASTIQQSEMAPHORE_H

#include "plastiqobject.h"

class PlastiQQSemaphore : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSemaphore,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSemaphore();
};

#endif // PLASTIQQSEMAPHORE_H