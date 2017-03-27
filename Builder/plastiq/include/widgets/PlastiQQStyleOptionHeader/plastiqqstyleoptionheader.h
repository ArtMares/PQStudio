#ifndef PLASTIQQSTYLEOPTIONHEADER_H
#define PLASTIQQSTYLEOPTIONHEADER_H

#include "plastiqobject.h"

class PlastiQQStyleOptionHeader : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionHeader,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionHeader();
};

#endif // PLASTIQQSTYLEOPTIONHEADER_H