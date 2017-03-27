#ifndef PLASTIQQHELPEVENT_H
#define PLASTIQQHELPEVENT_H

#include "plastiqobject.h"

class PlastiQQHelpEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QHelpEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQHelpEvent();
};

#endif // PLASTIQQHELPEVENT_H