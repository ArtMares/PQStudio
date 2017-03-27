#ifndef PLASTIQQELAPSEDTIMER_H
#define PLASTIQQELAPSEDTIMER_H

#include "plastiqobject.h"

class PlastiQQElapsedTimer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QElapsedTimer,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQElapsedTimer();
};

#endif // PLASTIQQELAPSEDTIMER_H