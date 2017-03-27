#ifndef PLASTIQQBOXPLOTLEGENDMARKER_H
#define PLASTIQQBOXPLOTLEGENDMARKER_H

#include "plastiqobject.h"

class PlastiQQBoxPlotLegendMarker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QBoxPlotLegendMarker,QLegendMarker)
    PLASTIQ_INHERITS(QLegendMarker)
public:    ~PlastiQQBoxPlotLegendMarker();
};

#endif // PLASTIQQBOXPLOTLEGENDMARKER_H