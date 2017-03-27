#ifndef PLASTIQQGRAPHICSSCENEMOUSEEVENT_H
#define PLASTIQQGRAPHICSSCENEMOUSEEVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneMouseEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneMouseEvent,QGraphicsSceneEvent)
    PLASTIQ_INHERITS(QGraphicsSceneEvent)
public:    ~PlastiQQGraphicsSceneMouseEvent();
};

#endif // PLASTIQQGRAPHICSSCENEMOUSEEVENT_H