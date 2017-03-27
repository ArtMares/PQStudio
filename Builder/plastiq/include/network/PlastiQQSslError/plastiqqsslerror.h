#ifndef PLASTIQQSSLERROR_H
#define PLASTIQQSSLERROR_H

#include "plastiqobject.h"

class PlastiQQSslError : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSslError,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSslError();
};

#endif // PLASTIQQSSLERROR_H