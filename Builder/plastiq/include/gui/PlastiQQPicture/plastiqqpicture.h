#ifndef PLASTIQQPICTURE_H
#define PLASTIQQPICTURE_H

#include "plastiqobject.h"

class PlastiQQPicture : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPicture,QPaintDevice)
    PLASTIQ_INHERITS(QPaintDevice)
public:    ~PlastiQQPicture();
};

#endif // PLASTIQQPICTURE_H