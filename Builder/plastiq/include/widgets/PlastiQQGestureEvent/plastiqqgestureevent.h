#ifndef PLASTIQQGESTUREEVENT_H
#define PLASTIQQGESTUREEVENT_H

#include "plastiqobject.h"

class PlastiQQGestureEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGestureEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQGestureEvent();
};

#endif // PLASTIQQGESTUREEVENT_H