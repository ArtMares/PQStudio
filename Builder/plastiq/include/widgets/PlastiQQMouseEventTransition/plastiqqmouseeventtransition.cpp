#include "plastiqmethod.h"
#include "plastiqqmouseeventtransition.h"

#include "core/PlastiQQEventTransition/plastiqqeventtransition.h"
#include <QMouseEventTransition> 
#include <QPainterPath>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQMouseEventTransition::plastiqConstructors = {
    { "QMouseEventTransition()", { "QMouseEventTransition", "", "QMouseEventTransition*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMouseEventTransition(QState*)", { "QMouseEventTransition", "QState*", "QMouseEventTransition*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMouseEventTransition(QObject*,enum,enum)", { "QMouseEventTransition", "QObject*,QEvent::Type,Qt::MouseButton", "QMouseEventTransition*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMouseEventTransition(QObject*,enum,enum,QState*)", { "QMouseEventTransition", "QObject*,QEvent::Type,Qt::MouseButton,QState*", "QMouseEventTransition*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMouseEventTransition::plastiqMethods = {
    { "button()", { "button", "", "Qt::MouseButton", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hitTestPath()", { "hitTestPath", "", "QPainterPath", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modifierMask()", { "modifierMask", "", "Qt::KeyboardModifiers", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setButton(enum)", { "setButton", "Qt::MouseButton", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHitTestPath(QPainterPath&)", { "setHitTestPath", "QPainterPath&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModifierMask(enum)", { "setModifierMask", "Qt::KeyboardModifiers", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eventTest(QEvent*)", { "eventTest", "QEvent*", "bool", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "onTransition(QEvent*)", { "onTransition", "QEvent*", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMouseEventTransition::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMouseEventTransition::plastiqProperties = {
    { "button", { "button", "long", "setButton", "button" } },
    { "modifierMask", { "modifierMask", "long", "setModifierMask", "modifierMask" } },

};

QHash<QByteArray, long> PlastiQQMouseEventTransition::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMouseEventTransition::plastiqInherits = { &PlastiQQEventTransition::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMouseEventTransition::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMouseEventTransition::plastiq_static_metaObject = {
    { &PlastiQQEventTransition::plastiq_static_metaObject, &plastiqInherits, "QMouseEventTransition", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMouseEventTransition::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMouseEventTransitionWrapper : public QMouseEventTransition {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQMouseEventTransitionWrapper(QState *sourceState = Q_NULLPTR)
         : QMouseEventTransition(sourceState),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQMouseEventTransitionWrapper(QObject *object, QEvent::Type type, Qt::MouseButton button, QState *sourceState = Q_NULLPTR)
         : QMouseEventTransition(object,type,button,sourceState),
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
        else return QMouseEventTransition::eventTest(event);
    }

    bool PlastiQParentCall_eventTest(QEvent *event) {
        return QMouseEventTransition::eventTest(event);
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
        else return QMouseEventTransition::onTransition(event);
    }

    void PlastiQParentCall_onTransition(QEvent *event) {
        return QMouseEventTransition::onTransition(event);
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
        else return QMouseEventTransition::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QMouseEventTransition::event(e);
    }

};

void PlastiQQMouseEventTransition::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMouseEventTransitionWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQMouseEventTransitionWrapper(); break;
        case 1: o = new PlastiQQMouseEventTransitionWrapper(reinterpret_cast<QState*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQMouseEventTransitionWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QEvent::Type(stack[2].s_int64),
                    Qt::MouseButton(stack[3].s_int64)); break;
        case 3: o = new PlastiQQMouseEventTransitionWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QEvent::Type(stack[2].s_int64),
                    Qt::MouseButton(stack[3].s_int64),
                    reinterpret_cast<QState*>(stack[4].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMouseEventTransition *p = new PlastiQQMouseEventTransition();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMouseEventTransition *p = new PlastiQQMouseEventTransition();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQEventTransition::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMouseEventTransition *o = sc ? Q_NULLPTR : reinterpret_cast<QMouseEventTransition*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->button(); // HACK for Qt::MouseButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->hitTestPath());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->modifierMask(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: o->setButton(Qt::MouseButton(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setHitTestPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setModifierMask(Qt::KeyboardModifiers(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQMouseEventTransitionWrapper*)o)->PlastiQParentCall_eventTest(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: if (isWrapper) ((PlastiQQMouseEventTransitionWrapper*)o)->PlastiQParentCall_onTransition(reinterpret_cast<QEvent*>(stack[1].s_voidp));
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
        QMouseEventTransition *o = reinterpret_cast<QMouseEventTransition*>(object->plastiq_data());

        if(className == "QEventTransition") {
            stack[0].s_voidp = static_cast<QEventTransition*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMouseEventTransition::~PlastiQQMouseEventTransition() {
    QMouseEventTransition* o = reinterpret_cast<QMouseEventTransition*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
