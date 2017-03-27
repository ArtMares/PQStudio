#ifndef PLASTIQQSTYLEOPTIONTITLEBAR_H
#define PLASTIQQSTYLEOPTIONTITLEBAR_H

#include "plastiqobject.h"

class PlastiQQStyleOptionTitleBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionTitleBar,QStyleOptionComplex)
    PLASTIQ_INHERITS(QStyleOptionComplex)
public:    ~PlastiQQStyleOptionTitleBar();
};

#endif // PLASTIQQSTYLEOPTIONTITLEBAR_H