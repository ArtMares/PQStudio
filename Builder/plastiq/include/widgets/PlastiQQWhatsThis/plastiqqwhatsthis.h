#ifndef PLASTIQQWHATSTHIS_H
#define PLASTIQQWHATSTHIS_H

#include "plastiqobject.h"

class PlastiQQWhatsThis : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QWhatsThis,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQWhatsThis();
};

#endif // PLASTIQQWHATSTHIS_H