#ifndef PLASTIQQACTIONEVENT_H
#define PLASTIQQACTIONEVENT_H

#include "plastiqobject.h"

class PlastiQQActionEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QActionEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQActionEvent();
};

#endif // PLASTIQQACTIONEVENT_H