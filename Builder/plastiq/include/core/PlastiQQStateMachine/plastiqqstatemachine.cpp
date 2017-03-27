#include "plastiqmethod.h"
#include "plastiqqstatemachine.h"

#include "core/PlastiQQState/plastiqqstate.h"
#include <QStateMachine> 
#include <QString>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQStateMachine::plastiqConstructors = {
    { "QStateMachine()", { "QStateMachine", "", "QStateMachine*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStateMachine(QObject*)", { "QStateMachine", "QObject*", "QStateMachine*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStateMachine(enum)", { "QStateMachine", "QState::ChildMode", "QStateMachine*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStateMachine(enum,QObject*)", { "QStateMachine", "QState::ChildMode,QObject*", "QStateMachine*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStateMachine::plastiqMethods = {
    { "addDefaultAnimation(QAbstractAnimation*)", { "addDefaultAnimation", "QAbstractAnimation*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addState(QAbstractState*)", { "addState", "QAbstractState*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cancelDelayedEvent(int)", { "cancelDelayedEvent", "int", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearError()", { "clearError", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalRestorePolicy()", { "globalRestorePolicy", "", "QState::RestorePolicy", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAnimated()", { "isAnimated", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRunning()", { "isRunning", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "postDelayedEvent(QEvent*,int)", { "postDelayedEvent", "QEvent*,int", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "postEvent(QEvent*)", { "postEvent", "QEvent*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "postEvent(QEvent*,enum)", { "postEvent", "QEvent*,EventPriority", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeDefaultAnimation(QAbstractAnimation*)", { "removeDefaultAnimation", "QAbstractAnimation*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeState(QAbstractState*)", { "removeState", "QAbstractState*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAnimated(bool)", { "setAnimated", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGlobalRestorePolicy(enum)", { "setGlobalRestorePolicy", "QState::RestorePolicy", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onEntry(QEvent*)", { "onEntry", "QEvent*", "void", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onExit(QEvent*)", { "onExit", "QEvent*", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setRunning(bool)", { "setRunning", "bool", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start()", { "start", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStateMachine::plastiqSignals = {
    { "runningChanged(bool)", { "runningChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "started()", { "started", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stopped()", { "stopped", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQStateMachine::plastiqProperties = {
    { "animated", { "animated", "bool", "setAnimated", "isAnimated" } },
    { "errorString", { "errorString", "QString", "", "errorString" } },
    { "globalRestorePolicy", { "globalRestorePolicy", "long", "setGlobalRestorePolicy", "globalRestorePolicy" } },
    { "running", { "running", "bool", "setRunning", "isRunning" } },

};

QHash<QByteArray, long> PlastiQQStateMachine::plastiqConstants = {

    /* QStateMachine::Error */
   { "NoError", QStateMachine::NoError },
   { "NoInitialStateError", QStateMachine::NoInitialStateError },
   { "NoDefaultStateInHistoryStateError", QStateMachine::NoDefaultStateInHistoryStateError },
   { "NoCommonAncestorForTransitionError", QStateMachine::NoCommonAncestorForTransitionError },

    /* QStateMachine::EventPriority */
   { "NormalPriority", QStateMachine::NormalPriority },
   { "HighPriority", QStateMachine::HighPriority },

};

QVector<PlastiQMetaObject*> PlastiQQStateMachine::plastiqInherits = { &PlastiQQState::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStateMachine::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStateMachine::plastiq_static_metaObject = {
    { &PlastiQQState::plastiq_static_metaObject, &plastiqInherits, "QStateMachine", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStateMachine::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQStateMachineWrapper : public QStateMachine {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQStateMachineWrapper(QObject *parent = Q_NULLPTR)
         : QStateMachine(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQStateMachineWrapper(QState::ChildMode childMode, QObject *parent = Q_NULLPTR)
         : QStateMachine(childMode,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QStateMachine::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QStateMachine::event(e);
    }

    void onEntry(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void onEntry(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStateMachine::onEntry(event);
    }

    void PlastiQParentCall_onEntry(QEvent *event) {
        return QStateMachine::onEntry(event);
    }

    void onExit(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void onExit(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStateMachine::onExit(event);
    }

    void PlastiQParentCall_onExit(QEvent *event) {
        return QStateMachine::onExit(event);
    }

};

void PlastiQQStateMachine::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQStateMachineWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQStateMachineWrapper(); break;
        case 1: o = new PlastiQQStateMachineWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQStateMachineWrapper(QState::ChildMode(stack[1].s_int64)); break;
        case 3: o = new PlastiQQStateMachineWrapper(QState::ChildMode(stack[1].s_int64),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQStateMachine *p = new PlastiQQStateMachine();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStateMachine *p = new PlastiQQStateMachine();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 22) {
            id -= 22;
            PlastiQQState::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStateMachine *o = sc ? Q_NULLPTR : reinterpret_cast<QStateMachine*>(object->plastiq_data());

        switch(id) {
        case 0: o->addDefaultAnimation(reinterpret_cast<QAbstractAnimation*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addState(reinterpret_cast<QAbstractState*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->cancelDelayedEvent(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->clearError();
                stack[0].type = PlastiQ::Void; break;
        case 4: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { qint64 _r = o->globalRestorePolicy(); // HACK for QState::RestorePolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { bool _r = o->isAnimated();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isRunning();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { int _r = o->postDelayedEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: o->postEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->postEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp),
                    QStateMachine::EventPriority(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->removeDefaultAnimation(reinterpret_cast<QAbstractAnimation*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->removeState(reinterpret_cast<QAbstractState*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setAnimated(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setGlobalRestorePolicy(QState::RestorePolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 16: { bool _r;
                if (isWrapper) _r = ((PlastiQQStateMachineWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: if (isWrapper) ((PlastiQQStateMachineWrapper*)o)->PlastiQParentCall_onEntry(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 18: if (isWrapper) ((PlastiQQStateMachineWrapper*)o)->PlastiQParentCall_onExit(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setRunning(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 21: o->stop();
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
        QStateMachine *o = reinterpret_cast<QStateMachine*>(object->plastiq_data());

        if(className == "QState") {
            stack[0].s_voidp = static_cast<QState*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStateMachine::~PlastiQQStateMachine() {
    QStateMachine* o = reinterpret_cast<QStateMachine*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
