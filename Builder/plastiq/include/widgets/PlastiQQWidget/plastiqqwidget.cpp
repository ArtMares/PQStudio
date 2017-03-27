#include "plastiqmethod.h"
#include "plastiqqwidget.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "gui/PlastiQQPaintDevice/plastiqqpaintdevice.h"
#include <QWidget> 
#include <QString>
#include <QBackingStore>
#include <QSize>
#include <QRect>
#include <QRegion>
#include <QMargins>
#include <QCursor>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QPixmap>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QVariant>
#include <QLayout>
#include <QLocale>
#include <QPoint>
#include <QPalette>
#include <QByteArray>
#include <QSizePolicy>
#include <QStyle>
#include <QWindow>
#include <QIcon>
#include <QActionEvent>
#include <QEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QTabletEvent>
#include <QWheelEvent>
#include <QPainter>

QHash<QByteArray, PlastiQMethod> PlastiQQWidget::plastiqConstructors = {
    { "QWidget()", { "QWidget", "", "QWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWidget(QWidget*)", { "QWidget", "QWidget*", "QWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWidget(QWidget*,enum)", { "QWidget", "QWidget*,Qt::WindowFlags", "QWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWidget::plastiqMethods = {
    { "acceptDrops()", { "acceptDrops", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "accessibleDescription()", { "accessibleDescription", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "accessibleName()", { "accessibleName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "activateWindow()", { "activateWindow", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QAction*)", { "addAction", "QAction*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "adjustSize()", { "adjustSize", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoFillBackground()", { "autoFillBackground", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundRole()", { "backgroundRole", "", "QPalette::ColorRole", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backingStore()", { "backingStore", "", "QBackingStore*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "baseSize()", { "baseSize", "", "QSize", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childAt(int,int)", { "childAt", "int,int", "QWidget*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childAt(QPoint&)", { "childAt", "QPoint&", "QWidget*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childrenRect()", { "childrenRect", "", "QRect", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childrenRegion()", { "childrenRegion", "", "QRegion", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearFocus()", { "clearFocus", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearMask()", { "clearMask", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contentsMargins()", { "contentsMargins", "", "QMargins", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contentsRect()", { "contentsRect", "", "QRect", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contextMenuPolicy()", { "contextMenuPolicy", "", "Qt::ContextMenuPolicy", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursor()", { "cursor", "", "QCursor", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "effectiveWinId()", { "effectiveWinId", "", "WId", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensurePolished()", { "ensurePolished", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusPolicy()", { "focusPolicy", "", "Qt::FocusPolicy", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusProxy()", { "focusProxy", "", "QWidget*", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusWidget()", { "focusWidget", "", "QWidget*", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "const QFont&", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontInfo()", { "fontInfo", "", "QFontInfo", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontMetrics()", { "fontMetrics", "", "QFontMetrics", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foregroundRole()", { "foregroundRole", "", "QPalette::ColorRole", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameGeometry()", { "frameGeometry", "", "QRect", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameSize()", { "frameSize", "", "QSize", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "geometry()", { "geometry", "", "const QRect&", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getContentsMargins(int*,int*,int*,int*)", { "getContentsMargins", "int*,int*,int*,int*", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grab()", { "grab", "", "QPixmap", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grab(QRect&)", { "grab", "QRect&", "QPixmap", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabGesture(enum)", { "grabGesture", "Qt::GestureType", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabGesture(enum,enum)", { "grabGesture", "Qt::GestureType,Qt::GestureFlags", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabKeyboard()", { "grabKeyboard", "", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabMouse()", { "grabMouse", "", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabMouse(QCursor&)", { "grabMouse", "QCursor&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabShortcut(QKeySequence&)", { "grabShortcut", "QKeySequence&", "int", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabShortcut(QKeySequence&,enum)", { "grabShortcut", "QKeySequence&,Qt::ShortcutContext", "int", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "graphicsEffect()", { "graphicsEffect", "", "QGraphicsEffect*", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "graphicsProxyWidget()", { "graphicsProxyWidget", "", "QGraphicsProxyWidget*", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFocus()", { "hasFocus", "", "bool", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasHeightForWidth()", { "hasHeightForWidth", "", "bool", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasMouseTracking()", { "hasMouseTracking", "", "bool", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "heightForWidth(int)", { "heightForWidth", "int", "int", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputMethodHints()", { "inputMethodHints", "", "Qt::InputMethodHints", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputMethodQuery(enum)", { "inputMethodQuery", "Qt::InputMethodQuery", "QVariant", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertAction(QAction*,QAction*)", { "insertAction", "QAction*,QAction*", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActiveWindow()", { "isActiveWindow", "", "bool", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAncestorOf(const QWidget*)", { "isAncestorOf", "QWidget*", "bool", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabledTo(const QWidget*)", { "isEnabledTo", "QWidget*", "bool", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFullScreen()", { "isFullScreen", "", "bool", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isHidden()", { "isHidden", "", "bool", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMaximized()", { "isMaximized", "", "bool", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMinimized()", { "isMinimized", "", "bool", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isModal()", { "isModal", "", "bool", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisibleTo(const QWidget*)", { "isVisibleTo", "QWidget*", "bool", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWindow()", { "isWindow", "", "bool", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWindowModified()", { "isWindowModified", "", "bool", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layout()", { "layout", "", "QLayout*", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layoutDirection()", { "layoutDirection", "", "Qt::LayoutDirection", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "locale()", { "locale", "", "QLocale", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFrom(const QWidget*,QPoint&)", { "mapFrom", "QWidget*,QPoint&", "QPoint", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromGlobal(QPoint&)", { "mapFromGlobal", "QPoint&", "QPoint", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromParent(QPoint&)", { "mapFromParent", "QPoint&", "QPoint", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapTo(const QWidget*,QPoint&)", { "mapTo", "QWidget*,QPoint&", "QPoint", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToGlobal(QPoint&)", { "mapToGlobal", "QPoint&", "QPoint", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToParent(QPoint&)", { "mapToParent", "QPoint&", "QPoint", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mask()", { "mask", "", "QRegion", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumHeight()", { "maximumHeight", "", "int", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumSize()", { "maximumSize", "", "QSize", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumWidth()", { "maximumWidth", "", "int", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumHeight()", { "minimumHeight", "", "int", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumSize()", { "minimumSize", "", "QSize", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumSizeHint()", { "minimumSizeHint", "", "QSize", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumWidth()", { "minimumWidth", "", "int", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "move(QPoint&)", { "move", "QPoint&", "void", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "move(int,int)", { "move", "int,int", "void", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeParentWidget()", { "nativeParentWidget", "", "QWidget*", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextInFocusChain()", { "nextInFocusChain", "", "QWidget*", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalGeometry()", { "normalGeometry", "", "QRect", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overrideWindowFlags(enum)", { "overrideWindowFlags", "Qt::WindowFlags", "void", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "palette()", { "palette", "", "const QPalette&", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentWidget()", { "parentWidget", "", "QWidget*", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPoint", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "previousInFocusChain()", { "previousInFocusChain", "", "QWidget*", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rect()", { "rect", "", "QRect", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "releaseKeyboard()", { "releaseKeyboard", "", "void", 93, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "releaseMouse()", { "releaseMouse", "", "void", 94, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "releaseShortcut(int)", { "releaseShortcut", "int", "void", 95, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAction(QAction*)", { "removeAction", "QAction*", "void", 96, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPaintDevice*)", { "render", "QPaintDevice*", "void", 97, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPaintDevice*,QPoint&)", { "render", "QPaintDevice*,QPoint&", "void", 98, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPaintDevice*,QPoint&,QRegion&)", { "render", "QPaintDevice*,QPoint&,QRegion&", "void", 99, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPaintDevice*,QPoint&,QRegion&,enum)", { "render", "QPaintDevice*,QPoint&,QRegion&,RenderFlags", "void", 100, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*)", { "render", "QPainter*", "void", 101, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QPoint&)", { "render", "QPainter*,QPoint&", "void", 102, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QPoint&,QRegion&)", { "render", "QPainter*,QPoint&,QRegion&", "void", 103, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QPoint&,QRegion&,enum)", { "render", "QPainter*,QPoint&,QRegion&,RenderFlags", "void", 104, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "repaint(int,int,int,int)", { "repaint", "int,int,int,int", "void", 105, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "repaint(QRect&)", { "repaint", "QRect&", "void", 106, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "repaint(QRegion&)", { "repaint", "QRegion&", "void", 107, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(QSize&)", { "resize", "QSize&", "void", 108, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(int,int)", { "resize", "int,int", "void", 109, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restoreGeometry(QByteArray)", { "restoreGeometry", "QByteArray&", "bool", 110, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saveGeometry()", { "saveGeometry", "", "QByteArray", 111, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(int,int)", { "scroll", "int,int", "void", 112, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(int,int,QRect&)", { "scroll", "int,int,QRect&", "void", 113, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAcceptDrops(bool)", { "setAcceptDrops", "bool", "void", 114, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccessibleDescription(QString)", { "setAccessibleDescription", "QString&", "void", 115, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccessibleName(QString)", { "setAccessibleName", "QString&", "void", 116, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAttribute(enum)", { "setAttribute", "Qt::WidgetAttribute", "void", 117, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAttribute(enum,bool)", { "setAttribute", "Qt::WidgetAttribute,bool", "void", 118, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoFillBackground(bool)", { "setAutoFillBackground", "bool", "void", 119, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundRole(enum)", { "setBackgroundRole", "QPalette::ColorRole", "void", 120, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBaseSize(QSize&)", { "setBaseSize", "QSize&", "void", 121, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBaseSize(int,int)", { "setBaseSize", "int,int", "void", 122, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentsMargins(int,int,int,int)", { "setContentsMargins", "int,int,int,int", "void", 123, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentsMargins(QMargins&)", { "setContentsMargins", "QMargins&", "void", 124, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContextMenuPolicy(enum)", { "setContextMenuPolicy", "Qt::ContextMenuPolicy", "void", 125, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursor(QCursor&)", { "setCursor", "QCursor&", "void", 126, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFixedHeight(int)", { "setFixedHeight", "int", "void", 127, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFixedSize(QSize&)", { "setFixedSize", "QSize&", "void", 128, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFixedSize(int,int)", { "setFixedSize", "int,int", "void", 129, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFixedWidth(int)", { "setFixedWidth", "int", "void", 130, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocus(enum)", { "setFocus", "Qt::FocusReason", "void", 131, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusPolicy(enum)", { "setFocusPolicy", "Qt::FocusPolicy", "void", 132, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusProxy(QWidget*)", { "setFocusProxy", "QWidget*", "void", 133, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 134, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setForegroundRole(enum)", { "setForegroundRole", "QPalette::ColorRole", "void", 135, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(QRect&)", { "setGeometry", "QRect&", "void", 136, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(int,int,int,int)", { "setGeometry", "int,int,int,int", "void", 137, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGraphicsEffect(QGraphicsEffect*)", { "setGraphicsEffect", "QGraphicsEffect*", "void", 138, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInputMethodHints(enum)", { "setInputMethodHints", "Qt::InputMethodHints", "void", 139, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLayout(QLayout*)", { "setLayout", "QLayout*", "void", 140, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLayoutDirection(enum)", { "setLayoutDirection", "Qt::LayoutDirection", "void", 141, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocale(QLocale&)", { "setLocale", "QLocale&", "void", 142, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMask(QBitmap&)", { "setMask", "QBitmap&", "void", 143, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMask(QRegion&)", { "setMask", "QRegion&", "void", 144, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumHeight(int)", { "setMaximumHeight", "int", "void", 145, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumSize(QSize&)", { "setMaximumSize", "QSize&", "void", 146, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumSize(int,int)", { "setMaximumSize", "int,int", "void", 147, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumWidth(int)", { "setMaximumWidth", "int", "void", 148, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumHeight(int)", { "setMinimumHeight", "int", "void", 149, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumSize(QSize&)", { "setMinimumSize", "QSize&", "void", 150, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumSize(int,int)", { "setMinimumSize", "int,int", "void", 151, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumWidth(int)", { "setMinimumWidth", "int", "void", 152, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMouseTracking(bool)", { "setMouseTracking", "bool", "void", 153, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPalette(QPalette&)", { "setPalette", "QPalette&", "void", 154, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setParent(QWidget*)", { "setParent", "QWidget*", "void", 155, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setParent(QWidget*,enum)", { "setParent", "QWidget*,Qt::WindowFlags", "void", 156, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutAutoRepeat(int)", { "setShortcutAutoRepeat", "int", "void", 157, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutAutoRepeat(int,bool)", { "setShortcutAutoRepeat", "int,bool", "void", 158, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutEnabled(int)", { "setShortcutEnabled", "int", "void", 159, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutEnabled(int,bool)", { "setShortcutEnabled", "int,bool", "void", 160, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeIncrement(QSize&)", { "setSizeIncrement", "QSize&", "void", 161, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeIncrement(int,int)", { "setSizeIncrement", "int,int", "void", 162, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizePolicy(QSizePolicy)", { "setSizePolicy", "QSizePolicy", "void", 163, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizePolicy(enum,enum)", { "setSizePolicy", "QSizePolicy::Policy,QSizePolicy::Policy", "void", 164, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatusTip(QString)", { "setStatusTip", "QString&", "void", 165, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyle(QStyle*)", { "setStyle", "QStyle*", "void", 166, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 167, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTipDuration(int)", { "setToolTipDuration", "int", "void", 168, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUpdatesEnabled(bool)", { "setUpdatesEnabled", "bool", "void", 169, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWhatsThis(QString)", { "setWhatsThis", "QString&", "void", 170, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowFilePath(QString)", { "setWindowFilePath", "QString&", "void", 171, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowFlags(enum)", { "setWindowFlags", "Qt::WindowFlags", "void", 172, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowIcon(QIcon&)", { "setWindowIcon", "QIcon&", "void", 173, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowModality(enum)", { "setWindowModality", "Qt::WindowModality", "void", 174, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowOpacity(double)", { "setWindowOpacity", "qreal", "void", 175, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowRole(QString)", { "setWindowRole", "QString&", "void", 176, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowState(enum)", { "setWindowState", "Qt::WindowStates", "void", 177, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSize", 178, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint()", { "sizeHint", "", "QSize", 179, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeIncrement()", { "sizeIncrement", "", "QSize", 180, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizePolicy()", { "sizePolicy", "", "QSizePolicy", 181, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stackUnder(QWidget*)", { "stackUnder", "QWidget*", "void", 182, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "statusTip()", { "statusTip", "", "QString", 183, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "QStyle*", 184, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleSheet()", { "styleSheet", "", "QString", 185, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testAttribute(enum)", { "testAttribute", "Qt::WidgetAttribute", "bool", 186, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 187, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTipDuration()", { "toolTipDuration", "", "int", 188, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "underMouse()", { "underMouse", "", "bool", 189, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ungrabGesture(enum)", { "ungrabGesture", "Qt::GestureType", "void", 190, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetCursor()", { "unsetCursor", "", "void", 191, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetLayoutDirection()", { "unsetLayoutDirection", "", "void", 192, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetLocale()", { "unsetLocale", "", "void", 193, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update(int,int,int,int)", { "update", "int,int,int,int", "void", 194, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update(QRect&)", { "update", "QRect&", "void", 195, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update(QRegion&)", { "update", "QRegion&", "void", 196, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateGeometry()", { "updateGeometry", "", "void", 197, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updatesEnabled()", { "updatesEnabled", "", "bool", 198, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visibleRegion()", { "visibleRegion", "", "QRegion", 199, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "whatsThis()", { "whatsThis", "", "QString", 200, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 201, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "winId()", { "winId", "", "WId", 202, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "window()", { "window", "", "QWidget*", 203, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowFilePath()", { "windowFilePath", "", "QString", 204, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowFlags()", { "windowFlags", "", "Qt::WindowFlags", 205, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowHandle()", { "windowHandle", "", "QWindow*", 206, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowIcon()", { "windowIcon", "", "QIcon", 207, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowModality()", { "windowModality", "", "Qt::WindowModality", 208, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowOpacity()", { "windowOpacity", "", "qreal", 209, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowRole()", { "windowRole", "", "QString", 210, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowState()", { "windowState", "", "Qt::WindowStates", 211, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowTitle()", { "windowTitle", "", "QString", 212, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowType()", { "windowType", "", "Qt::WindowType", 213, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 214, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 215, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createWindowContainer(QWindow*)", { "createWindowContainer", "QWindow*", "QWidget*", 216, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createWindowContainer(QWindow*,QWidget*)", { "createWindowContainer", "QWindow*,QWidget*", "QWidget*", 217, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createWindowContainer(QWindow*,QWidget*,enum)", { "createWindowContainer", "QWindow*,QWidget*,Qt::WindowFlags", "QWidget*", 218, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "find(WId)", { "find", "WId", "QWidget*", 219, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "keyboardGrabber()", { "keyboardGrabber", "", "QWidget*", 220, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "mouseGrabber()", { "mouseGrabber", "", "QWidget*", 221, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setTabOrder(QWidget*,QWidget*)", { "setTabOrder", "QWidget*,QWidget*", "void", 222, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "actionEvent(QActionEvent*)", { "actionEvent", "QActionEvent*", "void", 223, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 224, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "closeEvent(QCloseEvent*)", { "closeEvent", "QCloseEvent*", "void", 225, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 226, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "create()", { "create", "", "void", 227, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "create(WId)", { "create", "WId", "void", 228, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "create(WId,bool)", { "create", "WId,bool", "void", 229, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "create(WId,bool,bool)", { "create", "WId,bool,bool", "void", 230, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "destroy()", { "destroy", "", "void", 231, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "destroy(bool)", { "destroy", "bool", "void", 232, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "destroy(bool,bool)", { "destroy", "bool,bool", "void", 233, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "dragEnterEvent(QDragEnterEvent*)", { "dragEnterEvent", "QDragEnterEvent*", "void", 234, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QDragLeaveEvent*)", { "dragLeaveEvent", "QDragLeaveEvent*", "void", 235, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 236, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 237, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "enterEvent(QEvent*)", { "enterEvent", "QEvent*", "void", 238, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 239, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextChild()", { "focusNextChild", "", "bool", 240, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 241, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 242, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusPreviousChild()", { "focusPreviousChild", "", "bool", 243, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 244, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 245, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 246, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 247, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "leaveEvent(QEvent*)", { "leaveEvent", "QEvent*", "void", 248, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 249, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 250, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 251, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 252, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveEvent(QMoveEvent*)", { "moveEvent", "QMoveEvent*", "void", 253, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "nativeEvent(QByteArray,void*,long*)", { "nativeEvent", "QByteArray&,void*,long*", "bool", 254, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 255, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 256, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 257, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "tabletEvent(QTabletEvent*)", { "tabletEvent", "QTabletEvent*", "void", 258, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 259, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 260, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "initPainter(QPainter*)", { "initPainter", "QPainter*", "void", 261, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "metric(PaintDeviceMetric)", { "metric", "PaintDeviceMetric", "int", 262, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "close()", { "close", "", "bool", 263, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "hide()", { "hide", "", "void", 264, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "lower()", { "lower", "", "void", 265, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "raise()", { "raise", "", "void", 266, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "repaint()", { "repaint", "", "void", 267, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setDisabled(bool)", { "setDisabled", "bool", "void", 268, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 269, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFocus()", { "setFocus", "", "void", 270, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setHidden(bool)", { "setHidden", "bool", "void", 271, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setStyleSheet(QString)", { "setStyleSheet", "QString&", "void", 272, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 273, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setWindowModified(bool)", { "setWindowModified", "bool", "void", 274, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setWindowTitle(QString)", { "setWindowTitle", "QString&", "void", 275, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "show()", { "show", "", "void", 276, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showFullScreen()", { "showFullScreen", "", "void", 277, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMaximized()", { "showMaximized", "", "void", 278, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMinimized()", { "showMinimized", "", "void", 279, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showNormal()", { "showNormal", "", "void", 280, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "update()", { "update", "", "void", 281, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWidget::plastiqSignals = {
    { "customContextMenuRequested(QPoint&)", { "customContextMenuRequested", "QPoint&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "windowIconChanged(QIcon&)", { "windowIconChanged", "QIcon&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "windowTitleChanged(QString)", { "windowTitleChanged", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWidget::plastiqProperties = {
    { "acceptDrops", { "acceptDrops", "bool", "setAcceptDrops", "acceptDrops" } },
    { "accessibleDescription", { "accessibleDescription", "QString", "setAccessibleDescription", "accessibleDescription" } },
    { "accessibleName", { "accessibleName", "QString", "setAccessibleName", "accessibleName" } },
    { "autoFillBackground", { "autoFillBackground", "bool", "setAutoFillBackground", "autoFillBackground" } },
    { "baseSize", { "baseSize", "QSize", "setBaseSize", "baseSize" } },
    { "childrenRect", { "childrenRect", "QRect", "", "childrenRect" } },
    { "childrenRegion", { "childrenRegion", "QRegion", "", "childrenRegion" } },
    { "contextMenuPolicy", { "contextMenuPolicy", "long", "setContextMenuPolicy", "contextMenuPolicy" } },
    { "cursor", { "cursor", "QCursor", "setCursor", "cursor" } },
    { "enabled", { "enabled", "bool", "setEnabled", "isEnabled" } },
    { "focus", { "focus", "bool", "", "hasFocus" } },
    { "focusPolicy", { "focusPolicy", "long", "setFocusPolicy", "focusPolicy" } },
    { "font", { "font", "QFont", "setFont", "font" } },
    { "frameGeometry", { "frameGeometry", "QRect", "", "frameGeometry" } },
    { "frameSize", { "frameSize", "QSize", "", "frameSize" } },
    { "fullScreen", { "fullScreen", "bool", "", "isFullScreen" } },
    { "geometry", { "geometry", "QRect", "setGeometry", "geometry" } },
    { "height", { "height", "int", "", "height" } },
    { "inputMethodHints", { "inputMethodHints", "long", "setInputMethodHints", "inputMethodHints" } },
    { "isActiveWindow", { "isActiveWindow", "bool", "", "isActiveWindow" } },
    { "layoutDirection", { "layoutDirection", "long", "setLayoutDirection", "layoutDirection" } },
    { "locale", { "locale", "QLocale", "setLocale", "locale" } },
    { "maximized", { "maximized", "bool", "", "isMaximized" } },
    { "maximumHeight", { "maximumHeight", "int", "setMaximumHeight", "maximumHeight" } },
    { "maximumSize", { "maximumSize", "QSize", "setMaximumSize", "maximumSize" } },
    { "maximumWidth", { "maximumWidth", "int", "setMaximumWidth", "maximumWidth" } },
    { "minimized", { "minimized", "bool", "", "isMinimized" } },
    { "minimumHeight", { "minimumHeight", "int", "setMinimumHeight", "minimumHeight" } },
    { "minimumSize", { "minimumSize", "QSize", "setMinimumSize", "minimumSize" } },
    { "minimumSizeHint", { "minimumSizeHint", "QSize", "", "minimumSizeHint" } },
    { "minimumWidth", { "minimumWidth", "int", "setMinimumWidth", "minimumWidth" } },
    { "modal", { "modal", "bool", "", "isModal" } },
    { "mouseTracking", { "mouseTracking", "bool", "setMouseTracking", "hasMouseTracking" } },
    { "normalGeometry", { "normalGeometry", "QRect", "", "normalGeometry" } },
    { "palette", { "palette", "QPalette", "setPalette", "palette" } },
    { "pos", { "pos", "QPoint", "move", "pos" } },
    { "rect", { "rect", "QRect", "", "rect" } },
    { "size", { "size", "QSize", "resize", "size" } },
    { "sizeHint", { "sizeHint", "QSize", "", "sizeHint" } },
    { "sizeIncrement", { "sizeIncrement", "QSize", "setSizeIncrement", "sizeIncrement" } },
    { "sizePolicy", { "sizePolicy", "QSizePolicy", "setSizePolicy", "sizePolicy" } },
    { "statusTip", { "statusTip", "QString", "setStatusTip", "statusTip" } },
    { "styleSheet", { "styleSheet", "QString", "setStyleSheet", "styleSheet" } },
    { "toolTip", { "toolTip", "QString", "setToolTip", "toolTip" } },
    { "toolTipDuration", { "toolTipDuration", "int", "setToolTipDuration", "toolTipDuration" } },
    { "updatesEnabled", { "updatesEnabled", "bool", "setUpdatesEnabled", "updatesEnabled" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },
    { "whatsThis", { "whatsThis", "QString", "setWhatsThis", "whatsThis" } },
    { "width", { "width", "int", "", "width" } },
    { "windowFilePath", { "windowFilePath", "QString", "setWindowFilePath", "windowFilePath" } },
    { "windowFlags", { "windowFlags", "long", "setWindowFlags", "windowFlags" } },
    { "windowIcon", { "windowIcon", "QIcon", "setWindowIcon", "windowIcon" } },
    { "windowModality", { "windowModality", "long", "setWindowModality", "windowModality" } },
    { "windowModified", { "windowModified", "bool", "setWindowModified", "isWindowModified" } },
    { "windowOpacity", { "windowOpacity", "double", "setWindowOpacity", "windowOpacity" } },
    { "windowTitle", { "windowTitle", "QString", "setWindowTitle", "windowTitle" } },
    { "x", { "x", "int", "", "x" } },
    { "y", { "y", "int", "", "y" } },

};

QHash<QByteArray, long> PlastiQQWidget::plastiqConstants = {

    /* QWidget::RenderFlag */
   { "DrawWindowBackground", QWidget::DrawWindowBackground },
   { "DrawChildren", QWidget::DrawChildren },
   { "IgnoreMask", QWidget::IgnoreMask },

};

QVector<PlastiQMetaObject*> PlastiQQWidget::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQPaintDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQWidget::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQWidgetWrapper : public QWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQWidgetWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QWidget(parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool hasHeightForWidth() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hasHeightForWidth()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWidget::hasHeightForWidth();
    }

    bool PlastiQParentCall_hasHeightForWidth() const {
        return QWidget::hasHeightForWidth();
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
        else return QWidget::heightForWidth(w);
    }

    int PlastiQParentCall_heightForWidth(int w) const {
        return QWidget::heightForWidth(w);
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
        else return QWidget::inputMethodQuery(query);
    }

    QVariant PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery query) const {
        return QWidget::inputMethodQuery(query);
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
        else return QWidget::minimumSizeHint();
    }

    QSize PlastiQParentCall_minimumSizeHint() const {
        return QWidget::minimumSizeHint();
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
        else return QWidget::sizeHint();
    }

    QSize PlastiQParentCall_sizeHint() const {
        return QWidget::sizeHint();
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
        else return QWidget::actionEvent(event);
    }

    void PlastiQParentCall_actionEvent(QActionEvent *event) {
        return QWidget::actionEvent(event);
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
        else return QWidget::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QWidget::changeEvent(event);
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
        else return QWidget::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QWidget::closeEvent(event);
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
        else return QWidget::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QWidget::contextMenuEvent(event);
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
        else return QWidget::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QWidget::dragEnterEvent(event);
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
        else return QWidget::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QWidget::dragLeaveEvent(event);
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
        else return QWidget::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QWidget::dragMoveEvent(event);
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
        else return QWidget::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QWidget::dropEvent(event);
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
        else return QWidget::enterEvent(event);
    }

    void PlastiQParentCall_enterEvent(QEvent *event) {
        return QWidget::enterEvent(event);
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
        else return QWidget::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QWidget::focusInEvent(event);
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
        else return QWidget::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QWidget::focusNextPrevChild(next);
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
        else return QWidget::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QWidget::focusOutEvent(event);
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
        else return QWidget::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QWidget::hideEvent(event);
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
        else return QWidget::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QWidget::inputMethodEvent(event);
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
        else return QWidget::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QWidget::keyPressEvent(event);
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
        else return QWidget::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QWidget::keyReleaseEvent(event);
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
        else return QWidget::leaveEvent(event);
    }

    void PlastiQParentCall_leaveEvent(QEvent *event) {
        return QWidget::leaveEvent(event);
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
        else return QWidget::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QWidget::mouseDoubleClickEvent(event);
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
        else return QWidget::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QWidget::mouseMoveEvent(event);
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
        else return QWidget::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QWidget::mousePressEvent(event);
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
        else return QWidget::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QWidget::mouseReleaseEvent(event);
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
        else return QWidget::moveEvent(event);
    }

    void PlastiQParentCall_moveEvent(QMoveEvent *event) {
        return QWidget::moveEvent(event);
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
        else return QWidget::nativeEvent(eventType,message,result);
    }

    bool PlastiQParentCall_nativeEvent(const QByteArray &eventType, void *message, long *result) {
        return QWidget::nativeEvent(eventType,message,result);
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
        else return QWidget::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QWidget::paintEvent(event);
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
        else return QWidget::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QWidget::resizeEvent(event);
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
        else return QWidget::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QWidget::showEvent(event);
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
        else return QWidget::tabletEvent(event);
    }

    void PlastiQParentCall_tabletEvent(QTabletEvent *event) {
        return QWidget::tabletEvent(event);
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
        else return QWidget::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QWidget::wheelEvent(event);
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
        else return QWidget::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QWidget::event(event);
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
        else return QWidget::initPainter(painter);
    }

    void PlastiQParentCall_initPainter(QPainter *painter) const {
        return QWidget::initPainter(painter);
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
        else return QWidget::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QWidget::eventFilter(watched,event);
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
        else return QWidget::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QWidget::metaObject();
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
        else return QWidget::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QWidget::childEvent(event);
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
        else return QWidget::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QWidget::connectNotify(signal);
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
        else return QWidget::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QWidget::customEvent(event);
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
        else return QWidget::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QWidget::disconnectNotify(signal);
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
        else return QWidget::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QWidget::timerEvent(event);
    }

};

void PlastiQQWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQWidgetWrapper(); break;
        case 1: o = new PlastiQQWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQWidget *p = new PlastiQQWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWidget *p = new PlastiQQWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 282) {
            id -= 282;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->acceptDrops();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QString _r = o->accessibleDescription();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->accessibleName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: o->activateWindow();
                stack[0].type = PlastiQ::Void; break;
        case 4: o->addAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->adjustSize();
                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r = o->autoFillBackground();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { qint64 _r = o->backgroundRole(); // HACK for QPalette::ColorRole 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { QBackingStore* _r = o->backingStore();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QBackingStore"; } break;
        case 9: { /* COPY OBJECT */
            QSize *_r = new QSize(o->baseSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { QWidget* _r = o->childAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 11: { QWidget* _r = o->childAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 12: { /* COPY OBJECT */
            QRect *_r = new QRect(o->childrenRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->childrenRegion());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: o->clearFocus();
                stack[0].type = PlastiQ::Void; break;
        case 15: o->clearMask();
                stack[0].type = PlastiQ::Void; break;
        case 16: { /* COPY OBJECT */
            QMargins *_r = new QMargins(o->contentsMargins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMargins";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QRect *_r = new QRect(o->contentsRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { qint64 _r = o->contextMenuPolicy(); // HACK for Qt::ContextMenuPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { /* COPY OBJECT */
            QCursor *_r = new QCursor(o->cursor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: /* UNSUPPORTED_RETURN_VALUE o->effectiveWinId() | ret: `WId` */ break;
        case 21: o->ensurePolished();
                stack[0].type = PlastiQ::Void; break;
        case 22: { qint64 _r = o->focusPolicy(); // HACK for Qt::FocusPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 23: { QWidget* _r = o->focusProxy();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 24: { QWidget* _r = o->focusWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 25: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { /* COPY OBJECT */
            QFontInfo *_r = new QFontInfo(o->fontInfo());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFontInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QFontMetrics *_r = new QFontMetrics(o->fontMetrics());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFontMetrics";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { qint64 _r = o->foregroundRole(); // HACK for QPalette::ColorRole 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 29: { /* COPY OBJECT */
            QRect *_r = new QRect(o->frameGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { /* COPY OBJECT */
            QSize *_r = new QSize(o->frameSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QRect *_r = new QRect(o->geometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: o->getContentsMargins(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 33: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->grab());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->grab((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: o->grabGesture(Qt::GestureType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->grabGesture(Qt::GestureType(stack[1].s_int64),
                    Qt::GestureFlags(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->grabKeyboard();
                stack[0].type = PlastiQ::Void; break;
        case 38: o->grabMouse();
                stack[0].type = PlastiQ::Void; break;
        case 39: o->grabMouse((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 40: { int _r = o->grabShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 41: { int _r = o->grabShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    Qt::ShortcutContext(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 42: { QGraphicsEffect* _r = o->graphicsEffect();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsEffect"; } break;
        case 43: { QGraphicsProxyWidget* _r = o->graphicsProxyWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsProxyWidget"; } break;
        case 44: { bool _r = o->hasFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 45: { bool _r;
                if (isWrapper) _r = ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_hasHeightForWidth();
                else _r = o->hasHeightForWidth();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 46: { bool _r = o->hasMouseTracking();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 48: { int _r;
                if (isWrapper) _r = ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_heightForWidth(stack[1].s_int);
                else _r = o->heightForWidth(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 49: { qint64 _r = o->inputMethodHints(); // HACK for Qt::InputMethodHints 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 50: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery(stack[1].s_int64)));
                else _r = new QVariant(o->inputMethodQuery(Qt::InputMethodQuery(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 51: o->insertAction(reinterpret_cast<QAction*>(stack[1].s_voidp),
                    reinterpret_cast<QAction*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 52: { bool _r = o->isActiveWindow();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 53: { bool _r = o->isAncestorOf(reinterpret_cast<const QWidget*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 54: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 55: { bool _r = o->isEnabledTo(reinterpret_cast<const QWidget*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 56: { bool _r = o->isFullScreen();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 57: { bool _r = o->isHidden();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 58: { bool _r = o->isMaximized();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 59: { bool _r = o->isMinimized();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 60: { bool _r = o->isModal();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 61: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 62: { bool _r = o->isVisibleTo(reinterpret_cast<const QWidget*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 63: { bool _r = o->isWindow();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 64: { bool _r = o->isWindowModified();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 65: { QLayout* _r = o->layout();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QLayout"; } break;
        case 66: { qint64 _r = o->layoutDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 67: { /* COPY OBJECT */
            QLocale *_r = new QLocale(o->locale());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 68: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapFrom(reinterpret_cast<const QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 69: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapFromGlobal((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 70: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapFromParent((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 71: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapTo(reinterpret_cast<const QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 72: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapToGlobal((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 73: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapToParent((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 74: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->mask());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 75: { int _r = o->maximumHeight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 76: { /* COPY OBJECT */
            QSize *_r = new QSize(o->maximumSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 77: { int _r = o->maximumWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 78: { int _r = o->minimumHeight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 79: { /* COPY OBJECT */
            QSize *_r = new QSize(o->minimumSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 80: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_minimumSizeHint());
                else _r = new QSize(o->minimumSizeHint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 81: { int _r = o->minimumWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 82: o->move((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 83: o->move(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 84: { QWidget* _r = o->nativeParentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 85: { QWidget* _r = o->nextInFocusChain();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 86: { /* COPY OBJECT */
            QRect *_r = new QRect(o->normalGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 87: o->overrideWindowFlags(Qt::WindowFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 88: { /* COPY OBJECT */
            QPalette *_r = new QPalette(o->palette());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 89: { QWidget* _r = o->parentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 90: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 91: { QWidget* _r = o->previousInFocusChain();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 92: { /* COPY OBJECT */
            QRect *_r = new QRect(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 93: o->releaseKeyboard();
                stack[0].type = PlastiQ::Void; break;
        case 94: o->releaseMouse();
                stack[0].type = PlastiQ::Void; break;
        case 95: o->releaseShortcut(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 96: o->removeAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 97: o->render(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 98: o->render(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 99: o->render(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRegion(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 100: o->render(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRegion(*) >(stack[3].s_voidp)),
                    QWidget::RenderFlags(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 101: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 102: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 103: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRegion(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 104: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRegion(*) >(stack[3].s_voidp)),
                    QWidget::RenderFlags(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 105: o->repaint(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 106: o->repaint((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 107: o->repaint((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 108: o->resize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 109: o->resize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 110: { bool _r = o->restoreGeometry(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 111: { QByteArray _r = o->saveGeometry();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 112: o->scroll(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 113: o->scroll(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 114: o->setAcceptDrops(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 115: o->setAccessibleDescription(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 116: o->setAccessibleName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 117: o->setAttribute(Qt::WidgetAttribute(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 118: o->setAttribute(Qt::WidgetAttribute(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 119: o->setAutoFillBackground(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 120: o->setBackgroundRole(QPalette::ColorRole(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 121: o->setBaseSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 122: o->setBaseSize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 123: o->setContentsMargins(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 124: o->setContentsMargins((*reinterpret_cast< QMargins(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 125: o->setContextMenuPolicy(Qt::ContextMenuPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 126: o->setCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 127: o->setFixedHeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 128: o->setFixedSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 129: o->setFixedSize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 130: o->setFixedWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 131: o->setFocus(Qt::FocusReason(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 132: o->setFocusPolicy(Qt::FocusPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 133: o->setFocusProxy(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 134: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 135: o->setForegroundRole(QPalette::ColorRole(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 136: o->setGeometry((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 137: o->setGeometry(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 138: o->setGraphicsEffect(reinterpret_cast<QGraphicsEffect*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 139: o->setInputMethodHints(Qt::InputMethodHints(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 140: o->setLayout(reinterpret_cast<QLayout*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 141: o->setLayoutDirection(Qt::LayoutDirection(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 142: o->setLocale((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 143: o->setMask((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 144: o->setMask((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 145: o->setMaximumHeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 146: o->setMaximumSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 147: o->setMaximumSize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 148: o->setMaximumWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 149: o->setMinimumHeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 150: o->setMinimumSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 151: o->setMinimumSize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 152: o->setMinimumWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 153: o->setMouseTracking(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 154: o->setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 155: o->setParent(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 156: o->setParent(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 157: o->setShortcutAutoRepeat(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 158: o->setShortcutAutoRepeat(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 159: o->setShortcutEnabled(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 160: o->setShortcutEnabled(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 161: o->setSizeIncrement((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 162: o->setSizeIncrement(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 163: o->setSizePolicy((*reinterpret_cast< QSizePolicy(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 164: o->setSizePolicy(QSizePolicy::Policy(stack[1].s_int64),
                    QSizePolicy::Policy(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 165: o->setStatusTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 166: o->setStyle(reinterpret_cast<QStyle*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 167: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 168: o->setToolTipDuration(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 169: o->setUpdatesEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 170: o->setWhatsThis(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 171: o->setWindowFilePath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 172: o->setWindowFlags(Qt::WindowFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 173: o->setWindowIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 174: o->setWindowModality(Qt::WindowModality(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 175: o->setWindowOpacity(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 176: o->setWindowRole(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 177: o->setWindowState(Qt::WindowStates(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 178: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 179: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_sizeHint());
                else _r = new QSize(o->sizeHint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 180: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeIncrement());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 181: { /* COPY OBJECT */
            QSizePolicy *_r = new QSizePolicy(o->sizePolicy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizePolicy";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 182: o->stackUnder(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 183: { QString _r = o->statusTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 184: { QStyle* _r = o->style();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;
        case 185: { QString _r = o->styleSheet();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 186: { bool _r = o->testAttribute(Qt::WidgetAttribute(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 187: { QString _r = o->toolTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 188: { int _r = o->toolTipDuration();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 189: { bool _r = o->underMouse();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 190: o->ungrabGesture(Qt::GestureType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 191: o->unsetCursor();
                stack[0].type = PlastiQ::Void; break;
        case 192: o->unsetLayoutDirection();
                stack[0].type = PlastiQ::Void; break;
        case 193: o->unsetLocale();
                stack[0].type = PlastiQ::Void; break;
        case 194: o->update(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 195: o->update((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 196: o->update((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 197: o->updateGeometry();
                stack[0].type = PlastiQ::Void; break;
        case 198: { bool _r = o->updatesEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 199: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->visibleRegion());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 200: { QString _r = o->whatsThis();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 201: { int _r = o->width();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 202: /* UNSUPPORTED_RETURN_VALUE o->winId() | ret: `WId` */ break;
        case 203: { QWidget* _r = o->window();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 204: { QString _r = o->windowFilePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 205: { qint64 _r = o->windowFlags(); // HACK for Qt::WindowFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 206: { QWindow* _r = o->windowHandle();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 207: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->windowIcon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 208: { qint64 _r = o->windowModality(); // HACK for Qt::WindowModality 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 209: { double _r = o->windowOpacity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 210: { QString _r = o->windowRole();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 211: { qint64 _r = o->windowState(); // HACK for Qt::WindowStates 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 212: { QString _r = o->windowTitle();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 213: { qint64 _r = o->windowType(); // HACK for Qt::WindowType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 214: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 215: { int _r = o->y();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 216: { QWidget* _r = sc ? QWidget::createWindowContainer(reinterpret_cast<QWindow*>(stack[1].s_voidp)) : o->createWindowContainer(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 217: { QWidget* _r = sc ? QWidget::createWindowContainer(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)) : o->createWindowContainer(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 218: { QWidget* _r = sc ? QWidget::createWindowContainer(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    Qt::WindowFlags(stack[3].s_int64)) : o->createWindowContainer(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    Qt::WindowFlags(stack[3].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 219: /* o->find(UNSUPPORTED_TYPE_WId) | ret: `QWidget*` */ break;
        case 220: { QWidget* _r = sc ? QWidget::keyboardGrabber() : o->keyboardGrabber();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 221: { QWidget* _r = sc ? QWidget::mouseGrabber() : o->mouseGrabber();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 222: if(sc) { QWidget::setTabOrder(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); } else { o->setTabOrder(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 223: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_actionEvent(reinterpret_cast<QActionEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 224: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 225: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_closeEvent(reinterpret_cast<QCloseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 226: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 227: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 228: /* o->create(UNSUPPORTED_TYPE_WId) | ret: `void` */ break;
        case 229: /* o->create(UNSUPPORTED_TYPE_WId,
                    stack[2].s_bool) | ret: `void` */ break;
        case 230: /* o->create(UNSUPPORTED_TYPE_WId,
                    stack[2].s_bool,
                    stack[3].s_bool) | ret: `void` */ break;
        case 231: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 232: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 233: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 234: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QDragEnterEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 235: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QDragLeaveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 236: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 237: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 238: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_enterEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 239: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 240: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 241: { bool _r;
                if (isWrapper) _r = ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 242: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 243: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 244: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_hideEvent(reinterpret_cast<QHideEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 245: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 246: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 247: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 248: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_leaveEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 249: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 250: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 251: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 252: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 253: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_moveEvent(reinterpret_cast<QMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 254: { bool _r;
                if (isWrapper) _r = ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_nativeEvent(stack[1].s_bytearray,
                    reinterpret_cast<void*>(stack[2].s_voidp),
                    reinterpret_cast<long*>(stack[3].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 255: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 256: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 257: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 258: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_tabletEvent(reinterpret_cast<QTabletEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 259: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 260: { bool _r;
                if (isWrapper) _r = ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 261: if (isWrapper) ((PlastiQQWidgetWrapper*)o)->PlastiQParentCall_initPainter(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 262: /* o->metric(UNSUPPORTED_TYPE_PaintDeviceMetric) | ret: `int` */ break;
        case 263: { bool _r = o->close();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 264: o->hide();
                stack[0].type = PlastiQ::Void; break;
        case 265: o->lower();
                stack[0].type = PlastiQ::Void; break;
        case 266: o->raise();
                stack[0].type = PlastiQ::Void; break;
        case 267: o->repaint();
                stack[0].type = PlastiQ::Void; break;
        case 268: o->setDisabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 269: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 270: o->setFocus();
                stack[0].type = PlastiQ::Void; break;
        case 271: o->setHidden(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 272: o->setStyleSheet(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 273: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 274: o->setWindowModified(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 275: o->setWindowTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 276: o->show();
                stack[0].type = PlastiQ::Void; break;
        case 277: o->showFullScreen();
                stack[0].type = PlastiQ::Void; break;
        case 278: o->showMaximized();
                stack[0].type = PlastiQ::Void; break;
        case 279: o->showMinimized();
                stack[0].type = PlastiQ::Void; break;
        case 280: o->showNormal();
                stack[0].type = PlastiQ::Void; break;
        case 281: o->update();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWidget *o = reinterpret_cast<QWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWidget::customContextMenuRequested,
            [=](const QPoint& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPoint(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPoint";
                PlastiQ_activate(sender, "customContextMenuRequested", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QWidget::windowIconChanged,
            [=](const QIcon& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QIcon(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QIcon";
                PlastiQ_activate(sender, "windowIconChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QWidget::windowTitleChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "windowTitleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWidget *o = reinterpret_cast<QWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWidget *o = reinterpret_cast<QWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWidget *o = reinterpret_cast<QWidget*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QPaintDevice") {
            stack[0].s_voidp = static_cast<QPaintDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWidget::~PlastiQQWidget() {
    QWidget* o = reinterpret_cast<QWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
