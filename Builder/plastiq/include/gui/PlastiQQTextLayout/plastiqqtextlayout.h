#ifndef PLASTIQQTEXTLAYOUT_H
#define PLASTIQQTEXTLAYOUT_H

#include "plastiqobject.h"

class PlastiQQTextLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextLayout,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextLayout();
};

#endif // PLASTIQQTEXTLAYOUT_H