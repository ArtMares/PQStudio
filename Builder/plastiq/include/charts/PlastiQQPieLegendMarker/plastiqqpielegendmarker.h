#ifndef PLASTIQQPIELEGENDMARKER_H
#define PLASTIQQPIELEGENDMARKER_H

#include "plastiqobject.h"

class PlastiQQPieLegendMarker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPieLegendMarker,QLegendMarker)
    PLASTIQ_INHERITS(QLegendMarker)
public:    ~PlastiQQPieLegendMarker();
};

#endif // PLASTIQQPIELEGENDMARKER_H