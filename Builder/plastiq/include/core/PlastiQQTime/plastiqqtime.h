#ifndef PLASTIQQTIME_H
#define PLASTIQQTIME_H

#include "plastiqobject.h"

class PlastiQQTime : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTime,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTime();
};

#endif // PLASTIQQTIME_H