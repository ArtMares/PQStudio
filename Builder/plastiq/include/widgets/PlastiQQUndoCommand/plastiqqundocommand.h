#ifndef PLASTIQQUNDOCOMMAND_H
#define PLASTIQQUNDOCOMMAND_H

#include "plastiqobject.h"

class PlastiQQUndoCommand : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QUndoCommand,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQUndoCommand();
};

#endif // PLASTIQQUNDOCOMMAND_H