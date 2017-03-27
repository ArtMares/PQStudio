#ifndef PLASTIQQFONTINFO_H
#define PLASTIQQFONTINFO_H

#include "plastiqobject.h"

class PlastiQQFontInfo : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFontInfo,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQFontInfo();
};

#endif // PLASTIQQFONTINFO_H