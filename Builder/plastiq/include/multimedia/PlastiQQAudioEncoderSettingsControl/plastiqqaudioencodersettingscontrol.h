#ifndef PLASTIQQAUDIOENCODERSETTINGSCONTROL_H
#define PLASTIQQAUDIOENCODERSETTINGSCONTROL_H

#include "plastiqobject.h"

class PlastiQQAudioEncoderSettingsControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioEncoderSettingsControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQAudioEncoderSettingsControl();
};

#endif // PLASTIQQAUDIOENCODERSETTINGSCONTROL_H