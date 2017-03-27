#ifndef PLASTIQQLEGENDMARKER_H
#define PLASTIQQLEGENDMARKER_H

#include "plastiqobject.h"

class PlastiQQLegendMarker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QLegendMarker,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQLegendMarker();
};

#endif // PLASTIQQLEGENDMARKER_H