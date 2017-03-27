#ifndef PLASTIQQSTATICTEXT_H
#define PLASTIQQSTATICTEXT_H

#include "plastiqobject.h"

class PlastiQQStaticText : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStaticText,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStaticText();
};

#endif // PLASTIQQSTATICTEXT_H