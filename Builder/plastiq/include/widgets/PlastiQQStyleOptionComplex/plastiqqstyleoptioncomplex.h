#ifndef PLASTIQQSTYLEOPTIONCOMPLEX_H
#define PLASTIQQSTYLEOPTIONCOMPLEX_H

#include "plastiqobject.h"

class PlastiQQStyleOptionComplex : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionComplex,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionComplex();
};

#endif // PLASTIQQSTYLEOPTIONCOMPLEX_H