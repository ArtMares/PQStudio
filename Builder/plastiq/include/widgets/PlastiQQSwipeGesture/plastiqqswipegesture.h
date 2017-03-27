#ifndef PLASTIQQSWIPEGESTURE_H
#define PLASTIQQSWIPEGESTURE_H

#include "plastiqobject.h"

class PlastiQQSwipeGesture : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSwipeGesture,QGesture)
    PLASTIQ_INHERITS(QGesture)
public:    ~PlastiQQSwipeGesture();
};

#endif // PLASTIQQSWIPEGESTURE_H