#include "plastiqmethod.h"
#include "plastiqqwineventnotifier.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QWinEventNotifier> 
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQWinEventNotifier::plastiqConstructors = {
    { "QWinEventNotifier()", { "QWinEventNotifier", "", "QWinEventNotifier*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWinEventNotifier(QObject*)", { "QWinEventNotifier", "QObject*", "QWinEventNotifier*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWinEventNotifier(HANDLE)", { "QWinEventNotifier", "HANDLE", "QWinEventNotifier*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWinEventNotifier(HANDLE,QObject*)", { "QWinEventNotifier", "HANDLE,QObject*", "QWinEventNotifier*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinEventNotifier::plastiqMethods = {
    { "handle()", { "handle", "", "HANDLE", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHandle(HANDLE)", { "setHandle", "HANDLE", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinEventNotifier::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWinEventNotifier::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWinEventNotifier::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWinEventNotifier::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWinEventNotifier::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWinEventNotifier::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWinEventNotifier", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWinEventNotifier::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQWinEventNotifierWrapper : public QWinEventNotifier {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQWinEventNotifierWrapper(QObject *parent = Q_NULLPTR)
         : QWinEventNotifier(parent),
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
        else return QWinEventNotifier::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QWinEventNotifier::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWinEventNotifier::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QWinEventNotifier::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QWinEventNotifier::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QWinEventNotifier::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWinEventNotifier::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QWinEventNotifier::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWinEventNotifier::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QWinEventNotifier::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWinEventNotifier::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QWinEventNotifier::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWinEventNotifier::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QWinEventNotifier::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWinEventNotifier::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QWinEventNotifier::timerEvent(event);
    }

};

void PlastiQQWinEventNotifier::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQWinEventNotifierWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQWinEventNotifierWrapper(); break;
        case 1: o = new PlastiQQWinEventNotifierWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        /*case 2: o = new PlastiQQWinEventNotifierWrapper(UNSUPPORTED_TYPE_HANDLE); break;*/
        /*case 3: o = new PlastiQQWinEventNotifierWrapper(UNSUPPORTED_TYPE_HANDLE,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;*/

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQWinEventNotifier *p = new PlastiQQWinEventNotifier();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWinEventNotifier *p = new PlastiQQWinEventNotifier();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWinEventNotifier *o = sc ? Q_NULLPTR : reinterpret_cast<QWinEventNotifier*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->handle() | ret: `HANDLE` */ break;
        case 1: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: /* o->setHandle(UNSUPPORTED_TYPE_HANDLE) | ret: `void` */ break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQWinEventNotifierWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWinEventNotifier *o = reinterpret_cast<QWinEventNotifier*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWinEventNotifier *o = reinterpret_cast<QWinEventNotifier*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWinEventNotifier *o = reinterpret_cast<QWinEventNotifier*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWinEventNotifier *o = reinterpret_cast<QWinEventNotifier*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWinEventNotifier::~PlastiQQWinEventNotifier() {
    QWinEventNotifier* o = reinterpret_cast<QWinEventNotifier*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
