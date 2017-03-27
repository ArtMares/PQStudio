#include "plastiqmethod.h"
#include "plastiqqaccessibleevent.h"

#include <QAccessibleEvent> 
#include <QAccessibleInterface>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleEvent::plastiqConstructors = {
    { "QAccessibleEvent(QObject*,enum)", { "QAccessibleEvent", "QObject*,QAccessible::Event", "QAccessibleEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleEvent(QAccessibleInterface*,enum)", { "QAccessibleEvent", "QAccessibleInterface*,QAccessible::Event", "QAccessibleEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleEvent::plastiqMethods = {
    { "accessibleInterface()", { "accessibleInterface", "", "QAccessibleInterface*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "child()", { "child", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "object()", { "object", "", "QObject*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChild(int)", { "setChild", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "QAccessible::Event", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleEvent::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAccessibleEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleEvent::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAccessibleEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAccessibleEventWrapper : public QAccessibleEvent {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQAccessibleEventWrapper(QObject *object, QAccessible::Event type)
         : QAccessibleEvent(object,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQAccessibleEventWrapper(QAccessibleInterface *interface, QAccessible::Event type)
         : QAccessibleEvent(interface,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QAccessibleInterface* accessibleInterface() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QAccessibleInterface* accessibleInterface()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QAccessibleInterface* _r = reinterpret_cast<QAccessibleInterface*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAccessibleEvent::accessibleInterface();
    }

    QAccessibleInterface* PlastiQParentCall_accessibleInterface() const {
        return QAccessibleEvent::accessibleInterface();
    }

};

void PlastiQQAccessibleEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAccessibleEventWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQAccessibleEventWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QAccessible::Event(stack[2].s_int64)); break;
        case 1: o = new PlastiQQAccessibleEventWrapper(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    QAccessible::Event(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAccessibleEvent *p = new PlastiQQAccessibleEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleEvent *p = new PlastiQQAccessibleEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { QAccessibleInterface* _r;
                if (isWrapper) _r = ((PlastiQQAccessibleEventWrapper*)o)->PlastiQParentCall_accessibleInterface();
                else _r = o->accessibleInterface();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleInterface"; } break;
        case 1: { int _r = o->child();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QObject* _r = o->object();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 3: o->setChild(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: { qint64 _r = o->type(); // HACK for QAccessible::Event 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QAccessibleEvent *o = reinterpret_cast<QAccessibleEvent*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAccessibleEvent::~PlastiQQAccessibleEvent() {
    QAccessibleEvent* o = reinterpret_cast<QAccessibleEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
