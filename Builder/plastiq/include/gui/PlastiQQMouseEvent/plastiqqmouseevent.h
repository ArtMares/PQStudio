#ifndef PLASTIQQMOUSEEVENT_H
#define PLASTIQQMOUSEEVENT_H

#include "plastiqobject.h"

class PlastiQQMouseEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QMouseEvent,QInputEvent)
    PLASTIQ_INHERITS(QInputEvent)
public:    ~PlastiQQMouseEvent();
};

#endif // PLASTIQQMOUSEEVENT_H