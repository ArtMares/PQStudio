#ifndef PLASTIQQSTYLEOPTIONRUBBERBAND_H
#define PLASTIQQSTYLEOPTIONRUBBERBAND_H

#include "plastiqobject.h"

class PlastiQQStyleOptionRubberBand : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionRubberBand,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionRubberBand();
};

#endif // PLASTIQQSTYLEOPTIONRUBBERBAND_H