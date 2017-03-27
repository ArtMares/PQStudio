#ifndef PLASTIQQEVENT_H
#define PLASTIQQEVENT_H

#include "plastiqobject.h"

class PlastiQQEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QEvent,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQEvent();
};

#endif // PLASTIQQEVENT_H