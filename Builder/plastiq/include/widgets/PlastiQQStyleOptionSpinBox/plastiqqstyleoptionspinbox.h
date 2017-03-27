#ifndef PLASTIQQSTYLEOPTIONSPINBOX_H
#define PLASTIQQSTYLEOPTIONSPINBOX_H

#include "plastiqobject.h"

class PlastiQQStyleOptionSpinBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionSpinBox,QStyleOptionComplex)
    PLASTIQ_INHERITS(QStyleOptionComplex)
public:    ~PlastiQQStyleOptionSpinBox();
};

#endif // PLASTIQQSTYLEOPTIONSPINBOX_H