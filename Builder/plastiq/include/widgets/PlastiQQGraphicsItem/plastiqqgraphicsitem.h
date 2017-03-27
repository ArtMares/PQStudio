#ifndef PLASTIQQGRAPHICSITEM_H
#define PLASTIQQGRAPHICSITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQGraphicsItem();
};

#endif // PLASTIQQGRAPHICSITEM_H