#ifndef PLASTIQQTEXTFRAMEFORMAT_H
#define PLASTIQQTEXTFRAMEFORMAT_H

#include "plastiqobject.h"

class PlastiQQTextFrameFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextFrameFormat,QTextFormat)
    PLASTIQ_INHERITS(QTextFormat)
public:    ~PlastiQQTextFrameFormat();
};

#endif // PLASTIQQTEXTFRAMEFORMAT_H