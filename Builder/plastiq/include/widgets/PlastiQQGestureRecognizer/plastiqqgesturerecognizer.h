#ifndef PLASTIQQGESTURERECOGNIZER_H
#define PLASTIQQGESTURERECOGNIZER_H

#include "plastiqobject.h"

class PlastiQQGestureRecognizer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGestureRecognizer,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQGestureRecognizer();
};

#endif // PLASTIQQGESTURERECOGNIZER_H