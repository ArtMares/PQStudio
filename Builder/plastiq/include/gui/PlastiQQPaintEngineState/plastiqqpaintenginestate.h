#ifndef PLASTIQQPAINTENGINESTATE_H
#define PLASTIQQPAINTENGINESTATE_H

#include "plastiqobject.h"

class PlastiQQPaintEngineState : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPaintEngineState,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPaintEngineState();
};

#endif // PLASTIQQPAINTENGINESTATE_H