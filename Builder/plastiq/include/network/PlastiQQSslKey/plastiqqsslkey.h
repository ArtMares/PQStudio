#ifndef PLASTIQQSSLKEY_H
#define PLASTIQQSSLKEY_H

#include "plastiqobject.h"

class PlastiQQSslKey : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSslKey,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSslKey();
};

#endif // PLASTIQQSSLKEY_H