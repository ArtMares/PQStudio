#ifndef PLASTIQQTAPANDHOLDGESTURE_H
#define PLASTIQQTAPANDHOLDGESTURE_H

#include "plastiqobject.h"

class PlastiQQTapAndHoldGesture : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTapAndHoldGesture,QGesture)
    PLASTIQ_INHERITS(QGesture)
public:    ~PlastiQQTapAndHoldGesture();
};

#endif // PLASTIQQTAPANDHOLDGESTURE_H