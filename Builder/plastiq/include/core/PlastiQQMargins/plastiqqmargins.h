#ifndef PLASTIQQMARGINS_H
#define PLASTIQQMARGINS_H

#include "plastiqobject.h"

class PlastiQQMargins : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMargins,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMargins();
};

#endif // PLASTIQQMARGINS_H