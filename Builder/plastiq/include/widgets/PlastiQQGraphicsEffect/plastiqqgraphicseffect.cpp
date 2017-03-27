#include "plastiqmethod.h"
#include "plastiqqgraphicseffect.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QGraphicsEffect> 
#include <QRectF>
#include <QPixmap>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsEffect::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsEffect::plastiqMethods = {
    { "boundingRect()", { "boundingRect", "", "QRectF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRectFor(QRectF&)", { "boundingRectFor", "QRectF&", "QRectF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "draw(QPainter*)", { "draw", "QPainter*", "void", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawSource(QPainter*)", { "drawSource", "QPainter*", "void", 4, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sourceBoundingRect()", { "sourceBoundingRect", "", "QRectF", 5, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sourceBoundingRect(enum)", { "sourceBoundingRect", "Qt::CoordinateSystem", "QRectF", 6, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sourceChanged(enum)", { "sourceChanged", "ChangeFlags", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sourceIsPixmap()", { "sourceIsPixmap", "", "bool", 8, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sourcePixmap()", { "sourcePixmap", "", "QPixmap", 9, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sourcePixmap(enum)", { "sourcePixmap", "Qt::CoordinateSystem", "QPixmap", 10, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sourcePixmap(enum,QPoint*)", { "sourcePixmap", "Qt::CoordinateSystem,QPoint*", "QPixmap", 11, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sourcePixmap(enum,QPoint*,enum)", { "sourcePixmap", "Qt::CoordinateSystem,QPoint*,PixmapPadMode", "QPixmap", 12, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "updateBoundingRect()", { "updateBoundingRect", "", "void", 13, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "update()", { "update", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsEffect::plastiqSignals = {
    { "enabledChanged(bool)", { "enabledChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsEffect::plastiqProperties = {
    { "enabled", { "enabled", "bool", "setEnabled", "isEnabled" } },

};

QHash<QByteArray, long> PlastiQQGraphicsEffect::plastiqConstants = {

    /* QGraphicsEffect::ChangeFlag */
   { "SourceAttached", QGraphicsEffect::SourceAttached },
   { "SourceDetached", QGraphicsEffect::SourceDetached },
   { "SourceBoundingRectChanged", QGraphicsEffect::SourceBoundingRectChanged },
   { "SourceInvalidated", QGraphicsEffect::SourceInvalidated },

    /* QGraphicsEffect::PixmapPadMode */
   { "NoPad", QGraphicsEffect::NoPad },
   { "PadToTransparentBorder", QGraphicsEffect::PadToTransparentBorder },
   { "PadToEffectiveBoundingRect", QGraphicsEffect::PadToEffectiveBoundingRect },

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsEffect::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsEffect::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGraphicsEffect::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QGraphicsEffect", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsEffect::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsEffectWrapper : public QGraphicsEffect {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QRectF boundingRectFor(const QRectF &rect) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QRectF boundingRectFor(const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRectF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QRectF _r = QRectF(*reinterpret_cast<QRectF*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsEffect::boundingRectFor(rect);
    }

    QRectF PlastiQParentCall_boundingRectFor(const QRectF &rect) const {
        return QGraphicsEffect::boundingRectFor(rect);
    }

    void sourceChanged(ChangeFlags flags) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void sourceChanged(ChangeFlags)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = flags;
            stack[1].name = QByteArrayLiteral("ChangeFlags");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsEffect::sourceChanged(flags);
    }

    void PlastiQParentCall_sourceChanged(ChangeFlags flags) {
        return QGraphicsEffect::sourceChanged(flags);
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
        else return QGraphicsEffect::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QGraphicsEffect::event(e);
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
        else return QGraphicsEffect::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QGraphicsEffect::eventFilter(watched,event);
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
        else return QGraphicsEffect::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QGraphicsEffect::metaObject();
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
        else return QGraphicsEffect::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QGraphicsEffect::childEvent(event);
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
        else return QGraphicsEffect::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QGraphicsEffect::connectNotify(signal);
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
        else return QGraphicsEffect::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QGraphicsEffect::customEvent(event);
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
        else return QGraphicsEffect::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QGraphicsEffect::disconnectNotify(signal);
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
        else return QGraphicsEffect::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QGraphicsEffect::timerEvent(event);
    }

};

void PlastiQQGraphicsEffect::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsEffectWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsEffect *p = new PlastiQQGraphicsEffect();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsEffect *p = new PlastiQQGraphicsEffect();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsEffect *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsEffect*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QRectF *_r;
                if (isWrapper) _r = new QRectF(((PlastiQQGraphicsEffectWrapper*)o)->PlastiQParentCall_boundingRectFor((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
                else _r = new QRectF(o->boundingRectFor((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 4: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 5: { /* COPY OBJECT */
            QRectF *_r; stack[0].type = PlastiQ::Error; } break;
        case 6: { /* COPY OBJECT */
            QRectF *_r; stack[0].type = PlastiQ::Error; } break;
        case 7: if (isWrapper) ((PlastiQQGraphicsEffectWrapper*)o)->PlastiQParentCall_sourceChanged(QGraphicsEffect::ChangeFlags(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 8: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 9: { /* COPY OBJECT */
            QPixmap *_r; stack[0].type = PlastiQ::Error; } break;
        case 10: { /* COPY OBJECT */
            QPixmap *_r; stack[0].type = PlastiQ::Error; } break;
        case 11: { /* COPY OBJECT */
            QPixmap *_r; stack[0].type = PlastiQ::Error; } break;
        case 12: { /* COPY OBJECT */
            QPixmap *_r; stack[0].type = PlastiQ::Error; } break;
        case 13: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 14: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->update();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGraphicsEffect *o = reinterpret_cast<QGraphicsEffect*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QGraphicsEffect::enabledChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "enabledChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsEffect *o = reinterpret_cast<QGraphicsEffect*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsEffect *o = reinterpret_cast<QGraphicsEffect*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsEffect *o = reinterpret_cast<QGraphicsEffect*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsEffect::~PlastiQQGraphicsEffect() {
    QGraphicsEffect* o = reinterpret_cast<QGraphicsEffect*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
