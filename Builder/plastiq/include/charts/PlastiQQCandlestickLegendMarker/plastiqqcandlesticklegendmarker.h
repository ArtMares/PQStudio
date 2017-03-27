#ifndef PLASTIQQCANDLESTICKLEGENDMARKER_H
#define PLASTIQQCANDLESTICKLEGENDMARKER_H

#include "plastiqobject.h"

class PlastiQQCandlestickLegendMarker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCandlestickLegendMarker,QLegendMarker)
    PLASTIQ_INHERITS(QLegendMarker)
public:    ~PlastiQQCandlestickLegendMarker();
};

#endif // PLASTIQQCANDLESTICKLEGENDMARKER_H