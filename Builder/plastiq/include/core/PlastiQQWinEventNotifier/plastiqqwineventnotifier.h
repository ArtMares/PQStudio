#ifndef PLASTIQQWINEVENTNOTIFIER_H
#define PLASTIQQWINEVENTNOTIFIER_H

#include "plastiqobject.h"

class PlastiQQWinEventNotifier : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QWinEventNotifier,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQWinEventNotifier();
};

#endif // PLASTIQQWINEVENTNOTIFIER_H