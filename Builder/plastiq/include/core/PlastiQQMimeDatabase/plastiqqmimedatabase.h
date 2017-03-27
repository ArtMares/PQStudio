#ifndef PLASTIQQMIMEDATABASE_H
#define PLASTIQQMIMEDATABASE_H

#include "plastiqobject.h"

class PlastiQQMimeDatabase : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMimeDatabase,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMimeDatabase();
};

#endif // PLASTIQQMIMEDATABASE_H