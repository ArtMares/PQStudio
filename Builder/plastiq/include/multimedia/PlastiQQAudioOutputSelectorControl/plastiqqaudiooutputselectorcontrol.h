#ifndef PLASTIQQAUDIOOUTPUTSELECTORCONTROL_H
#define PLASTIQQAUDIOOUTPUTSELECTORCONTROL_H

#include "plastiqobject.h"

class PlastiQQAudioOutputSelectorControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioOutputSelectorControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQAudioOutputSelectorControl();
};

#endif // PLASTIQQAUDIOOUTPUTSELECTORCONTROL_H