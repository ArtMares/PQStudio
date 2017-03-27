#ifndef PLASTIQQLINESERIES_H
#define PLASTIQQLINESERIES_H

#include "plastiqobject.h"

class PlastiQQLineSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QLineSeries,QXYSeries)
    PLASTIQ_INHERITS(QXYSeries)
public:    ~PlastiQQLineSeries();
};

#endif // PLASTIQQLINESERIES_H