#ifndef PLASTIQQTEXTBLOCKGROUP_H
#define PLASTIQQTEXTBLOCKGROUP_H

#include "plastiqobject.h"

class PlastiQQTextBlockGroup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextBlockGroup,QTextObject)
    PLASTIQ_INHERITS(QTextObject)
public:    ~PlastiQQTextBlockGroup();
};

#endif // PLASTIQQTEXTBLOCKGROUP_H