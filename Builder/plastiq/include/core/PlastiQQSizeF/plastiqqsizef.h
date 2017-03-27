#ifndef PLASTIQQSIZEF_H
#define PLASTIQQSIZEF_H

#include "plastiqobject.h"

class PlastiQQSizeF : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSizeF,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSizeF();
};

#endif // PLASTIQQSIZEF_H