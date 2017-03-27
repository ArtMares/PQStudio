#ifndef PLASTIQQCONTEXTMENUEVENT_H
#define PLASTIQQCONTEXTMENUEVENT_H

#include "plastiqobject.h"

class PlastiQQContextMenuEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QContextMenuEvent,QInputEvent)
    PLASTIQ_INHERITS(QInputEvent)
public:    ~PlastiQQContextMenuEvent();
};

#endif // PLASTIQQCONTEXTMENUEVENT_H