#ifndef PLASTIQQGRAPHICSDROPSHADOWEFFECT_H
#define PLASTIQQGRAPHICSDROPSHADOWEFFECT_H

#include "plastiqobject.h"

class PlastiQQGraphicsDropShadowEffect : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsDropShadowEffect,QGraphicsEffect)
    PLASTIQ_INHERITS(QGraphicsEffect)
public:    ~PlastiQQGraphicsDropShadowEffect();
};

#endif // PLASTIQQGRAPHICSDROPSHADOWEFFECT_H