#ifndef PLASTIQQNATIVEGESTUREEVENT_H
#define PLASTIQQNATIVEGESTUREEVENT_H

#include "plastiqobject.h"

class PlastiQQNativeGestureEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QNativeGestureEvent,QInputEvent)
    PLASTIQ_INHERITS(QInputEvent)
public:    ~PlastiQQNativeGestureEvent();
};

#endif // PLASTIQQNATIVEGESTUREEVENT_H