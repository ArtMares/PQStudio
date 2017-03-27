#ifndef PLASTIQQCALENDARWIDGET_H
#define PLASTIQQCALENDARWIDGET_H

#include "plastiqobject.h"

class PlastiQQCalendarWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QCalendarWidget,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQCalendarWidget();
};

#endif // PLASTIQQCALENDARWIDGET_H