#ifndef PLASTIQQPIXELFORMAT_H
#define PLASTIQQPIXELFORMAT_H

#include "plastiqobject.h"

class PlastiQQPixelFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPixelFormat,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPixelFormat();
};

#endif // PLASTIQQPIXELFORMAT_H