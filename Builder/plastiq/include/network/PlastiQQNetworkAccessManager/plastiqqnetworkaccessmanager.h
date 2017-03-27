#ifndef PLASTIQQNETWORKACCESSMANAGER_H
#define PLASTIQQNETWORKACCESSMANAGER_H

#include "plastiqobject.h"

class PlastiQQNetworkAccessManager : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QNetworkAccessManager,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQNetworkAccessManager();
};

#endif // PLASTIQQNETWORKACCESSMANAGER_H