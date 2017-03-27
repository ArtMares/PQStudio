#ifndef PLASTIQQMUTEXLOCKER_H
#define PLASTIQQMUTEXLOCKER_H

#include "plastiqobject.h"

class PlastiQQMutexLocker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMutexLocker,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMutexLocker();
};

#endif // PLASTIQQMUTEXLOCKER_H