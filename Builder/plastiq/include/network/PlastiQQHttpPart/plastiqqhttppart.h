#ifndef PLASTIQQHTTPPART_H
#define PLASTIQQHTTPPART_H

#include "plastiqobject.h"

class PlastiQQHttpPart : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QHttpPart,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQHttpPart();
};

#endif // PLASTIQQHTTPPART_H