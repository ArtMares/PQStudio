#ifndef PLASTIQQHBOXLAYOUT_H
#define PLASTIQQHBOXLAYOUT_H

#include "plastiqobject.h"

class PlastiQQHBoxLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHBoxLayout,QBoxLayout)
    PLASTIQ_INHERITS(QBoxLayout)
public:    ~PlastiQQHBoxLayout();
};

#endif // PLASTIQQHBOXLAYOUT_H