#ifndef PLASTIQQWEBENGINEHISTORYITEM_H
#define PLASTIQQWEBENGINEHISTORYITEM_H

#include "plastiqobject.h"

class PlastiQQWebEngineHistoryItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QWebEngineHistoryItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQWebEngineHistoryItem();
};

#endif // PLASTIQQWEBENGINEHISTORYITEM_H