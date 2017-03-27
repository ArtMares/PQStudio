#ifndef PLASTIQQINPUTEVENT_H
#define PLASTIQQINPUTEVENT_H

#include "plastiqobject.h"

class PlastiQQInputEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QInputEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQInputEvent();
};

#endif // PLASTIQQINPUTEVENT_H