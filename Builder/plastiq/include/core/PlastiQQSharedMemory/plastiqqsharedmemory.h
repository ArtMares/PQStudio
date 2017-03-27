#ifndef PLASTIQQSHAREDMEMORY_H
#define PLASTIQQSHAREDMEMORY_H

#include "plastiqobject.h"

class PlastiQQSharedMemory : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSharedMemory,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQSharedMemory();
};

#endif // PLASTIQQSHAREDMEMORY_H