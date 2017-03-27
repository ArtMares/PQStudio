#ifndef PLASTIQQSCATTERSERIES_H
#define PLASTIQQSCATTERSERIES_H

#include "plastiqobject.h"

class PlastiQQScatterSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QScatterSeries,QXYSeries)
    PLASTIQ_INHERITS(QXYSeries)
public:    ~PlastiQQScatterSeries();
};

#endif // PLASTIQQSCATTERSERIES_H