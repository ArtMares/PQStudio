#ifndef PLASTIQQSTATUSTIPEVENT_H
#define PLASTIQQSTATUSTIPEVENT_H

#include "plastiqobject.h"

class PlastiQQStatusTipEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QStatusTipEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQStatusTipEvent();
};

#endif // PLASTIQQSTATUSTIPEVENT_H