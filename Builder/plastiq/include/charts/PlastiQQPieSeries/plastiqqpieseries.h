#ifndef PLASTIQQPIESERIES_H
#define PLASTIQQPIESERIES_H

#include "plastiqobject.h"

class PlastiQQPieSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPieSeries,QAbstractSeries)
    PLASTIQ_INHERITS(QAbstractSeries)
public:    ~PlastiQQPieSeries();
};

#endif // PLASTIQQPIESERIES_H