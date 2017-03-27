#ifndef PLASTIQQGRAPHICSTEXTITEM_H
#define PLASTIQQGRAPHICSTEXTITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsTextItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGraphicsTextItem,QGraphicsObject)
    PLASTIQ_INHERITS(QGraphicsObject)
public:    ~PlastiQQGraphicsTextItem();
};

#endif // PLASTIQQGRAPHICSTEXTITEM_H