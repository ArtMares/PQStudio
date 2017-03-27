#ifndef PLASTIQQSOCKETNOTIFIER_H
#define PLASTIQQSOCKETNOTIFIER_H

#include "plastiqobject.h"

class PlastiQQSocketNotifier : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSocketNotifier,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQSocketNotifier();
};

#endif // PLASTIQQSOCKETNOTIFIER_H