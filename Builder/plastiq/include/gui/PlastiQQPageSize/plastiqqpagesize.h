#ifndef PLASTIQQPAGESIZE_H
#define PLASTIQQPAGESIZE_H

#include "plastiqobject.h"

class PlastiQQPageSize : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPageSize,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPageSize();
};

#endif // PLASTIQQPAGESIZE_H