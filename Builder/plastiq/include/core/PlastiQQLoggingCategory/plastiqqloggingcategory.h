#ifndef PLASTIQQLOGGINGCATEGORY_H
#define PLASTIQQLOGGINGCATEGORY_H

#include "plastiqobject.h"

class PlastiQQLoggingCategory : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QLoggingCategory,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQLoggingCategory();
};

#endif // PLASTIQQLOGGINGCATEGORY_H