#ifndef PLASTIQQCLOSEEVENT_H
#define PLASTIQQCLOSEEVENT_H

#include "plastiqobject.h"

class PlastiQQCloseEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QCloseEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQCloseEvent();
};

#endif // PLASTIQQCLOSEEVENT_H