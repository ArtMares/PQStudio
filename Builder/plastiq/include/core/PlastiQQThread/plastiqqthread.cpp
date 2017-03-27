#include "plastiqmethod.h"
#include "plastiqqthread.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QThread> 
#include <QAbstractEventDispatcher>

QHash<QByteArray, PlastiQMethod> PlastiQQThread::plastiqConstructors = {
    { "QThread()", { "QThread", "", "QThread*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QThread(QObject*)", { "QThread", "QObject*", "QThread*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQThread::plastiqMethods = {
    { "eventDispatcher()", { "eventDispatcher", "", "QAbstractEventDispatcher*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exit()", { "exit", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exit(int)", { "exit", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFinished()", { "isFinished", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isInterruptionRequested()", { "isInterruptionRequested", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRunning()", { "isRunning", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopLevel()", { "loopLevel", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "priority()", { "priority", "", "Priority", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestInterruption()", { "requestInterruption", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEventDispatcher(QAbstractEventDispatcher*)", { "setEventDispatcher", "QAbstractEventDispatcher*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPriority(enum)", { "setPriority", "Priority", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStackSize(long)", { "setStackSize", "uint", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stackSize()", { "stackSize", "", "uint", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wait()", { "wait", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wait(unsigned long)", { "wait", "unsigned long", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentThread()", { "currentThread", "", "QThread*", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "currentThreadId()", { "currentThreadId", "", "Qt::HANDLE", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "idealThreadCount()", { "idealThreadCount", "", "int", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "msleep(unsigned long)", { "msleep", "unsigned long", "void", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sleep(unsigned long)", { "sleep", "unsigned long", "void", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "usleep(unsigned long)", { "usleep", "unsigned long", "void", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "yieldCurrentThread()", { "yieldCurrentThread", "", "void", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exec()", { "exec", "", "int", 22, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "run()", { "run", "", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "quit()", { "quit", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start()", { "start", "", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start(enum)", { "start", "Priority", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "terminate()", { "terminate", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQThread::plastiqSignals = {
    { "finished()", { "finished", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "started()", { "started", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQThread::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQThread::plastiqConstants = {

    /* QThread::Priority */
   { "IdlePriority", QThread::IdlePriority },
   { "LowestPriority", QThread::LowestPriority },
   { "LowPriority", QThread::LowPriority },
   { "NormalPriority", QThread::NormalPriority },
   { "HighPriority", QThread::HighPriority },
   { "HighestPriority", QThread::HighestPriority },
   { "TimeCriticalPriority", QThread::TimeCriticalPriority },
   { "InheritPriority", QThread::InheritPriority },

};

QVector<PlastiQMetaObject*> PlastiQQThread::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQThread::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQThread::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QThread", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQThread::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQThreadWrapper : public QThread {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQThreadWrapper(QObject *parent = Q_NULLPTR)
         : QThread(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void run() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void run()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QThread::run();
    }

    void PlastiQParentCall_run() {
        return QThread::run();
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
        else return QThread::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QThread::event(e);
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
        else return QThread::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QThread::eventFilter(watched,event);
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
        else return QThread::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QThread::metaObject();
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
        else return QThread::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QThread::childEvent(event);
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
        else return QThread::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QThread::connectNotify(signal);
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
        else return QThread::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QThread::customEvent(event);
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
        else return QThread::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QThread::disconnectNotify(signal);
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
        else return QThread::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QThread::timerEvent(event);
    }

};

void PlastiQQThread::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQThreadWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQThreadWrapper(); break;
        case 1: o = new PlastiQQThreadWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQThread *p = new PlastiQQThread();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQThread *p = new PlastiQQThread();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 28) {
            id -= 28;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QThread *o = sc ? Q_NULLPTR : reinterpret_cast<QThread*>(object->plastiq_data());

        switch(id) {
        case 0: { QAbstractEventDispatcher* _r = o->eventDispatcher();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractEventDispatcher"; } break;
        case 1: o->exit();
                stack[0].type = PlastiQ::Void; break;
        case 2: o->exit(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r = o->isFinished();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isInterruptionRequested();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isRunning();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { int _r = o->loopLevel();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { qint64 _r = o->priority(); // HACK for Priority 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: o->requestInterruption();
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setEventDispatcher(reinterpret_cast<QAbstractEventDispatcher*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setPriority(QThread::Priority(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setStackSize(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 12: { long _r = o->stackSize();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 13: { bool _r = o->wait();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: /* o->wait(UNSUPPORTED_TYPE_unsigned long) | ret: `bool` */ break;
        case 15: { QThread* _r = sc ? QThread::currentThread() : o->currentThread();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QThread"; } break;
        case 16: /* o->currentThreadId() | ret: `Qt::HANDLE` */ break;
        case 17: { int _r = sc ? QThread::idealThreadCount() : o->idealThreadCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: /* o->msleep(UNSUPPORTED_TYPE_unsigned long) | ret: `void` */ break;
        case 19: /* o->sleep(UNSUPPORTED_TYPE_unsigned long) | ret: `void` */ break;
        case 20: /* o->usleep(UNSUPPORTED_TYPE_unsigned long) | ret: `void` */ break;
        case 21: if(sc) { QThread::yieldCurrentThread(); } else { o->yieldCurrentThread(); }
                stack[0].type = PlastiQ::Void; break;
        case 22: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 23: if (isWrapper) ((PlastiQQThreadWrapper*)o)->PlastiQParentCall_run();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 24: o->quit();
                stack[0].type = PlastiQ::Void; break;
        case 25: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 26: o->start(QThread::Priority(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->terminate();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QThread *o = reinterpret_cast<QThread*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QThread::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QThread::started,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "started", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QThread *o = reinterpret_cast<QThread*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QThread *o = reinterpret_cast<QThread*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QThread *o = reinterpret_cast<QThread*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQThread::~PlastiQQThread() {
    QThread* o = reinterpret_cast<QThread*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
