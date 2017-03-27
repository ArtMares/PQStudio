#ifndef PLASTIQQGRAPHICSLINEARLAYOUT_H
#define PLASTIQQGRAPHICSLINEARLAYOUT_H

#include "plastiqobject.h"

class PlastiQQGraphicsLinearLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsLinearLayout,QGraphicsLayout)
    PLASTIQ_INHERITS(QGraphicsLayout)
public:    ~PlastiQQGraphicsLinearLayout();
};

#endif // PLASTIQQGRAPHICSLINEARLAYOUT_H