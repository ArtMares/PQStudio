#ifndef PLASTIQQCAMERAFLASHCONTROL_H
#define PLASTIQQCAMERAFLASHCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraFlashControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraFlashControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraFlashControl();
};

#endif // PLASTIQQCAMERAFLASHCONTROL_H