#ifndef PLASTIQQCHILDEVENT_H
#define PLASTIQQCHILDEVENT_H

#include "plastiqobject.h"

class PlastiQQChildEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QChildEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQChildEvent();
};

#endif // PLASTIQQCHILDEVENT_H