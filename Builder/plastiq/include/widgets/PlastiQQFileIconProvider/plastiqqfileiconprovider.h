#ifndef PLASTIQQFILEICONPROVIDER_H
#define PLASTIQQFILEICONPROVIDER_H

#include "plastiqobject.h"

class PlastiQQFileIconProvider : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFileIconProvider,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQFileIconProvider();
};

#endif // PLASTIQQFILEICONPROVIDER_H