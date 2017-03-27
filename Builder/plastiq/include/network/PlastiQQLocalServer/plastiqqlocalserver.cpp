#include "plastiqmethod.h"
#include "plastiqqlocalserver.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QLocalServer> 
#include <QString>
#include <QLocalSocket>

QHash<QByteArray, PlastiQMethod> PlastiQQLocalServer::plastiqConstructors = {
    { "QLocalServer()", { "QLocalServer", "", "QLocalServer*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLocalServer(QObject*)", { "QLocalServer", "QObject*", "QLocalServer*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLocalServer::plastiqMethods = {
    { "close()", { "close", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fullServerName()", { "fullServerName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasPendingConnections()", { "hasPendingConnections", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isListening()", { "isListening", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "listen(QString)", { "listen", "QString&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "listen(qintptr)", { "listen", "qintptr", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxPendingConnections()", { "maxPendingConnections", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextPendingConnection()", { "nextPendingConnection", "", "QLocalSocket*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "serverError()", { "serverError", "", "QAbstractSocket::SocketError", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "serverName()", { "serverName", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaxPendingConnections(int)", { "setMaxPendingConnections", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketOptions(enum)", { "setSocketOptions", "SocketOptions", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "socketOptions()", { "socketOptions", "", "SocketOptions", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForNewConnection()", { "waitForNewConnection", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForNewConnection(int)", { "waitForNewConnection", "int", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForNewConnection(int,bool*)", { "waitForNewConnection", "int,bool*", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeServer(QString)", { "removeServer", "QString&", "bool", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "incomingConnection(quintptr)", { "incomingConnection", "quintptr", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLocalServer::plastiqSignals = {
    { "newConnection()", { "newConnection", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQLocalServer::plastiqProperties = {
    { "socketOptions", { "socketOptions", "long", "setSocketOptions", "socketOptions" } },

};

QHash<QByteArray, long> PlastiQQLocalServer::plastiqConstants = {

    /* QLocalServer::SocketOption */
   { "NoOptions", QLocalServer::NoOptions },
   { "UserAccessOption", QLocalServer::UserAccessOption },
   { "GroupAccessOption", QLocalServer::GroupAccessOption },
   { "OtherAccessOption", QLocalServer::OtherAccessOption },
   { "WorldAccessOption", QLocalServer::WorldAccessOption },

};

QVector<PlastiQMetaObject*> PlastiQQLocalServer::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLocalServer::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQLocalServer::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QLocalServer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLocalServer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQLocalServerWrapper : public QLocalServer {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQLocalServerWrapper(QObject *parent = Q_NULLPTR)
         : QLocalServer(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool hasPendingConnections() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hasPendingConnections()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalServer::hasPendingConnections();
    }

    bool PlastiQParentCall_hasPendingConnections() const {
        return QLocalServer::hasPendingConnections();
    }

    QLocalSocket* nextPendingConnection() override {
        static const QByteArray methodSignature = QByteArrayLiteral("QLocalSocket* nextPendingConnection()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QLocalSocket* _r = reinterpret_cast<QLocalSocket*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QLocalServer::nextPendingConnection();
    }

    QLocalSocket* PlastiQParentCall_nextPendingConnection() {
        return QLocalServer::nextPendingConnection();
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
        else return QLocalServer::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QLocalServer::event(e);
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
        else return QLocalServer::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QLocalServer::eventFilter(watched,event);
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
        else return QLocalServer::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QLocalServer::metaObject();
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
        else return QLocalServer::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QLocalServer::childEvent(event);
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
        else return QLocalServer::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QLocalServer::connectNotify(signal);
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
        else return QLocalServer::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QLocalServer::customEvent(event);
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
        else return QLocalServer::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QLocalServer::disconnectNotify(signal);
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
        else return QLocalServer::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QLocalServer::timerEvent(event);
    }

};

void PlastiQQLocalServer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQLocalServerWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQLocalServerWrapper(); break;
        case 1: o = new PlastiQQLocalServerWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQLocalServer *p = new PlastiQQLocalServer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLocalServer *p = new PlastiQQLocalServer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 19) {
            id -= 19;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLocalServer *o = sc ? Q_NULLPTR : reinterpret_cast<QLocalServer*>(object->plastiq_data());

        switch(id) {
        case 0: o->close();
                stack[0].type = PlastiQ::Void; break;
        case 1: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->fullServerName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQLocalServerWrapper*)o)->PlastiQParentCall_hasPendingConnections();
                else _r = o->hasPendingConnections();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isListening();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->listen(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: /* o->listen(UNSUPPORTED_TYPE_qintptr) | ret: `bool` */ break;
        case 7: { int _r = o->maxPendingConnections();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { QLocalSocket* _r;
                if (isWrapper) _r = ((PlastiQQLocalServerWrapper*)o)->PlastiQParentCall_nextPendingConnection();
                else _r = o->nextPendingConnection();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QLocalSocket"; } break;
        case 9: { qint64 _r = o->serverError(); // HACK for QAbstractSocket::SocketError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { QString _r = o->serverName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: o->setMaxPendingConnections(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setSocketOptions(QLocalServer::SocketOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: { qint64 _r = o->socketOptions(); // HACK for SocketOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { bool _r = o->waitForNewConnection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->waitForNewConnection(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->waitForNewConnection(stack[1].s_int,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = sc ? QLocalServer::removeServer(stack[1].s_string) : o->removeServer(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: /* o->incomingConnection(UNSUPPORTED_TYPE_quintptr) | ret: `void` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLocalServer *o = reinterpret_cast<QLocalServer*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QLocalServer::newConnection,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "newConnection", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLocalServer *o = reinterpret_cast<QLocalServer*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLocalServer *o = reinterpret_cast<QLocalServer*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLocalServer *o = reinterpret_cast<QLocalServer*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLocalServer::~PlastiQQLocalServer() {
    QLocalServer* o = reinterpret_cast<QLocalServer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
