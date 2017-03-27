#ifndef PLASTIQQFONTDATABASE_H
#define PLASTIQQFONTDATABASE_H

#include "plastiqobject.h"

class PlastiQQFontDatabase : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFontDatabase,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQFontDatabase();
};

#endif // PLASTIQQFONTDATABASE_H