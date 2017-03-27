#ifndef PLASTIQQSESSIONMANAGER_H
#define PLASTIQQSESSIONMANAGER_H

#include "plastiqobject.h"

class PlastiQQSessionManager : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSessionManager,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQSessionManager();
};

#endif // PLASTIQQSESSIONMANAGER_H