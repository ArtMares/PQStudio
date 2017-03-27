#ifndef PLASTIQQACTION_H
#define PLASTIQQACTION_H

#include "plastiqobject.h"

class PlastiQQAction : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAction,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAction();
};

#endif // PLASTIQQACTION_H