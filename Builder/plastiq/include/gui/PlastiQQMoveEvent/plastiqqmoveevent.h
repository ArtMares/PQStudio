#ifndef PLASTIQQMOVEEVENT_H
#define PLASTIQQMOVEEVENT_H

#include "plastiqobject.h"

class PlastiQQMoveEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QMoveEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQMoveEvent();
};

#endif // PLASTIQQMOVEEVENT_H