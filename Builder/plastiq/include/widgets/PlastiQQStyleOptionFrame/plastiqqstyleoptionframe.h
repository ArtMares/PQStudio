#ifndef PLASTIQQSTYLEOPTIONFRAME_H
#define PLASTIQQSTYLEOPTIONFRAME_H

#include "plastiqobject.h"

class PlastiQQStyleOptionFrame : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionFrame,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionFrame();
};

#endif // PLASTIQQSTYLEOPTIONFRAME_H