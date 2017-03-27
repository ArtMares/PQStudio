#ifndef PLASTIQQREADWRITELOCK_H
#define PLASTIQQREADWRITELOCK_H

#include "plastiqobject.h"

class PlastiQQReadWriteLock : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QReadWriteLock,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQReadWriteLock();
};

#endif // PLASTIQQREADWRITELOCK_H