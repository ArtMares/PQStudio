#ifndef PLASTIQQEVENTLOOP_H
#define PLASTIQQEVENTLOOP_H

#include "plastiqobject.h"

class PlastiQQEventLoop : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QEventLoop,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQEventLoop();
};

#endif // PLASTIQQEVENTLOOP_H