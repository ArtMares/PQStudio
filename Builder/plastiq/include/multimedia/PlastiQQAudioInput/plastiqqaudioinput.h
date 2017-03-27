#ifndef PLASTIQQAUDIOINPUT_H
#define PLASTIQQAUDIOINPUT_H

#include "plastiqobject.h"

class PlastiQQAudioInput : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioInput,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAudioInput();
};

#endif // PLASTIQQAUDIOINPUT_H