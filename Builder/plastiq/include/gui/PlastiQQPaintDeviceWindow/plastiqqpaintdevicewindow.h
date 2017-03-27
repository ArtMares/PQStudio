#ifndef PLASTIQQPAINTDEVICEWINDOW_H
#define PLASTIQQPAINTDEVICEWINDOW_H

#include "plastiqobject.h"

class PlastiQQPaintDeviceWindow : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWindow,QPaintDeviceWindow,QWindow)
    PLASTIQ_INHERITS(QWindow,QPaintDevice)
public:    ~PlastiQQPaintDeviceWindow();
};

#endif // PLASTIQQPAINTDEVICEWINDOW_H