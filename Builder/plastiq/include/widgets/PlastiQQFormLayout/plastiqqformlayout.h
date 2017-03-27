#ifndef PLASTIQQFORMLAYOUT_H
#define PLASTIQQFORMLAYOUT_H

#include "plastiqobject.h"

class PlastiQQFormLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QFormLayout,QLayout)
    PLASTIQ_INHERITS(QLayout)
public:    ~PlastiQQFormLayout();
};

#endif // PLASTIQQFORMLAYOUT_H