#ifndef PLASTIQQUNDOGROUP_H
#define PLASTIQQUNDOGROUP_H

#include "plastiqobject.h"

class PlastiQQUndoGroup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QUndoGroup,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQUndoGroup();
};

#endif // PLASTIQQUNDOGROUP_H