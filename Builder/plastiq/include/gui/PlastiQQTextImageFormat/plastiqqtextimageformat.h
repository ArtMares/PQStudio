#ifndef PLASTIQQTEXTIMAGEFORMAT_H
#define PLASTIQQTEXTIMAGEFORMAT_H

#include "plastiqobject.h"

class PlastiQQTextImageFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextImageFormat,QTextCharFormat)
    PLASTIQ_INHERITS(QTextCharFormat)
public:    ~PlastiQQTextImageFormat();
};

#endif // PLASTIQQTEXTIMAGEFORMAT_H