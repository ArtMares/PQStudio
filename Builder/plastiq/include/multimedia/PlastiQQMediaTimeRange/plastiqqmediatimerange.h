#ifndef PLASTIQQMEDIATIMERANGE_H
#define PLASTIQQMEDIATIMERANGE_H

#include "plastiqobject.h"

class PlastiQQMediaTimeRange : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMediaTimeRange,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMediaTimeRange();
};

#endif // PLASTIQQMEDIATIMERANGE_H