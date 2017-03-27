#ifndef PLASTIQQNETWORKCACHEMETADATA_H
#define PLASTIQQNETWORKCACHEMETADATA_H

#include "plastiqobject.h"

class PlastiQQNetworkCacheMetaData : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkCacheMetaData,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkCacheMetaData();
};

#endif // PLASTIQQNETWORKCACHEMETADATA_H