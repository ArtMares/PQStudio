#ifndef PLASTIQQABSTRACTVIDEOFILTER_H
#define PLASTIQQABSTRACTVIDEOFILTER_H

#include "plastiqobject.h"

class PlastiQQAbstractVideoFilter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractVideoFilter,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractVideoFilter();
};

#endif // PLASTIQQABSTRACTVIDEOFILTER_H