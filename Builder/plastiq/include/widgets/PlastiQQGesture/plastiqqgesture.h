#ifndef PLASTIQQGESTURE_H
#define PLASTIQQGESTURE_H

#include "plastiqobject.h"

class PlastiQQGesture : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGesture,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQGesture();
};

#endif // PLASTIQQGESTURE_H