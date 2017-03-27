#ifndef PLASTIQQGRAPHICSANCHORLAYOUT_H
#define PLASTIQQGRAPHICSANCHORLAYOUT_H

#include "plastiqobject.h"

class PlastiQQGraphicsAnchorLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsAnchorLayout,QGraphicsLayout)
    PLASTIQ_INHERITS(QGraphicsLayout)
public:    ~PlastiQQGraphicsAnchorLayout();
};

#endif // PLASTIQQGRAPHICSANCHORLAYOUT_H