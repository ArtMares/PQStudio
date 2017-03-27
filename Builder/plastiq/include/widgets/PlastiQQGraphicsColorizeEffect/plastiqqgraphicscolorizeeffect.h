#ifndef PLASTIQQGRAPHICSCOLORIZEEFFECT_H
#define PLASTIQQGRAPHICSCOLORIZEEFFECT_H

#include "plastiqobject.h"

class PlastiQQGraphicsColorizeEffect : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsColorizeEffect,QGraphicsEffect)
    PLASTIQ_INHERITS(QGraphicsEffect)
public:    ~PlastiQQGraphicsColorizeEffect();
};

#endif // PLASTIQQGRAPHICSCOLORIZEEFFECT_H