#ifndef PLASTIQQABSTRACTNETWORKCACHE_H
#define PLASTIQQABSTRACTNETWORKCACHE_H

#include "plastiqobject.h"

class PlastiQQAbstractNetworkCache : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractNetworkCache,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractNetworkCache();
};

#endif // PLASTIQQABSTRACTNETWORKCACHE_H