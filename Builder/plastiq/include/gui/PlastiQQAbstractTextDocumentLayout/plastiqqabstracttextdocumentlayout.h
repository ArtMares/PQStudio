#ifndef PLASTIQQABSTRACTTEXTDOCUMENTLAYOUT_H
#define PLASTIQQABSTRACTTEXTDOCUMENTLAYOUT_H

#include "plastiqobject.h"

class PlastiQQAbstractTextDocumentLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractTextDocumentLayout,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractTextDocumentLayout();
};

#endif // PLASTIQQABSTRACTTEXTDOCUMENTLAYOUT_H