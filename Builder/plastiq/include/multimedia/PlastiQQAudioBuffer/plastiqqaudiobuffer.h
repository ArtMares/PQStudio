#ifndef PLASTIQQAUDIOBUFFER_H
#define PLASTIQQAUDIOBUFFER_H

#include "plastiqobject.h"

class PlastiQQAudioBuffer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAudioBuffer,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAudioBuffer();
};

#endif // PLASTIQQAUDIOBUFFER_H