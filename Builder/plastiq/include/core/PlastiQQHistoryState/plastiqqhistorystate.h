#ifndef PLASTIQQHISTORYSTATE_H
#define PLASTIQQHISTORYSTATE_H

#include "plastiqobject.h"

class PlastiQQHistoryState : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHistoryState,QAbstractState)
    PLASTIQ_INHERITS(QAbstractState)
public:    ~PlastiQQHistoryState();
};

#endif // PLASTIQQHISTORYSTATE_H