#ifndef PLASTIQQWIDGET_H
#define PLASTIQQWIDGET_H

#include "plastiqobject.h"

class PlastiQQWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QWidget,QObject)
    PLASTIQ_INHERITS(QObject,QPaintDevice)
public:    ~PlastiQQWidget();
};

#endif // PLASTIQQWIDGET_H