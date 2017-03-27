#ifndef PLASTIQQSTACKEDLAYOUT_H
#define PLASTIQQSTACKEDLAYOUT_H

#include "plastiqobject.h"

class PlastiQQStackedLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QStackedLayout,QLayout)
    PLASTIQ_INHERITS(QLayout)
public:    ~PlastiQQStackedLayout();
};

#endif // PLASTIQQSTACKEDLAYOUT_H