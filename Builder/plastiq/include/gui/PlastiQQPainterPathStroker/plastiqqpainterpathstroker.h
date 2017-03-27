#ifndef PLASTIQQPAINTERPATHSTROKER_H
#define PLASTIQQPAINTERPATHSTROKER_H

#include "plastiqobject.h"

class PlastiQQPainterPathStroker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPainterPathStroker,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPainterPathStroker();
};

#endif // PLASTIQQPAINTERPATHSTROKER_H