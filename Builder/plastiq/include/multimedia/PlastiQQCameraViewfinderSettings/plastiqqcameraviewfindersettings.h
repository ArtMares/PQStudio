#ifndef PLASTIQQCAMERAVIEWFINDERSETTINGS_H
#define PLASTIQQCAMERAVIEWFINDERSETTINGS_H

#include "plastiqobject.h"

class PlastiQQCameraViewfinderSettings : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QCameraViewfinderSettings,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQCameraViewfinderSettings();
};

#endif // PLASTIQQCAMERAVIEWFINDERSETTINGS_H