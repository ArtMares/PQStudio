#ifndef PLASTIQQHOVEREVENT_H
#define PLASTIQQHOVEREVENT_H

#include "plastiqobject.h"

class PlastiQQHoverEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QHoverEvent,QInputEvent)
    PLASTIQ_INHERITS(QInputEvent)
public:    ~PlastiQQHoverEvent();
};

#endif // PLASTIQQHOVEREVENT_H