#ifndef PLASTIQQSTRINGLIST_H
#define PLASTIQQSTRINGLIST_H

#include "plastiqobject.h"

class PlastiQQStringList : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStringList,QList)
    PLASTIQ_INHERITS(QList)
public:    ~PlastiQQStringList();
};

#endif // PLASTIQQSTRINGLIST_H