#include "plastiqmethod.h"
#include "plastiqqstate.h"

#include "core/PlastiQQAbstractState/plastiqqabstractstate.h"
#include <QState> 
#include <QSignalTransition>
#include <QAbstractTransition>
#include <QAbstractState>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQState::plastiqConstructors = {
    { "QState()", { "QState", "", "QState*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QState(QState*)", { "QState", "QState*", "QState*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QState(enum)", { "QState", "ChildMode", "QState*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QState(enum,QState*)", { "QState", "ChildMode,QState*", "QState*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQState::plastiqMethods = {
    { "addTransition(QAbstractTransition*)", { "addTransition", "QAbstractTransition*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTransition(const QObject*,const char*,QAbstractState*)", { "addTransition", "QObject*,char*,QAbstractState*", "QSignalTransition*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTransition(const QObject*,PointerToMemberFunction,QAbstractState*)", { "addTransition", "QObject*,PointerToMemberFunction,QAbstractState*", "QSignalTransition*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTransition(QAbstractState*)", { "addTransition", "QAbstractState*", "QAbstractTransition*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "assignProperty(QObject*,const char*,QVariant)", { "assignProperty", "QObject*,char*,QVariant&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childMode()", { "childMode", "", "ChildMode", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorState()", { "errorState", "", "QAbstractState*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initialState()", { "initialState", "", "QAbstractState*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeTransition(QAbstractTransition*)", { "removeTransition", "QAbstractTransition*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChildMode(enum)", { "setChildMode", "ChildMode", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setErrorState(QAbstractState*)", { "setErrorState", "QAbstractState*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInitialState(QAbstractState*)", { "setInitialState", "QAbstractState*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onEntry(QEvent*)", { "onEntry", "QEvent*", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onExit(QEvent*)", { "onExit", "QEvent*", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQState::plastiqSignals = {
    { "childModeChanged()", { "childModeChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "errorStateChanged()", { "errorStateChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished()", { "finished", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "initialStateChanged()", { "initialStateChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "propertiesAssigned()", { "propertiesAssigned", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQState::plastiqProperties = {
    { "childMode", { "childMode", "long", "setChildMode", "childMode" } },
    { "errorState", { "errorState", "QAbstractState*", "setErrorState", "errorState" } },
    { "initialState", { "initialState", "QAbstractState*", "setInitialState", "initialState" } },

};

QHash<QByteArray, long> PlastiQQState::plastiqConstants = {

    /* QState::ChildMode */
   { "ExclusiveStates", QState::ExclusiveStates },
   { "ParallelStates", QState::ParallelStates },

    /* QState::RestorePolicy */
   { "DontRestoreProperties", QState::DontRestoreProperties },
   { "RestoreProperties", QState::RestoreProperties },

};

QVector<PlastiQMetaObject*> PlastiQQState::plastiqInherits = { &PlastiQQAbstractState::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQState::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQState::plastiq_static_metaObject = {
    { &PlastiQQAbstractState::plastiq_static_metaObject, &plastiqInherits, "QState", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQState::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQStateWrapper : public QState {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQStateWrapper(QState *parent = Q_NULLPTR)
         : QState(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQStateWrapper(ChildMode childMode, QState *parent = Q_NULLPTR)
         : QState(childMode,parent),
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
        else return QState::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QState::event(e);
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
        else return QState::onEntry(event);
    }

    void PlastiQParentCall_onEntry(QEvent *event) {
        return QState::onEntry(event);
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
        else return QState::onExit(event);
    }

    void PlastiQParentCall_onExit(QEvent *event) {
        return QState::onExit(event);
    }

};

void PlastiQQState::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQStateWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQStateWrapper(); break;
        case 1: o = new PlastiQQStateWrapper(reinterpret_cast<QState*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQStateWrapper(QState::ChildMode(stack[1].s_int64)); break;
        case 3: o = new PlastiQQStateWrapper(QState::ChildMode(stack[1].s_int64),
                    reinterpret_cast<QState*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQState *p = new PlastiQQState();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQState *p = new PlastiQQState();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQAbstractState::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QState *o = sc ? Q_NULLPTR : reinterpret_cast<QState*>(object->plastiq_data());

        switch(id) {
        case 0: o->addTransition(reinterpret_cast<QAbstractTransition*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QSignalTransition* _r = o->addTransition(reinterpret_cast<const QObject*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<QAbstractState*>(stack[3].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QSignalTransition"; } break;
        case 2: /* o->addTransition(reinterpret_cast<const QObject*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction,
                    reinterpret_cast<QAbstractState*>(stack[3].s_voidp)) | ret: `QSignalTransition*` */ break;
        case 3: { QAbstractTransition* _r = o->addTransition(reinterpret_cast<QAbstractState*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractTransition"; } break;
        case 4: o->assignProperty(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 5: { qint64 _r = o->childMode(); // HACK for ChildMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { QAbstractState* _r = o->errorState();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractState"; } break;
        case 7: { QAbstractState* _r = o->initialState();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractState"; } break;
        case 8: o->removeTransition(reinterpret_cast<QAbstractTransition*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setChildMode(QState::ChildMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setErrorState(reinterpret_cast<QAbstractState*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setInitialState(reinterpret_cast<QAbstractState*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: { bool _r;
                if (isWrapper) _r = ((PlastiQQStateWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: if (isWrapper) ((PlastiQQStateWrapper*)o)->PlastiQParentCall_onEntry(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQStateWrapper*)o)->PlastiQParentCall_onExit(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQAbstractState::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QState *o = reinterpret_cast<QState*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QState::childModeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "childModeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QState::errorStateChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "errorStateChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QState::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QState::initialStateChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "initialStateChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QState::propertiesAssigned,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "propertiesAssigned", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QState *o = reinterpret_cast<QState*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QState *o = reinterpret_cast<QState*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QState *o = reinterpret_cast<QState*>(object->plastiq_data());

        if(className == "QAbstractState") {
            stack[0].s_voidp = static_cast<QAbstractState*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQState::~PlastiQQState() {
    QState* o = reinterpret_cast<QState*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
