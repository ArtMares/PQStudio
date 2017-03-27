#ifndef PLASTIQQABSTRACTNATIVEEVENTFILTER_H
#define PLASTIQQABSTRACTNATIVEEVENTFILTER_H

#include "plastiqobject.h"

class PlastiQQAbstractNativeEventFilter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAbstractNativeEventFilter,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAbstractNativeEventFilter();
};

#endif // PLASTIQQABSTRACTNATIVEEVENTFILTER_H