#ifndef PLASTIQQCAMERAVIEWFINDERSETTINGSCONTROL_H
#define PLASTIQQCAMERAVIEWFINDERSETTINGSCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraViewfinderSettingsControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraViewfinderSettingsControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraViewfinderSettingsControl();
};

#endif // PLASTIQQCAMERAVIEWFINDERSETTINGSCONTROL_H