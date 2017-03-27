#ifndef PLASTIQQRAWFONT_H
#define PLASTIQQRAWFONT_H

#include "plastiqobject.h"

class PlastiQQRawFont : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRawFont,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQRawFont();
};

#endif // PLASTIQQRAWFONT_H