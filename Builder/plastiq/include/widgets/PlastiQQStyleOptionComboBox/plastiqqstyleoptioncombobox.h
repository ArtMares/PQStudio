#ifndef PLASTIQQSTYLEOPTIONCOMBOBOX_H
#define PLASTIQQSTYLEOPTIONCOMBOBOX_H

#include "plastiqobject.h"

class PlastiQQStyleOptionComboBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionComboBox,QStyleOptionComplex)
    PLASTIQ_INHERITS(QStyleOptionComplex)
public:    ~PlastiQQStyleOptionComboBox();
};

#endif // PLASTIQQSTYLEOPTIONCOMBOBOX_H