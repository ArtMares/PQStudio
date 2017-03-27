#ifndef PLASTIQQNETWORKPROXYFACTORY_H
#define PLASTIQQNETWORKPROXYFACTORY_H

#include "plastiqobject.h"

class PlastiQQNetworkProxyFactory : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkProxyFactory,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkProxyFactory();
};

#endif // PLASTIQQNETWORKPROXYFACTORY_H