#ifndef PLASTIQQAUDIOINPUTSELECTORCONTROL_H
#define PLASTIQQAUDIOINPUTSELECTORCONTROL_H

#include "plastiqobject.h"

class PlastiQQAudioInputSelectorControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioInputSelectorControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQAudioInputSelectorControl();
};

#endif // PLASTIQQAUDIOINPUTSELECTORCONTROL_H