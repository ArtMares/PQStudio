#ifndef PLASTIQQTHREADPOOL_H
#define PLASTIQQTHREADPOOL_H

#include "plastiqobject.h"

class PlastiQQThreadPool : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QThreadPool,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQThreadPool();
};

#endif // PLASTIQQTHREADPOOL_H