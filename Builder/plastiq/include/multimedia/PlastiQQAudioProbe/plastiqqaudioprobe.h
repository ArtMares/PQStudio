#ifndef PLASTIQQAUDIOPROBE_H
#define PLASTIQQAUDIOPROBE_H

#include "plastiqobject.h"

class PlastiQQAudioProbe : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioProbe,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAudioProbe();
};

#endif // PLASTIQQAUDIOPROBE_H