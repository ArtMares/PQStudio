#ifndef PLASTIQQPOINT_H
#define PLASTIQQPOINT_H

#include "plastiqobject.h"

class PlastiQQPoint : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPoint,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPoint();
};

#endif // PLASTIQQPOINT_H