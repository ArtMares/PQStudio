#ifndef PLASTIQQPINCHGESTURE_H
#define PLASTIQQPINCHGESTURE_H

#include "plastiqobject.h"

class PlastiQQPinchGesture : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPinchGesture,QGesture)
    PLASTIQ_INHERITS(QGesture)
public:    ~PlastiQQPinchGesture();
};

#endif // PLASTIQQPINCHGESTURE_H