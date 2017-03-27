#ifndef PLASTIQQWHATSTHISCLICKEDEVENT_H
#define PLASTIQQWHATSTHISCLICKEDEVENT_H

#include "plastiqobject.h"

class PlastiQQWhatsThisClickedEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QWhatsThisClickedEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQWhatsThisClickedEvent();
};

#endif // PLASTIQQWHATSTHISCLICKEDEVENT_H