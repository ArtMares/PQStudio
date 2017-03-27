#ifndef PLASTIQQLOCALE_H
#define PLASTIQQLOCALE_H

#include "plastiqobject.h"

class PlastiQQLocale : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QLocale,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQLocale();
};

#endif // PLASTIQQLOCALE_H