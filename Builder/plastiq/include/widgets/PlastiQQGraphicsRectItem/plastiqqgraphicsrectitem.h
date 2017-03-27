#ifndef PLASTIQQGRAPHICSRECTITEM_H
#define PLASTIQQGRAPHICSRECTITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsRectItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsRectItem,QAbstractGraphicsShapeItem)
    PLASTIQ_INHERITS(QAbstractGraphicsShapeItem)
public:    ~PlastiQQGraphicsRectItem();
};

#endif // PLASTIQQGRAPHICSRECTITEM_H