#ifndef PLASTIQQSTYLEOPTIONTAB_H
#define PLASTIQQSTYLEOPTIONTAB_H

#include "plastiqobject.h"

class PlastiQQStyleOptionTab : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionTab,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionTab();
};

#endif // PLASTIQQSTYLEOPTIONTAB_H