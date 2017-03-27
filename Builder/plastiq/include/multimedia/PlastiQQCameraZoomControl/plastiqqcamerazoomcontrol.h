#ifndef PLASTIQQCAMERAZOOMCONTROL_H
#define PLASTIQQCAMERAZOOMCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraZoomControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraZoomControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraZoomControl();
};

#endif // PLASTIQQCAMERAZOOMCONTROL_H