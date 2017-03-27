#ifndef PLASTIQQPAINTENGINE_H
#define PLASTIQQPAINTENGINE_H

#include "plastiqobject.h"

class PlastiQQPaintEngine : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPaintEngine,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPaintEngine();
};

#endif // PLASTIQQPAINTENGINE_H