#ifndef PLASTIQQWINDOWSTATECHANGEEVENT_H
#define PLASTIQQWINDOWSTATECHANGEEVENT_H

#include "plastiqobject.h"

class PlastiQQWindowStateChangeEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QWindowStateChangeEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQWindowStateChangeEvent();
};

#endif // PLASTIQQWINDOWSTATECHANGEEVENT_H