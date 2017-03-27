#ifndef PLASTIQQGRAPHICSITEMGROUP_H
#define PLASTIQQGRAPHICSITEMGROUP_H

#include "plastiqobject.h"

class PlastiQQGraphicsItemGroup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsItemGroup,QGraphicsItem)
    PLASTIQ_INHERITS(QGraphicsItem)
public:    ~PlastiQQGraphicsItemGroup();
};

#endif // PLASTIQQGRAPHICSITEMGROUP_H