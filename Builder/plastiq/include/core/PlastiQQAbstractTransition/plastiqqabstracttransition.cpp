#include "plastiqmethod.h"
#include "plastiqqabstracttransition.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractTransition> 
#include <QStateMachine>
#include <QState>
#include <QAbstractState>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractTransition::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractTransition::plastiqMethods = {
    { "addAnimation(QAbstractAnimation*)", { "addAnimation", "QAbstractAnimation*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "machine()", { "machine", "", "QStateMachine*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAnimation(QAbstractAnimation*)", { "removeAnimation", "QAbstractAnimation*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTargetState(QAbstractState*)", { "setTargetState", "QAbstractState*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTargetStates(QList<QAbstractState*>&)", { "setTargetStates", "QList<QAbstractState*>&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransitionType(enum)", { "setTransitionType", "TransitionType", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sourceState()", { "sourceState", "", "QState*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "targetState()", { "targetState", "", "QAbstractState*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transitionType()", { "transitionType", "", "TransitionType", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eventTest(QEvent*)", { "eventTest", "QEvent*", "bool", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onTransition(QEvent*)", { "onTransition", "QEvent*", "void", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractTransition::plastiqSignals = {
    { "targetStateChanged()", { "targetStateChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "targetStatesChanged()", { "targetStatesChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "triggered()", { "triggered", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractTransition::plastiqProperties = {
    { "sourceState", { "sourceState", "QStateconst*", "", "sourceState" } },
    { "targetState", { "targetState", "QAbstractState*", "setTargetState", "targetState" } },
    { "targetStates", { "targetStates", "QList<QAbstractState>*", "setTargetStates", "targetStates" } },
    { "transitionType", { "transitionType", "long", "setTransitionType", "transitionType" } },

};

QHash<QByteArray, long> PlastiQQAbstractTransition::plastiqConstants = {

    /* QAbstractTransition::TransitionType */
   { "ExternalTransition", QAbstractTransition::ExternalTransition },
   { "InternalTransition", QAbstractTransition::InternalTransition },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractTransition::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractTransition::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractTransition::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractTransition", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractTransition::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractTransitionWrapper : public QAbstractTransition {
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
        else return QAbstractTransition::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QAbstractTransition::event(e);
    }

};

void PlastiQQAbstractTransition::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractTransitionWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractTransition *p = new PlastiQQAbstractTransition();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractTransition *p = new PlastiQQAbstractTransition();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractTransition *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractTransition*>(object->plastiq_data());

        switch(id) {
        case 0: o->addAnimation(reinterpret_cast<QAbstractAnimation*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QStateMachine* _r = o->machine();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStateMachine"; } break;
        case 2: o->removeAnimation(reinterpret_cast<QAbstractAnimation*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setTargetState(reinterpret_cast<QAbstractState*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setTargetStates((*reinterpret_cast< QList<QAbstractState*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setTransitionType(QAbstractTransition::TransitionType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: { QState* _r = o->sourceState();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QState"; } break;
        case 7: { QAbstractState* _r = o->targetState();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractState"; } break;
        case 8: { qint64 _r = o->transitionType(); // HACK for TransitionType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 10: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 11: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractTransitionWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
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

        QAbstractTransition *o = reinterpret_cast<QAbstractTransition*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractTransition::targetStateChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "targetStateChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractTransition::targetStatesChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "targetStatesChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractTransition::triggered,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "triggered", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractTransition *o = reinterpret_cast<QAbstractTransition*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractTransition *o = reinterpret_cast<QAbstractTransition*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractTransition *o = reinterpret_cast<QAbstractTransition*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractTransition::~PlastiQQAbstractTransition() {
    QAbstractTransition* o = reinterpret_cast<QAbstractTransition*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
