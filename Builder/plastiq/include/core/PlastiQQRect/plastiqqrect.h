#ifndef PLASTIQQRECT_H
#define PLASTIQQRECT_H

#include "plastiqobject.h"

class PlastiQQRect : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRect,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQRect();
};

#endif // PLASTIQQRECT_H