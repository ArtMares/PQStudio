#include "plastiqmethod.h"
#include "plastiqqkeyeventtransition.h"

#include "core/PlastiQQEventTransition/plastiqqeventtransition.h"
#include <QKeyEventTransition> 
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQKeyEventTransition::plastiqConstructors = {
    { "QKeyEventTransition()", { "QKeyEventTransition", "", "QKeyEventTransition*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEventTransition(QState*)", { "QKeyEventTransition", "QState*", "QKeyEventTransition*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEventTransition(QObject*,enum,int)", { "QKeyEventTransition", "QObject*,QEvent::Type,int", "QKeyEventTransition*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEventTransition(QObject*,enum,int,QState*)", { "QKeyEventTransition", "QObject*,QEvent::Type,int,QState*", "QKeyEventTransition*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQKeyEventTransition::plastiqMethods = {
    { "key()", { "key", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modifierMask()", { "modifierMask", "", "Qt::KeyboardModifiers", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKey(int)", { "setKey", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModifierMask(enum)", { "setModifierMask", "Qt::KeyboardModifiers", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eventTest(QEvent*)", { "eventTest", "QEvent*", "bool", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onTransition(QEvent*)", { "onTransition", "QEvent*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQKeyEventTransition::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQKeyEventTransition::plastiqProperties = {
    { "key", { "key", "int", "setKey", "key" } },
    { "modifierMask", { "modifierMask", "long", "setModifierMask", "modifierMask" } },

};

QHash<QByteArray, long> PlastiQQKeyEventTransition::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQKeyEventTransition::plastiqInherits = { &PlastiQQEventTransition::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQKeyEventTransition::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQKeyEventTransition::plastiq_static_metaObject = {
    { &PlastiQQEventTransition::plastiq_static_metaObject, &plastiqInherits, "QKeyEventTransition", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQKeyEventTransition::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQKeyEventTransitionWrapper : public QKeyEventTransition {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQKeyEventTransitionWrapper(QState *sourceState = Q_NULLPTR)
         : QKeyEventTransition(sourceState),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQKeyEventTransitionWrapper(QObject *object, QEvent::Type type, int key, QState *sourceState = Q_NULLPTR)
         : QKeyEventTransition(object,type,key,sourceState),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QKeyEventTransition::eventTest(event);
    }

    bool PlastiQParentCall_eventTest(QEvent *event) {
        return QKeyEventTransition::eventTest(event);
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
        else return QKeyEventTransition::onTransition(event);
    }

    void PlastiQParentCall_onTransition(QEvent *event) {
        return QKeyEventTransition::onTransition(event);
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
        else return QKeyEventTransition::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QKeyEventTransition::event(e);
    }

};

void PlastiQQKeyEventTransition::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQKeyEventTransitionWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQKeyEventTransitionWrapper(); break;
        case 1: o = new PlastiQQKeyEventTransitionWrapper(reinterpret_cast<QState*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQKeyEventTransitionWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QEvent::Type(stack[2].s_int64),
                    stack[3].s_int); break;
        case 3: o = new PlastiQQKeyEventTransitionWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QEvent::Type(stack[2].s_int64),
                    stack[3].s_int,
                    reinterpret_cast<QState*>(stack[4].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQKeyEventTransition *p = new PlastiQQKeyEventTransition();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQKeyEventTransition *p = new PlastiQQKeyEventTransition();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQEventTransition::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QKeyEventTransition *o = sc ? Q_NULLPTR : reinterpret_cast<QKeyEventTransition*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->key();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { qint64 _r = o->modifierMask(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: o->setKey(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setModifierMask(Qt::KeyboardModifiers(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQKeyEventTransitionWrapper*)o)->PlastiQParentCall_eventTest(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: if (isWrapper) ((PlastiQQKeyEventTransitionWrapper*)o)->PlastiQParentCall_onTransition(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
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
        QKeyEventTransition *o = reinterpret_cast<QKeyEventTransition*>(object->plastiq_data());

        if(className == "QEventTransition") {
            stack[0].s_voidp = static_cast<QEventTransition*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQKeyEventTransition::~PlastiQQKeyEventTransition() {
    QKeyEventTransition* o = reinterpret_cast<QKeyEventTransition*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
