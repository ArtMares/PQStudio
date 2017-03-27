#ifndef PLASTIQQTIMEREVENT_H
#define PLASTIQQTIMEREVENT_H

#include "plastiqobject.h"

class PlastiQQTimerEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QTimerEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQTimerEvent();
};

#endif // PLASTIQQTIMEREVENT_H