#include "plastiqmethod.h"
#include "plastiqqabstractstate.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractState> 
#include <QStateMachine>
#include <QState>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractState::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractState::plastiqMethods = {
    { "active()", { "active", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "machine()", { "machine", "", "QStateMachine*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentState()", { "parentState", "", "QState*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "onEntry(QEvent*)", { "onEntry", "QEvent*", "void", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onExit(QEvent*)", { "onExit", "QEvent*", "void", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractState::plastiqSignals = {
    { "activeChanged(bool)", { "activeChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "entered()", { "entered", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "exited()", { "exited", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractState::plastiqProperties = {
    { "active", { "active", "bool", "activeChanged", "active" } },

};

QHash<QByteArray, long> PlastiQQAbstractState::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractState::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractState::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractState::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractState", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractState::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractStateWrapper : public QAbstractState {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QAbstractState::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QAbstractState::event(e);
    }

};

void PlastiQQAbstractState::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractStateWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractState *p = new PlastiQQAbstractState();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractState *p = new PlastiQQAbstractState();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractState *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractState*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->active();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QStateMachine* _r = o->machine();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStateMachine"; } break;
        case 2: { QState* _r = o->parentState();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QState"; } break;
        case 3: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 4: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 5: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractStateWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractState *o = reinterpret_cast<QAbstractState*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractState::activeChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "activeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractState::entered,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "entered", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractState::exited,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "exited", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractState *o = reinterpret_cast<QAbstractState*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractState *o = reinterpret_cast<QAbstractState*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractState *o = reinterpret_cast<QAbstractState*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractState::~PlastiQQAbstractState() {
    QAbstractState* o = reinterpret_cast<QAbstractState*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
