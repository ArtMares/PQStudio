#ifndef PLASTIQQNETWORKCONFIGURATIONMANAGER_H
#define PLASTIQQNETWORKCONFIGURATIONMANAGER_H

#include "plastiqobject.h"

class PlastiQQNetworkConfigurationManager : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QNetworkConfigurationManager,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQNetworkConfigurationManager();
};

#endif // PLASTIQQNETWORKCONFIGURATIONMANAGER_H