#ifndef PLASTIQQSPLINESERIES_H
#define PLASTIQQSPLINESERIES_H

#include "plastiqobject.h"

class PlastiQQSplineSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSplineSeries,QLineSeries)
    PLASTIQ_INHERITS(QLineSeries)
public:    ~PlastiQQSplineSeries();
};

#endif // PLASTIQQSPLINESERIES_H