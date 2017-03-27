#ifndef PLASTIQQINPUTMETHODEVENT_H
#define PLASTIQQINPUTMETHODEVENT_H

#include "plastiqobject.h"

class PlastiQQInputMethodEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QInputMethodEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQInputMethodEvent();
};

#endif // PLASTIQQINPUTMETHODEVENT_H