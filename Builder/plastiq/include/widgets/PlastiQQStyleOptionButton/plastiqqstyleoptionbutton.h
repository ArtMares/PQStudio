#ifndef PLASTIQQSTYLEOPTIONBUTTON_H
#define PLASTIQQSTYLEOPTIONBUTTON_H

#include "plastiqobject.h"

class PlastiQQStyleOptionButton : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionButton,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionButton();
};

#endif // PLASTIQQSTYLEOPTIONBUTTON_H