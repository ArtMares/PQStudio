#ifndef PLASTIQQGRAPHICSSCENEHELPEVENT_H
#define PLASTIQQGRAPHICSSCENEHELPEVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneHelpEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneHelpEvent,QGraphicsSceneEvent)
    PLASTIQ_INHERITS(QGraphicsSceneEvent)
public:    ~PlastiQQGraphicsSceneHelpEvent();
};

#endif // PLASTIQQGRAPHICSSCENEHELPEVENT_H