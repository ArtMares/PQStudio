#ifndef PLASTIQQTEXTTABLEFORMAT_H
#define PLASTIQQTEXTTABLEFORMAT_H

#include "plastiqobject.h"

class PlastiQQTextTableFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextTableFormat,QTextFrameFormat)
    PLASTIQ_INHERITS(QTextFrameFormat)
public:    ~PlastiQQTextTableFormat();
};

#endif // PLASTIQQTEXTTABLEFORMAT_H