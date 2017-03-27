#ifndef PLASTIQQSOUNDEFFECT_H
#define PLASTIQQSOUNDEFFECT_H

#include "plastiqobject.h"

class PlastiQQSoundEffect : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSoundEffect,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQSoundEffect();
};

#endif // PLASTIQQSOUNDEFFECT_H