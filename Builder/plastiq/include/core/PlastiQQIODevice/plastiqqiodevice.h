#ifndef PLASTIQQIODEVICE_H
#define PLASTIQQIODEVICE_H

#include "plastiqobject.h"

class PlastiQQIODevice : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QIODevice,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQIODevice();
};

#endif // PLASTIQQIODEVICE_H