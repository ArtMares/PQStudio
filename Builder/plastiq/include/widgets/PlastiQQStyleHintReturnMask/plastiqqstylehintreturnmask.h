#ifndef PLASTIQQSTYLEHINTRETURNMASK_H
#define PLASTIQQSTYLEHINTRETURNMASK_H

#include "plastiqobject.h"

class PlastiQQStyleHintReturnMask : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleHintReturnMask,QStyleHintReturn)
    PLASTIQ_INHERITS(QStyleHintReturn)
public:    ~PlastiQQStyleHintReturnMask();
};

#endif // PLASTIQQSTYLEHINTRETURNMASK_H