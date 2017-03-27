#ifndef PLASTIQQPOLARCHART_H
#define PLASTIQQPOLARCHART_H

#include "plastiqobject.h"

class PlastiQQPolarChart : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPolarChart,QChart)
    PLASTIQ_INHERITS(QChart)
public:    ~PlastiQQPolarChart();
};

#endif // PLASTIQQPOLARCHART_H