#ifndef PLASTIQQGRAPHICSLINEITEM_H
#define PLASTIQQGRAPHICSLINEITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsLineItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsLineItem,QGraphicsItem)
    PLASTIQ_INHERITS(QGraphicsItem)
public:    ~PlastiQQGraphicsLineItem();
};

#endif // PLASTIQQGRAPHICSLINEITEM_H