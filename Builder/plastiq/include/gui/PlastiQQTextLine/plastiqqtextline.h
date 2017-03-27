#ifndef PLASTIQQTEXTLINE_H
#define PLASTIQQTEXTLINE_H

#include "plastiqobject.h"

class PlastiQQTextLine : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextLine,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextLine();
};

#endif // PLASTIQQTEXTLINE_H