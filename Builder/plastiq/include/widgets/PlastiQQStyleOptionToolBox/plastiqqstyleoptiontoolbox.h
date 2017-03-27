#ifndef PLASTIQQSTYLEOPTIONTOOLBOX_H
#define PLASTIQQSTYLEOPTIONTOOLBOX_H

#include "plastiqobject.h"

class PlastiQQStyleOptionToolBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionToolBox,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionToolBox();
};

#endif // PLASTIQQSTYLEOPTIONTOOLBOX_H