#ifndef PLASTIQQSTORAGEINFO_H
#define PLASTIQQSTORAGEINFO_H

#include "plastiqobject.h"

class PlastiQQStorageInfo : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStorageInfo,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStorageInfo();
};

#endif // PLASTIQQSTORAGEINFO_H