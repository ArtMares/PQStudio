#ifndef PLASTIQQINPUTMETHODQUERYEVENT_H
#define PLASTIQQINPUTMETHODQUERYEVENT_H

#include "plastiqobject.h"

class PlastiQQInputMethodQueryEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QInputMethodQueryEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQInputMethodQueryEvent();
};

#endif // PLASTIQQINPUTMETHODQUERYEVENT_H