#ifndef PLASTIQQAREALEGENDMARKER_H
#define PLASTIQQAREALEGENDMARKER_H

#include "plastiqobject.h"

class PlastiQQAreaLegendMarker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAreaLegendMarker,QLegendMarker)
    PLASTIQ_INHERITS(QLegendMarker)
public:    ~PlastiQQAreaLegendMarker();
};

#endif // PLASTIQQAREALEGENDMARKER_H