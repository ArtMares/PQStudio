#include "plastiqmethod.h"
#include "plastiqqeventtransition.h"

#include "core/PlastiQQAbstractTransition/plastiqqabstracttransition.h"
#include <QEventTransition> 
#include <QObject>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQEventTransition::plastiqConstructors = {
    { "QEventTransition()", { "QEventTransition", "", "QEventTransition*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEventTransition(QState*)", { "QEventTransition", "QState*", "QEventTransition*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEventTransition(QObject*,enum)", { "QEventTransition", "QObject*,QEvent::Type", "QEventTransition*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEventTransition(QObject*,enum,QState*)", { "QEventTransition", "QObject*,QEvent::Type,QState*", "QEventTransition*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEventTransition::plastiqMethods = {
    { "eventSource()", { "eventSource", "", "QObject*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eventType()", { "eventType", "", "QEvent::Type", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEventSource(QObject*)", { "setEventSource", "QObject*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEventType(enum)", { "setEventType", "QEvent::Type", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventTest(QEvent*)", { "eventTest", "QEvent*", "bool", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onTransition(QEvent*)", { "onTransition", "QEvent*", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEventTransition::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQEventTransition::plastiqProperties = {
    { "eventSource", { "eventSource", "QObject*", "setEventSource", "eventSource" } },
    { "eventType", { "eventType", "long", "setEventType", "eventType" } },

};

QHash<QByteArray, long> PlastiQQEventTransition::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQEventTransition::plastiqInherits = { &PlastiQQAbstractTransition::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQEventTransition::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQEventTransition::plastiq_static_metaObject = {
    { &PlastiQQAbstractTransition::plastiq_static_metaObject, &plastiqInherits, "QEventTransition", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQEventTransition::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQEventTransitionWrapper : public QEventTransition {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQEventTransitionWrapper(QState *sourceState = Q_NULLPTR)
         : QEventTransition(sourceState),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQEventTransitionWrapper(QObject *object, QEvent::Type type, QState *sourceState = Q_NULLPTR)
         : QEventTransition(object,type,sourceState),
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
        else return QEventTransition::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QEventTransition::event(e);
    }

    bool eventTest(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventTest(QEvent*)");
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
        else return QEventTransition::eventTest(event);
    }

    bool PlastiQParentCall_eventTest(QEvent *event) {
        return QEventTransition::eventTest(event);
    }

    void onTransition(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void onTransition(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QEventTransition::onTransition(event);
    }

    void PlastiQParentCall_onTransition(QEvent *event) {
        return QEventTransition::onTransition(event);
    }

};

void PlastiQQEventTransition::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQEventTransitionWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQEventTransitionWrapper(); break;
        case 1: o = new PlastiQQEventTransitionWrapper(reinterpret_cast<QState*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQEventTransitionWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QEvent::Type(stack[2].s_int64)); break;
        case 3: o = new PlastiQQEventTransitionWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QEvent::Type(stack[2].s_int64),
                    reinterpret_cast<QState*>(stack[3].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQEventTransition *p = new PlastiQQEventTransition();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQEventTransition *p = new PlastiQQEventTransition();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQAbstractTransition::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QEventTransition *o = sc ? Q_NULLPTR : reinterpret_cast<QEventTransition*>(object->plastiq_data());

        switch(id) {
        case 0: { QObject* _r = o->eventSource();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 1: { qint64 _r = o->eventType(); // HACK for QEvent::Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: o->setEventSource(reinterpret_cast<QObject*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setEventType(QEvent::Type(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQEventTransitionWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r;
                if (isWrapper) _r = ((PlastiQQEventTransitionWrapper*)o)->PlastiQParentCall_eventTest(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: if (isWrapper) ((PlastiQQEventTransitionWrapper*)o)->PlastiQParentCall_onTransition(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractTransition::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QEventTransition *o = reinterpret_cast<QEventTransition*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QEventTransition *o = reinterpret_cast<QEventTransition*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QEventTransition *o = reinterpret_cast<QEventTransition*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QEventTransition *o = reinterpret_cast<QEventTransition*>(object->plastiq_data());

        if(className == "QAbstractTransition") {
            stack[0].s_voidp = static_cast<QAbstractTransition*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQEventTransition::~PlastiQQEventTransition() {
    QEventTransition* o = reinterpret_cast<QEventTransition*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
