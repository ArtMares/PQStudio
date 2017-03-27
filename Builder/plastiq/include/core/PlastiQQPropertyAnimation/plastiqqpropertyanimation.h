#ifndef PLASTIQQPROPERTYANIMATION_H
#define PLASTIQQPROPERTYANIMATION_H

#include "plastiqobject.h"

class PlastiQQPropertyAnimation : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPropertyAnimation,QVariantAnimation)
    PLASTIQ_INHERITS(QVariantAnimation)
public:    ~PlastiQQPropertyAnimation();
};

#endif // PLASTIQQPROPERTYANIMATION_H