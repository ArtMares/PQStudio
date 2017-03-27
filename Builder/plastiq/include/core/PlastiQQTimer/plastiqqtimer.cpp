#include "plastiqmethod.h"
#include "plastiqqtimer.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QTimer> 
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQTimer::plastiqConstructors = {
    { "QTimer()", { "QTimer", "", "QTimer*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimer(QObject*)", { "QTimer", "QObject*", "QTimer*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimer::plastiqMethods = {
    { "interval()", { "interval", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intervalAsDuration()", { "intervalAsDuration", "", "std::chrono::milliseconds", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSingleShot()", { "isSingleShot", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remainingTime()", { "remainingTime", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remainingTimeAsDuration()", { "remainingTimeAsDuration", "", "std::chrono::milliseconds", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInterval(int)", { "setInterval", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInterval(std::chrono::milliseconds)", { "setInterval", "std::chrono::milliseconds", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSingleShot(bool)", { "setSingleShot", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimerType(enum)", { "setTimerType", "Qt::TimerType", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(std::chrono::milliseconds)", { "start", "std::chrono::milliseconds", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timerId()", { "timerId", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timerType()", { "timerType", "", "Qt::TimerType", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "singleShot(int,const QObject*,const char*)", { "singleShot", "int,QObject*,char*", "void", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(int,enum,const QObject*,const char*)", { "singleShot", "int,Qt::TimerType,QObject*,char*", "void", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(int,const QObject*,PointerToMemberFunction)", { "singleShot", "int,QObject*,PointerToMemberFunction", "void", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(int,enum,const QObject*,PointerToMemberFunction)", { "singleShot", "int,Qt::TimerType,QObject*,PointerToMemberFunction", "void", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(int,Functor)", { "singleShot", "int,Functor", "void", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(int,enum,Functor)", { "singleShot", "int,Qt::TimerType,Functor", "void", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(int,const QObject*,Functor)", { "singleShot", "int,QObject*,Functor", "void", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(int,enum,const QObject*,Functor)", { "singleShot", "int,Qt::TimerType,QObject*,Functor", "void", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(std::chrono::milliseconds,const QObject*,const char*)", { "singleShot", "std::chrono::milliseconds,QObject*,char*", "void", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "singleShot(std::chrono::milliseconds,enum,const QObject*,const char*)", { "singleShot", "std::chrono::milliseconds,Qt::TimerType,QObject*,char*", "void", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "start(int)", { "start", "int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start()", { "start", "", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimer::plastiqSignals = {
    { "timeout()", { "timeout", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTimer::plastiqProperties = {
    { "active", { "active", "bool", "", "isActive" } },
    { "interval", { "interval", "int", "setInterval", "interval" } },
    { "remainingTime", { "remainingTime", "int", "", "remainingTime" } },
    { "singleShot", { "singleShot", "bool", "setSingleShot", "isSingleShot" } },
    { "timerType", { "timerType", "long", "setTimerType", "timerType" } },

};

QHash<QByteArray, long> PlastiQQTimer::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTimer::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTimer::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQTimer::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QTimer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTimer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTimerWrapper : public QTimer {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTimerWrapper(QObject *parent = Q_NULLPTR)
         : QTimer(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void timerEvent(QTimerEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTimer::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QTimer::timerEvent(e);
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
        else return QTimer::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QTimer::event(e);
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
        else return QTimer::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QTimer::eventFilter(watched,event);
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
        else return QTimer::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QTimer::metaObject();
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
        else return QTimer::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QTimer::childEvent(event);
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
        else return QTimer::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QTimer::connectNotify(signal);
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
        else return QTimer::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QTimer::customEvent(event);
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
        else return QTimer::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QTimer::disconnectNotify(signal);
    }

};

void PlastiQQTimer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTimerWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTimerWrapper(); break;
        case 1: o = new PlastiQQTimerWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTimer *p = new PlastiQQTimer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTimer *p = new PlastiQQTimer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 27) {
            id -= 27;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTimer *o = sc ? Q_NULLPTR : reinterpret_cast<QTimer*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->interval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: /* o->intervalAsDuration() | ret: `std::chrono::milliseconds` */ break;
        case 2: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isSingleShot();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { int _r = o->remainingTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: /* o->remainingTimeAsDuration() | ret: `std::chrono::milliseconds` */ break;
        case 6: o->setInterval(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: /* o->setInterval(UNSUPPORTED_TYPE_std::chrono::milliseconds) | ret: `void` */ break;
        case 8: o->setSingleShot(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setTimerType(Qt::TimerType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: /* o->start(UNSUPPORTED_TYPE_std::chrono::milliseconds) | ret: `void` */ break;
        case 11: { int _r = o->timerId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { qint64 _r = o->timerType(); // HACK for Qt::TimerType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: if(sc) { QTimer::singleShot(stack[1].s_int,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp)); } else { o->singleShot(stack[1].s_int,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 14: if(sc) { QTimer::singleShot(stack[1].s_int,
                    Qt::TimerType(stack[2].s_int64),
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    reinterpret_cast<const char*>(stack[4].s_voidp)); } else { o->singleShot(stack[1].s_int,
                    Qt::TimerType(stack[2].s_int64),
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    reinterpret_cast<const char*>(stack[4].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 15: /* o->singleShot(stack[1].s_int,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction) | ret: `void` */ break;
        case 16: /* o->singleShot(stack[1].s_int,
                    Qt::TimerType(stack[2].s_int64),
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction) | ret: `void` */ break;
        case 17: /* o->singleShot(stack[1].s_int,
                    UNSUPPORTED_TYPE_Functor) | ret: `void` */ break;
        case 18: /* o->singleShot(stack[1].s_int,
                    Qt::TimerType(stack[2].s_int64),
                    UNSUPPORTED_TYPE_Functor) | ret: `void` */ break;
        case 19: /* o->singleShot(stack[1].s_int,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_Functor) | ret: `void` */ break;
        case 20: /* o->singleShot(stack[1].s_int,
                    Qt::TimerType(stack[2].s_int64),
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    UNSUPPORTED_TYPE_Functor) | ret: `void` */ break;
        case 21: /* o->singleShot(UNSUPPORTED_TYPE_std::chrono::milliseconds,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp)) | ret: `void` */ break;
        case 22: /* o->singleShot(UNSUPPORTED_TYPE_std::chrono::milliseconds,
                    Qt::TimerType(stack[2].s_int64),
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    reinterpret_cast<const char*>(stack[4].s_voidp)) | ret: `void` */ break;
        case 23: if (isWrapper) ((PlastiQQTimerWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 24: o->start(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 26: o->stop();
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

        QTimer *o = reinterpret_cast<QTimer*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTimer::timeout,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "timeout", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTimer *o = reinterpret_cast<QTimer*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTimer *o = reinterpret_cast<QTimer*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTimer *o = reinterpret_cast<QTimer*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTimer::~PlastiQQTimer() {
    QTimer* o = reinterpret_cast<QTimer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
