#ifndef PLASTIQQREADLOCKER_H
#define PLASTIQQREADLOCKER_H

#include "plastiqobject.h"

class PlastiQQReadLocker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QReadLocker,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQReadLocker();
};

#endif // PLASTIQQREADLOCKER_H