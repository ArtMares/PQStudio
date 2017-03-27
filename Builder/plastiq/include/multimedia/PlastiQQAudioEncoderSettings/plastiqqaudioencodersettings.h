#ifndef PLASTIQQAUDIOENCODERSETTINGS_H
#define PLASTIQQAUDIOENCODERSETTINGS_H

#include "plastiqobject.h"

class PlastiQQAudioEncoderSettings : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAudioEncoderSettings,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAudioEncoderSettings();
};

#endif // PLASTIQQAUDIOENCODERSETTINGS_H