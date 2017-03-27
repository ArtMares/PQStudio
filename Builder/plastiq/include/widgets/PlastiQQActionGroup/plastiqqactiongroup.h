#ifndef PLASTIQQACTIONGROUP_H
#define PLASTIQQACTIONGROUP_H

#include "plastiqobject.h"

class PlastiQQActionGroup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QActionGroup,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQActionGroup();
};

#endif // PLASTIQQACTIONGROUP_H