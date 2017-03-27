#ifndef PLASTIQQVIDEOENCODERSETTINGSCONTROL_H
#define PLASTIQQVIDEOENCODERSETTINGSCONTROL_H

#include "plastiqobject.h"

class PlastiQQVideoEncoderSettingsControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVideoEncoderSettingsControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQVideoEncoderSettingsControl();
};

#endif // PLASTIQQVIDEOENCODERSETTINGSCONTROL_H