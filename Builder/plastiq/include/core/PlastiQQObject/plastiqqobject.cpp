#include "plastiqmethod.h"
#include "plastiqqobject.h"

#include <QObject> 
#include <QObjectList>
#include <QEvent>
#include <QMetaObject>
#include <QString>
#include <QVariant>
#include <QThread>
#include <QChildEvent>
#include <QMetaMethod>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQObject::plastiqConstructors = {
    { "QObject()", { "QObject", "", "QObject*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QObject(QObject*)", { "QObject", "QObject*", "QObject*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQObject::plastiqMethods = {
    { "blockSignals(bool)", { "blockSignals", "bool", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "children()", { "children", "", "const QObjectList&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dumpObjectInfo()", { "dumpObjectInfo", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dumpObjectTree()", { "dumpObjectTree", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findChild()", { "findChild", "", "T", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findChild(QString)", { "findChild", "QString&", "T", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findChild(QString,enum)", { "findChild", "QString&,Qt::FindChildOptions", "T", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inherits(const char*)", { "inherits", "char*", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "installEventFilter(QObject*)", { "installEventFilter", "QObject*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWidgetType()", { "isWidgetType", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWindowType()", { "isWindowType", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "killTimer(int)", { "killTimer", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaObject()", { "metaObject", "", "const QMetaObject*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveToThread(QThread*)", { "moveToThread", "QThread*", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "objectName()", { "objectName", "", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parent()", { "parent", "", "QObject*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "property(const char*)", { "property", "char*", "QVariant", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeEventFilter(QObject*)", { "removeEventFilter", "QObject*", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setObjectName(QString)", { "setObjectName", "QString&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setParent(QObject*)", { "setParent", "QObject*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProperty(const char*,QVariant)", { "setProperty", "char*,QVariant&", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "signalsBlocked()", { "signalsBlocked", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startTimer(int)", { "startTimer", "int", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startTimer(int,enum)", { "startTimer", "int,Qt::TimerType", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "thread()", { "thread", "", "QThread*", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "staticMetaObject()", { "staticMetaObject", "", "const QMetaObject", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "tr(const char*)", { "tr", "char*", "QString", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "tr(const char*,const char*)", { "tr", "char*,char*", "QString", 29, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "tr(const char*,const char*,int)", { "tr", "char*,char*,int", "QString", 30, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "childEvent(QChildEvent*)", { "childEvent", "QChildEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "connectNotify(QMetaMethod&)", { "connectNotify", "QMetaMethod&", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "customEvent(QEvent*)", { "customEvent", "QEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "disconnectNotify(QMetaMethod&)", { "disconnectNotify", "QMetaMethod&", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "isSignalConnected(QMetaMethod&)", { "isSignalConnected", "QMetaMethod&", "bool", 35, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "receivers(const char*)", { "receivers", "char*", "int", 36, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sender()", { "sender", "", "QObject*", 37, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "senderSignalIndex()", { "senderSignalIndex", "", "int", 38, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 39, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "deleteLater()", { "deleteLater", "", "void", 40, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQObject::plastiqSignals = {
    { "destroyed()", { "destroyed", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "destroyed(QObject*)", { "destroyed", "QObject*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "objectNameChanged(QString)", { "objectNameChanged", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQObject::plastiqProperties = {
    { "objectName", { "objectName", "QString", "setObjectName", "objectName" } },
    { "objectName", { "objectName", "QString", "setObjectName", "objectName" } },

};

QHash<QByteArray, long> PlastiQQObject::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQObject::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQObject::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQObject::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QObject", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQObject::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQObjectWrapper : public QObject {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQObjectWrapper(QObject *parent = Q_NULLPTR)
         : QObject(parent),
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
        else return QObject::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QObject::event(e);
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
        else return QObject::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QObject::eventFilter(watched,event);
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
        else return QObject::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QObject::metaObject();
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
        else return QObject::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QObject::childEvent(event);
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
        else return QObject::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QObject::connectNotify(signal);
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
        else return QObject::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QObject::customEvent(event);
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
        else return QObject::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QObject::disconnectNotify(signal);
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
        else return QObject::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QObject::timerEvent(event);
    }

};

void PlastiQQObject::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQObjectWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQObjectWrapper(); break;
        case 1: o = new PlastiQQObjectWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQObject *p = new PlastiQQObject();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQObject *p = new PlastiQQObject();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 41) {
            id -= 41;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QObject *o = sc ? Q_NULLPTR : reinterpret_cast<QObject*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->blockSignals(stack[1].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { /* COPY OBJECT */
            QObjectList *_r = new QObjectList(o->children());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QObjectList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->dumpObjectInfo();
                stack[0].type = PlastiQ::Void; break;
        case 3: o->dumpObjectTree();
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQObjectWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else _r = o->event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r;
                if (isWrapper) _r = ((PlastiQQObjectWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else _r = o->eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { QObject* _r = o->findChild<QObject*>();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 7: { QObject* _r = o->findChild<QObject*>(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 8: { QObject* _r = o->findChild<QObject*>(stack[1].s_string,
                    Qt::FindChildOptions(stack[2].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 9: { bool _r = o->inherits(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->installEventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: { bool _r = o->isWidgetType();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isWindowType();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: o->killTimer(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: { QMetaObject* _r;
                if (isWrapper) _r = const_cast<QMetaObject*>(((PlastiQQObjectWrapper*)o)->PlastiQParentCall_metaObject());
                else _r = const_cast<QMetaObject*>(o->metaObject());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QMetaObject"; } break;
        case 15: o->moveToThread(reinterpret_cast<QThread*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 16: { QString _r = o->objectName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 17: { QObject* _r = o->parent();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 18: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->property(reinterpret_cast<const char*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: o->removeEventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setObjectName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setParent(reinterpret_cast<QObject*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: { bool _r = o->setProperty(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_variant);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->signalsBlocked();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { int _r = o->startTimer(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { int _r = o->startTimer(stack[1].s_int,
                    Qt::TimerType(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { QThread* _r = o->thread();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QThread"; } break;
        case 27: /* UNSUPPORTED_RETURN_VALUE o->staticMetaObject() | ret: `const QMetaObject` */ break;
        case 28: { QString _r = sc ? QObject::tr(reinterpret_cast<const char*>(stack[1].s_voidp)) : o->tr(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 29: { QString _r = sc ? QObject::tr(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp)) : o->tr(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 30: { QString _r = sc ? QObject::tr(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_int) : o->tr(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 31: if (isWrapper) ((PlastiQQObjectWrapper*)o)->PlastiQParentCall_childEvent(reinterpret_cast<QChildEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: if (isWrapper) ((PlastiQQObjectWrapper*)o)->PlastiQParentCall_connectNotify((*reinterpret_cast< QMetaMethod(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: if (isWrapper) ((PlastiQQObjectWrapper*)o)->PlastiQParentCall_customEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 34: if (isWrapper) ((PlastiQQObjectWrapper*)o)->PlastiQParentCall_disconnectNotify((*reinterpret_cast< QMetaMethod(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 36: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 37: { QObject* _r; stack[0].type = PlastiQ::Error; } break;
        case 38: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 39: if (isWrapper) ((PlastiQQObjectWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 40: o->deleteLater();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            return;
        }

        QObject *o = reinterpret_cast<QObject*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QObject::destroyed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "destroyed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QObject::destroyed,
            [=](QObject* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QObject";
                PlastiQ_activate(sender, "destroyed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QObject::objectNameChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "objectNameChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QObject *qo = reinterpret_cast<QObject*>(object->plastiq_data());
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QObject *o = reinterpret_cast<QObject*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QObject *o = reinterpret_cast<QObject*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQObject::~PlastiQQObject() {
    QObject* o = reinterpret_cast<QObject*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
