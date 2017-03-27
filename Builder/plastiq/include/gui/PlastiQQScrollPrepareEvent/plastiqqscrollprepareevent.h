#ifndef PLASTIQQSCROLLPREPAREEVENT_H
#define PLASTIQQSCROLLPREPAREEVENT_H

#include "plastiqobject.h"

class PlastiQQScrollPrepareEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QScrollPrepareEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQScrollPrepareEvent();
};

#endif // PLASTIQQSCROLLPREPAREEVENT_H