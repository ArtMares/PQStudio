#ifndef PLASTIQQSTYLEOPTIONTABBARBASE_H
#define PLASTIQQSTYLEOPTIONTABBARBASE_H

#include "plastiqobject.h"

class PlastiQQStyleOptionTabBarBase : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionTabBarBase,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionTabBarBase();
};

#endif // PLASTIQQSTYLEOPTIONTABBARBASE_H