#include "plastiqmethod.h"
#include "plastiqqabstracteventdispatcher.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractEventDispatcher> 

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractEventDispatcher::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractEventDispatcher::plastiqMethods = {
    { "filterNativeEvent(QByteArray,void*,long*)", { "filterNativeEvent", "QByteArray&,void*,long*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flush()", { "flush", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "installNativeEventFilter(QAbstractNativeEventFilter*)", { "installNativeEventFilter", "QAbstractNativeEventFilter*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "interrupt()", { "interrupt", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processEvents(enum)", { "processEvents", "QEventLoop::ProcessEventsFlags", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerEventNotifier(QWinEventNotifier*)", { "registerEventNotifier", "QWinEventNotifier*", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerSocketNotifier(QSocketNotifier*)", { "registerSocketNotifier", "QSocketNotifier*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerTimer(int,enum,QObject*)", { "registerTimer", "int,Qt::TimerType,QObject*", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerTimer(int,int,enum,QObject*)", { "registerTimer", "int,int,Qt::TimerType,QObject*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remainingTime(int)", { "remainingTime", "int", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeNativeEventFilter(QAbstractNativeEventFilter*)", { "removeNativeEventFilter", "QAbstractNativeEventFilter*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unregisterEventNotifier(QWinEventNotifier*)", { "unregisterEventNotifier", "QWinEventNotifier*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unregisterSocketNotifier(QSocketNotifier*)", { "unregisterSocketNotifier", "QSocketNotifier*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unregisterTimer(int)", { "unregisterTimer", "int", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unregisterTimers(QObject*)", { "unregisterTimers", "QObject*", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wakeUp()", { "wakeUp", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "instance()", { "instance", "", "QAbstractEventDispatcher*", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "instance(QThread*)", { "instance", "QThread*", "QAbstractEventDispatcher*", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractEventDispatcher::plastiqSignals = {
    { "aboutToBlock()", { "aboutToBlock", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "awake()", { "awake", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractEventDispatcher::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractEventDispatcher::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractEventDispatcher::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractEventDispatcher::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractEventDispatcher::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractEventDispatcher", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractEventDispatcher::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractEventDispatcher::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractEventDispatcher *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractEventDispatcher *p = new PlastiQQAbstractEventDispatcher();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractEventDispatcher *p = new PlastiQQAbstractEventDispatcher();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractEventDispatcher *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractEventDispatcher*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->filterNativeEvent(stack[1].s_bytearray,
                    reinterpret_cast<void*>(stack[2].s_voidp),
                    reinterpret_cast<long*>(stack[3].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: o->flush();
                stack[0].type = PlastiQ::Void; break;
        case 2: o->installNativeEventFilter(reinterpret_cast<QAbstractNativeEventFilter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->interrupt();
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->processEvents(QEventLoop::ProcessEventsFlags(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->registerEventNotifier(reinterpret_cast<QWinEventNotifier*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->registerSocketNotifier(reinterpret_cast<QSocketNotifier*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: { int _r = o->registerTimer(stack[1].s_int,
                    Qt::TimerType(stack[2].s_int64),
                    reinterpret_cast<QObject*>(stack[3].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: o->registerTimer(stack[1].s_int,
                    stack[2].s_int,
                    Qt::TimerType(stack[3].s_int64),
                    reinterpret_cast<QObject*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: { int _r = o->remainingTime(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: o->removeNativeEventFilter(reinterpret_cast<QAbstractNativeEventFilter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->unregisterEventNotifier(reinterpret_cast<QWinEventNotifier*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->unregisterSocketNotifier(reinterpret_cast<QSocketNotifier*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: { bool _r = o->unregisterTimer(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->unregisterTimers(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: o->wakeUp();
                stack[0].type = PlastiQ::Void; break;
        case 16: { QAbstractEventDispatcher* _r = sc ? QAbstractEventDispatcher::instance() : o->instance();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractEventDispatcher"; } break;
        case 17: { QAbstractEventDispatcher* _r = sc ? QAbstractEventDispatcher::instance(reinterpret_cast<QThread*>(stack[1].s_voidp)) : o->instance(reinterpret_cast<QThread*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractEventDispatcher"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractEventDispatcher *o = reinterpret_cast<QAbstractEventDispatcher*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractEventDispatcher::aboutToBlock,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "aboutToBlock", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractEventDispatcher::awake,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "awake", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractEventDispatcher *o = reinterpret_cast<QAbstractEventDispatcher*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractEventDispatcher *o = reinterpret_cast<QAbstractEventDispatcher*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractEventDispatcher *o = reinterpret_cast<QAbstractEventDispatcher*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractEventDispatcher::~PlastiQQAbstractEventDispatcher() {
    QAbstractEventDispatcher* o = reinterpret_cast<QAbstractEventDispatcher*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
