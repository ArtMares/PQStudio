#ifndef PLASTIQQEXCEPTION_H
#define PLASTIQQEXCEPTION_H

#include "plastiqobject.h"

class PlastiQQException : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QException,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQException();
};

#endif // PLASTIQQEXCEPTION_H