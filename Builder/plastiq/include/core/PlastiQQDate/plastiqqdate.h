#ifndef PLASTIQQDATE_H
#define PLASTIQQDATE_H

#include "plastiqobject.h"

class PlastiQQDate : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDate,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDate();
};

#endif // PLASTIQQDATE_H