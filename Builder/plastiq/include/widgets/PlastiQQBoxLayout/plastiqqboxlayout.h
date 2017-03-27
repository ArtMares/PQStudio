#ifndef PLASTIQQBOXLAYOUT_H
#define PLASTIQQBOXLAYOUT_H

#include "plastiqobject.h"

class PlastiQQBoxLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QBoxLayout,QLayout)
    PLASTIQ_INHERITS(QLayout)
public:    ~PlastiQQBoxLayout();
};

#endif // PLASTIQQBOXLAYOUT_H