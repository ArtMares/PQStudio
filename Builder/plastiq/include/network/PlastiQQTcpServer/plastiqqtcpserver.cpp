#include "plastiqmethod.h"
#include "plastiqqtcpserver.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QTcpServer> 
#include <QString>
#include <QTcpSocket>
#include <QNetworkProxy>
#include <QHostAddress>

QHash<QByteArray, PlastiQMethod> PlastiQQTcpServer::plastiqConstructors = {
    { "QTcpServer()", { "QTcpServer", "", "QTcpServer*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTcpServer(QObject*)", { "QTcpServer", "QObject*", "QTcpServer*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTcpServer::plastiqMethods = {
    { "close()", { "close", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasPendingConnections()", { "hasPendingConnections", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isListening()", { "isListening", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "listen()", { "listen", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "listen(QHostAddress&)", { "listen", "QHostAddress&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "listen(QHostAddress&,int)", { "listen", "QHostAddress&,quint16", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxPendingConnections()", { "maxPendingConnections", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextPendingConnection()", { "nextPendingConnection", "", "QTcpSocket*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pauseAccepting()", { "pauseAccepting", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "proxy()", { "proxy", "", "QNetworkProxy", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resumeAccepting()", { "resumeAccepting", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "serverAddress()", { "serverAddress", "", "QHostAddress", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "serverError()", { "serverError", "", "QAbstractSocket::SocketError", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "serverPort()", { "serverPort", "", "quint16", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaxPendingConnections(int)", { "setMaxPendingConnections", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProxy(QNetworkProxy&)", { "setProxy", "QNetworkProxy&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketDescriptor(qintptr)", { "setSocketDescriptor", "qintptr", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "socketDescriptor()", { "socketDescriptor", "", "qintptr", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForNewConnection()", { "waitForNewConnection", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForNewConnection(int)", { "waitForNewConnection", "int", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForNewConnection(int,bool*)", { "waitForNewConnection", "int,bool*", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPendingConnection(QTcpSocket*)", { "addPendingConnection", "QTcpSocket*", "void", 22, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "incomingConnection(qintptr)", { "incomingConnection", "qintptr", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTcpServer::plastiqSignals = {
    { "acceptError(enum)", { "acceptError", "QAbstractSocket::SocketError", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "newConnection()", { "newConnection", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTcpServer::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTcpServer::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTcpServer::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTcpServer::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQTcpServer::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QTcpServer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTcpServer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTcpServerWrapper : public QTcpServer {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTcpServerWrapper(QObject *parent = Q_NULLPTR)
         : QTcpServer(parent),
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
        else return QTcpServer::hasPendingConnections();
    }

    bool PlastiQParentCall_hasPendingConnections() const {
        return QTcpServer::hasPendingConnections();
    }

    QTcpSocket* nextPendingConnection() override {
        static const QByteArray methodSignature = QByteArrayLiteral("QTcpSocket* nextPendingConnection()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QTcpSocket* _r = reinterpret_cast<QTcpSocket*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QTcpServer::nextPendingConnection();
    }

    QTcpSocket* PlastiQParentCall_nextPendingConnection() {
        return QTcpServer::nextPendingConnection();
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
        else return QTcpServer::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QTcpServer::event(e);
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
        else return QTcpServer::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QTcpServer::eventFilter(watched,event);
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
        else return QTcpServer::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QTcpServer::metaObject();
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
        else return QTcpServer::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QTcpServer::childEvent(event);
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
        else return QTcpServer::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QTcpServer::connectNotify(signal);
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
        else return QTcpServer::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QTcpServer::customEvent(event);
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
        else return QTcpServer::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QTcpServer::disconnectNotify(signal);
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
        else return QTcpServer::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTcpServer::timerEvent(event);
    }

};

void PlastiQQTcpServer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTcpServerWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTcpServerWrapper(); break;
        case 1: o = new PlastiQQTcpServerWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTcpServer *p = new PlastiQQTcpServer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTcpServer *p = new PlastiQQTcpServer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 24) {
            id -= 24;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTcpServer *o = sc ? Q_NULLPTR : reinterpret_cast<QTcpServer*>(object->plastiq_data());

        switch(id) {
        case 0: o->close();
                stack[0].type = PlastiQ::Void; break;
        case 1: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r;
                if (isWrapper) _r = ((PlastiQQTcpServerWrapper*)o)->PlastiQParentCall_hasPendingConnections();
                else _r = o->hasPendingConnections();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isListening();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->listen();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->listen((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->listen((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { int _r = o->maxPendingConnections();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { QTcpSocket* _r;
                if (isWrapper) _r = ((PlastiQQTcpServerWrapper*)o)->PlastiQParentCall_nextPendingConnection();
                else _r = o->nextPendingConnection();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTcpSocket"; } break;
        case 9: o->pauseAccepting();
                stack[0].type = PlastiQ::Void; break;
        case 10: { /* COPY OBJECT */
            QNetworkProxy *_r = new QNetworkProxy(o->proxy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkProxy";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: o->resumeAccepting();
                stack[0].type = PlastiQ::Void; break;
        case 12: { /* COPY OBJECT */
            QHostAddress *_r = new QHostAddress(o->serverAddress());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostAddress";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { qint64 _r = o->serverError(); // HACK for QAbstractSocket::SocketError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: /* UNSUPPORTED_RETURN_VALUE o->serverPort() | ret: `quint16` */ break;
        case 15: o->setMaxPendingConnections(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setProxy((*reinterpret_cast< QNetworkProxy(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: /* o->setSocketDescriptor(UNSUPPORTED_TYPE_qintptr) | ret: `bool` */ break;
        case 18: /* UNSUPPORTED_RETURN_VALUE o->socketDescriptor() | ret: `qintptr` */ break;
        case 19: { bool _r = o->waitForNewConnection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->waitForNewConnection(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->waitForNewConnection(stack[1].s_int,
                    reinterpret_cast<bool*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 23: /* o->incomingConnection(UNSUPPORTED_TYPE_qintptr) | ret: `void` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTcpServer *o = reinterpret_cast<QTcpServer*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTcpServer::acceptError,
            [=](QAbstractSocket::SocketError arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QAbstractSocket::SocketError";
                PlastiQ_activate(sender, "acceptError", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTcpServer::newConnection,
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
        QTcpServer *o = reinterpret_cast<QTcpServer*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTcpServer *o = reinterpret_cast<QTcpServer*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTcpServer *o = reinterpret_cast<QTcpServer*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTcpServer::~PlastiQQTcpServer() {
    QTcpServer* o = reinterpret_cast<QTcpServer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
