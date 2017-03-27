#ifndef PLASTIQQSTYLEOPTIONGROUPBOX_H
#define PLASTIQQSTYLEOPTIONGROUPBOX_H

#include "plastiqobject.h"

class PlastiQQStyleOptionGroupBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionGroupBox,QStyleOptionComplex)
    PLASTIQ_INHERITS(QStyleOptionComplex)
public:    ~PlastiQQStyleOptionGroupBox();
};

#endif // PLASTIQQSTYLEOPTIONGROUPBOX_H