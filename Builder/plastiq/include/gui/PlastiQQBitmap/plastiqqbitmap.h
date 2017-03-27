#ifndef PLASTIQQBITMAP_H
#define PLASTIQQBITMAP_H

#include "plastiqobject.h"

class PlastiQQBitmap : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QBitmap,QPixmap)
    PLASTIQ_INHERITS(QPixmap)
public:    ~PlastiQQBitmap();
};

#endif // PLASTIQQBITMAP_H