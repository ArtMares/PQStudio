#ifndef PLASTIQQFONTMETRICSF_H
#define PLASTIQQFONTMETRICSF_H

#include "plastiqobject.h"

class PlastiQQFontMetricsF : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFontMetricsF,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQFontMetricsF();
};

#endif // PLASTIQQFONTMETRICSF_H