#ifndef PLASTIQQKEYEVENT_H
#define PLASTIQQKEYEVENT_H

#include "plastiqobject.h"

class PlastiQQKeyEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QKeyEvent,QInputEvent)
    PLASTIQ_INHERITS(QInputEvent)
public:    ~PlastiQQKeyEvent();
};

#endif // PLASTIQQKEYEVENT_H