#ifndef PLASTIQQBARLEGENDMARKER_H
#define PLASTIQQBARLEGENDMARKER_H

#include "plastiqobject.h"

class PlastiQQBarLegendMarker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QBarLegendMarker,QLegendMarker)
    PLASTIQ_INHERITS(QLegendMarker)
public:    ~PlastiQQBarLegendMarker();
};

#endif // PLASTIQQBARLEGENDMARKER_H