#ifndef PLASTIQQABSTRACTEVENTDISPATCHER_H
#define PLASTIQQABSTRACTEVENTDISPATCHER_H

#include "plastiqobject.h"

class PlastiQQAbstractEventDispatcher : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractEventDispatcher,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractEventDispatcher();
};

#endif // PLASTIQQABSTRACTEVENTDISPATCHER_H