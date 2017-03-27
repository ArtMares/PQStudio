#ifndef PLASTIQQPAGEDPAINTDEVICE_H
#define PLASTIQQPAGEDPAINTDEVICE_H

#include "plastiqobject.h"

class PlastiQQPagedPaintDevice : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPagedPaintDevice,QPaintDevice)
    PLASTIQ_INHERITS(QPaintDevice)
public:    ~PlastiQQPagedPaintDevice();
};

#endif // PLASTIQQPAGEDPAINTDEVICE_H