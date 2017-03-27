#ifndef PLASTIQQWEBENGINEVIEW_H
#define PLASTIQQWEBENGINEVIEW_H

#include "plastiqobject.h"

class PlastiQQWebEngineView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QWebEngineView,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQWebEngineView();
};

#endif // PLASTIQQWEBENGINEVIEW_H