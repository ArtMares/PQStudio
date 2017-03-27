#ifndef PLASTIQQGRAPHICSPROXYWIDGET_H
#define PLASTIQQGRAPHICSPROXYWIDGET_H

#include "plastiqobject.h"

class PlastiQQGraphicsProxyWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsProxyWidget,QGraphicsWidget)
    PLASTIQ_INHERITS(QGraphicsWidget)
public:    ~PlastiQQGraphicsProxyWidget();
};

#endif // PLASTIQQGRAPHICSPROXYWIDGET_H