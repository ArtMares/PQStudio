#ifndef PLASTIQQTEXTFRAGMENT_H
#define PLASTIQQTEXTFRAGMENT_H

#include "plastiqobject.h"

class PlastiQQTextFragment : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextFragment,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextFragment();
};

#endif // PLASTIQQTEXTFRAGMENT_H