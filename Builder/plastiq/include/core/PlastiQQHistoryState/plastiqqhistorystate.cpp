#include "plastiqmethod.h"
#include "plastiqqhistorystate.h"

#include "core/PlastiQQAbstractState/plastiqqabstractstate.h"
#include <QHistoryState> 
#include <QAbstractState>
#include <QAbstractTransition>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQHistoryState::plastiqConstructors = {
    { "QHistoryState()", { "QHistoryState", "", "QHistoryState*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHistoryState(QState*)", { "QHistoryState", "QState*", "QHistoryState*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHistoryState(enum)", { "QHistoryState", "HistoryType", "QHistoryState*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHistoryState(enum,QState*)", { "QHistoryState", "HistoryType,QState*", "QHistoryState*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHistoryState::plastiqMethods = {
    { "defaultState()", { "defaultState", "", "QAbstractState*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultTransition()", { "defaultTransition", "", "QAbstractTransition*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "historyType()", { "historyType", "", "HistoryType", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultState(QAbstractState*)", { "setDefaultState", "QAbstractState*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultTransition(QAbstractTransition*)", { "setDefaultTransition", "QAbstractTransition*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHistoryType(enum)", { "setHistoryType", "HistoryType", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onEntry(QEvent*)", { "onEntry", "QEvent*", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onExit(QEvent*)", { "onExit", "QEvent*", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHistoryState::plastiqSignals = {
    { "defaultStateChanged()", { "defaultStateChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "defaultTransitionChanged()", { "defaultTransitionChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "historyTypeChanged()", { "historyTypeChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQHistoryState::plastiqProperties = {
    { "defaultState", { "defaultState", "QAbstractState*", "setDefaultState", "defaultState" } },
    { "defaultTransition", { "defaultTransition", "QAbstractTransition*", "setDefaultTransition", "defaultTransition" } },
    { "historyType", { "historyType", "long", "setHistoryType", "historyType" } },

};

QHash<QByteArray, long> PlastiQQHistoryState::plastiqConstants = {

    /* QHistoryState::HistoryType */
   { "ShallowHistory", QHistoryState::ShallowHistory },
   { "DeepHistory", QHistoryState::DeepHistory },

};

QVector<PlastiQMetaObject*> PlastiQQHistoryState::plastiqInherits = { &PlastiQQAbstractState::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHistoryState::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQHistoryState::plastiq_static_metaObject = {
    { &PlastiQQAbstractState::plastiq_static_metaObject, &plastiqInherits, "QHistoryState", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHistoryState::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQHistoryStateWrapper : public QHistoryState {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQHistoryStateWrapper(QState *parent = Q_NULLPTR)
         : QHistoryState(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQHistoryStateWrapper(HistoryType type, QState *parent = Q_NULLPTR)
         : QHistoryState(type,parent),
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
        else return QHistoryState::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QHistoryState::event(e);
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
        else return QHistoryState::onEntry(event);
    }

    void PlastiQParentCall_onEntry(QEvent *event) {
        return QHistoryState::onEntry(event);
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
        else return QHistoryState::onExit(event);
    }

    void PlastiQParentCall_onExit(QEvent *event) {
        return QHistoryState::onExit(event);
    }

};

void PlastiQQHistoryState::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQHistoryStateWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQHistoryStateWrapper(); break;
        case 1: o = new PlastiQQHistoryStateWrapper(reinterpret_cast<QState*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQHistoryStateWrapper(QHistoryState::HistoryType(stack[1].s_int64)); break;
        case 3: o = new PlastiQQHistoryStateWrapper(QHistoryState::HistoryType(stack[1].s_int64),
                    reinterpret_cast<QState*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQHistoryState *p = new PlastiQQHistoryState();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHistoryState *p = new PlastiQQHistoryState();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQAbstractState::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHistoryState *o = sc ? Q_NULLPTR : reinterpret_cast<QHistoryState*>(object->plastiq_data());

        switch(id) {
        case 0: { QAbstractState* _r = o->defaultState();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractState"; } break;
        case 1: { QAbstractTransition* _r = o->defaultTransition();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractTransition"; } break;
        case 2: { qint64 _r = o->historyType(); // HACK for HistoryType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: o->setDefaultState(reinterpret_cast<QAbstractState*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setDefaultTransition(reinterpret_cast<QAbstractTransition*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setHistoryType(QHistoryState::HistoryType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQHistoryStateWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: if (isWrapper) ((PlastiQQHistoryStateWrapper*)o)->PlastiQParentCall_onEntry(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 8: if (isWrapper) ((PlastiQQHistoryStateWrapper*)o)->PlastiQParentCall_onExit(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQAbstractState::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QHistoryState *o = reinterpret_cast<QHistoryState*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QHistoryState::defaultStateChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "defaultStateChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QHistoryState::defaultTransitionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "defaultTransitionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QHistoryState::historyTypeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "historyTypeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHistoryState *o = reinterpret_cast<QHistoryState*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHistoryState *o = reinterpret_cast<QHistoryState*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHistoryState *o = reinterpret_cast<QHistoryState*>(object->plastiq_data());

        if(className == "QAbstractState") {
            stack[0].s_voidp = static_cast<QAbstractState*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHistoryState::~PlastiQQHistoryState() {
    QHistoryState* o = reinterpret_cast<QHistoryState*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
