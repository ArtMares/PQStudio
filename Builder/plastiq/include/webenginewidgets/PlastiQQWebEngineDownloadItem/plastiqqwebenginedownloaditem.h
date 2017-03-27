#ifndef PLASTIQQWEBENGINEDOWNLOADITEM_H
#define PLASTIQQWEBENGINEDOWNLOADITEM_H

#include "plastiqobject.h"

class PlastiQQWebEngineDownloadItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QWebEngineDownloadItem,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQWebEngineDownloadItem();
};

#endif // PLASTIQQWEBENGINEDOWNLOADITEM_H