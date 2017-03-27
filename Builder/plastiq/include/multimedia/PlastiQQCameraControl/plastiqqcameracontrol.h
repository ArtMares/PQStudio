#ifndef PLASTIQQCAMERACONTROL_H
#define PLASTIQQCAMERACONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraControl();
};

#endif // PLASTIQQCAMERACONTROL_H