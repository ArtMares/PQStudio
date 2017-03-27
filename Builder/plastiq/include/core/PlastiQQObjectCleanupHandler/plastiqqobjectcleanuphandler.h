#ifndef PLASTIQQOBJECTCLEANUPHANDLER_H
#define PLASTIQQOBJECTCLEANUPHANDLER_H

#include "plastiqobject.h"

class PlastiQQObjectCleanupHandler : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QObjectCleanupHandler,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQObjectCleanupHandler();
};

#endif // PLASTIQQOBJECTCLEANUPHANDLER_H