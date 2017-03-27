#ifndef PLASTIQQSYSINFO_H
#define PLASTIQQSYSINFO_H

#include "plastiqobject.h"

class PlastiQQSysInfo : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSysInfo,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSysInfo();
};

#endif // PLASTIQQSYSINFO_H