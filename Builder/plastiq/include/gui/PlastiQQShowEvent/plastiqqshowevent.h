#ifndef PLASTIQQSHOWEVENT_H
#define PLASTIQQSHOWEVENT_H

#include "plastiqobject.h"

class PlastiQQShowEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QShowEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQShowEvent();
};

#endif // PLASTIQQSHOWEVENT_H