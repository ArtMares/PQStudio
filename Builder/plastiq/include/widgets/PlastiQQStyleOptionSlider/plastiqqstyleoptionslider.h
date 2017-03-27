#ifndef PLASTIQQSTYLEOPTIONSLIDER_H
#define PLASTIQQSTYLEOPTIONSLIDER_H

#include "plastiqobject.h"

class PlastiQQStyleOptionSlider : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionSlider,QStyleOptionComplex)
    PLASTIQ_INHERITS(QStyleOptionComplex)
public:    ~PlastiQQStyleOptionSlider();
};

#endif // PLASTIQQSTYLEOPTIONSLIDER_H