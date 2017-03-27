#ifndef PLASTIQQGRIDLAYOUT_H
#define PLASTIQQGRIDLAYOUT_H

#include "plastiqobject.h"

class PlastiQQGridLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGridLayout,QLayout)
    PLASTIQ_INHERITS(QLayout)
public:    ~PlastiQQGridLayout();
};

#endif // PLASTIQQGRIDLAYOUT_H