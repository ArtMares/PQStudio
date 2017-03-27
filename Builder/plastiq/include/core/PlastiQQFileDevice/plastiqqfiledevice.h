#ifndef PLASTIQQFILEDEVICE_H
#define PLASTIQQFILEDEVICE_H

#include "plastiqobject.h"

class PlastiQQFileDevice : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFileDevice,QIODevice)
    PLASTIQ_INHERITS(QIODevice)
public:    ~PlastiQQFileDevice();
};

#endif // PLASTIQQFILEDEVICE_H