#ifndef PLASTIQQTHREAD_H
#define PLASTIQQTHREAD_H

#include "plastiqobject.h"

class PlastiQQThread : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QThread,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQThread();
};

#endif // PLASTIQQTHREAD_H