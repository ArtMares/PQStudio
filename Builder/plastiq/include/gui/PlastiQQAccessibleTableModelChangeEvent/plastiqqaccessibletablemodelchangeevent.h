#ifndef PLASTIQQACCESSIBLETABLEMODELCHANGEEVENT_H
#define PLASTIQQACCESSIBLETABLEMODELCHANGEEVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleTableModelChangeEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleTableModelChangeEvent,QAccessibleEvent)
    PLASTIQ_INHERITS(QAccessibleEvent)
public:    ~PlastiQQAccessibleTableModelChangeEvent();
};

#endif // PLASTIQQACCESSIBLETABLEMODELCHANGEEVENT_H