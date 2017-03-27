#ifndef PLASTIQQBRUSH_H
#define PLASTIQQBRUSH_H

#include "plastiqobject.h"

class PlastiQQBrush : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QBrush,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQBrush();
};

#endif // PLASTIQQBRUSH_H