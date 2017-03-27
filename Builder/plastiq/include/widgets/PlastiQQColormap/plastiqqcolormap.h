#ifndef PLASTIQQCOLORMAP_H
#define PLASTIQQCOLORMAP_H

#include "plastiqobject.h"

class PlastiQQColormap : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QColormap,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQColormap();
};

#endif // PLASTIQQCOLORMAP_H