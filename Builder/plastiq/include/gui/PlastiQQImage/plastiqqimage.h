#ifndef PLASTIQQIMAGE_H
#define PLASTIQQIMAGE_H

#include "plastiqobject.h"

class PlastiQQImage : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QImage,QPaintDevice)
    PLASTIQ_INHERITS(QPaintDevice)
public:    ~PlastiQQImage();
};

#endif // PLASTIQQIMAGE_H