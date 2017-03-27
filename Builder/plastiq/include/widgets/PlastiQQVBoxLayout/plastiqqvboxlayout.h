#ifndef PLASTIQQVBOXLAYOUT_H
#define PLASTIQQVBOXLAYOUT_H

#include "plastiqobject.h"

class PlastiQQVBoxLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVBoxLayout,QBoxLayout)
    PLASTIQ_INHERITS(QBoxLayout)
public:    ~PlastiQQVBoxLayout();
};

#endif // PLASTIQQVBOXLAYOUT_H