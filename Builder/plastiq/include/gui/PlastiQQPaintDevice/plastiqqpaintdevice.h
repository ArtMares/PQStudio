#ifndef PLASTIQQPAINTDEVICE_H
#define PLASTIQQPAINTDEVICE_H

#include "plastiqobject.h"

class PlastiQQPaintDevice : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPaintDevice,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPaintDevice();
};

#endif // PLASTIQQPAINTDEVICE_H