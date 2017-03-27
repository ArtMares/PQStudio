#ifndef PLASTIQQPARALLELANIMATIONGROUP_H
#define PLASTIQQPARALLELANIMATIONGROUP_H

#include "plastiqobject.h"

class PlastiQQParallelAnimationGroup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QParallelAnimationGroup,QAnimationGroup)
    PLASTIQ_INHERITS(QAnimationGroup)
public:    ~PlastiQQParallelAnimationGroup();
};

#endif // PLASTIQQPARALLELANIMATIONGROUP_H