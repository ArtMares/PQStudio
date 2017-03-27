#ifndef PLASTIQQSTYLEOPTIONFOCUSRECT_H
#define PLASTIQQSTYLEOPTIONFOCUSRECT_H

#include "plastiqobject.h"

class PlastiQQStyleOptionFocusRect : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionFocusRect,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionFocusRect();
};

#endif // PLASTIQQSTYLEOPTIONFOCUSRECT_H