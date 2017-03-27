#ifndef PLASTIQQPALETTE_H
#define PLASTIQQPALETTE_H

#include "plastiqobject.h"

class PlastiQQPalette : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPalette,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPalette();
};

#endif // PLASTIQQPALETTE_H