#ifndef PLASTIQQSOUND_H
#define PLASTIQQSOUND_H

#include "plastiqobject.h"

class PlastiQQSound : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSound,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQSound();
};

#endif // PLASTIQQSOUND_H