#ifndef PLASTIQQTEXTBROWSER_H
#define PLASTIQQTEXTBROWSER_H

#include "plastiqobject.h"

class PlastiQQTextBrowser : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QTextBrowser,QTextEdit)
    PLASTIQ_INHERITS(QTextEdit)
public:    ~PlastiQQTextBrowser();
};

#endif // PLASTIQQTEXTBROWSER_H