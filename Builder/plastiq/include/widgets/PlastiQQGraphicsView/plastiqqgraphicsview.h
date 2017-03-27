#ifndef PLASTIQQGRAPHICSVIEW_H
#define PLASTIQQGRAPHICSVIEW_H

#include "plastiqobject.h"

class PlastiQQGraphicsView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QGraphicsView,QAbstractScrollArea)
    PLASTIQ_INHERITS(QAbstractScrollArea)
public:    ~PlastiQQGraphicsView();
};

#endif // PLASTIQQGRAPHICSVIEW_H