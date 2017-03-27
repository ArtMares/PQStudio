#ifndef PLASTIQQTEXTBOUNDARYFINDER_H
#define PLASTIQQTEXTBOUNDARYFINDER_H

#include "plastiqobject.h"

class PlastiQQTextBoundaryFinder : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextBoundaryFinder,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextBoundaryFinder();
};

#endif // PLASTIQQTEXTBOUNDARYFINDER_H