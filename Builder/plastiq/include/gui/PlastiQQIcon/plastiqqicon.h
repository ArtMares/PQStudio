#ifndef PLASTIQQICON_H
#define PLASTIQQICON_H

#include "plastiqobject.h"

class PlastiQQIcon : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QIcon,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQIcon();
};

#endif // PLASTIQQICON_H