#ifndef PLASTIQQGRAPHICSSCENERESIZEEVENT_H
#define PLASTIQQGRAPHICSSCENERESIZEEVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneResizeEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneResizeEvent,QGraphicsSceneEvent)
    PLASTIQ_INHERITS(QGraphicsSceneEvent)
public:    ~PlastiQQGraphicsSceneResizeEvent();
};

#endif // PLASTIQQGRAPHICSSCENERESIZEEVENT_H