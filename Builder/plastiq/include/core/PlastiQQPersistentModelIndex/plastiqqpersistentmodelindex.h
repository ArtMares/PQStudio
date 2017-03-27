#ifndef PLASTIQQPERSISTENTMODELINDEX_H
#define PLASTIQQPERSISTENTMODELINDEX_H

#include "plastiqobject.h"

class PlastiQQPersistentModelIndex : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPersistentModelIndex,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPersistentModelIndex();
};

#endif // PLASTIQQPERSISTENTMODELINDEX_H