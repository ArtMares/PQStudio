#ifndef PLASTIQQTEXTCURSOR_H
#define PLASTIQQTEXTCURSOR_H

#include "plastiqobject.h"

class PlastiQQTextCursor : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextCursor,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextCursor();
};

#endif // PLASTIQQTEXTCURSOR_H