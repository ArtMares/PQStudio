#ifndef PLASTIQQVARIANTANIMATION_H
#define PLASTIQQVARIANTANIMATION_H

#include "plastiqobject.h"

class PlastiQQVariantAnimation : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVariantAnimation,QAbstractAnimation)
    PLASTIQ_INHERITS(QAbstractAnimation)
public:    ~PlastiQQVariantAnimation();
};

#endif // PLASTIQQVARIANTANIMATION_H