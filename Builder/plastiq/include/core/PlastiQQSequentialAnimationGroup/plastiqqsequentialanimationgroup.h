#ifndef PLASTIQQSEQUENTIALANIMATIONGROUP_H
#define PLASTIQQSEQUENTIALANIMATIONGROUP_H

#include "plastiqobject.h"

class PlastiQQSequentialAnimationGroup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSequentialAnimationGroup,QAnimationGroup)
    PLASTIQ_INHERITS(QAnimationGroup)
public:    ~PlastiQQSequentialAnimationGroup();
};

#endif // PLASTIQQSEQUENTIALANIMATIONGROUP_H