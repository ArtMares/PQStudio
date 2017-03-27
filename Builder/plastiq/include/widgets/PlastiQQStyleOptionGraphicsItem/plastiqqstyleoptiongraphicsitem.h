#ifndef PLASTIQQSTYLEOPTIONGRAPHICSITEM_H
#define PLASTIQQSTYLEOPTIONGRAPHICSITEM_H

#include "plastiqobject.h"

class PlastiQQStyleOptionGraphicsItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QStyleOptionGraphicsItem,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionGraphicsItem();
};

#endif // PLASTIQQSTYLEOPTIONGRAPHICSITEM_H