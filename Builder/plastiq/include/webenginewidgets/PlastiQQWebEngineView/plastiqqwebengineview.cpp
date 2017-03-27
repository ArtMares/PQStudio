#include "plastiqmethod.h"
#include "plastiqqwebengineview.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QWebEngineView> 
#include <QWebEngineHistory>
#include <QIcon>
#include <QUrl>
#include <QWebEnginePage>
#include <QAction>
#include <QString>
#include <QWebEngineSettings>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QHideEvent>
#include <QShowEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineView::plastiqConstructors = {
    { "QWebEngineView()", { "QWebEngineView", "", "QWebEngineView*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWebEngineView(QWidget*)", { "QWebEngineView", "QWidget*", "QWebEngineView*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineView::plastiqMethods = {
    { "findText(QString)", { "findText", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findText(QString,enum)", { "findText", "QString&,QWebEnginePage::FindFlags", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findText(QString,enum,FunctorOrLambda)", { "findText", "QString&,QWebEnginePage::FindFlags,FunctorOrLambda", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasSelection()", { "hasSelection", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "history()", { "history", "", "QWebEngineHistory*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconUrl()", { "iconUrl", "", "QUrl", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QUrl&)", { "load", "QUrl&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "page()", { "page", "", "QWebEnginePage*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageAction(enum)", { "pageAction", "QWebEnginePage::WebAction", "QAction*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedText()", { "selectedText", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContent(QByteArray)", { "setContent", "QByteArray&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContent(QByteArray,QString)", { "setContent", "QByteArray&,QString&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContent(QByteArray,QString,QUrl&)", { "setContent", "QByteArray&,QString&,QUrl&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHtml(QString)", { "setHtml", "QString&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHtml(QString,QUrl&)", { "setHtml", "QString&,QUrl&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPage(QWebEnginePage*)", { "setPage", "QWebEnginePage*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUrl(QUrl&)", { "setUrl", "QUrl&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setZoomFactor(double)", { "setZoomFactor", "qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "settings()", { "settings", "", "QWebEngineSettings*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "triggerPageAction(enum)", { "triggerPageAction", "QWebEnginePage::WebAction", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "triggerPageAction(enum,bool)", { "triggerPageAction", "QWebEnginePage::WebAction,bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoomFactor()", { "zoomFactor", "", "qreal", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createWindow(enum)", { "createWindow", "QWebEnginePage::WebWindowType", "QWebEngineView*", 25, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QDragEnterEvent*)", { "dragEnterEvent", "QDragEnterEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QDragLeaveEvent*)", { "dragLeaveEvent", "QDragLeaveEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "back()", { "back", "", "void", 34, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "forward()", { "forward", "", "void", 35, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "reload()", { "reload", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 37, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineView::plastiqSignals = {
    { "iconChanged(QIcon&)", { "iconChanged", "QIcon&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "iconUrlChanged(QUrl&)", { "iconUrlChanged", "QUrl&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loadFinished(bool)", { "loadFinished", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loadProgress(int)", { "loadProgress", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loadStarted()", { "loadStarted", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "renderProcessTerminated(enum,int)", { "renderProcessTerminated", "QWebEnginePage::RenderProcessTerminationStatus,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectionChanged()", { "selectionChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "titleChanged(QString)", { "titleChanged", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "urlChanged(QUrl&)", { "urlChanged", "QUrl&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineView::plastiqProperties = {
    { "hasSelection", { "hasSelection", "bool", "", "hasSelection" } },
    { "icon", { "icon", "QIcon", "iconChanged", "icon" } },
    { "iconUrl", { "iconUrl", "QUrl", "iconUrlChanged", "iconUrl" } },
    { "selectedText", { "selectedText", "QString", "", "selectedText" } },
    { "title", { "title", "QString", "", "title" } },
    { "url", { "url", "QUrl", "setUrl", "url" } },
    { "zoomFactor", { "zoomFactor", "qreal", "setZoomFactor", "zoomFactor" } },

};

QHash<QByteArray, long> PlastiQQWebEngineView::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineView::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWebEngineView::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQWebEngineView::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QWebEngineView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQWebEngineViewWrapper : public QWebEngineView {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQWebEngineViewWrapper(QWidget *parent = Q_NULLPTR)
         : QWebEngineView(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QWebEngineView* createWindow(QWebEnginePage::WebWindowType type) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QWebEngineView* createWindow(QWebEnginePage::WebWindowType)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = type;
            stack[1].name = QByteArrayLiteral("QWebEnginePage::WebWindowType");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QWebEngineView* _r = reinterpret_cast<QWebEngineView*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::createWindow(type);
    }

    QWebEngineView* PlastiQParentCall_createWindow(QWebEnginePage::WebWindowType type) {
        return QWebEngineView::createWindow(type);
    }

    void contextMenuEvent(QContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QWebEngineView::contextMenuEvent(event);
    }

    void dragEnterEvent(QDragEnterEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragEnterEvent(QDragEnterEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDragEnterEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::dragEnterEvent(e);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *e) {
        return QWebEngineView::dragEnterEvent(e);
    }

    void dragLeaveEvent(QDragLeaveEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragLeaveEvent(QDragLeaveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDragLeaveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::dragLeaveEvent(e);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *e) {
        return QWebEngineView::dragLeaveEvent(e);
    }

    void dragMoveEvent(QDragMoveEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragMoveEvent(QDragMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDragMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::dragMoveEvent(e);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *e) {
        return QWebEngineView::dragMoveEvent(e);
    }

    void dropEvent(QDropEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dropEvent(QDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::dropEvent(e);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *e) {
        return QWebEngineView::dropEvent(e);
    }

    bool event(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::event(ev);
    }

    bool PlastiQParentCall_event(QEvent *ev) {
        return QWebEngineView::event(ev);
    }

    void hideEvent(QHideEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hideEvent(QHideEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QHideEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QWebEngineView::hideEvent(event);
    }

    void showEvent(QShowEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QWebEngineView::showEvent(event);
    }

    bool hasHeightForWidth() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hasHeightForWidth()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::hasHeightForWidth();
    }

    bool PlastiQParentCall_hasHeightForWidth() const {
        return QWebEngineView::hasHeightForWidth();
    }

    int heightForWidth(int w) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int heightForWidth(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = w;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::heightForWidth(w);
    }

    int PlastiQParentCall_heightForWidth(int w) const {
        return QWebEngineView::heightForWidth(w);
    }

    QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant inputMethodQuery(Qt::InputMethodQuery)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = query;
            stack[1].name = QByteArrayLiteral("Qt::InputMethodQuery");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::inputMethodQuery(query);
    }

    QVariant PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery query) const {
        return QWebEngineView::inputMethodQuery(query);
    }

    QSize minimumSizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize minimumSizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::minimumSizeHint();
    }

    QSize PlastiQParentCall_minimumSizeHint() const {
        return QWebEngineView::minimumSizeHint();
    }

    QSize sizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize sizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::sizeHint();
    }

    QSize PlastiQParentCall_sizeHint() const {
        return QWebEngineView::sizeHint();
    }

    void actionEvent(QActionEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void actionEvent(QActionEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QActionEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::actionEvent(event);
    }

    void PlastiQParentCall_actionEvent(QActionEvent *event) {
        return QWebEngineView::actionEvent(event);
    }

    void changeEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QWebEngineView::changeEvent(event);
    }

    void closeEvent(QCloseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QWebEngineView::closeEvent(event);
    }

    void enterEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void enterEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::enterEvent(event);
    }

    void PlastiQParentCall_enterEvent(QEvent *event) {
        return QWebEngineView::enterEvent(event);
    }

    void focusInEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QWebEngineView::focusInEvent(event);
    }

    bool focusNextPrevChild(bool next) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool focusNextPrevChild(bool)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_bool = next;
            stack[1].name = QByteArrayLiteral("bool");
            stack[1].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QWebEngineView::focusNextPrevChild(next);
    }

    void focusOutEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QWebEngineView::focusOutEvent(event);
    }

    void inputMethodEvent(QInputMethodEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void inputMethodEvent(QInputMethodEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QInputMethodEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QWebEngineView::inputMethodEvent(event);
    }

    void keyPressEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QWebEngineView::keyPressEvent(event);
    }

    void keyReleaseEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QWebEngineView::keyReleaseEvent(event);
    }

    void leaveEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void leaveEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::leaveEvent(event);
    }

    void PlastiQParentCall_leaveEvent(QEvent *event) {
        return QWebEngineView::leaveEvent(event);
    }

    void mouseDoubleClickEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QWebEngineView::mouseDoubleClickEvent(event);
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QWebEngineView::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QWebEngineView::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QWebEngineView::mouseReleaseEvent(event);
    }

    void moveEvent(QMoveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void moveEvent(QMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::moveEvent(event);
    }

    void PlastiQParentCall_moveEvent(QMoveEvent *event) {
        return QWebEngineView::moveEvent(event);
    }

    bool nativeEvent(const QByteArray &eventType, void *message, long *result) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool nativeEvent(const QByteArray&,void*,long*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_bytearray = const_cast<QByteArray&>(eventType);
            stack[1].name = QByteArrayLiteral("QByteArray");
            stack[1].type = PlastiQ::ByteArray;
            stack[2].s_voidp = reinterpret_cast<void*>(message);
            stack[2].name = QByteArrayLiteral("void");
            stack[2].type = PlastiQ::ObjectStar;
            stack[3].s_voidp = reinterpret_cast<void*>(result);
            stack[3].name = QByteArrayLiteral("long");
            stack[3].type = PlastiQ::ObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWebEngineView::nativeEvent(eventType,message,result);
    }

    bool PlastiQParentCall_nativeEvent(const QByteArray &eventType, void *message, long *result) {
        return QWebEngineView::nativeEvent(eventType,message,result);
    }

    void paintEvent(QPaintEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QWebEngineView::paintEvent(event);
    }

    void resizeEvent(QResizeEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QWebEngineView::resizeEvent(event);
    }

    void tabletEvent(QTabletEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void tabletEvent(QTabletEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTabletEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::tabletEvent(event);
    }

    void PlastiQParentCall_tabletEvent(QTabletEvent *event) {
        return QWebEngineView::tabletEvent(event);
    }

    void wheelEvent(QWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QWebEngineView::wheelEvent(event);
    }

    void initPainter(QPainter *painter) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void initPainter(QPainter*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWebEngineView::initPainter(painter);
    }

    void PlastiQParentCall_initPainter(QPainter *painter) const {
        return QWebEngineView::initPainter(painter);
    }

};

void PlastiQQWebEngineView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQWebEngineViewWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQWebEngineViewWrapper(); break;
        case 1: o = new PlastiQQWebEngineViewWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQWebEngineView *p = new PlastiQQWebEngineView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineView *p = new PlastiQQWebEngineView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 38) {
            id -= 38;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEngineView *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineView*>(object->plastiq_data());

        switch(id) {
        case 0: o->findText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->findText(stack[1].s_string,
                    QWebEnginePage::FindFlags(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: /* o->findText(stack[1].s_string,
                    QWebEnginePage::FindFlags(stack[2].s_int64),
                    UNSUPPORTED_TYPE_FunctorOrLambda) | ret: `void` */ break;
        case 3: { bool _r = o->hasSelection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { QWebEngineHistory* _r = o->history();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWebEngineHistory"; } break;
        case 5: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->iconUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->load((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: { QWebEnginePage* _r = o->page();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWebEnginePage"; } break;
        case 9: { QAction* _r = o->pageAction(QWebEnginePage::WebAction(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 10: { QString _r = o->selectedText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: o->setContent(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setContent(stack[1].s_bytearray,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setContent(stack[1].s_bytearray,
                    stack[2].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setHtml(stack[1].s_string,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setPage(reinterpret_cast<QWebEnginePage*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setZoomFactor(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: { QWebEngineSettings* _r = o->settings();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWebEngineSettings"; } break;
        case 20: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: o->triggerPageAction(QWebEnginePage::WebAction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->triggerPageAction(QWebEnginePage::WebAction(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { double _r = o->zoomFactor();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 25: { QWebEngineView* _r;
                if (isWrapper) _r = ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_createWindow(QWebEnginePage::WebWindowType(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWebEngineView"; } break;
        case 26: if (isWrapper) ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QDragEnterEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QDragLeaveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: if (isWrapper) ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 30: if (isWrapper) ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: { bool _r;
                if (isWrapper) _r = ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: if (isWrapper) ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_hideEvent(reinterpret_cast<QHideEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: if (isWrapper) ((PlastiQQWebEngineViewWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 34: o->back();
                stack[0].type = PlastiQ::Void; break;
        case 35: o->forward();
                stack[0].type = PlastiQ::Void; break;
        case 36: o->reload();
                stack[0].type = PlastiQ::Void; break;
        case 37: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWebEngineView *o = reinterpret_cast<QWebEngineView*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWebEngineView::iconChanged,
            [=](const QIcon& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QIcon(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QIcon";
                PlastiQ_activate(sender, "iconChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QWebEngineView::iconUrlChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "iconUrlChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QWebEngineView::loadFinished,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "loadFinished", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QWebEngineView::loadProgress,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "loadProgress", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QWebEngineView::loadStarted,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "loadStarted", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QWebEngineView::renderProcessTerminated,
            [=](QWebEnginePage::RenderProcessTerminationStatus arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QWebEnginePage::RenderProcessTerminationStatus";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "renderProcessTerminated", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QWebEngineView::selectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "selectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QWebEngineView::titleChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "titleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QWebEngineView::urlChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "urlChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWebEngineView *o = reinterpret_cast<QWebEngineView*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWebEngineView *o = reinterpret_cast<QWebEngineView*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWebEngineView *o = reinterpret_cast<QWebEngineView*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWebEngineView::~PlastiQQWebEngineView() {
    QWebEngineView* o = reinterpret_cast<QWebEngineView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
