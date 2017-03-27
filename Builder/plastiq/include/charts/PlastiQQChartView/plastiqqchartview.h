#ifndef PLASTIQQCHARTVIEW_H
#define PLASTIQQCHARTVIEW_H

#include "plastiqobject.h"

class PlastiQQChartView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QChartView,QGraphicsView)
    PLASTIQ_INHERITS(QGraphicsView)
public:    ~PlastiQQChartView();
};

#endif // PLASTIQQCHARTVIEW_H