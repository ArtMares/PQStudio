#ifndef PLASTIQQHTTPMULTIPART_H
#define PLASTIQQHTTPMULTIPART_H

#include "plastiqobject.h"

class PlastiQQHttpMultiPart : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHttpMultiPart,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQHttpMultiPart();
};

#endif // PLASTIQQHTTPMULTIPART_H