#ifndef PLASTIQQTIMER_H
#define PLASTIQQTIMER_H

#include "plastiqobject.h"

class PlastiQQTimer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTimer,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQTimer();
};

#endif // PLASTIQQTIMER_H