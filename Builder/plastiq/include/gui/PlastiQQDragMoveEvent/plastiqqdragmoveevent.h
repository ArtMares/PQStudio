#ifndef PLASTIQQDRAGMOVEEVENT_H
#define PLASTIQQDRAGMOVEEVENT_H

#include "plastiqobject.h"

class PlastiQQDragMoveEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QDragMoveEvent,QDropEvent)
    PLASTIQ_INHERITS(QDropEvent)
public:    ~PlastiQQDragMoveEvent();
};

#endif // PLASTIQQDRAGMOVEEVENT_H