#ifndef PLASTIQQCAMERAIMAGECAPTURECONTROL_H
#define PLASTIQQCAMERAIMAGECAPTURECONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraImageCaptureControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraImageCaptureControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraImageCaptureControl();
};

#endif // PLASTIQQCAMERAIMAGECAPTURECONTROL_H