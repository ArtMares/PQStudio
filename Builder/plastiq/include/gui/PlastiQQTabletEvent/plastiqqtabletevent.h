#ifndef PLASTIQQTABLETEVENT_H
#define PLASTIQQTABLETEVENT_H

#include "plastiqobject.h"

class PlastiQQTabletEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QTabletEvent,QInputEvent)
    PLASTIQ_INHERITS(QInputEvent)
public:    ~PlastiQQTabletEvent();
};

#endif // PLASTIQQTABLETEVENT_H