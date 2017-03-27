#include "plastiqmethod.h"
#include "plastiqqgraphicsproxywidget.h"

#include "widgets/PlastiQQGraphicsWidget/plastiqqgraphicswidget.h"
#include <QGraphicsProxyWidget> 
#include <QRectF>
#include <QWidget>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QEvent>
#include <QObject>
#include <QFocusEvent>
#include <QHideEvent>
#include <QGraphicsSceneHoverEvent>
#include <QInputMethodEvent>
#include <QVariant>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneResizeEvent>
#include <QShowEvent>
#include <QSizeF>
#include <QGraphicsSceneWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsProxyWidget::plastiqConstructors = {
    { "QGraphicsProxyWidget()", { "QGraphicsProxyWidget", "", "QGraphicsProxyWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsProxyWidget(QGraphicsItem*)", { "QGraphicsProxyWidget", "QGraphicsItem*", "QGraphicsProxyWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsProxyWidget(QGraphicsItem*,enum)", { "QGraphicsProxyWidget", "QGraphicsItem*,Qt::WindowFlags", "QGraphicsProxyWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsProxyWidget::plastiqMethods = {
    { "createProxyForChildWidget(QWidget*)", { "createProxyForChildWidget", "QWidget*", "QGraphicsProxyWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidget(QWidget*)", { "setWidget", "QWidget*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subWidgetRect(const QWidget*)", { "subWidgetRect", "QWidget*", "QRectF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget()", { "widget", "", "QWidget*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contextMenuEvent(QGraphicsSceneContextMenuEvent*)", { "contextMenuEvent", "QGraphicsSceneContextMenuEvent*", "void", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QGraphicsSceneDragDropEvent*)", { "dragEnterEvent", "QGraphicsSceneDragDropEvent*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QGraphicsSceneDragDropEvent*)", { "dragLeaveEvent", "QGraphicsSceneDragDropEvent*", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QGraphicsSceneDragDropEvent*)", { "dragMoveEvent", "QGraphicsSceneDragDropEvent*", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QGraphicsSceneDragDropEvent*)", { "dropEvent", "QGraphicsSceneDragDropEvent*", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "grabMouseEvent(QEvent*)", { "grabMouseEvent", "QEvent*", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverEnterEvent(QGraphicsSceneHoverEvent*)", { "hoverEnterEvent", "QGraphicsSceneHoverEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverLeaveEvent(QGraphicsSceneHoverEvent*)", { "hoverLeaveEvent", "QGraphicsSceneHoverEvent*", "void", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverMoveEvent(QGraphicsSceneHoverEvent*)", { "hoverMoveEvent", "QGraphicsSceneHoverEvent*", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodQuery(enum)", { "inputMethodQuery", "Qt::InputMethodQuery", "QVariant", 20, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "itemChange(GraphicsItemChange,QVariant)", { "itemChange", "GraphicsItemChange,QVariant&", "QVariant", 21, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 22, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)", { "mouseDoubleClickEvent", "QGraphicsSceneMouseEvent*", "void", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QGraphicsSceneMouseEvent*)", { "mouseMoveEvent", "QGraphicsSceneMouseEvent*", "void", 25, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QGraphicsSceneMouseEvent*)", { "mousePressEvent", "QGraphicsSceneMouseEvent*", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QGraphicsSceneMouseEvent*)", { "mouseReleaseEvent", "QGraphicsSceneMouseEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QGraphicsSceneResizeEvent*)", { "resizeEvent", "QGraphicsSceneResizeEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHint(enum)", { "sizeHint", "Qt::SizeHint", "QSizeF", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHint(enum,QSizeF&)", { "sizeHint", "Qt::SizeHint,QSizeF&", "QSizeF", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "ungrabMouseEvent(QEvent*)", { "ungrabMouseEvent", "QEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QGraphicsSceneWheelEvent*)", { "wheelEvent", "QGraphicsSceneWheelEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsProxyWidget::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsProxyWidget::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsProxyWidget::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsProxyWidget::plastiqInherits = { &PlastiQQGraphicsWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsProxyWidget::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsProxyWidget::plastiq_static_metaObject = {
    { &PlastiQQGraphicsWidget::plastiq_static_metaObject, &plastiqInherits, "QGraphicsProxyWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsProxyWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsProxyWidgetWrapper : public QGraphicsProxyWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsProxyWidgetWrapper(QGraphicsItem *parent = Q_NULLPTR, Qt::WindowFlags wFlags = Qt::WindowFlags())
         : QGraphicsProxyWidget(parent,wFlags),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QGraphicsSceneContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QGraphicsSceneContextMenuEvent *event) {
        return QGraphicsProxyWidget::contextMenuEvent(event);
    }

    void dragEnterEvent(QGraphicsSceneDragDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragEnterEvent(QGraphicsSceneDragDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneDragDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsProxyWidget::dragEnterEvent(event);
    }

    void dragLeaveEvent(QGraphicsSceneDragDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragLeaveEvent(QGraphicsSceneDragDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneDragDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsProxyWidget::dragLeaveEvent(event);
    }

    void dragMoveEvent(QGraphicsSceneDragDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragMoveEvent(QGraphicsSceneDragDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneDragDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsProxyWidget::dragMoveEvent(event);
    }

    void dropEvent(QGraphicsSceneDragDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dropEvent(QGraphicsSceneDragDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneDragDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsProxyWidget::dropEvent(event);
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
        else return QGraphicsProxyWidget::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QGraphicsProxyWidget::event(event);
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
        else return QGraphicsProxyWidget::eventFilter(object,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *object, QEvent *event) {
        return QGraphicsProxyWidget::eventFilter(object,event);
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
        else return QGraphicsProxyWidget::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QGraphicsProxyWidget::focusInEvent(event);
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
        else return QGraphicsProxyWidget::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QGraphicsProxyWidget::focusNextPrevChild(next);
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
        else return QGraphicsProxyWidget::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QGraphicsProxyWidget::focusOutEvent(event);
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
        else return QGraphicsProxyWidget::grabMouseEvent(event);
    }

    void PlastiQParentCall_grabMouseEvent(QEvent *event) {
        return QGraphicsProxyWidget::grabMouseEvent(event);
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
        else return QGraphicsProxyWidget::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QGraphicsProxyWidget::hideEvent(event);
    }

    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hoverEnterEvent(QGraphicsSceneHoverEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneHoverEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::hoverEnterEvent(event);
    }

    void PlastiQParentCall_hoverEnterEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsProxyWidget::hoverEnterEvent(event);
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
        else return QGraphicsProxyWidget::hoverLeaveEvent(event);
    }

    void PlastiQParentCall_hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsProxyWidget::hoverLeaveEvent(event);
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
        else return QGraphicsProxyWidget::hoverMoveEvent(event);
    }

    void PlastiQParentCall_hoverMoveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsProxyWidget::hoverMoveEvent(event);
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
        else return QGraphicsProxyWidget::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QGraphicsProxyWidget::inputMethodEvent(event);
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
        else return QGraphicsProxyWidget::inputMethodQuery(query);
    }

    QVariant PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery query) const {
        return QGraphicsProxyWidget::inputMethodQuery(query);
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
        else return QGraphicsProxyWidget::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QGraphicsProxyWidget::keyPressEvent(event);
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
        else return QGraphicsProxyWidget::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QGraphicsProxyWidget::keyReleaseEvent(event);
    }

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsProxyWidget::mouseDoubleClickEvent(event);
    }

    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsProxyWidget::mouseMoveEvent(event);
    }

    void mousePressEvent(QGraphicsSceneMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsProxyWidget::mousePressEvent(event);
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsProxyWidget::mouseReleaseEvent(event);
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
        else return QGraphicsProxyWidget::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QGraphicsSceneResizeEvent *event) {
        return QGraphicsProxyWidget::resizeEvent(event);
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
        else return QGraphicsProxyWidget::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QGraphicsProxyWidget::showEvent(event);
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
        else return QGraphicsProxyWidget::sizeHint(which,constraint);
    }

    QSizeF PlastiQParentCall_sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const {
        return QGraphicsProxyWidget::sizeHint(which,constraint);
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
        else return QGraphicsProxyWidget::ungrabMouseEvent(event);
    }

    void PlastiQParentCall_ungrabMouseEvent(QEvent *event) {
        return QGraphicsProxyWidget::ungrabMouseEvent(event);
    }

    void wheelEvent(QGraphicsSceneWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QGraphicsSceneWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsProxyWidget::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QGraphicsSceneWheelEvent *event) {
        return QGraphicsProxyWidget::wheelEvent(event);
    }

};

void PlastiQQGraphicsProxyWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsProxyWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsProxyWidgetWrapper(); break;
        case 1: o = new PlastiQQGraphicsProxyWidgetWrapper(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQGraphicsProxyWidgetWrapper(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsProxyWidget *p = new PlastiQQGraphicsProxyWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsProxyWidget *p = new PlastiQQGraphicsProxyWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 34) {
            id -= 34;
            PlastiQQGraphicsWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsProxyWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsProxyWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { QGraphicsProxyWidget* _r = o->createProxyForChildWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsProxyWidget"; } break;
        case 1: o->setWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->subWidgetRect(reinterpret_cast<const QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { QWidget* _r = o->widget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 4: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QGraphicsSceneContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 7: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 8: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 9: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 12: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_grabMouseEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 15: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_hideEvent(reinterpret_cast<QHideEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 16: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_hoverEnterEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 17: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_hoverLeaveEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 18: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_hoverMoveEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 19: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 20: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery(stack[1].s_int64)));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: /* o->itemChange(UNSUPPORTED_TYPE_GraphicsItemChange,
                    stack[2].s_variant) | ret: `QVariant` */ break;
        case 22: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 23: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 24: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 25: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 26: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QGraphicsSceneResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 30: { /* COPY OBJECT */
            QSizeF *_r;
                if (isWrapper) _r = new QSizeF(((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_sizeHint(Qt::SizeHint(stack[1].s_int64)));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QSizeF *_r;
                if (isWrapper) _r = new QSizeF(((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_sizeHint(Qt::SizeHint(stack[1].s_int64),
                    (*reinterpret_cast< QSizeF(*) >(stack[2].s_voidp))));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_ungrabMouseEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: if (isWrapper) ((PlastiQQGraphicsProxyWidgetWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QGraphicsSceneWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsProxyWidget *o = reinterpret_cast<QGraphicsProxyWidget*>(object->plastiq_data());

        if(className == "QGraphicsWidget") {
            stack[0].s_voidp = static_cast<QGraphicsWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsProxyWidget::~PlastiQQGraphicsProxyWidget() {
    QGraphicsProxyWidget* o = reinterpret_cast<QGraphicsProxyWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
