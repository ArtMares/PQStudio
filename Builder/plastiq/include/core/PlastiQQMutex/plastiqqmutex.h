#ifndef PLASTIQQMUTEX_H
#define PLASTIQQMUTEX_H

#include "plastiqobject.h"

class PlastiQQMutex : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMutex,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMutex();
};

#endif // PLASTIQQMUTEX_H