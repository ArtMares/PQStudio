#include "plastiqmethod.h"
#include "plastiqqgraphicswidget.h"

#include "widgets/PlastiQQGraphicsObject/plastiqqgraphicsobject.h"
#include "widgets/PlastiQQGraphicsLayoutItem/plastiqqgraphicslayoutitem.h"
#include <QGraphicsWidget> 
#include <QFont>
#include <QGraphicsLayout>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <QPalette>
#include <QRectF>
#include <QSizeF>
#include <QStyle>
#include <QString>
#include <QEvent>
#include <QCloseEvent>
#include <QHideEvent>
#include <QStyleOption>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QShowEvent>
#include <QPointF>
#include <QFocusEvent>
#include <QGraphicsSceneHoverEvent>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsWidget::plastiqConstructors = {
    { "QGraphicsWidget()", { "QGraphicsWidget", "", "QGraphicsWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsWidget(QGraphicsItem*)", { "QGraphicsWidget", "QGraphicsItem*", "QGraphicsWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsWidget(QGraphicsItem*,enum)", { "QGraphicsWidget", "QGraphicsItem*,Qt::WindowFlags", "QGraphicsWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsWidget::plastiqMethods = {
    { "addAction(QAction*)", { "addAction", "QAction*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "adjustSize()", { "adjustSize", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoFillBackground()", { "autoFillBackground", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusPolicy()", { "focusPolicy", "", "Qt::FocusPolicy", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusWidget()", { "focusWidget", "", "QGraphicsWidget*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getWindowFrameMargins(qreal*,qreal*,qreal*,qreal*)", { "getWindowFrameMargins", "qreal*,qreal*,qreal*,qreal*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabShortcut(QKeySequence&)", { "grabShortcut", "QKeySequence&", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabShortcut(QKeySequence&,enum)", { "grabShortcut", "QKeySequence&,Qt::ShortcutContext", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertAction(QAction*,QAction*)", { "insertAction", "QAction*,QAction*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActiveWindow()", { "isActiveWindow", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layout()", { "layout", "", "QGraphicsLayout*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layoutDirection()", { "layoutDirection", "", "Qt::LayoutDirection", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintWindowFrame(QPainter*,const QStyleOptionGraphicsItem*)", { "paintWindowFrame", "QPainter*,QStyleOptionGraphicsItem*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintWindowFrame(QPainter*,const QStyleOptionGraphicsItem*,QWidget*)", { "paintWindowFrame", "QPainter*,QStyleOptionGraphicsItem*,QWidget*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "palette()", { "palette", "", "QPalette", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rect()", { "rect", "", "QRectF", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "releaseShortcut(int)", { "releaseShortcut", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAction(QAction*)", { "removeAction", "QAction*", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(QSizeF&)", { "resize", "QSizeF&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(double,double)", { "resize", "qreal,qreal", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAttribute(enum)", { "setAttribute", "Qt::WidgetAttribute", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAttribute(enum,bool)", { "setAttribute", "Qt::WidgetAttribute,bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoFillBackground(bool)", { "setAutoFillBackground", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentsMargins(double,double,double,double)", { "setContentsMargins", "qreal,qreal,qreal,qreal", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusPolicy(enum)", { "setFocusPolicy", "Qt::FocusPolicy", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(double,double,double,double)", { "setGeometry", "qreal,qreal,qreal,qreal", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLayout(QGraphicsLayout*)", { "setLayout", "QGraphicsLayout*", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLayoutDirection(enum)", { "setLayoutDirection", "Qt::LayoutDirection", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPalette(QPalette&)", { "setPalette", "QPalette&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutAutoRepeat(int)", { "setShortcutAutoRepeat", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutAutoRepeat(int,bool)", { "setShortcutAutoRepeat", "int,bool", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutEnabled(int)", { "setShortcutEnabled", "int", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutEnabled(int,bool)", { "setShortcutEnabled", "int,bool", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyle(QStyle*)", { "setStyle", "QStyle*", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowFlags(enum)", { "setWindowFlags", "Qt::WindowFlags", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowFrameMargins(double,double,double,double)", { "setWindowFrameMargins", "qreal,qreal,qreal,qreal", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowTitle(QString)", { "setWindowTitle", "QString&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSizeF", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "QStyle*", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testAttribute(enum)", { "testAttribute", "Qt::WidgetAttribute", "bool", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetLayoutDirection()", { "unsetLayoutDirection", "", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetWindowFrameMargins()", { "unsetWindowFrameMargins", "", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowFlags()", { "windowFlags", "", "Qt::WindowFlags", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowFrameGeometry()", { "windowFrameGeometry", "", "QRectF", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowFrameRect()", { "windowFrameRect", "", "QRectF", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowTitle()", { "windowTitle", "", "QString", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowType()", { "windowType", "", "Qt::WindowType", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabOrder(QGraphicsWidget*,QGraphicsWidget*)", { "setTabOrder", "QGraphicsWidget*,QGraphicsWidget*", "void", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 50, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "closeEvent(QCloseEvent*)", { "closeEvent", "QCloseEvent*", "void", 51, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 52, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "grabKeyboardEvent(QEvent*)", { "grabKeyboardEvent", "QEvent*", "void", 53, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "grabMouseEvent(QEvent*)", { "grabMouseEvent", "QEvent*", "void", 54, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 55, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOption*)", { "initStyleOption", "QStyleOption*", "void", 56, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveEvent(QGraphicsSceneMoveEvent*)", { "moveEvent", "QGraphicsSceneMoveEvent*", "void", 57, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "polishEvent()", { "polishEvent", "", "void", 58, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QGraphicsSceneResizeEvent*)", { "resizeEvent", "QGraphicsSceneResizeEvent*", "void", 59, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 60, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "ungrabKeyboardEvent(QEvent*)", { "ungrabKeyboardEvent", "QEvent*", "void", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "ungrabMouseEvent(QEvent*)", { "ungrabMouseEvent", "QEvent*", "void", 62, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "windowFrameEvent(QEvent*)", { "windowFrameEvent", "QEvent*", "bool", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "windowFrameSectionAt(QPointF&)", { "windowFrameSectionAt", "QPointF&", "Qt::WindowFrameSection", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 66, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverLeaveEvent(QGraphicsSceneHoverEvent*)", { "hoverLeaveEvent", "QGraphicsSceneHoverEvent*", "void", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverMoveEvent(QGraphicsSceneHoverEvent*)", { "hoverMoveEvent", "QGraphicsSceneHoverEvent*", "void", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "itemChange(GraphicsItemChange,QVariant)", { "itemChange", "GraphicsItemChange,QVariant&", "QVariant", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sceneEvent(QEvent*)", { "sceneEvent", "QEvent*", "bool", 71, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHint(enum)", { "sizeHint", "Qt::SizeHint", "QSizeF", 72, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHint(enum,QSizeF&)", { "sizeHint", "Qt::SizeHint,QSizeF&", "QSizeF", 73, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateGeometry()", { "updateGeometry", "", "void", 74, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "close()", { "close", "", "bool", 75, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsWidget::plastiqSignals = {
    { "geometryChanged()", { "geometryChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsWidget::plastiqProperties = {
    { "autoFillBackground", { "autoFillBackground", "bool", "setAutoFillBackground", "autoFillBackground" } },
    { "focusPolicy", { "focusPolicy", "long", "setFocusPolicy", "focusPolicy" } },
    { "font", { "font", "QFont", "setFont", "font" } },
    { "geometry", { "geometry", "QRectF", "setGeometry", "" } },
    { "layout", { "layout", "QGraphicsLayout*", "setLayout", "layout" } },
    { "layoutDirection", { "layoutDirection", "long", "setLayoutDirection", "layoutDirection" } },
    { "maximumSize", { "maximumSize", "QSizeF", "", "" } },
    { "minimumSize", { "minimumSize", "QSizeF", "", "" } },
    { "palette", { "palette", "QPalette", "setPalette", "palette" } },
    { "preferredSize", { "preferredSize", "QSizeF", "", "" } },
    { "size", { "size", "QSizeF", "resize", "size" } },
    { "sizePolicy", { "sizePolicy", "QSizePolicy", "", "" } },
    { "windowFlags", { "windowFlags", "long", "setWindowFlags", "windowFlags" } },
    { "windowTitle", { "windowTitle", "QString", "setWindowTitle", "windowTitle" } },

};

QHash<QByteArray, long> PlastiQQGraphicsWidget::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsWidget::plastiqInherits = { &PlastiQQGraphicsObject::plastiq_static_metaObject, &PlastiQQGraphicsLayoutItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsWidget::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGraphicsWidget::plastiq_static_metaObject = {
    { &PlastiQQGraphicsObject::plastiq_static_metaObject, &plastiqInherits, "QGraphicsWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsWidgetWrapper : public QGraphicsWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsWidgetWrapper(QGraphicsItem *parent = Q_NULLPTR, Qt::WindowFlags wFlags = Qt::WindowFlags())
         : QGraphicsWidget(parent,wFlags),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void paintWindowFrame(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintWindowFrame(QPainter*,const QStyleOptionGraphicsItem*,QWidget*=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(const_cast<QStyleOptionGraphicsItem*>(option));
            stack[2].name = QByteArrayLiteral("QStyleOptionGraphicsItem");
            stack[2].type = PlastiQ::QtObjectStar;
            stack[3].s_voidp = reinterpret_cast<void*>(widget);
            stack[3].name = QByteArrayLiteral("QWidget");
            stack[3].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::paintWindowFrame(painter,option,widget);
    }

    void PlastiQParentCall_paintWindowFrame(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR) {
        return QGraphicsWidget::paintWindowFrame(painter,option,widget);
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
        else return QGraphicsWidget::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QGraphicsWidget::changeEvent(event);
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
        else return QGraphicsWidget::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QGraphicsWidget::closeEvent(event);
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
        else return QGraphicsWidget::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QGraphicsWidget::focusNextPrevChild(next);
    }

    void grabKeyboardEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void grabKeyboardEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::grabKeyboardEvent(event);
    }

    void PlastiQParentCall_grabKeyboardEvent(QEvent *event) {
        return QGraphicsWidget::grabKeyboardEvent(event);
    }

    void grabMouseEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void grabMouseEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::grabMouseEvent(event);
    }

    void PlastiQParentCall_grabMouseEvent(QEvent *event) {
        return QGraphicsWidget::grabMouseEvent(event);
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
        else return QGraphicsWidget::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QGraphicsWidget::hideEvent(event);
    }

    void initStyleOption(QStyleOption *option) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void initStyleOption(QStyleOption*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(option);
            stack[1].name = QByteArrayLiteral("QStyleOption");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::initStyleOption(option);
    }

    void PlastiQParentCall_initStyleOption(QStyleOption *option) const {
        return QGraphicsWidget::initStyleOption(option);
    }

    void moveEvent(QGraphicsSceneMoveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void moveEvent(QGraphicsSceneMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::moveEvent(event);
    }

    void PlastiQParentCall_moveEvent(QGraphicsSceneMoveEvent *event) {
        return QGraphicsWidget::moveEvent(event);
    }

    void polishEvent() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void polishEvent()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::polishEvent();
    }

    void PlastiQParentCall_polishEvent() {
        return QGraphicsWidget::polishEvent();
    }

    void resizeEvent(QGraphicsSceneResizeEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QGraphicsSceneResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QGraphicsSceneResizeEvent *event) {
        return QGraphicsWidget::resizeEvent(event);
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
        else return QGraphicsWidget::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QGraphicsWidget::showEvent(event);
    }

    void ungrabKeyboardEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void ungrabKeyboardEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::ungrabKeyboardEvent(event);
    }

    void PlastiQParentCall_ungrabKeyboardEvent(QEvent *event) {
        return QGraphicsWidget::ungrabKeyboardEvent(event);
    }

    void ungrabMouseEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void ungrabMouseEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::ungrabMouseEvent(event);
    }

    void PlastiQParentCall_ungrabMouseEvent(QEvent *event) {
        return QGraphicsWidget::ungrabMouseEvent(event);
    }

    bool windowFrameEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool windowFrameEvent(QEvent*)");
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
        else return QGraphicsWidget::windowFrameEvent(event);
    }

    bool PlastiQParentCall_windowFrameEvent(QEvent *event) {
        return QGraphicsWidget::windowFrameEvent(event);
    }

    Qt::WindowFrameSection windowFrameSectionAt(const QPointF &pos) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("Qt::WindowFrameSection windowFrameSectionAt(const QPointF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QPointF(pos) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPointF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            Qt::WindowFrameSection _r = Qt::WindowFrameSection(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QGraphicsWidget::windowFrameSectionAt(pos);
    }

    Qt::WindowFrameSection PlastiQParentCall_windowFrameSectionAt(const QPointF &pos) const {
        return QGraphicsWidget::windowFrameSectionAt(pos);
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
        else return QGraphicsWidget::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QGraphicsWidget::event(event);
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
        else return QGraphicsWidget::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QGraphicsWidget::focusInEvent(event);
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
        else return QGraphicsWidget::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QGraphicsWidget::focusOutEvent(event);
    }

    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hoverLeaveEvent(QGraphicsSceneHoverEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneHoverEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::hoverLeaveEvent(event);
    }

    void PlastiQParentCall_hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsWidget::hoverLeaveEvent(event);
    }

    void hoverMoveEvent(QGraphicsSceneHoverEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hoverMoveEvent(QGraphicsSceneHoverEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneHoverEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::hoverMoveEvent(event);
    }

    void PlastiQParentCall_hoverMoveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsWidget::hoverMoveEvent(event);
    }

    bool sceneEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool sceneEvent(QEvent*)");
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
        else return QGraphicsWidget::sceneEvent(event);
    }

    bool PlastiQParentCall_sceneEvent(QEvent *event) {
        return QGraphicsWidget::sceneEvent(event);
    }

    QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSizeF sizeHint(Qt::SizeHint,const QSizeF&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int64 = which;
            stack[1].name = QByteArrayLiteral("Qt::SizeHint");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_voidp = new QSizeF(constraint) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QSizeF");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSizeF _r = QSizeF(*reinterpret_cast<QSizeF*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsWidget::sizeHint(which,constraint);
    }

    QSizeF PlastiQParentCall_sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const {
        return QGraphicsWidget::sizeHint(which,constraint);
    }

    void updateGeometry() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateGeometry()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::updateGeometry();
    }

    void PlastiQParentCall_updateGeometry() {
        return QGraphicsWidget::updateGeometry();
    }

    void getContentsMargins(qreal *left, qreal *top, qreal *right, qreal *bottom) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void getContentsMargins(qreal*,qreal*,qreal*,qreal*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(left);
            stack[1].name = QByteArrayLiteral("qreal");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(top);
            stack[2].name = QByteArrayLiteral("qreal");
            stack[2].type = PlastiQ::ObjectStar;
            stack[3].s_voidp = reinterpret_cast<void*>(right);
            stack[3].name = QByteArrayLiteral("qreal");
            stack[3].type = PlastiQ::ObjectStar;
            stack[4].s_voidp = reinterpret_cast<void*>(bottom);
            stack[4].name = QByteArrayLiteral("qreal");
            stack[4].type = PlastiQ::ObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::getContentsMargins(left,top,right,bottom);
    }

    void PlastiQParentCall_getContentsMargins(qreal *left, qreal *top, qreal *right, qreal *bottom) const {
        return QGraphicsWidget::getContentsMargins(left,top,right,bottom);
    }

    void setGeometry(const QRectF &rect) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setGeometry(const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRectF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsWidget::setGeometry(rect);
    }

    void PlastiQParentCall_setGeometry(const QRectF &rect) {
        return QGraphicsWidget::setGeometry(rect);
    }

};

void PlastiQQGraphicsWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsWidgetWrapper(); break;
        case 1: o = new PlastiQQGraphicsWidgetWrapper(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQGraphicsWidgetWrapper(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsWidget *p = new PlastiQQGraphicsWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsWidget *p = new PlastiQQGraphicsWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 76) {
            id -= 76;
            PlastiQQGraphicsObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsWidget*>(object->plastiq_data());

        switch(id) {
        case 0: o->addAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->adjustSize();
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->autoFillBackground();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { qint64 _r = o->focusPolicy(); // HACK for Qt::FocusPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { QGraphicsWidget* _r = o->focusWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsWidget"; } break;
        case 5: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: o->getWindowFrameMargins(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: { int _r = o->grabShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->grabShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    Qt::ShortcutContext(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: o->insertAction(reinterpret_cast<QAction*>(stack[1].s_voidp),
                    reinterpret_cast<QAction*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: { bool _r = o->isActiveWindow();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { QGraphicsLayout* _r = o->layout();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsLayout"; } break;
        case 12: { qint64 _r = o->layoutDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_paintWindowFrame(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    reinterpret_cast<const QStyleOptionGraphicsItem*>(stack[2].s_voidp));
                else o->paintWindowFrame(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    reinterpret_cast<const QStyleOptionGraphicsItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_paintWindowFrame(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    reinterpret_cast<const QStyleOptionGraphicsItem*>(stack[2].s_voidp),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                else o->paintWindowFrame(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    reinterpret_cast<const QStyleOptionGraphicsItem*>(stack[2].s_voidp),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: { /* COPY OBJECT */
            QPalette *_r = new QPalette(o->palette());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: o->releaseShortcut(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->removeAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->resize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->resize(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setAttribute(Qt::WidgetAttribute(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setAttribute(Qt::WidgetAttribute(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setAutoFillBackground(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setContentsMargins(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setFocusPolicy(Qt::FocusPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setGeometry(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setLayout(reinterpret_cast<QGraphicsLayout*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setLayoutDirection(Qt::LayoutDirection(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setShortcutAutoRepeat(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setShortcutAutoRepeat(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setShortcutEnabled(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setShortcutEnabled(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setStyle(reinterpret_cast<QStyle*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setWindowFlags(Qt::WindowFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setWindowFrameMargins(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setWindowTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 39: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { QStyle* _r = o->style();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;
        case 41: { bool _r = o->testAttribute(Qt::WidgetAttribute(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: o->unsetLayoutDirection();
                stack[0].type = PlastiQ::Void; break;
        case 43: o->unsetWindowFrameMargins();
                stack[0].type = PlastiQ::Void; break;
        case 44: { qint64 _r = o->windowFlags(); // HACK for Qt::WindowFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 45: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->windowFrameGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 46: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->windowFrameRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 47: { QString _r = o->windowTitle();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 48: { qint64 _r = o->windowType(); // HACK for Qt::WindowType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 49: if(sc) { QGraphicsWidget::setTabOrder(reinterpret_cast<QGraphicsWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QGraphicsWidget*>(stack[2].s_voidp)); } else { o->setTabOrder(reinterpret_cast<QGraphicsWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QGraphicsWidget*>(stack[2].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 50: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 51: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_closeEvent(reinterpret_cast<QCloseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 52: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 53: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_grabKeyboardEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 54: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_grabMouseEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 55: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_hideEvent(reinterpret_cast<QHideEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 56: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_initStyleOption(reinterpret_cast<QStyleOption*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 57: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_moveEvent(reinterpret_cast<QGraphicsSceneMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 58: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_polishEvent();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 59: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QGraphicsSceneResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 60: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 61: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_ungrabKeyboardEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 62: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_ungrabMouseEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 63: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_windowFrameEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 64: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_windowFrameSectionAt((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 65: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 66: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 67: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 68: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_hoverLeaveEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 69: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_hoverMoveEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 70: /* o->itemChange(UNSUPPORTED_TYPE_GraphicsItemChange,
                    stack[2].s_variant) | ret: `QVariant` */ break;
        case 71: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_sceneEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 72: { /* COPY OBJECT */
            QSizeF *_r;
                if (isWrapper) _r = new QSizeF(((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_sizeHint(Qt::SizeHint(stack[1].s_int64)));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 73: { /* COPY OBJECT */
            QSizeF *_r;
                if (isWrapper) _r = new QSizeF(((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_sizeHint(Qt::SizeHint(stack[1].s_int64),
                    (*reinterpret_cast< QSizeF(*) >(stack[2].s_voidp))));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 74: if (isWrapper) ((PlastiQQGraphicsWidgetWrapper*)o)->PlastiQParentCall_updateGeometry();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 75: { bool _r = o->close();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQGraphicsObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGraphicsWidget *o = reinterpret_cast<QGraphicsWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QGraphicsWidget::geometryChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "geometryChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsWidget *o = reinterpret_cast<QGraphicsWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsWidget *o = reinterpret_cast<QGraphicsWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsWidget *o = reinterpret_cast<QGraphicsWidget*>(object->plastiq_data());

        if(className == "QGraphicsObject") {
            stack[0].s_voidp = static_cast<QGraphicsObject*>(o);
        }
        else if(className == "QGraphicsLayoutItem") {
            stack[0].s_voidp = static_cast<QGraphicsLayoutItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsWidget::~PlastiQQGraphicsWidget() {
    QGraphicsWidget* o = reinterpret_cast<QGraphicsWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
