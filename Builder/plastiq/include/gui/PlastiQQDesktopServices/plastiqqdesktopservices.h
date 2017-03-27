#ifndef PLASTIQQDESKTOPSERVICES_H
#define PLASTIQQDESKTOPSERVICES_H

#include "plastiqobject.h"

class PlastiQQDesktopServices : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDesktopServices,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDesktopServices();
};

#endif // PLASTIQQDESKTOPSERVICES_H