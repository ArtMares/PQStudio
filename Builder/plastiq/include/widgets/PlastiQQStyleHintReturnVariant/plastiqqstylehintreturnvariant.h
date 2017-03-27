#ifndef PLASTIQQSTYLEHINTRETURNVARIANT_H
#define PLASTIQQSTYLEHINTRETURNVARIANT_H

#include "plastiqobject.h"

class PlastiQQStyleHintReturnVariant : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleHintReturnVariant,QStyleHintReturn)
    PLASTIQ_INHERITS(QStyleHintReturn)
public:    ~PlastiQQStyleHintReturnVariant();
};

#endif // PLASTIQQSTYLEHINTRETURNVARIANT_H