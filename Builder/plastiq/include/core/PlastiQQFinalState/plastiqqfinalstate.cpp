#include "plastiqmethod.h"
#include "plastiqqfinalstate.h"

#include "core/PlastiQQAbstractState/plastiqqabstractstate.h"
#include <QFinalState> 
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQFinalState::plastiqConstructors = {
    { "QFinalState()", { "QFinalState", "", "QFinalState*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFinalState(QState*)", { "QFinalState", "QState*", "QFinalState*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFinalState::plastiqMethods = {
    { "event(QEvent*)", { "event", "QEvent*", "bool", 0, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onEntry(QEvent*)", { "onEntry", "QEvent*", "void", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onExit(QEvent*)", { "onExit", "QEvent*", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFinalState::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFinalState::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFinalState::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFinalState::plastiqInherits = { &PlastiQQAbstractState::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFinalState::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQFinalState::plastiq_static_metaObject = {
    { &PlastiQQAbstractState::plastiq_static_metaObject, &plastiqInherits, "QFinalState", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFinalState::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFinalStateWrapper : public QFinalState {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQFinalStateWrapper(QState *parent = Q_NULLPTR)
         : QFinalState(parent),
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
        else return QFinalState::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QFinalState::event(e);
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
        else return QFinalState::onEntry(event);
    }

    void PlastiQParentCall_onEntry(QEvent *event) {
        return QFinalState::onEntry(event);
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
        else return QFinalState::onExit(event);
    }

    void PlastiQParentCall_onExit(QEvent *event) {
        return QFinalState::onExit(event);
    }

};

void PlastiQQFinalState::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFinalStateWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQFinalStateWrapper(); break;
        case 1: o = new PlastiQQFinalStateWrapper(reinterpret_cast<QState*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFinalState *p = new PlastiQQFinalState();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFinalState *p = new PlastiQQFinalState();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQAbstractState::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFinalState *o = sc ? Q_NULLPTR : reinterpret_cast<QFinalState*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r;
                if (isWrapper) _r = ((PlastiQQFinalStateWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: if (isWrapper) ((PlastiQQFinalStateWrapper*)o)->PlastiQParentCall_onEntry(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQFinalStateWrapper*)o)->PlastiQParentCall_onExit(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractState::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFinalState *o = reinterpret_cast<QFinalState*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFinalState *o = reinterpret_cast<QFinalState*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFinalState *o = reinterpret_cast<QFinalState*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFinalState *o = reinterpret_cast<QFinalState*>(object->plastiq_data());

        if(className == "QAbstractState") {
            stack[0].s_voidp = static_cast<QAbstractState*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFinalState::~PlastiQQFinalState() {
    QFinalState* o = reinterpret_cast<QFinalState*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
