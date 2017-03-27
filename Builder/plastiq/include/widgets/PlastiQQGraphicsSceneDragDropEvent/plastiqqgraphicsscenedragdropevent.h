#ifndef PLASTIQQGRAPHICSSCENEDRAGDROPEVENT_H
#define PLASTIQQGRAPHICSSCENEDRAGDROPEVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneDragDropEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneDragDropEvent,QGraphicsSceneEvent)
    PLASTIQ_INHERITS(QGraphicsSceneEvent)
public:    ~PlastiQQGraphicsSceneDragDropEvent();
};

#endif // PLASTIQQGRAPHICSSCENEDRAGDROPEVENT_H