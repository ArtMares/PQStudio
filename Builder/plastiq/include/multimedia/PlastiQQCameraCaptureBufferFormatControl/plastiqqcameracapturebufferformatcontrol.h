#ifndef PLASTIQQCAMERACAPTUREBUFFERFORMATCONTROL_H
#define PLASTIQQCAMERACAPTUREBUFFERFORMATCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraCaptureBufferFormatControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraCaptureBufferFormatControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraCaptureBufferFormatControl();
};

#endif // PLASTIQQCAMERACAPTUREBUFFERFORMATCONTROL_H