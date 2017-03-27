#ifndef PLASTIQQSTYLEOPTIONPROGRESSBAR_H
#define PLASTIQQSTYLEOPTIONPROGRESSBAR_H

#include "plastiqobject.h"

class PlastiQQStyleOptionProgressBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionProgressBar,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionProgressBar();
};

#endif // PLASTIQQSTYLEOPTIONPROGRESSBAR_H