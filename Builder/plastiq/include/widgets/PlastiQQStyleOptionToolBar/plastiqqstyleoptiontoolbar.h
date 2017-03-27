#ifndef PLASTIQQSTYLEOPTIONTOOLBAR_H
#define PLASTIQQSTYLEOPTIONTOOLBAR_H

#include "plastiqobject.h"

class PlastiQQStyleOptionToolBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionToolBar,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionToolBar();
};

#endif // PLASTIQQSTYLEOPTIONTOOLBAR_H