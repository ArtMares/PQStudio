#ifndef PLASTIQQCURSOR_H
#define PLASTIQQCURSOR_H

#include "plastiqobject.h"

class PlastiQQCursor : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QCursor,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQCursor();
};

#endif // PLASTIQQCURSOR_H