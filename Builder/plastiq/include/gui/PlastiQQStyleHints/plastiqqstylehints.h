#ifndef PLASTIQQSTYLEHINTS_H
#define PLASTIQQSTYLEHINTS_H

#include "plastiqobject.h"

class PlastiQQStyleHints : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QStyleHints,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQStyleHints();
};

#endif // PLASTIQQSTYLEHINTS_H