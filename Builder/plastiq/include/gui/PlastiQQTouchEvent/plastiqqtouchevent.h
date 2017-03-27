#ifndef PLASTIQQTOUCHEVENT_H
#define PLASTIQQTOUCHEVENT_H

#include "plastiqobject.h"

class PlastiQQTouchEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QTouchEvent,QInputEvent)
    PLASTIQ_INHERITS(QInputEvent)
public:    ~PlastiQQTouchEvent();
};

#endif // PLASTIQQTOUCHEVENT_H