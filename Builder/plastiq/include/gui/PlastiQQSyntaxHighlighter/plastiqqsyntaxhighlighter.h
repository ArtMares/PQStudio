#ifndef PLASTIQQSYNTAXHIGHLIGHTER_H
#define PLASTIQQSYNTAXHIGHLIGHTER_H

#include "plastiqobject.h"

class PlastiQQSyntaxHighlighter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSyntaxHighlighter,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQSyntaxHighlighter();
};

#endif // PLASTIQQSYNTAXHIGHLIGHTER_H