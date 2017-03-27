#ifndef PLASTIQQSTYLEOPTIONTOOLBUTTON_H
#define PLASTIQQSTYLEOPTIONTOOLBUTTON_H

#include "plastiqobject.h"

class PlastiQQStyleOptionToolButton : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionToolButton,QStyleOptionComplex)
    PLASTIQ_INHERITS(QStyleOptionComplex)
public:    ~PlastiQQStyleOptionToolButton();
};

#endif // PLASTIQQSTYLEOPTIONTOOLBUTTON_H