#ifndef PLASTIQQCAMERAEXPOSURECONTROL_H
#define PLASTIQQCAMERAEXPOSURECONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraExposureControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraExposureControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraExposureControl();
};

#endif // PLASTIQQCAMERAEXPOSURECONTROL_H