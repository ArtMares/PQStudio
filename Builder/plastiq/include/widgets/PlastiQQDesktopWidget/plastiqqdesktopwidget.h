#ifndef PLASTIQQDESKTOPWIDGET_H
#define PLASTIQQDESKTOPWIDGET_H

#include "plastiqobject.h"

class PlastiQQDesktopWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QDesktopWidget,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQDesktopWidget();
};

#endif // PLASTIQQDESKTOPWIDGET_H