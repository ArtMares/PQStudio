#ifndef PLASTIQQGRAPHICSBLUREFFECT_H
#define PLASTIQQGRAPHICSBLUREFFECT_H

#include "plastiqobject.h"

class PlastiQQGraphicsBlurEffect : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsBlurEffect,QGraphicsEffect)
    PLASTIQ_INHERITS(QGraphicsEffect)
public:    ~PlastiQQGraphicsBlurEffect();
};

#endif // PLASTIQQGRAPHICSBLUREFFECT_H