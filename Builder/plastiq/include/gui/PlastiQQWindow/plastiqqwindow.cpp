#include "plastiqmethod.h"
#include "plastiqqwindow.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "gui/PlastiQQSurface/plastiqqsurface.h"
#include <QWindow> 
#include <QSize>
#include <QCursor>
#include <QString>
#include <QObject>
#include <QRect>
#include <QMargins>
#include <QPoint>
#include <QIcon>
#include <QRegion>
#include <QSurfaceFormat>
#include <QScreen>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QByteArray>
#include <QResizeEvent>
#include <QShowEvent>
#include <QTabletEvent>
#include <QTouchEvent>
#include <QWheelEvent>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQWindow::plastiqConstructors = {
    { "QWindow()", { "QWindow", "", "QWindow*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWindow(QScreen*)", { "QWindow", "QScreen*", "QWindow*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWindow(QWindow*)", { "QWindow", "QWindow*", "QWindow*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWindow::plastiqMethods = {
    { "baseSize()", { "baseSize", "", "QSize", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contentOrientation()", { "contentOrientation", "", "Qt::ScreenOrientation", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "create()", { "create", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursor()", { "cursor", "", "QCursor", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "destroy()", { "destroy", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "devicePixelRatio()", { "devicePixelRatio", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filePath()", { "filePath", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::WindowFlags", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusObject()", { "focusObject", "", "QObject*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameGeometry()", { "frameGeometry", "", "QRect", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameMargins()", { "frameMargins", "", "QMargins", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "framePosition()", { "framePosition", "", "QPoint", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "geometry()", { "geometry", "", "QRect", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAncestorOf(const QWindow*)", { "isAncestorOf", "QWindow*", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAncestorOf(const QWindow*,enum)", { "isAncestorOf", "QWindow*,AncestorMode", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isExposed()", { "isExposed", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isModal()", { "isModal", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTopLevel()", { "isTopLevel", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromGlobal(QPoint&)", { "mapFromGlobal", "QPoint&", "QPoint", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToGlobal(QPoint&)", { "mapToGlobal", "QPoint&", "QPoint", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mask()", { "mask", "", "QRegion", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumHeight()", { "maximumHeight", "", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumSize()", { "maximumSize", "", "QSize", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumWidth()", { "maximumWidth", "", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumHeight()", { "minimumHeight", "", "int", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumSize()", { "minimumSize", "", "QSize", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumWidth()", { "minimumWidth", "", "int", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modality()", { "modality", "", "Qt::WindowModality", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opacity()", { "opacity", "", "qreal", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parent()", { "parent", "", "QWindow*", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "QPoint", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reportContentOrientationChange(enum)", { "reportContentOrientationChange", "Qt::ScreenOrientation", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedFormat()", { "requestedFormat", "", "QSurfaceFormat", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(QSize&)", { "resize", "QSize&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(int,int)", { "resize", "int,int", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screen()", { "screen", "", "QScreen*", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBaseSize(QSize&)", { "setBaseSize", "QSize&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursor(QCursor&)", { "setCursor", "QCursor&", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilePath(QString)", { "setFilePath", "QString&", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "Qt::WindowFlags", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QSurfaceFormat&)", { "setFormat", "QSurfaceFormat&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFramePosition(QPoint&)", { "setFramePosition", "QPoint&", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(int,int,int,int)", { "setGeometry", "int,int,int,int", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(QRect&)", { "setGeometry", "QRect&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKeyboardGrabEnabled(bool)", { "setKeyboardGrabEnabled", "bool", "bool", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMask(QRegion&)", { "setMask", "QRegion&", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumSize(QSize&)", { "setMaximumSize", "QSize&", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumSize(QSize&)", { "setMinimumSize", "QSize&", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModality(enum)", { "setModality", "Qt::WindowModality", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMouseGrabEnabled(bool)", { "setMouseGrabEnabled", "bool", "bool", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpacity(double)", { "setOpacity", "qreal", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setParent(QWindow*)", { "setParent", "QWindow*", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(QPoint&)", { "setPosition", "QPoint&", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(int,int)", { "setPosition", "int,int", "void", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScreen(QScreen*)", { "setScreen", "QScreen*", "void", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeIncrement(QSize&)", { "setSizeIncrement", "QSize&", "void", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSurfaceType(SurfaceType)", { "setSurfaceType", "SurfaceType", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransientParent(QWindow*)", { "setTransientParent", "QWindow*", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisibility(enum)", { "setVisibility", "Visibility", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowState(enum)", { "setWindowState", "Qt::WindowState", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeIncrement()", { "sizeIncrement", "", "QSize", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transientParent()", { "transientParent", "", "QWindow*", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Qt::WindowType", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetCursor()", { "unsetCursor", "", "void", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visibility()", { "visibility", "", "Visibility", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "winId()", { "winId", "", "WId", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowState()", { "windowState", "", "Qt::WindowState", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromWinId(WId)", { "fromWinId", "WId", "QWindow*", 76, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exposeEvent(QExposeEvent*)", { "exposeEvent", "QExposeEvent*", "void", 77, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 78, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 79, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 80, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 81, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 82, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 83, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 84, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 85, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 86, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveEvent(QMoveEvent*)", { "moveEvent", "QMoveEvent*", "void", 87, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "nativeEvent(QByteArray,void*,long*)", { "nativeEvent", "QByteArray&,void*,long*", "bool", 88, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 89, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 90, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "tabletEvent(QTabletEvent*)", { "tabletEvent", "QTabletEvent*", "void", 91, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "touchEvent(QTouchEvent*)", { "touchEvent", "QTouchEvent*", "void", 92, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 93, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 94, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "alert(int)", { "alert", "int", "void", 95, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "close()", { "close", "", "bool", 96, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "hide()", { "hide", "", "void", 97, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "lower()", { "lower", "", "void", 98, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "raise()", { "raise", "", "void", 99, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "requestActivate()", { "requestActivate", "", "void", 100, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "requestUpdate()", { "requestUpdate", "", "void", 101, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setHeight(int)", { "setHeight", "int", "void", 102, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMaximumHeight(int)", { "setMaximumHeight", "int", "void", 103, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMaximumWidth(int)", { "setMaximumWidth", "int", "void", 104, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMinimumHeight(int)", { "setMinimumHeight", "int", "void", 105, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMinimumWidth(int)", { "setMinimumWidth", "int", "void", 106, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setTitle(QString)", { "setTitle", "QString&", "void", 107, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 108, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setWidth(int)", { "setWidth", "int", "void", 109, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setX(int)", { "setX", "int", "void", 110, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setY(int)", { "setY", "int", "void", 111, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "show()", { "show", "", "void", 112, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showFullScreen()", { "showFullScreen", "", "void", 113, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMaximized()", { "showMaximized", "", "void", 114, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMinimized()", { "showMinimized", "", "void", 115, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showNormal()", { "showNormal", "", "void", 116, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWindow::plastiqSignals = {
    { "activeChanged()", { "activeChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "contentOrientationChanged(enum)", { "contentOrientationChanged", "Qt::ScreenOrientation", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "focusObjectChanged(QObject*)", { "focusObjectChanged", "QObject*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "heightChanged(int)", { "heightChanged", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maximumHeightChanged(int)", { "maximumHeightChanged", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maximumWidthChanged(int)", { "maximumWidthChanged", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minimumHeightChanged(int)", { "minimumHeightChanged", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minimumWidthChanged(int)", { "minimumWidthChanged", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modalityChanged(enum)", { "modalityChanged", "Qt::WindowModality", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "opacityChanged(double)", { "opacityChanged", "qreal", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "screenChanged(QScreen*)", { "screenChanged", "QScreen*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibilityChanged(enum)", { "visibilityChanged", "QWindow::Visibility", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibleChanged(bool)", { "visibleChanged", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "widthChanged(int)", { "widthChanged", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "windowStateChanged(enum)", { "windowStateChanged", "Qt::WindowState", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "windowTitleChanged(QString)", { "windowTitleChanged", "QString&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "xChanged(int)", { "xChanged", "int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "yChanged(int)", { "yChanged", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWindow::plastiqProperties = {
    { "active", { "active", "bool", "activeChanged", "isActive" } },
    { "contentOrientation", { "contentOrientation", "long", "reportContentOrientationChange", "contentOrientation" } },
    { "flags", { "flags", "long", "setFlags", "flags" } },
    { "height", { "height", "int", "setHeight", "height" } },
    { "maximumHeight", { "maximumHeight", "int", "setMaximumHeight", "maximumHeight" } },
    { "maximumWidth", { "maximumWidth", "int", "setMaximumWidth", "maximumWidth" } },
    { "minimumHeight", { "minimumHeight", "int", "setMinimumHeight", "minimumHeight" } },
    { "minimumWidth", { "minimumWidth", "int", "setMinimumWidth", "minimumWidth" } },
    { "modality", { "modality", "long", "setModality", "modality" } },
    { "opacity", { "opacity", "qreal", "setOpacity", "opacity" } },
    { "title", { "title", "QString", "setTitle", "title" } },
    { "visibility", { "visibility", "long", "setVisibility", "visibility" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },
    { "width", { "width", "int", "setWidth", "width" } },
    { "x", { "x", "int", "setX", "x" } },
    { "y", { "y", "int", "setY", "y" } },

};

QHash<QByteArray, long> PlastiQQWindow::plastiqConstants = {

    /* QWindow::AncestorMode */
   { "ExcludeTransients", QWindow::ExcludeTransients },
   { "IncludeTransients", QWindow::IncludeTransients },

    /* QWindow::Visibility */
   { "Hidden", QWindow::Hidden },
   { "AutomaticVisibility", QWindow::AutomaticVisibility },
   { "Windowed", QWindow::Windowed },
   { "Minimized", QWindow::Minimized },
   { "Maximized", QWindow::Maximized },
   { "FullScreen", QWindow::FullScreen },

};

QVector<PlastiQMetaObject*> PlastiQQWindow::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQSurface::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWindow::plastiq_static_objectType = PlastiQ::IsQWindow;
PlastiQMetaObject PlastiQQWindow::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWindow", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWindow::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQWindowWrapper : public QWindow {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQWindowWrapper(QScreen *targetScreen = Q_NULLPTR)
         : QWindow(targetScreen),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQWindowWrapper(QWindow *parent)
         : QWindow(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QObject* focusObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QObject* focusObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QObject* _r = reinterpret_cast<QObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QWindow::focusObject();
    }

    QObject* PlastiQParentCall_focusObject() const {
        return QWindow::focusObject();
    }

    void exposeEvent(QExposeEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void exposeEvent(QExposeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QExposeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::exposeEvent(ev);
    }

    void PlastiQParentCall_exposeEvent(QExposeEvent *ev) {
        return QWindow::exposeEvent(ev);
    }

    void focusInEvent(QFocusEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::focusInEvent(ev);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *ev) {
        return QWindow::focusInEvent(ev);
    }

    void focusOutEvent(QFocusEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::focusOutEvent(ev);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *ev) {
        return QWindow::focusOutEvent(ev);
    }

    void hideEvent(QHideEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hideEvent(QHideEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QHideEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::hideEvent(ev);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *ev) {
        return QWindow::hideEvent(ev);
    }

    void keyPressEvent(QKeyEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::keyPressEvent(ev);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *ev) {
        return QWindow::keyPressEvent(ev);
    }

    void keyReleaseEvent(QKeyEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::keyReleaseEvent(ev);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *ev) {
        return QWindow::keyReleaseEvent(ev);
    }

    void mouseDoubleClickEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::mouseDoubleClickEvent(ev);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *ev) {
        return QWindow::mouseDoubleClickEvent(ev);
    }

    void mouseMoveEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::mouseMoveEvent(ev);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *ev) {
        return QWindow::mouseMoveEvent(ev);
    }

    void mousePressEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::mousePressEvent(ev);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *ev) {
        return QWindow::mousePressEvent(ev);
    }

    void mouseReleaseEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::mouseReleaseEvent(ev);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *ev) {
        return QWindow::mouseReleaseEvent(ev);
    }

    void moveEvent(QMoveEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void moveEvent(QMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::moveEvent(ev);
    }

    void PlastiQParentCall_moveEvent(QMoveEvent *ev) {
        return QWindow::moveEvent(ev);
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
        else return QWindow::nativeEvent(eventType,message,result);
    }

    bool PlastiQParentCall_nativeEvent(const QByteArray &eventType, void *message, long *result) {
        return QWindow::nativeEvent(eventType,message,result);
    }

    void resizeEvent(QResizeEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::resizeEvent(ev);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *ev) {
        return QWindow::resizeEvent(ev);
    }

    void showEvent(QShowEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::showEvent(ev);
    }

    void PlastiQParentCall_showEvent(QShowEvent *ev) {
        return QWindow::showEvent(ev);
    }

    void tabletEvent(QTabletEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void tabletEvent(QTabletEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QTabletEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::tabletEvent(ev);
    }

    void PlastiQParentCall_tabletEvent(QTabletEvent *ev) {
        return QWindow::tabletEvent(ev);
    }

    void touchEvent(QTouchEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void touchEvent(QTouchEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QTouchEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::touchEvent(ev);
    }

    void PlastiQParentCall_touchEvent(QTouchEvent *ev) {
        return QWindow::touchEvent(ev);
    }

    void wheelEvent(QWheelEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWindow::wheelEvent(ev);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *ev) {
        return QWindow::wheelEvent(ev);
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
        else return QWindow::event(ev);
    }

    bool PlastiQParentCall_event(QEvent *ev) {
        return QWindow::event(ev);
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
        else return QWindow::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QWindow::eventFilter(watched,event);
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
        else return QWindow::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QWindow::metaObject();
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
        else return QWindow::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QWindow::childEvent(event);
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
        else return QWindow::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QWindow::connectNotify(signal);
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
        else return QWindow::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QWindow::customEvent(event);
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
        else return QWindow::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QWindow::disconnectNotify(signal);
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
        else return QWindow::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QWindow::timerEvent(event);
    }

};

void PlastiQQWindow::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQWindowWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQWindowWrapper(); break;
        case 1: o = new PlastiQQWindowWrapper(reinterpret_cast<QScreen*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQWindowWrapper(reinterpret_cast<QWindow*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQWindow *p = new PlastiQQWindow();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWindow *p = new PlastiQQWindow();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 117) {
            id -= 117;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWindow *o = sc ? Q_NULLPTR : reinterpret_cast<QWindow*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSize *_r = new QSize(o->baseSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->contentOrientation(); // HACK for Qt::ScreenOrientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: o->create();
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QCursor *_r = new QCursor(o->cursor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->destroy();
                stack[0].type = PlastiQ::Void; break;
        case 5: { double _r = o->devicePixelRatio();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { QString _r = o->filePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { qint64 _r = o->flags(); // HACK for Qt::WindowFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { QObject* _r;
                if (isWrapper) _r = ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_focusObject();
                else _r = o->focusObject();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 9: { /* COPY OBJECT */
            QRect *_r = new QRect(o->frameGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QMargins *_r = new QMargins(o->frameMargins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMargins";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->framePosition());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QRect *_r = new QRect(o->geometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isAncestorOf(reinterpret_cast<const QWindow*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->isAncestorOf(reinterpret_cast<const QWindow*>(stack[1].s_voidp),
                    QWindow::AncestorMode(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->isExposed();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isModal();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->isTopLevel();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapFromGlobal((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapToGlobal((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->mask());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { int _r = o->maximumHeight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { /* COPY OBJECT */
            QSize *_r = new QSize(o->maximumSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { int _r = o->maximumWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: { int _r = o->minimumHeight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 29: { /* COPY OBJECT */
            QSize *_r = new QSize(o->minimumSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { int _r = o->minimumWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 31: { qint64 _r = o->modality(); // HACK for Qt::WindowModality 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 32: { double _r = o->opacity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 33: { QWindow* _r = o->parent();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 34: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->position());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: o->reportContentOrientationChange(Qt::ScreenOrientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 36: { /* COPY OBJECT */
            QSurfaceFormat *_r = new QSurfaceFormat(o->requestedFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSurfaceFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 37: o->resize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->resize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 39: { QScreen* _r = o->screen();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QScreen"; } break;
        case 40: o->setBaseSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setFilePath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setFlags(Qt::WindowFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setFormat((*reinterpret_cast< QSurfaceFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setFramePosition((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setGeometry(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setGeometry((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 49: { bool _r = o->setKeyboardGrabEnabled(stack[1].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: o->setMask((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setMaximumSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 52: o->setMinimumSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 53: o->setModality(Qt::WindowModality(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 54: { bool _r = o->setMouseGrabEnabled(stack[1].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 55: o->setOpacity(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 56: o->setParent(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 57: o->setPosition((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 58: o->setPosition(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 59: o->setScreen(reinterpret_cast<QScreen*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 60: o->setSizeIncrement((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 61: /* o->setSurfaceType(UNSUPPORTED_TYPE_SurfaceType) | ret: `void` */ break;
        case 62: o->setTransientParent(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 63: o->setVisibility(QWindow::Visibility(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 64: o->setWindowState(Qt::WindowState(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 65: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeIncrement());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 66: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 67: { QWindow* _r = o->transientParent();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 68: { qint64 _r = o->type(); // HACK for Qt::WindowType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 69: o->unsetCursor();
                stack[0].type = PlastiQ::Void; break;
        case 70: { qint64 _r = o->visibility(); // HACK for Visibility 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 71: { int _r = o->width();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 72: /* UNSUPPORTED_RETURN_VALUE o->winId() | ret: `WId` */ break;
        case 73: { qint64 _r = o->windowState(); // HACK for Qt::WindowState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 74: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 75: { int _r = o->y();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 76: /* o->fromWinId(UNSUPPORTED_TYPE_WId) | ret: `QWindow*` */ break;
        case 77: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_exposeEvent(reinterpret_cast<QExposeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 78: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 79: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 80: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_hideEvent(reinterpret_cast<QHideEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 81: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 82: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 83: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 84: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 85: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 86: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 87: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_moveEvent(reinterpret_cast<QMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 88: { bool _r;
                if (isWrapper) _r = ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_nativeEvent(stack[1].s_bytearray,
                    reinterpret_cast<void*>(stack[2].s_voidp),
                    reinterpret_cast<long*>(stack[3].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 89: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 90: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 91: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_tabletEvent(reinterpret_cast<QTabletEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 92: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_touchEvent(reinterpret_cast<QTouchEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 93: if (isWrapper) ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 94: { bool _r;
                if (isWrapper) _r = ((PlastiQQWindowWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 95: o->alert(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 96: { bool _r = o->close();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 97: o->hide();
                stack[0].type = PlastiQ::Void; break;
        case 98: o->lower();
                stack[0].type = PlastiQ::Void; break;
        case 99: o->raise();
                stack[0].type = PlastiQ::Void; break;
        case 100: o->requestActivate();
                stack[0].type = PlastiQ::Void; break;
        case 101: o->requestUpdate();
                stack[0].type = PlastiQ::Void; break;
        case 102: o->setHeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 103: o->setMaximumHeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 104: o->setMaximumWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 105: o->setMinimumHeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 106: o->setMinimumWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 107: o->setTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 108: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 109: o->setWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 110: o->setX(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 111: o->setY(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 112: o->show();
                stack[0].type = PlastiQ::Void; break;
        case 113: o->showFullScreen();
                stack[0].type = PlastiQ::Void; break;
        case 114: o->showMaximized();
                stack[0].type = PlastiQ::Void; break;
        case 115: o->showMinimized();
                stack[0].type = PlastiQ::Void; break;
        case 116: o->showNormal();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 18) {
            id -= 18;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWindow *o = reinterpret_cast<QWindow*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWindow::activeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "activeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QWindow::contentOrientationChanged,
            [=](Qt::ScreenOrientation arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::ScreenOrientation";
                PlastiQ_activate(sender, "contentOrientationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QWindow::focusObjectChanged,
            [=](QObject* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QObject";
                PlastiQ_activate(sender, "focusObjectChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QWindow::heightChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "heightChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QWindow::maximumHeightChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "maximumHeightChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QWindow::maximumWidthChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "maximumWidthChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QWindow::minimumHeightChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "minimumHeightChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QWindow::minimumWidthChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "minimumWidthChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QWindow::modalityChanged,
            [=](Qt::WindowModality arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::WindowModality";
                PlastiQ_activate(sender, "modalityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QWindow::opacityChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "opacityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QWindow::screenChanged,
            [=](QScreen* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QScreen";
                PlastiQ_activate(sender, "screenChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QWindow::visibilityChanged,
            [=](QWindow::Visibility arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QWindow::Visibility";
                PlastiQ_activate(sender, "visibilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QWindow::visibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "visibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QWindow::widthChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "widthChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QWindow::windowStateChanged,
            [=](Qt::WindowState arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::WindowState";
                PlastiQ_activate(sender, "windowStateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 15: QObject::connect(o, &QWindow::windowTitleChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "windowTitleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 16: QObject::connect(o, &QWindow::xChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "xChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 17: QObject::connect(o, static_cast<void (QWindow::*)(int)>(&QWindow::yChanged),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "yChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWindow *o = reinterpret_cast<QWindow*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWindow *o = reinterpret_cast<QWindow*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWindow *o = reinterpret_cast<QWindow*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QSurface") {
            stack[0].s_voidp = static_cast<QSurface*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWindow::~PlastiQQWindow() {
    QWindow* o = reinterpret_cast<QWindow*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
