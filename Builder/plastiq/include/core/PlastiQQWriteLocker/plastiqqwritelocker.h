#ifndef PLASTIQQWRITELOCKER_H
#define PLASTIQQWRITELOCKER_H

#include "plastiqobject.h"

class PlastiQQWriteLocker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QWriteLocker,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQWriteLocker();
};

#endif // PLASTIQQWRITELOCKER_H