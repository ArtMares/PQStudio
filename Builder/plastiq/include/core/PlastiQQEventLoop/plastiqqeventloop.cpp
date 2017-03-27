#include "plastiqmethod.h"
#include "plastiqqeventloop.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QEventLoop> 

QHash<QByteArray, PlastiQMethod> PlastiQQEventLoop::plastiqConstructors = {
    { "QEventLoop()", { "QEventLoop", "", "QEventLoop*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEventLoop(QObject*)", { "QEventLoop", "QObject*", "QEventLoop*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEventLoop::plastiqMethods = {
    { "exec()", { "exec", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exec(enum)", { "exec", "ProcessEventsFlags", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exit()", { "exit", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exit(int)", { "exit", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRunning()", { "isRunning", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processEvents()", { "processEvents", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processEvents(enum)", { "processEvents", "ProcessEventsFlags", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processEvents(enum,int)", { "processEvents", "ProcessEventsFlags,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wakeUp()", { "wakeUp", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quit()", { "quit", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEventLoop::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQEventLoop::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQEventLoop::plastiqConstants = {

    /* QEventLoop::ProcessEventsFlag */
   { "AllEvents", QEventLoop::AllEvents },
   { "ExcludeUserInputEvents", QEventLoop::ExcludeUserInputEvents },
   { "ExcludeSocketNotifiers", QEventLoop::ExcludeSocketNotifiers },
   { "WaitForMoreEvents", QEventLoop::WaitForMoreEvents },
   { "X11ExcludeTimers", QEventLoop::X11ExcludeTimers },
   { "EventLoopExec", QEventLoop::EventLoopExec },
   { "DialogExec", QEventLoop::DialogExec },

};

QVector<PlastiQMetaObject*> PlastiQQEventLoop::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQEventLoop::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQEventLoop::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QEventLoop", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQEventLoop::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQEventLoop::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QEventLoop *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QEventLoop(); break;
        case 1: o = new QEventLoop(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQEventLoop *p = new PlastiQQEventLoop();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQEventLoop *p = new PlastiQQEventLoop();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QEventLoop *o = sc ? Q_NULLPTR : reinterpret_cast<QEventLoop*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->exec();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->exec(QEventLoop::ProcessEventsFlags(stack[1].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: o->exit();
                stack[0].type = PlastiQ::Void; break;
        case 3: o->exit(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->isRunning();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->processEvents();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->processEvents(QEventLoop::ProcessEventsFlags(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: o->processEvents(QEventLoop::ProcessEventsFlags(stack[1].s_int64),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->wakeUp();
                stack[0].type = PlastiQ::Void; break;
        case 9: o->quit();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QEventLoop *o = reinterpret_cast<QEventLoop*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QEventLoop *o = reinterpret_cast<QEventLoop*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QEventLoop *o = reinterpret_cast<QEventLoop*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QEventLoop *o = reinterpret_cast<QEventLoop*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQEventLoop::~PlastiQQEventLoop() {
    QEventLoop* o = reinterpret_cast<QEventLoop*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
