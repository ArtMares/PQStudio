#include "plastiqmethod.h"
#include "plastiqqgraphicsobject.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "widgets/PlastiQQGraphicsItem/plastiqqgraphicsitem.h"
#include <QGraphicsObject> 
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsObject::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsObject::plastiqMethods = {
    { "grabGesture(enum)", { "grabGesture", "Qt::GestureType", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabGesture(enum,enum)", { "grabGesture", "Qt::GestureType,Qt::GestureFlags", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ungrabGesture(enum)", { "ungrabGesture", "Qt::GestureType", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsObject::plastiqSignals = {
    { "enabledChanged()", { "enabledChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "opacityChanged()", { "opacityChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "parentChanged()", { "parentChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rotationChanged()", { "rotationChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "scaleChanged()", { "scaleChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibleChanged()", { "visibleChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "xChanged()", { "xChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "yChanged()", { "yChanged", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "zChanged()", { "zChanged", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsObject::plastiqProperties = {
    { "effect", { "effect", "QGraphicsEffectconst*", "", "" } },
    { "enabled", { "enabled", "bool", "", "" } },
    { "opacity", { "opacity", "qreal", "", "" } },
    { "parent", { "parent", "QGraphicsObjectconst*", "", "" } },
    { "pos", { "pos", "QPointF", "", "" } },
    { "rotation", { "rotation", "qreal", "", "" } },
    { "scale", { "scale", "qreal", "", "" } },
    { "transformOriginPoint", { "transformOriginPoint", "QPointF", "", "" } },
    { "visible", { "visible", "bool", "", "" } },
    { "x", { "x", "qreal", "", "" } },
    { "y", { "y", "qreal", "", "" } },
    { "z", { "z", "qreal", "", "" } },

};

QHash<QByteArray, long> PlastiQQGraphicsObject::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsObject::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQGraphicsItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsObject::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGraphicsObject::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QGraphicsObject", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsObject::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsObjectWrapper : public QGraphicsObject {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QGraphicsObject::event(ev);
    }

    bool PlastiQParentCall_event(QEvent *ev) {
        return QGraphicsObject::event(ev);
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
        else return QGraphicsObject::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QGraphicsObject::eventFilter(watched,event);
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
        else return QGraphicsObject::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QGraphicsObject::metaObject();
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
        else return QGraphicsObject::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QGraphicsObject::childEvent(event);
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
        else return QGraphicsObject::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QGraphicsObject::connectNotify(signal);
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
        else return QGraphicsObject::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QGraphicsObject::customEvent(event);
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
        else return QGraphicsObject::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QGraphicsObject::disconnectNotify(signal);
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
        else return QGraphicsObject::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QGraphicsObject::timerEvent(event);
    }

    void advance(int phase) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void advance(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = phase;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsObject::advance(phase);
    }

    void PlastiQParentCall_advance(int phase) {
        return QGraphicsObject::advance(phase);
    }

    bool collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool collidesWithItem(const QGraphicsItem*,Qt::ItemSelectionMode=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QGraphicsItem*>(other));
            stack[1].name = QByteArrayLiteral("QGraphicsItem");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int64 = mode;
            stack[2].name = QByteArrayLiteral("Qt::ItemSelectionMode");
            stack[2].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::collidesWithItem(other,mode);
    }

    bool PlastiQParentCall_collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const {
        return QGraphicsObject::collidesWithItem(other,mode);
    }

    bool collidesWithPath(const QPainterPath &path, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool collidesWithPath(const QPainterPath&,Qt::ItemSelectionMode=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QPainterPath(path) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPainterPath");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int64 = mode;
            stack[2].name = QByteArrayLiteral("Qt::ItemSelectionMode");
            stack[2].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::collidesWithPath(path,mode);
    }

    bool PlastiQParentCall_collidesWithPath(const QPainterPath &path, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const {
        return QGraphicsObject::collidesWithPath(path,mode);
    }

    bool contains(const QPointF &point) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool contains(const QPointF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QPointF(point) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPointF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::contains(point);
    }

    bool PlastiQParentCall_contains(const QPointF &point) const {
        return QGraphicsObject::contains(point);
    }

    bool isObscuredBy(const QGraphicsItem *item) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isObscuredBy(const QGraphicsItem*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QGraphicsItem*>(item));
            stack[1].name = QByteArrayLiteral("QGraphicsItem");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::isObscuredBy(item);
    }

    bool PlastiQParentCall_isObscuredBy(const QGraphicsItem *item) const {
        return QGraphicsObject::isObscuredBy(item);
    }

    QPainterPath opaqueArea() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QPainterPath opaqueArea()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QPainterPath _r = QPainterPath(*reinterpret_cast<QPainterPath*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::opaqueArea();
    }

    QPainterPath PlastiQParentCall_opaqueArea() const {
        return QGraphicsObject::opaqueArea();
    }

    QPainterPath shape() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QPainterPath shape()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QPainterPath _r = QPainterPath(*reinterpret_cast<QPainterPath*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::shape();
    }

    QPainterPath PlastiQParentCall_shape() const {
        return QGraphicsObject::shape();
    }

    int type() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int type()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::type();
    }

    int PlastiQParentCall_type() const {
        return QGraphicsObject::type();
    }

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
        else return QGraphicsObject::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QGraphicsSceneContextMenuEvent *event) {
        return QGraphicsObject::contextMenuEvent(event);
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
        else return QGraphicsObject::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsObject::dragEnterEvent(event);
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
        else return QGraphicsObject::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsObject::dragLeaveEvent(event);
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
        else return QGraphicsObject::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsObject::dragMoveEvent(event);
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
        else return QGraphicsObject::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsObject::dropEvent(event);
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
        else return QGraphicsObject::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QGraphicsObject::focusInEvent(event);
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
        else return QGraphicsObject::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QGraphicsObject::focusOutEvent(event);
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
        else return QGraphicsObject::hoverEnterEvent(event);
    }

    void PlastiQParentCall_hoverEnterEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsObject::hoverEnterEvent(event);
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
        else return QGraphicsObject::hoverLeaveEvent(event);
    }

    void PlastiQParentCall_hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsObject::hoverLeaveEvent(event);
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
        else return QGraphicsObject::hoverMoveEvent(event);
    }

    void PlastiQParentCall_hoverMoveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsObject::hoverMoveEvent(event);
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
        else return QGraphicsObject::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QGraphicsObject::inputMethodEvent(event);
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
        else return QGraphicsObject::inputMethodQuery(query);
    }

    QVariant PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery query) const {
        return QGraphicsObject::inputMethodQuery(query);
    }

    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant itemChange(GraphicsItemChange,const QVariant&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int64 = change;
            stack[1].name = QByteArrayLiteral("GraphicsItemChange");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QVariant");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::itemChange(change,value);
    }

    QVariant PlastiQParentCall_itemChange(GraphicsItemChange change, const QVariant &value) {
        return QGraphicsObject::itemChange(change,value);
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
        else return QGraphicsObject::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QGraphicsObject::keyPressEvent(event);
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
        else return QGraphicsObject::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QGraphicsObject::keyReleaseEvent(event);
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
        else return QGraphicsObject::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsObject::mouseDoubleClickEvent(event);
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
        else return QGraphicsObject::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsObject::mouseMoveEvent(event);
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
        else return QGraphicsObject::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsObject::mousePressEvent(event);
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
        else return QGraphicsObject::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsObject::mouseReleaseEvent(event);
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
        else return QGraphicsObject::sceneEvent(event);
    }

    bool PlastiQParentCall_sceneEvent(QEvent *event) {
        return QGraphicsObject::sceneEvent(event);
    }

    bool sceneEventFilter(QGraphicsItem *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool sceneEventFilter(QGraphicsItem*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QGraphicsItem");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsObject::sceneEventFilter(watched,event);
    }

    bool PlastiQParentCall_sceneEventFilter(QGraphicsItem *watched, QEvent *event) {
        return QGraphicsObject::sceneEventFilter(watched,event);
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
        else return QGraphicsObject::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QGraphicsSceneWheelEvent *event) {
        return QGraphicsObject::wheelEvent(event);
    }

};

void PlastiQQGraphicsObject::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsObjectWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsObject *p = new PlastiQQGraphicsObject();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsObject *p = new PlastiQQGraphicsObject();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsObject *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsObject*>(object->plastiq_data());

        switch(id) {
        case 0: o->grabGesture(Qt::GestureType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->grabGesture(Qt::GestureType(stack[1].s_int64),
                    Qt::GestureFlags(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->ungrabGesture(Qt::GestureType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsObjectWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGraphicsObject *o = reinterpret_cast<QGraphicsObject*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QGraphicsObject::enabledChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "enabledChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QGraphicsObject::opacityChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "opacityChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QGraphicsObject::parentChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "parentChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QGraphicsObject::rotationChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "rotationChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QGraphicsObject::scaleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "scaleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QGraphicsObject::visibleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "visibleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QGraphicsObject::xChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "xChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::yChanged),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "yChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QGraphicsObject::zChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "zChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsObject *o = reinterpret_cast<QGraphicsObject*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsObject *o = reinterpret_cast<QGraphicsObject*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsObject *o = reinterpret_cast<QGraphicsObject*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QGraphicsItem") {
            stack[0].s_voidp = static_cast<QGraphicsItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsObject::~PlastiQQGraphicsObject() {
    QGraphicsObject* o = reinterpret_cast<QGraphicsObject*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
