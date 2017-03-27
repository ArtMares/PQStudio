#ifndef PLASTIQQBOXPLOTSERIES_H
#define PLASTIQQBOXPLOTSERIES_H

#include "plastiqobject.h"

class PlastiQQBoxPlotSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QBoxPlotSeries,QAbstractSeries)
    PLASTIQ_INHERITS(QAbstractSeries)
public:    ~PlastiQQBoxPlotSeries();
};

#endif // PLASTIQQBOXPLOTSERIES_H