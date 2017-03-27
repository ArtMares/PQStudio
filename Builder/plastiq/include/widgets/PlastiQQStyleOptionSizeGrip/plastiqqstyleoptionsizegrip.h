#ifndef PLASTIQQSTYLEOPTIONSIZEGRIP_H
#define PLASTIQQSTYLEOPTIONSIZEGRIP_H

#include "plastiqobject.h"

class PlastiQQStyleOptionSizeGrip : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionSizeGrip,QStyleOptionComplex)
    PLASTIQ_INHERITS(QStyleOptionComplex)
public:    ~PlastiQQStyleOptionSizeGrip();
};

#endif // PLASTIQQSTYLEOPTIONSIZEGRIP_H