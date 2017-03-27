#ifndef PLASTIQQNETWORKCONFIGURATION_H
#define PLASTIQQNETWORKCONFIGURATION_H

#include "plastiqobject.h"

class PlastiQQNetworkConfiguration : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkConfiguration,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkConfiguration();
};

#endif // PLASTIQQNETWORKCONFIGURATION_H