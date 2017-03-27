#ifndef PLASTIQQBASICTIMER_H
#define PLASTIQQBASICTIMER_H

#include "plastiqobject.h"

class PlastiQQBasicTimer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QBasicTimer,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQBasicTimer();
};

#endif // PLASTIQQBASICTIMER_H