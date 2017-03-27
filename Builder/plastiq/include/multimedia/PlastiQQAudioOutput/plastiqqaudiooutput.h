#ifndef PLASTIQQAUDIOOUTPUT_H
#define PLASTIQQAUDIOOUTPUT_H

#include "plastiqobject.h"

class PlastiQQAudioOutput : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioOutput,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAudioOutput();
};

#endif // PLASTIQQAUDIOOUTPUT_H