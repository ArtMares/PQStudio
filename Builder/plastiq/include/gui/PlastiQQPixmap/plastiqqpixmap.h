#ifndef PLASTIQQPIXMAP_H
#define PLASTIQQPIXMAP_H

#include "plastiqobject.h"

class PlastiQQPixmap : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPixmap,QPaintDevice)
    PLASTIQ_INHERITS(QPaintDevice)
public:    ~PlastiQQPixmap();
};

#endif // PLASTIQQPIXMAP_H