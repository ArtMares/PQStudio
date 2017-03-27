#ifndef PLASTIQQIDENTITYPROXYMODEL_H
#define PLASTIQQIDENTITYPROXYMODEL_H

#include "plastiqobject.h"

class PlastiQQIdentityProxyModel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QIdentityProxyModel,QAbstractProxyModel)
    PLASTIQ_INHERITS(QAbstractProxyModel)
public:    ~PlastiQQIdentityProxyModel();
};

#endif // PLASTIQQIDENTITYPROXYMODEL_H