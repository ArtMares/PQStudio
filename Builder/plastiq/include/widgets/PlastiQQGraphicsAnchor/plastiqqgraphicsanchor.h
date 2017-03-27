#ifndef PLASTIQQGRAPHICSANCHOR_H
#define PLASTIQQGRAPHICSANCHOR_H

#include "plastiqobject.h"

class PlastiQQGraphicsAnchor : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGraphicsAnchor,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQGraphicsAnchor();
};

#endif // PLASTIQQGRAPHICSANCHOR_H