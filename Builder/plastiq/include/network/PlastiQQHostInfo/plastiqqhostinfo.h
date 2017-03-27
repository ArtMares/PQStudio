#ifndef PLASTIQQHOSTINFO_H
#define PLASTIQQHOSTINFO_H

#include "plastiqobject.h"

class PlastiQQHostInfo : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QHostInfo,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQHostInfo();
};

#endif // PLASTIQQHOSTINFO_H