#ifndef PLASTIQQFONT_H
#define PLASTIQQFONT_H

#include "plastiqobject.h"

class PlastiQQFont : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFont,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQFont();
};

#endif // PLASTIQQFONT_H