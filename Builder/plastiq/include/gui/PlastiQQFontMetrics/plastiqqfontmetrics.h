#ifndef PLASTIQQFONTMETRICS_H
#define PLASTIQQFONTMETRICS_H

#include "plastiqobject.h"

class PlastiQQFontMetrics : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFontMetrics,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQFontMetrics();
};

#endif // PLASTIQQFONTMETRICS_H