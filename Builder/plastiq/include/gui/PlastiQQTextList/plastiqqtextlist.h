#ifndef PLASTIQQTEXTLIST_H
#define PLASTIQQTEXTLIST_H

#include "plastiqobject.h"

class PlastiQQTextList : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextList,QTextBlockGroup)
    PLASTIQ_INHERITS(QTextBlockGroup)
public:    ~PlastiQQTextList();
};

#endif // PLASTIQQTEXTLIST_H