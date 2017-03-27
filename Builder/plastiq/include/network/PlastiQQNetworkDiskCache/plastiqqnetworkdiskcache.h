#ifndef PLASTIQQNETWORKDISKCACHE_H
#define PLASTIQQNETWORKDISKCACHE_H

#include "plastiqobject.h"

class PlastiQQNetworkDiskCache : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QNetworkDiskCache,QAbstractNetworkCache)
    PLASTIQ_INHERITS(QAbstractNetworkCache)
public:    ~PlastiQQNetworkDiskCache();
};

#endif // PLASTIQQNETWORKDISKCACHE_H