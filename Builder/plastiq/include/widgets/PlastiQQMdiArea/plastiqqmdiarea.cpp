#include "plastiqmethod.h"
#include "plastiqqmdiarea.h"

#include "widgets/PlastiQQAbstractScrollArea/plastiqqabstractscrollarea.h"
#include <QMdiArea> 
#include <QMdiSubWindow>
#include <QBrush>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQMdiArea::plastiqConstructors = {
    { "QMdiArea()", { "QMdiArea", "", "QMdiArea*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMdiArea(QWidget*)", { "QMdiArea", "QWidget*", "QMdiArea*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMdiArea::plastiqMethods = {
    { "activationOrder()", { "activationOrder", "", "WindowOrder", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "activeSubWindow()", { "activeSubWindow", "", "QMdiSubWindow*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSubWindow(QWidget*)", { "addSubWindow", "QWidget*", "QMdiSubWindow*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSubWindow(QWidget*,enum)", { "addSubWindow", "QWidget*,Qt::WindowFlags", "QMdiSubWindow*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "background()", { "background", "", "QBrush", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentSubWindow()", { "currentSubWindow", "", "QMdiSubWindow*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentMode()", { "documentMode", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeSubWindow(QWidget*)", { "removeSubWindow", "QWidget*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActivationOrder(enum)", { "setActivationOrder", "WindowOrder", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackground(QBrush&)", { "setBackground", "QBrush&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocumentMode(bool)", { "setDocumentMode", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum)", { "setOption", "AreaOption", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,bool)", { "setOption", "AreaOption,bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabPosition(enum)", { "setTabPosition", "QTabWidget::TabPosition", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabShape(enum)", { "setTabShape", "QTabWidget::TabShape", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabsClosable(bool)", { "setTabsClosable", "bool", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabsMovable(bool)", { "setTabsMovable", "bool", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewMode(enum)", { "setViewMode", "ViewMode", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabPosition()", { "tabPosition", "", "QTabWidget::TabPosition", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabShape()", { "tabShape", "", "QTabWidget::TabShape", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabsClosable()", { "tabsClosable", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabsMovable()", { "tabsMovable", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testOption(enum)", { "testOption", "AreaOption", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewMode()", { "viewMode", "", "ViewMode", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childEvent(QChildEvent*)", { "childEvent", "QChildEvent*", "void", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 25, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "scrollContentsBy(int,int)", { "scrollContentsBy", "int,int", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportEvent(QEvent*)", { "viewportEvent", "QEvent*", "bool", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "activateNextSubWindow()", { "activateNextSubWindow", "", "void", 33, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "activatePreviousSubWindow()", { "activatePreviousSubWindow", "", "void", 34, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "cascadeSubWindows()", { "cascadeSubWindows", "", "void", 35, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "closeActiveSubWindow()", { "closeActiveSubWindow", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "closeAllSubWindows()", { "closeAllSubWindows", "", "void", 37, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setActiveSubWindow(QMdiSubWindow*)", { "setActiveSubWindow", "QMdiSubWindow*", "void", 38, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "tileSubWindows()", { "tileSubWindows", "", "void", 39, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMdiArea::plastiqSignals = {
    { "subWindowActivated(QMdiSubWindow*)", { "subWindowActivated", "QMdiSubWindow*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMdiArea::plastiqProperties = {
    { "activationOrder", { "activationOrder", "long", "setActivationOrder", "activationOrder" } },
    { "background", { "background", "QBrush", "setBackground", "background" } },
    { "documentMode", { "documentMode", "bool", "setDocumentMode", "documentMode" } },
    { "tabPosition", { "tabPosition", "long", "setTabPosition", "tabPosition" } },
    { "tabShape", { "tabShape", "long", "setTabShape", "tabShape" } },
    { "tabsClosable", { "tabsClosable", "bool", "setTabsClosable", "tabsClosable" } },
    { "tabsMovable", { "tabsMovable", "bool", "setTabsMovable", "tabsMovable" } },
    { "viewMode", { "viewMode", "long", "setViewMode", "viewMode" } },

};

QHash<QByteArray, long> PlastiQQMdiArea::plastiqConstants = {

    /* QMdiArea::AreaOption */
   { "DontMaximizeSubWindowOnActivation", QMdiArea::DontMaximizeSubWindowOnActivation },

    /* QMdiArea::ViewMode */
   { "SubWindowView", QMdiArea::SubWindowView },
   { "TabbedView", QMdiArea::TabbedView },

    /* QMdiArea::WindowOrder */
   { "CreationOrder", QMdiArea::CreationOrder },
   { "StackingOrder", QMdiArea::StackingOrder },
   { "ActivationHistoryOrder", QMdiArea::ActivationHistoryOrder },

};

QVector<PlastiQMetaObject*> PlastiQQMdiArea::plastiqInherits = { &PlastiQQAbstractScrollArea::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMdiArea::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQMdiArea::plastiq_static_metaObject = {
    { &PlastiQQAbstractScrollArea::plastiq_static_metaObject, &plastiqInherits, "QMdiArea", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMdiArea::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMdiAreaWrapper : public QMdiArea {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQMdiAreaWrapper(QWidget *parent = Q_NULLPTR)
         : QMdiArea(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void childEvent(QChildEvent *childEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(childEvent);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::childEvent(childEvent);
    }

    void PlastiQParentCall_childEvent(QChildEvent *childEvent) {
        return QMdiArea::childEvent(childEvent);
    }

    bool event(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QMdiArea::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QMdiArea::event(event);
    }

    bool eventFilter(QObject *object, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(object);
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
        else return QMdiArea::eventFilter(object,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *object, QEvent *event) {
        return QMdiArea::eventFilter(object,event);
    }

    void paintEvent(QPaintEvent *paintEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(paintEvent);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::paintEvent(paintEvent);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *paintEvent) {
        return QMdiArea::paintEvent(paintEvent);
    }

    void resizeEvent(QResizeEvent *resizeEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(resizeEvent);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::resizeEvent(resizeEvent);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *resizeEvent) {
        return QMdiArea::resizeEvent(resizeEvent);
    }

    void scrollContentsBy(int dx, int dy) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void scrollContentsBy(int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = dx;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = dy;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::scrollContentsBy(dx,dy);
    }

    void PlastiQParentCall_scrollContentsBy(int dx, int dy) {
        return QMdiArea::scrollContentsBy(dx,dy);
    }

    void showEvent(QShowEvent *showEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(showEvent);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::showEvent(showEvent);
    }

    void PlastiQParentCall_showEvent(QShowEvent *showEvent) {
        return QMdiArea::showEvent(showEvent);
    }

    void timerEvent(QTimerEvent *timerEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(timerEvent);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::timerEvent(timerEvent);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *timerEvent) {
        return QMdiArea::timerEvent(timerEvent);
    }

    bool viewportEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool viewportEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QMdiArea::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QMdiArea::viewportEvent(event);
    }

    void setupViewport(QWidget *viewport) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setupViewport(QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(viewport);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::setupViewport(viewport);
    }

    void PlastiQParentCall_setupViewport(QWidget *viewport) {
        return QMdiArea::setupViewport(viewport);
    }

    QSize viewportSizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize viewportSizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QMdiArea::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QMdiArea::viewportSizeHint();
    }

    void contextMenuEvent(QContextMenuEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QMdiArea::contextMenuEvent(e);
    }

    void dragEnterEvent(QDragEnterEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragEnterEvent(QDragEnterEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragEnterEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QMdiArea::dragEnterEvent(event);
    }

    void dragLeaveEvent(QDragLeaveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragLeaveEvent(QDragLeaveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragLeaveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QMdiArea::dragLeaveEvent(event);
    }

    void dragMoveEvent(QDragMoveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragMoveEvent(QDragMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QMdiArea::dragMoveEvent(event);
    }

    void dropEvent(QDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dropEvent(QDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QMdiArea::dropEvent(event);
    }

    void keyPressEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QMdiArea::keyPressEvent(e);
    }

    void mouseDoubleClickEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::mouseDoubleClickEvent(e);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *e) {
        return QMdiArea::mouseDoubleClickEvent(e);
    }

    void mouseMoveEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QMdiArea::mouseMoveEvent(e);
    }

    void mousePressEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QMdiArea::mousePressEvent(e);
    }

    void mouseReleaseEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QMdiArea::mouseReleaseEvent(e);
    }

    void wheelEvent(QWheelEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiArea::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QMdiArea::wheelEvent(e);
    }

};

void PlastiQQMdiArea::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMdiAreaWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQMdiAreaWrapper(); break;
        case 1: o = new PlastiQQMdiAreaWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMdiArea *p = new PlastiQQMdiArea();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMdiArea *p = new PlastiQQMdiArea();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 40) {
            id -= 40;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMdiArea *o = sc ? Q_NULLPTR : reinterpret_cast<QMdiArea*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->activationOrder(); // HACK for WindowOrder 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QMdiSubWindow* _r = o->activeSubWindow();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMdiSubWindow"; } break;
        case 2: { QMdiSubWindow* _r = o->addSubWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMdiSubWindow"; } break;
        case 3: { QMdiSubWindow* _r = o->addSubWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMdiSubWindow"; } break;
        case 4: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->background());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { QMdiSubWindow* _r = o->currentSubWindow();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMdiSubWindow"; } break;
        case 6: { bool _r = o->documentMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: o->removeSubWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setActivationOrder(QMdiArea::WindowOrder(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setBackground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setDocumentMode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setOption(QMdiArea::AreaOption(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setOption(QMdiArea::AreaOption(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setTabPosition(QTabWidget::TabPosition(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setTabShape(QTabWidget::TabShape(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setTabsClosable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setTabsMovable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setViewMode(QMdiArea::ViewMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 18: { qint64 _r = o->tabPosition(); // HACK for QTabWidget::TabPosition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { qint64 _r = o->tabShape(); // HACK for QTabWidget::TabShape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: { bool _r = o->tabsClosable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->tabsMovable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = o->testOption(QMdiArea::AreaOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { qint64 _r = o->viewMode(); // HACK for ViewMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: if (isWrapper) ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_childEvent(reinterpret_cast<QChildEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 25: { bool _r;
                if (isWrapper) _r = ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { bool _r;
                if (isWrapper) _r = ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: if (isWrapper) ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: if (isWrapper) ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_scrollContentsBy(stack[1].s_int,
                    stack[2].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 30: if (isWrapper) ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: if (isWrapper) ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: { bool _r;
                if (isWrapper) _r = ((PlastiQQMdiAreaWrapper*)o)->PlastiQParentCall_viewportEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: o->activateNextSubWindow();
                stack[0].type = PlastiQ::Void; break;
        case 34: o->activatePreviousSubWindow();
                stack[0].type = PlastiQ::Void; break;
        case 35: o->cascadeSubWindows();
                stack[0].type = PlastiQ::Void; break;
        case 36: o->closeActiveSubWindow();
                stack[0].type = PlastiQ::Void; break;
        case 37: o->closeAllSubWindows();
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setActiveSubWindow(reinterpret_cast<QMdiSubWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->tileSubWindows();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMdiArea *o = reinterpret_cast<QMdiArea*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMdiArea::subWindowActivated,
            [=](QMdiSubWindow* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QMdiSubWindow";
                PlastiQ_activate(sender, "subWindowActivated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMdiArea *o = reinterpret_cast<QMdiArea*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMdiArea *o = reinterpret_cast<QMdiArea*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMdiArea *o = reinterpret_cast<QMdiArea*>(object->plastiq_data());

        if(className == "QAbstractScrollArea") {
            stack[0].s_voidp = static_cast<QAbstractScrollArea*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMdiArea::~PlastiQQMdiArea() {
    QMdiArea* o = reinterpret_cast<QMdiArea*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
