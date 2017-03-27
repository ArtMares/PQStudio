#ifndef PLASTIQQCHART_H
#define PLASTIQQCHART_H

#include "plastiqobject.h"

class PlastiQQChart : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QChart,QGraphicsWidget)
    PLASTIQ_INHERITS(QGraphicsWidget)
public:    ~PlastiQQChart();
};

#endif // PLASTIQQCHART_H