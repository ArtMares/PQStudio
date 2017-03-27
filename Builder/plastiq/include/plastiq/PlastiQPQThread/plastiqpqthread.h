#ifndef PLASTIQPQTHREAD_H
#define PLASTIQPQTHREAD_H

#include "plastiqobject.h"

class PlastiQPQThread : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,PQThread,QThread)

public:
    ~PlastiQPQThread();
};


#endif // PLASTIQPQTHREAD_H
