#ifndef PLASTIQQSSLCONFIGURATION_H
#define PLASTIQQSSLCONFIGURATION_H

#include "plastiqobject.h"

class PlastiQQSslConfiguration : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSslConfiguration,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSslConfiguration();
};

#endif // PLASTIQQSSLCONFIGURATION_H