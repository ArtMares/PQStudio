#ifndef PLASTIQQGRAPHICSWIDGET_H
#define PLASTIQQGRAPHICSWIDGET_H

#include "plastiqobject.h"

class PlastiQQGraphicsWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGraphicsWidget,QGraphicsObject)
    PLASTIQ_INHERITS(QGraphicsObject,QGraphicsLayoutItem)
public:    ~PlastiQQGraphicsWidget();
};

#endif // PLASTIQQGRAPHICSWIDGET_H