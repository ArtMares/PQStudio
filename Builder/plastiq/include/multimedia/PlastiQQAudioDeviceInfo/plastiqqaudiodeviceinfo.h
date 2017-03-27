#ifndef PLASTIQQAUDIODEVICEINFO_H
#define PLASTIQQAUDIODEVICEINFO_H

#include "plastiqobject.h"

class PlastiQQAudioDeviceInfo : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAudioDeviceInfo,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAudioDeviceInfo();
};

#endif // PLASTIQQAUDIODEVICEINFO_H