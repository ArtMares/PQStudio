#ifndef PLASTIQQWHEELEVENT_H
#define PLASTIQQWHEELEVENT_H

#include "plastiqobject.h"

class PlastiQQWheelEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QWheelEvent,QInputEvent)
    PLASTIQ_INHERITS(QInputEvent)
public:    ~PlastiQQWheelEvent();
};

#endif // PLASTIQQWHEELEVENT_H