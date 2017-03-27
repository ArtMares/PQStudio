#include "plastiqmethod.h"
#include "plastiqqwebenginepage.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QWebEnginePage> 
#include <QAction>
#include <QColor>
#include <QSizeF>
#include <QWebEngineContextMenuData>
#include <QMenu>
#include <QWebEngineHistory>
#include <QIcon>
#include <QUrl>
#include <QWebEngineProfile>
#include <QPointF>
#include <QString>
#include <QWebEngineSettings>
#include <QWidget>
#include <QWebChannel>
#include <QWebEngineCertificateError>
#include <QStringList>
#include <QAuthenticator>
#include <QWebEngineFullScreenRequest>
#include <QRect>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEnginePage::plastiqConstructors = {
    { "QWebEnginePage()", { "QWebEnginePage", "", "QWebEnginePage*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWebEnginePage(QObject*)", { "QWebEnginePage", "QObject*", "QWebEnginePage*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWebEnginePage(QWebEngineProfile*)", { "QWebEnginePage", "QWebEngineProfile*", "QWebEnginePage*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWebEnginePage(QWebEngineProfile*,QObject*)", { "QWebEnginePage", "QWebEngineProfile*,QObject*", "QWebEnginePage*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEnginePage::plastiqMethods = {
    { "action(enum)", { "action", "WebAction", "QAction*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundColor()", { "backgroundColor", "", "QColor", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contentsSize()", { "contentsSize", "", "QSizeF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contextMenuData()", { "contextMenuData", "", "const QWebEngineContextMenuData&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createStandardContextMenu()", { "createStandardContextMenu", "", "QMenu*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findText(QString)", { "findText", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findText(QString,enum)", { "findText", "QString&,FindFlags", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findText(QString,enum,FunctorOrLambda)", { "findText", "QString&,FindFlags,FunctorOrLambda", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasSelection()", { "hasSelection", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "history()", { "history", "", "QWebEngineHistory*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconUrl()", { "iconUrl", "", "QUrl", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAudioMuted()", { "isAudioMuted", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QUrl&)", { "load", "QUrl&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "print(QPrinter*,FunctorOrLambda)", { "print", "QPrinter*,FunctorOrLambda", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "printToPdf(QString)", { "printToPdf", "QString&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "printToPdf(QString,QPageLayout&)", { "printToPdf", "QString&,QPageLayout&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "printToPdf(FunctorOrLambda)", { "printToPdf", "FunctorOrLambda", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "printToPdf(FunctorOrLambda,QPageLayout&)", { "printToPdf", "FunctorOrLambda,QPageLayout&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "profile()", { "profile", "", "QWebEngineProfile*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "recentlyAudible()", { "recentlyAudible", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceMisspelledWord(QString)", { "replaceMisspelledWord", "QString&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedUrl()", { "requestedUrl", "", "QUrl", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "runJavaScript(QString,int,FunctorOrLambda)", { "runJavaScript", "QString&,quint32,FunctorOrLambda", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "runJavaScript(QString,int)", { "runJavaScript", "QString&,quint32", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "runJavaScript(QString,FunctorOrLambda)", { "runJavaScript", "QString&,FunctorOrLambda", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "runJavaScript(QString)", { "runJavaScript", "QString&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString)", { "save", "QString&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString,enum)", { "save", "QString&,QWebEngineDownloadItem::SavePageFormat", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scrollPosition()", { "scrollPosition", "", "QPointF", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedText()", { "selectedText", "", "QString", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioMuted(bool)", { "setAudioMuted", "bool", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundColor(QColor&)", { "setBackgroundColor", "QColor&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContent(QByteArray)", { "setContent", "QByteArray&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContent(QByteArray,QString)", { "setContent", "QByteArray&,QString&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContent(QByteArray,QString,QUrl&)", { "setContent", "QByteArray&,QString&,QUrl&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFeaturePermission(QUrl&,enum,enum)", { "setFeaturePermission", "QUrl&,Feature,PermissionPolicy", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHtml(QString)", { "setHtml", "QString&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHtml(QString,QUrl&)", { "setHtml", "QString&,QUrl&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUrl(QUrl&)", { "setUrl", "QUrl&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setView(QWidget*)", { "setView", "QWidget*", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWebChannel(QWebChannel*,long)", { "setWebChannel", "QWebChannel*,uint", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWebChannel(QWebChannel*)", { "setWebChannel", "QWebChannel*", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setZoomFactor(double)", { "setZoomFactor", "qreal", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "settings()", { "settings", "", "QWebEngineSettings*", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHtml(FunctorOrLambda)", { "toHtml", "FunctorOrLambda", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPlainText(FunctorOrLambda)", { "toPlainText", "FunctorOrLambda", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "triggerAction(enum)", { "triggerAction", "WebAction", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "triggerAction(enum,bool)", { "triggerAction", "WebAction,bool", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "view()", { "view", "", "QWidget*", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "webChannel()", { "webChannel", "", "QWebChannel*", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoomFactor()", { "zoomFactor", "", "qreal", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "acceptNavigationRequest(QUrl&,enum,bool)", { "acceptNavigationRequest", "QUrl&,NavigationType,bool", "bool", 54, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "certificateError(QWebEngineCertificateError&)", { "certificateError", "QWebEngineCertificateError&", "bool", 55, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "chooseFiles(enum,QStringList&,QStringList&)", { "chooseFiles", "FileSelectionMode,QStringList&,QStringList&", "QStringList", 56, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "createWindow(enum)", { "createWindow", "WebWindowType", "QWebEnginePage*", 57, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "javaScriptAlert(QUrl&,QString)", { "javaScriptAlert", "QUrl&,QString&", "void", 58, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "javaScriptConfirm(QUrl&,QString)", { "javaScriptConfirm", "QUrl&,QString&", "bool", 59, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "javaScriptConsoleMessage(enum,QString,int,QString)", { "javaScriptConsoleMessage", "JavaScriptConsoleMessageLevel,QString&,int,QString&", "void", 60, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "javaScriptPrompt(QUrl&,QString,QString,QString*)", { "javaScriptPrompt", "QUrl&,QString&,QString&,QString*", "bool", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEnginePage::plastiqSignals = {
    { "audioMutedChanged(bool)", { "audioMutedChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "authenticationRequired(QUrl&,QAuthenticator*)", { "authenticationRequired", "QUrl&,QAuthenticator*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "contentsSizeChanged(QSizeF&)", { "contentsSizeChanged", "QSizeF&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "featurePermissionRequestCanceled(QUrl&,enum)", { "featurePermissionRequestCanceled", "QUrl&,QWebEnginePage::Feature", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "featurePermissionRequested(QUrl&,enum)", { "featurePermissionRequested", "QUrl&,QWebEnginePage::Feature", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fullScreenRequested(QWebEngineFullScreenRequest)", { "fullScreenRequested", "QWebEngineFullScreenRequest", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "geometryChangeRequested(QRect&)", { "geometryChangeRequested", "QRect&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "iconChanged(QIcon&)", { "iconChanged", "QIcon&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "iconUrlChanged(QUrl&)", { "iconUrlChanged", "QUrl&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "linkHovered(QString)", { "linkHovered", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loadFinished(bool)", { "loadFinished", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loadProgress(int)", { "loadProgress", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loadStarted()", { "loadStarted", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "proxyAuthenticationRequired(QUrl&,QAuthenticator*,QString)", { "proxyAuthenticationRequired", "QUrl&,QAuthenticator*,QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "recentlyAudibleChanged(bool)", { "recentlyAudibleChanged", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "renderProcessTerminated(enum,int)", { "renderProcessTerminated", "RenderProcessTerminationStatus,int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "scrollPositionChanged(QPointF&)", { "scrollPositionChanged", "QPointF&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectionChanged()", { "selectionChanged", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "titleChanged(QString)", { "titleChanged", "QString&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "urlChanged(QUrl&)", { "urlChanged", "QUrl&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "windowCloseRequested()", { "windowCloseRequested", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEnginePage::plastiqProperties = {
    { "audioMuted", { "audioMuted", "bool", "setAudioMuted", "isAudioMuted" } },
    { "backgroundColor", { "backgroundColor", "QColor", "setBackgroundColor", "backgroundColor" } },
    { "contentsSize", { "contentsSize", "QSizeF", "contentsSizeChanged", "contentsSize" } },
    { "hasSelection", { "hasSelection", "bool", "", "hasSelection" } },
    { "icon", { "icon", "QIcon", "iconChanged", "icon" } },
    { "iconUrl", { "iconUrl", "QUrl", "iconUrlChanged", "iconUrl" } },
    { "recentlyAudible", { "recentlyAudible", "bool", "recentlyAudibleChanged", "recentlyAudible" } },
    { "requestedUrl", { "requestedUrl", "QUrl", "", "requestedUrl" } },
    { "scrollPosition", { "scrollPosition", "QPointF", "scrollPositionChanged", "scrollPosition" } },
    { "selectedText", { "selectedText", "QString", "", "selectedText" } },
    { "title", { "title", "QString", "", "title" } },
    { "url", { "url", "QUrl", "setUrl", "url" } },
    { "zoomFactor", { "zoomFactor", "qreal", "setZoomFactor", "zoomFactor" } },

};

QHash<QByteArray, long> PlastiQQWebEnginePage::plastiqConstants = {

    /* QWebEnginePage::Feature */
   { "Geolocation", QWebEnginePage::Geolocation },
   { "MediaAudioCapture", QWebEnginePage::MediaAudioCapture },
   { "MediaVideoCapture", QWebEnginePage::MediaVideoCapture },
   { "MediaAudioVideoCapture", QWebEnginePage::MediaAudioVideoCapture },
   { "MouseLock", QWebEnginePage::MouseLock },

    /* QWebEnginePage::FileSelectionMode */
   { "FileSelectOpen", QWebEnginePage::FileSelectOpen },
   { "FileSelectOpenMultiple", QWebEnginePage::FileSelectOpenMultiple },

    /* QWebEnginePage::FindFlag */
   { "FindBackward", QWebEnginePage::FindBackward },
   { "FindCaseSensitively", QWebEnginePage::FindCaseSensitively },

    /* QWebEnginePage::JavaScriptConsoleMessageLevel */
   { "InfoMessageLevel", QWebEnginePage::InfoMessageLevel },
   { "WarningMessageLevel", QWebEnginePage::WarningMessageLevel },
   { "ErrorMessageLevel", QWebEnginePage::ErrorMessageLevel },

    /* QWebEnginePage::NavigationType */
   { "NavigationTypeLinkClicked", QWebEnginePage::NavigationTypeLinkClicked },
   { "NavigationTypeTyped", QWebEnginePage::NavigationTypeTyped },
   { "NavigationTypeFormSubmitted", QWebEnginePage::NavigationTypeFormSubmitted },
   { "NavigationTypeBackForward", QWebEnginePage::NavigationTypeBackForward },
   { "NavigationTypeReload", QWebEnginePage::NavigationTypeReload },
   { "NavigationTypeOther", QWebEnginePage::NavigationTypeOther },

    /* QWebEnginePage::PermissionPolicy */
   { "PermissionUnknown", QWebEnginePage::PermissionUnknown },
   { "PermissionGrantedByUser", QWebEnginePage::PermissionGrantedByUser },
   { "PermissionDeniedByUser", QWebEnginePage::PermissionDeniedByUser },

    /* QWebEnginePage::RenderProcessTerminationStatus */
   { "NormalTerminationStatus", QWebEnginePage::NormalTerminationStatus },
   { "AbnormalTerminationStatus", QWebEnginePage::AbnormalTerminationStatus },
   { "CrashedTerminationStatus", QWebEnginePage::CrashedTerminationStatus },
   { "KilledTerminationStatus", QWebEnginePage::KilledTerminationStatus },

    /* QWebEnginePage::WebAction */
   { "NoWebAction", QWebEnginePage::NoWebAction },
   { "Back", QWebEnginePage::Back },
   { "Forward", QWebEnginePage::Forward },
   { "Stop", QWebEnginePage::Stop },
   { "Reload", QWebEnginePage::Reload },
   { "Cut", QWebEnginePage::Cut },
   { "Copy", QWebEnginePage::Copy },
   { "Paste", QWebEnginePage::Paste },
   { "Undo", QWebEnginePage::Undo },
   { "Redo", QWebEnginePage::Redo },
   { "SelectAll", QWebEnginePage::SelectAll },
   { "ReloadAndBypassCache", QWebEnginePage::ReloadAndBypassCache },
   { "PasteAndMatchStyle", QWebEnginePage::PasteAndMatchStyle },
   { "OpenLinkInThisWindow", QWebEnginePage::OpenLinkInThisWindow },
   { "OpenLinkInNewWindow", QWebEnginePage::OpenLinkInNewWindow },
   { "OpenLinkInNewTab", QWebEnginePage::OpenLinkInNewTab },
   { "CopyLinkToClipboard", QWebEnginePage::CopyLinkToClipboard },
   { "DownloadLinkToDisk", QWebEnginePage::DownloadLinkToDisk },
   { "CopyImageToClipboard", QWebEnginePage::CopyImageToClipboard },
   { "CopyImageUrlToClipboard", QWebEnginePage::CopyImageUrlToClipboard },
   { "DownloadImageToDisk", QWebEnginePage::DownloadImageToDisk },
   { "CopyMediaUrlToClipboard", QWebEnginePage::CopyMediaUrlToClipboard },
   { "ToggleMediaControls", QWebEnginePage::ToggleMediaControls },
   { "ToggleMediaLoop", QWebEnginePage::ToggleMediaLoop },
   { "ToggleMediaPlayPause", QWebEnginePage::ToggleMediaPlayPause },
   { "ToggleMediaMute", QWebEnginePage::ToggleMediaMute },
   { "DownloadMediaToDisk", QWebEnginePage::DownloadMediaToDisk },
   { "InspectElement", QWebEnginePage::InspectElement },
   { "ExitFullScreen", QWebEnginePage::ExitFullScreen },
   { "RequestClose", QWebEnginePage::RequestClose },
   { "Unselect", QWebEnginePage::Unselect },
   { "SavePage", QWebEnginePage::SavePage },
   { "OpenLinkInNewBackgroundTab", QWebEnginePage::OpenLinkInNewBackgroundTab },
   { "ViewSource", QWebEnginePage::ViewSource },
   { "WebActionCount", QWebEnginePage::WebActionCount },

    /* QWebEnginePage::WebWindowType */
   { "WebBrowserWindow", QWebEnginePage::WebBrowserWindow },
   { "WebBrowserTab", QWebEnginePage::WebBrowserTab },
   { "WebDialog", QWebEnginePage::WebDialog },
   { "WebBrowserBackgroundTab", QWebEnginePage::WebBrowserBackgroundTab },

};

QVector<PlastiQMetaObject*> PlastiQQWebEnginePage::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWebEnginePage::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWebEnginePage::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWebEnginePage", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEnginePage::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQWebEnginePageWrapper : public QWebEnginePage {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQWebEnginePageWrapper(QObject *parent = Q_NULLPTR)
         : QWebEnginePage(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQWebEnginePageWrapper(QWebEngineProfile *profile, QObject *parent = Q_NULLPTR)
         : QWebEnginePage(profile,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void triggerAction(WebAction action, bool checked = false) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void triggerAction(WebAction,bool=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int64 = action;
            stack[1].name = QByteArrayLiteral("WebAction");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_bool = checked;
            stack[2].name = QByteArrayLiteral("bool");
            stack[2].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEnginePage::triggerAction(action,checked);
    }

    void PlastiQParentCall_triggerAction(WebAction action, bool checked = false) {
        return QWebEnginePage::triggerAction(action,checked);
    }

    bool acceptNavigationRequest(const QUrl &url, NavigationType type, bool isMainFrame) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool acceptNavigationRequest(const QUrl&,NavigationType,bool)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QUrl(url) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QUrl");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int64 = type;
            stack[2].name = QByteArrayLiteral("NavigationType");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_bool = isMainFrame;
            stack[3].name = QByteArrayLiteral("bool");
            stack[3].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEnginePage::acceptNavigationRequest(url,type,isMainFrame);
    }

    bool PlastiQParentCall_acceptNavigationRequest(const QUrl &url, NavigationType type, bool isMainFrame) {
        return QWebEnginePage::acceptNavigationRequest(url,type,isMainFrame);
    }

    QStringList chooseFiles(FileSelectionMode mode, const QStringList &oldFiles, const QStringList &acceptedMimeTypes) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QStringList chooseFiles(FileSelectionMode,const QStringList&,const QStringList&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int64 = mode;
            stack[1].name = QByteArrayLiteral("FileSelectionMode");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_voidp = new QStringList(oldFiles) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QStringList");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_voidp = new QStringList(acceptedMimeTypes) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QStringList");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QStringList _r = QStringList(*reinterpret_cast<QStringList*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QWebEnginePage::chooseFiles(mode,oldFiles,acceptedMimeTypes);
    }

    QStringList PlastiQParentCall_chooseFiles(FileSelectionMode mode, const QStringList &oldFiles, const QStringList &acceptedMimeTypes) {
        return QWebEnginePage::chooseFiles(mode,oldFiles,acceptedMimeTypes);
    }

    QWebEnginePage* createWindow(WebWindowType type) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QWebEnginePage* createWindow(WebWindowType)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = type;
            stack[1].name = QByteArrayLiteral("WebWindowType");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QWebEnginePage* _r = reinterpret_cast<QWebEnginePage*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QWebEnginePage::createWindow(type);
    }

    QWebEnginePage* PlastiQParentCall_createWindow(WebWindowType type) {
        return QWebEnginePage::createWindow(type);
    }

    void javaScriptAlert(const QUrl &securityOrigin, const QString &msg) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void javaScriptAlert(const QUrl&,const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QUrl(securityOrigin) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QUrl");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_string = const_cast<QString&>(msg);
            stack[2].name = QByteArrayLiteral("QString");
            stack[2].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEnginePage::javaScriptAlert(securityOrigin,msg);
    }

    void PlastiQParentCall_javaScriptAlert(const QUrl &securityOrigin, const QString &msg) {
        return QWebEnginePage::javaScriptAlert(securityOrigin,msg);
    }

    bool javaScriptConfirm(const QUrl &securityOrigin, const QString &msg) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool javaScriptConfirm(const QUrl&,const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QUrl(securityOrigin) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QUrl");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_string = const_cast<QString&>(msg);
            stack[2].name = QByteArrayLiteral("QString");
            stack[2].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEnginePage::javaScriptConfirm(securityOrigin,msg);
    }

    bool PlastiQParentCall_javaScriptConfirm(const QUrl &securityOrigin, const QString &msg) {
        return QWebEnginePage::javaScriptConfirm(securityOrigin,msg);
    }

    void javaScriptConsoleMessage(JavaScriptConsoleMessageLevel level, const QString &message, int lineNumber, const QString &sourceID) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void javaScriptConsoleMessage(JavaScriptConsoleMessageLevel,const QString&,int,const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_int64 = level;
            stack[1].name = QByteArrayLiteral("JavaScriptConsoleMessageLevel");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_string = const_cast<QString&>(message);
            stack[2].name = QByteArrayLiteral("QString");
            stack[2].type = PlastiQ::String;
            stack[3].s_int = lineNumber;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            stack[4].s_string = const_cast<QString&>(sourceID);
            stack[4].name = QByteArrayLiteral("QString");
            stack[4].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEnginePage::javaScriptConsoleMessage(level,message,lineNumber,sourceID);
    }

    void PlastiQParentCall_javaScriptConsoleMessage(JavaScriptConsoleMessageLevel level, const QString &message, int lineNumber, const QString &sourceID) {
        return QWebEnginePage::javaScriptConsoleMessage(level,message,lineNumber,sourceID);
    }

    bool javaScriptPrompt(const QUrl &securityOrigin, const QString &msg, const QString &defaultValue, QString *result) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool javaScriptPrompt(const QUrl&,const QString&,const QString&,QString*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = new QUrl(securityOrigin) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QUrl");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_string = const_cast<QString&>(msg);
            stack[2].name = QByteArrayLiteral("QString");
            stack[2].type = PlastiQ::String;
            stack[3].s_string = const_cast<QString&>(defaultValue);
            stack[3].name = QByteArrayLiteral("QString");
            stack[3].type = PlastiQ::String;
            stack[4].s_voidp = reinterpret_cast<void*>(result);
            stack[4].name = QByteArrayLiteral("QString");
            stack[4].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEnginePage::javaScriptPrompt(securityOrigin,msg,defaultValue,result);
    }

    bool PlastiQParentCall_javaScriptPrompt(const QUrl &securityOrigin, const QString &msg, const QString &defaultValue, QString *result) {
        return QWebEnginePage::javaScriptPrompt(securityOrigin,msg,defaultValue,result);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEnginePage::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QWebEnginePage::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEnginePage::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QWebEnginePage::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QWebEnginePage::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QWebEnginePage::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEnginePage::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QWebEnginePage::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEnginePage::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QWebEnginePage::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEnginePage::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QWebEnginePage::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEnginePage::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QWebEnginePage::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEnginePage::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QWebEnginePage::timerEvent(event);
    }

};

void PlastiQQWebEnginePage::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQWebEnginePageWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQWebEnginePageWrapper(); break;
        case 1: o = new PlastiQQWebEnginePageWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQWebEnginePageWrapper(reinterpret_cast<QWebEngineProfile*>(stack[1].s_voidp)); break;
        case 3: o = new PlastiQQWebEnginePageWrapper(reinterpret_cast<QWebEngineProfile*>(stack[1].s_voidp),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQWebEnginePage *p = new PlastiQQWebEnginePage();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEnginePage *p = new PlastiQQWebEnginePage();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 62) {
            id -= 62;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEnginePage *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEnginePage*>(object->plastiq_data());

        switch(id) {
        case 0: { QAction* _r = o->action(QWebEnginePage::WebAction(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 1: { /* COPY OBJECT */
            QColor *_r = new QColor(o->backgroundColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->contentsSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: /* UNSUPPORTED_RETURN_VALUE o->contextMenuData() | ret: `const QWebEngineContextMenuData&` */ break;
        case 4: { QMenu* _r = o->createStandardContextMenu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 5: o->findText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->findText(stack[1].s_string,
                    QWebEnginePage::FindFlags(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: /* o->findText(stack[1].s_string,
                    QWebEnginePage::FindFlags(stack[2].s_int64),
                    UNSUPPORTED_TYPE_FunctorOrLambda) | ret: `void` */ break;
        case 8: { bool _r = o->hasSelection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { QWebEngineHistory* _r = o->history();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWebEngineHistory"; } break;
        case 10: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->iconUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { bool _r = o->isAudioMuted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: o->load((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: /* o->print(reinterpret_cast<QPrinter*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_FunctorOrLambda) | ret: `void` */ break;
        case 15: o->printToPdf(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->printToPdf(stack[1].s_string,
                    (*reinterpret_cast< QPageLayout(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: /* o->printToPdf(UNSUPPORTED_TYPE_FunctorOrLambda) | ret: `void` */ break;
        case 18: /* o->printToPdf(UNSUPPORTED_TYPE_FunctorOrLambda,
                    (*reinterpret_cast< QPageLayout(*) >(stack[2].s_voidp))) | ret: `void` */ break;
        case 19: { QWebEngineProfile* _r = o->profile();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWebEngineProfile"; } break;
        case 20: { bool _r = o->recentlyAudible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: o->replaceMisspelledWord(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 22: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->requestedUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { PQObjectWrapper* s_pqobject = reinterpret_cast<PQObjectWrapper*>(stack[1].s_voidp); 
                o->runJavaScript(stack[1].s_string,
                    stack[2].s_int,
                    [=](const QVariant &result) {
                       PMOGStack cstack = new PMOGStackItem[1];
                       cstack[0].s_voidp = new QVariant(result); cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QVariant";
                       PlastiQ_activate(Q_NULLPTR, "", s_pqobject, "__invoke", 1, cstack);
                       delete [] cstack; cstack = 0; });
                stack[0].type = PlastiQ::Void; } break;
        case 24: { PQObjectWrapper* s_pqobject = reinterpret_cast<PQObjectWrapper*>(stack[1].s_voidp); 
                o->runJavaScript(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; } break;
        case 25: { PQObjectWrapper* s_pqobject = reinterpret_cast<PQObjectWrapper*>(stack[1].s_voidp); 
                o->runJavaScript(stack[1].s_string,
                    [=](const QVariant &result) {
                       PMOGStack cstack = new PMOGStackItem[1];
                       cstack[0].s_voidp = new QVariant(result); cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QVariant";
                       PlastiQ_activate(Q_NULLPTR, "", s_pqobject, "__invoke", 1, cstack);
                       delete [] cstack; cstack = 0; });
                stack[0].type = PlastiQ::Void; } break;
        case 26: { PQObjectWrapper* s_pqobject = reinterpret_cast<PQObjectWrapper*>(stack[1].s_voidp); 
                o->runJavaScript(stack[1].s_string);
                stack[0].type = PlastiQ::Void; } break;
        case 27: o->save(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->save(stack[1].s_string,
                    QWebEngineDownloadItem::SavePageFormat(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 29: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->scrollPosition());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { QString _r = o->selectedText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 31: o->setAudioMuted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setBackgroundColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setContent(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setContent(stack[1].s_bytearray,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setContent(stack[1].s_bytearray,
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setFeaturePermission((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    QWebEnginePage::Feature(stack[2].s_int64),
                    QWebEnginePage::PermissionPolicy(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setHtml(stack[1].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setView(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setWebChannel(reinterpret_cast<QWebChannel*>(stack[1].s_voidp),
                    stack[2].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setWebChannel(reinterpret_cast<QWebChannel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setZoomFactor(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 44: { QWebEngineSettings* _r = o->settings();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWebEngineSettings"; } break;
        case 45: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 46: { PQObjectWrapper* s_pqobject = reinterpret_cast<PQObjectWrapper*>(stack[1].s_voidp); 
                o->toHtml([=](const QString &result){
                       PMOGStack cstack = new PMOGStackItem[1];
                       cstack[0].s_string = result; cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                       PlastiQ_activate(Q_NULLPTR, "", s_pqobject, "__invoke", 1, cstack);
                       delete [] cstack; cstack = 0; });
                stack[0].type = PlastiQ::Void; } break;
        case 47: { PQObjectWrapper* s_pqobject = reinterpret_cast<PQObjectWrapper*>(stack[1].s_voidp); 
                o->toPlainText([=](const QString &result){
                       PMOGStack cstack = new PMOGStackItem[1];
                       cstack[0].s_string = result; cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                       PlastiQ_activate(Q_NULLPTR, "", s_pqobject, "__invoke", 1, cstack);
                       delete [] cstack; cstack = 0; });
                stack[0].type = PlastiQ::Void; } break;
        case 48: if (isWrapper) ((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_triggerAction(QWebEnginePage::WebAction(stack[1].s_int64));
                else o->triggerAction(QWebEnginePage::WebAction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 49: if (isWrapper) ((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_triggerAction(QWebEnginePage::WebAction(stack[1].s_int64),
                    stack[2].s_bool);
                else o->triggerAction(QWebEnginePage::WebAction(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 50: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 51: { QWidget* _r = o->view();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 52: { QWebChannel* _r = o->webChannel();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QWebChannel"; } break;
        case 53: { double _r = o->zoomFactor();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 54: { bool _r;
                if (isWrapper) _r = ((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_acceptNavigationRequest((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    QWebEnginePage::NavigationType(stack[2].s_int64),
                    stack[3].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 55: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 56: { /* COPY OBJECT */
            QStringList *_r;
                if (isWrapper) _r = new QStringList(((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_chooseFiles(QWebEnginePage::FileSelectionMode(stack[1].s_int64),
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QStringList(*) >(stack[3].s_voidp))));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 57: { QWebEnginePage* _r;
                if (isWrapper) _r = ((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_createWindow(QWebEnginePage::WebWindowType(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWebEnginePage"; } break;
        case 58: if (isWrapper) ((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_javaScriptAlert((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 59: { bool _r;
                if (isWrapper) _r = ((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_javaScriptConfirm((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 60: if (isWrapper) ((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_int,
                    stack[4].s_string);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 61: { bool _r;
                if (isWrapper) _r = ((PlastiQQWebEnginePageWrapper*)o)->PlastiQParentCall_javaScriptPrompt((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_string,
                    reinterpret_cast<QString*>(stack[4].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 21) {
            id -= 21;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWebEnginePage *o = reinterpret_cast<QWebEnginePage*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWebEnginePage::audioMutedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "audioMutedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QWebEnginePage::authenticationRequired,
            [=](const QUrl& arg0, QAuthenticator* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QAuthenticator";
                PlastiQ_activate(sender, "authenticationRequired", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QWebEnginePage::contentsSizeChanged,
            [=](const QSizeF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSizeF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSizeF";
                PlastiQ_activate(sender, "contentsSizeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QWebEnginePage::featurePermissionRequestCanceled,
            [=](const QUrl& arg0, QWebEnginePage::Feature arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QWebEnginePage::Feature";
                PlastiQ_activate(sender, "featurePermissionRequestCanceled", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QWebEnginePage::featurePermissionRequested,
            [=](const QUrl& arg0, QWebEnginePage::Feature arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QWebEnginePage::Feature";
                PlastiQ_activate(sender, "featurePermissionRequested", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QWebEnginePage::fullScreenRequested,
            [=](QWebEngineFullScreenRequest arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QWebEngineFullScreenRequest(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QWebEngineFullScreenRequest";
                PlastiQ_activate(sender, "fullScreenRequested", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QWebEnginePage::geometryChangeRequested,
            [=](const QRect& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QRect(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRect";
                PlastiQ_activate(sender, "geometryChangeRequested", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QWebEnginePage::iconChanged,
            [=](const QIcon& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QIcon(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QIcon";
                PlastiQ_activate(sender, "iconChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QWebEnginePage::iconUrlChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "iconUrlChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QWebEnginePage::linkHovered,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "linkHovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QWebEnginePage::loadFinished,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "loadFinished", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QWebEnginePage::loadProgress,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "loadProgress", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QWebEnginePage::loadStarted,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "loadStarted", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QWebEnginePage::proxyAuthenticationRequired,
            [=](const QUrl& arg0, QAuthenticator* arg1, const QString& arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QAuthenticator";
                    cstack[2].s_string = const_cast<QString&>(arg2);
                    cstack[2].type = PlastiQ::String; cstack[2].name = "QString";
                PlastiQ_activate(sender, "proxyAuthenticationRequired", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QWebEnginePage::recentlyAudibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "recentlyAudibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 15: QObject::connect(o, &QWebEnginePage::renderProcessTerminated,
            [=](QWebEnginePage::RenderProcessTerminationStatus arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "RenderProcessTerminationStatus";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "renderProcessTerminated", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 16: QObject::connect(o, &QWebEnginePage::scrollPositionChanged,
            [=](const QPointF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPointF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPointF";
                PlastiQ_activate(sender, "scrollPositionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 17: QObject::connect(o, &QWebEnginePage::selectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "selectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 18: QObject::connect(o, &QWebEnginePage::titleChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "titleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 19: QObject::connect(o, &QWebEnginePage::urlChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "urlChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 20: QObject::connect(o, &QWebEnginePage::windowCloseRequested,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "windowCloseRequested", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWebEnginePage *o = reinterpret_cast<QWebEnginePage*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWebEnginePage *o = reinterpret_cast<QWebEnginePage*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWebEnginePage *o = reinterpret_cast<QWebEnginePage*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWebEnginePage::~PlastiQQWebEnginePage() {
    QWebEnginePage* o = reinterpret_cast<QWebEnginePage*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
