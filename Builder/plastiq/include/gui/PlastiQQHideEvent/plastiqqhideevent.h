#ifndef PLASTIQQHIDEEVENT_H
#define PLASTIQQHIDEEVENT_H

#include "plastiqobject.h"

class PlastiQQHideEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QHideEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQHideEvent();
};

#endif // PLASTIQQHIDEEVENT_H