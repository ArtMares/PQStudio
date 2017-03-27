#ifndef PLASTIQQCAMERAVIEWFINDERSETTINGSCONTROL2_H
#define PLASTIQQCAMERAVIEWFINDERSETTINGSCONTROL2_H

#include "plastiqobject.h"

class PlastiQQCameraViewfinderSettingsControl2 : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraViewfinderSettingsControl2,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraViewfinderSettingsControl2();
};

#endif // PLASTIQQCAMERAVIEWFINDERSETTINGSCONTROL2_H