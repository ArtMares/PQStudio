#ifndef PLASTIQQPANGESTURE_H
#define PLASTIQQPANGESTURE_H

#include "plastiqobject.h"

class PlastiQQPanGesture : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPanGesture,QGesture)
    PLASTIQ_INHERITS(QGesture)
public:    ~PlastiQQPanGesture();
};

#endif // PLASTIQQPANGESTURE_H