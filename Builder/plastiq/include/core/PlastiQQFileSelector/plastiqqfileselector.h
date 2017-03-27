#ifndef PLASTIQQFILESELECTOR_H
#define PLASTIQQFILESELECTOR_H

#include "plastiqobject.h"

class PlastiQQFileSelector : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QFileSelector,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQFileSelector();
};

#endif // PLASTIQQFILESELECTOR_H