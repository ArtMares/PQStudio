#ifndef PLASTIQQXYLEGENDMARKER_H
#define PLASTIQQXYLEGENDMARKER_H

#include "plastiqobject.h"

class PlastiQQXYLegendMarker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QXYLegendMarker,QLegendMarker)
    PLASTIQ_INHERITS(QLegendMarker)
public:    ~PlastiQQXYLegendMarker();
};

#endif // PLASTIQQXYLEGENDMARKER_H