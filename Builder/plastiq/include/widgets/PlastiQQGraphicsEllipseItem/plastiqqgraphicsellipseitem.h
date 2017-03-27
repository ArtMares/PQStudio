#ifndef PLASTIQQGRAPHICSELLIPSEITEM_H
#define PLASTIQQGRAPHICSELLIPSEITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsEllipseItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsEllipseItem,QAbstractGraphicsShapeItem)
    PLASTIQ_INHERITS(QAbstractGraphicsShapeItem)
public:    ~PlastiQQGraphicsEllipseItem();
};

#endif // PLASTIQQGRAPHICSELLIPSEITEM_H