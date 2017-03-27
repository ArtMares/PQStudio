#ifndef PLASTIQQMEDIATIMEINTERVAL_H
#define PLASTIQQMEDIATIMEINTERVAL_H

#include "plastiqobject.h"

class PlastiQQMediaTimeInterval : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMediaTimeInterval,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMediaTimeInterval();
};

#endif // PLASTIQQMEDIATIMEINTERVAL_H