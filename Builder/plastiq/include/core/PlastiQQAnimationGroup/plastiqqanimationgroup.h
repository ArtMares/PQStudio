#ifndef PLASTIQQANIMATIONGROUP_H
#define PLASTIQQANIMATIONGROUP_H

#include "plastiqobject.h"

class PlastiQQAnimationGroup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAnimationGroup,QAbstractAnimation)
    PLASTIQ_INHERITS(QAbstractAnimation)
public:    ~PlastiQQAnimationGroup();
};

#endif // PLASTIQQANIMATIONGROUP_H