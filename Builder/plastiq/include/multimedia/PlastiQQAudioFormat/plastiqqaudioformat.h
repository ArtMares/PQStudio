#ifndef PLASTIQQAUDIOFORMAT_H
#define PLASTIQQAUDIOFORMAT_H

#include "plastiqobject.h"

class PlastiQQAudioFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAudioFormat,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAudioFormat();
};

#endif // PLASTIQQAUDIOFORMAT_H