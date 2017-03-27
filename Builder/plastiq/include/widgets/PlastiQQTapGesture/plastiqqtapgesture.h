#ifndef PLASTIQQTAPGESTURE_H
#define PLASTIQQTAPGESTURE_H

#include "plastiqobject.h"

class PlastiQQTapGesture : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTapGesture,QGesture)
    PLASTIQ_INHERITS(QGesture)
public:    ~PlastiQQTapGesture();
};

#endif // PLASTIQQTAPGESTURE_H