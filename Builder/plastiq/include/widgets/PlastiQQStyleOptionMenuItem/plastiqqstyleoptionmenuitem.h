#ifndef PLASTIQQSTYLEOPTIONMENUITEM_H
#define PLASTIQQSTYLEOPTIONMENUITEM_H

#include "plastiqobject.h"

class PlastiQQStyleOptionMenuItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QStyleOptionMenuItem,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionMenuItem();
};

#endif // PLASTIQQSTYLEOPTIONMENUITEM_H