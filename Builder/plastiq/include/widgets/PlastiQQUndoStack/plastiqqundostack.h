#ifndef PLASTIQQUNDOSTACK_H
#define PLASTIQQUNDOSTACK_H

#include "plastiqobject.h"

class PlastiQQUndoStack : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QUndoStack,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQUndoStack();
};

#endif // PLASTIQQUNDOSTACK_H