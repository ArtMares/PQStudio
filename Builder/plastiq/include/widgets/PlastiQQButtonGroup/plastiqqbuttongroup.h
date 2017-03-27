#ifndef PLASTIQQBUTTONGROUP_H
#define PLASTIQQBUTTONGROUP_H

#include "plastiqobject.h"

class PlastiQQButtonGroup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QButtonGroup,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQButtonGroup();
};

#endif // PLASTIQQBUTTONGROUP_H