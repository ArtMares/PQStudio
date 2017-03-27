#ifndef PLASTIQQSTANDARDPATHS_H
#define PLASTIQQSTANDARDPATHS_H

#include "plastiqobject.h"

class PlastiQQStandardPaths : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStandardPaths,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStandardPaths();
};

#endif // PLASTIQQSTANDARDPATHS_H