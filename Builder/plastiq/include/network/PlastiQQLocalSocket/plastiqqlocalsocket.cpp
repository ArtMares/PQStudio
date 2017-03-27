#include "plastiqmethod.h"
#include "plastiqqlocalsocket.h"

#include "core/PlastiQQIODevice/plastiqqiodevice.h"
#include <QLocalSocket> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQLocalSocket::plastiqConstructors = {
    { "QLocalSocket()", { "QLocalSocket", "", "QLocalSocket*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLocalSocket(QObject*)", { "QLocalSocket", "QObject*", "QLocalSocket*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLocalSocket::plastiqMethods = {
    { "abort()", { "abort", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToServer()", { "connectToServer", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToServer(OpenMode)", { "connectToServer", "OpenMode", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToServer(QString)", { "connectToServer", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToServer(QString,OpenMode)", { "connectToServer", "QString&,OpenMode", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "disconnectFromServer()", { "disconnectFromServer", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "LocalSocketError", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flush()", { "flush", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fullServerName()", { "fullServerName", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readBufferSize()", { "readBufferSize", "", "qint64", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "serverName()", { "serverName", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadBufferSize(long)", { "setReadBufferSize", "qint64", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setServerName(QString)", { "setServerName", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketDescriptor(qintptr)", { "setSocketDescriptor", "qintptr", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketDescriptor(qintptr,enum)", { "setSocketDescriptor", "qintptr,LocalSocketState", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketDescriptor(qintptr,enum,OpenMode)", { "setSocketDescriptor", "qintptr,LocalSocketState,OpenMode", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "socketDescriptor()", { "socketDescriptor", "", "qintptr", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "LocalSocketState", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForConnected()", { "waitForConnected", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForConnected(int)", { "waitForConnected", "int", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForDisconnected()", { "waitForDisconnected", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForDisconnected(int)", { "waitForDisconnected", "int", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readData(char*,long)", { "readData", "char*,qint64", "qint64", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "writeData(const char*,long)", { "writeData", "char*,qint64", "qint64", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLocalSocket::plastiqSignals = {
    { "connected()", { "connected", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "disconnected()", { "disconnected", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QLocalSocket::LocalSocketError", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QLocalSocket::LocalSocketState", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQLocalSocket::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLocalSocket::plastiqConstants = {

    /* QLocalSocket::LocalSocketError */
   { "ConnectionRefusedError", QLocalSocket::ConnectionRefusedError },
   { "PeerClosedError", QLocalSocket::PeerClosedError },
   { "ServerNotFoundError", QLocalSocket::ServerNotFoundError },
   { "SocketAccessError", QLocalSocket::SocketAccessError },
   { "SocketResourceError", QLocalSocket::SocketResourceError },
   { "SocketTimeoutError", QLocalSocket::SocketTimeoutError },
   { "DatagramTooLargeError", QLocalSocket::DatagramTooLargeError },
   { "ConnectionError", QLocalSocket::ConnectionError },
   { "UnsupportedSocketOperationError", QLocalSocket::UnsupportedSocketOperationError },
   { "UnknownSocketError", QLocalSocket::UnknownSocketError },
   { "OperationError", QLocalSocket::OperationError },

    /* QLocalSocket::LocalSocketState */
   { "UnconnectedState", QLocalSocket::UnconnectedState },
   { "ConnectingState", QLocalSocket::ConnectingState },
   { "ConnectedState", QLocalSocket::ConnectedState },
   { "ClosingState", QLocalSocket::ClosingState },

};

QVector<PlastiQMetaObject*> PlastiQQLocalSocket::plastiqInherits = { &PlastiQQIODevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLocalSocket::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQLocalSocket::plastiq_static_metaObject = {
    { &PlastiQQIODevice::plastiq_static_metaObject, &plastiqInherits, "QLocalSocket", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLocalSocket::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQLocalSocketWrapper : public QLocalSocket {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQLocalSocketWrapper(QObject *parent = Q_NULLPTR)
         : QLocalSocket(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    qint64 readData(char *data, qint64 c) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readData(char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(data);
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = c;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::readData(data,c);
    }

    qint64 PlastiQParentCall_readData(char *data, qint64 c) {
        return QLocalSocket::readData(data,c);
    }

    qint64 writeData(const char *data, qint64 c) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 writeData(const char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<char*>(data));
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = c;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::writeData(data,c);
    }

    qint64 PlastiQParentCall_writeData(const char *data, qint64 c) {
        return QLocalSocket::writeData(data,c);
    }

    bool atEnd() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool atEnd()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::atEnd();
    }

    bool PlastiQParentCall_atEnd() const {
        return QLocalSocket::atEnd();
    }

    qint64 bytesAvailable() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 bytesAvailable()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::bytesAvailable();
    }

    qint64 PlastiQParentCall_bytesAvailable() const {
        return QLocalSocket::bytesAvailable();
    }

    qint64 bytesToWrite() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 bytesToWrite()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::bytesToWrite();
    }

    qint64 PlastiQParentCall_bytesToWrite() const {
        return QLocalSocket::bytesToWrite();
    }

    bool canReadLine() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool canReadLine()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::canReadLine();
    }

    bool PlastiQParentCall_canReadLine() const {
        return QLocalSocket::canReadLine();
    }

    void close() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void close()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLocalSocket::close();
    }

    void PlastiQParentCall_close() {
        return QLocalSocket::close();
    }

    bool isSequential() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isSequential()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::isSequential();
    }

    bool PlastiQParentCall_isSequential() const {
        return QLocalSocket::isSequential();
    }

    bool open(OpenMode mode) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool open(OpenMode)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = mode;
            stack[1].name = QByteArrayLiteral("OpenMode");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::open(mode);
    }

    bool PlastiQParentCall_open(OpenMode mode) {
        return QLocalSocket::open(mode);
    }

    qint64 pos() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 pos()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::pos();
    }

    qint64 PlastiQParentCall_pos() const {
        return QLocalSocket::pos();
    }

    bool reset() override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool reset()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::reset();
    }

    bool PlastiQParentCall_reset() {
        return QLocalSocket::reset();
    }

    bool seek(qint64 pos) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool seek(qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_long = pos;
            stack[1].name = QByteArrayLiteral("qint64");
            stack[1].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::seek(pos);
    }

    bool PlastiQParentCall_seek(qint64 pos) {
        return QLocalSocket::seek(pos);
    }

    qint64 size() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 size()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::size();
    }

    qint64 PlastiQParentCall_size() const {
        return QLocalSocket::size();
    }

    bool waitForBytesWritten(int msecs) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool waitForBytesWritten(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = msecs;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::waitForBytesWritten(msecs);
    }

    bool PlastiQParentCall_waitForBytesWritten(int msecs) {
        return QLocalSocket::waitForBytesWritten(msecs);
    }

    bool waitForReadyRead(int msecs) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool waitForReadyRead(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = msecs;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::waitForReadyRead(msecs);
    }

    bool PlastiQParentCall_waitForReadyRead(int msecs) {
        return QLocalSocket::waitForReadyRead(msecs);
    }

    qint64 readLineData(char *data, qint64 maxSize) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readLineData(char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(data);
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = maxSize;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QLocalSocket::readLineData(data,maxSize);
    }

    qint64 PlastiQParentCall_readLineData(char *data, qint64 maxSize) {
        return QLocalSocket::readLineData(data,maxSize);
    }

};

void PlastiQQLocalSocket::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQLocalSocketWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQLocalSocketWrapper(); break;
        case 1: o = new PlastiQQLocalSocketWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQLocalSocket *p = new PlastiQQLocalSocket();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLocalSocket *p = new PlastiQQLocalSocket();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLocalSocket *o = sc ? Q_NULLPTR : reinterpret_cast<QLocalSocket*>(object->plastiq_data());

        switch(id) {
        case 0: o->abort();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->connectToServer();
                stack[0].type = PlastiQ::Void; break;
        case 2: /* o->connectToServer(UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 3: o->connectToServer(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 4: /* o->connectToServer(stack[1].s_string,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 5: o->disconnectFromServer();
                stack[0].type = PlastiQ::Void; break;
        case 6: { qint64 _r = o->error(); // HACK for LocalSocketError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { bool _r = o->flush();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { QString _r = o->fullServerName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { long _r = o->readBufferSize();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 11: { QString _r = o->serverName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: o->setReadBufferSize(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setServerName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: /* o->setSocketDescriptor(UNSUPPORTED_TYPE_qintptr) | ret: `bool` */ break;
        case 15: /* o->setSocketDescriptor(UNSUPPORTED_TYPE_qintptr,
                    QLocalSocket::LocalSocketState(stack[2].s_int64)) | ret: `bool` */ break;
        case 16: /* o->setSocketDescriptor(UNSUPPORTED_TYPE_qintptr,
                    QLocalSocket::LocalSocketState(stack[2].s_int64),
                    UNSUPPORTED_TYPE_OpenMode) | ret: `bool` */ break;
        case 17: /* UNSUPPORTED_RETURN_VALUE o->socketDescriptor() | ret: `qintptr` */ break;
        case 18: { qint64 _r = o->state(); // HACK for LocalSocketState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { bool _r = o->waitForConnected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->waitForConnected(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->waitForDisconnected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = o->waitForDisconnected(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { long _r;
                if (isWrapper) _r = ((PlastiQQLocalSocketWrapper*)o)->PlastiQParentCall_readData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 24: { long _r;
                if (isWrapper) _r = ((PlastiQQLocalSocketWrapper*)o)->PlastiQParentCall_writeData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLocalSocket *o = reinterpret_cast<QLocalSocket*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QLocalSocket::*)()>(&QLocalSocket::connected),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "connected", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QLocalSocket::disconnected,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "disconnected", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QLocalSocket::*)(QLocalSocket::LocalSocketError)>(&QLocalSocket::error),
            [=](QLocalSocket::LocalSocketError arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QLocalSocket::LocalSocketError";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QLocalSocket::stateChanged,
            [=](QLocalSocket::LocalSocketState arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QLocalSocket::LocalSocketState";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLocalSocket *o = reinterpret_cast<QLocalSocket*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLocalSocket *o = reinterpret_cast<QLocalSocket*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLocalSocket *o = reinterpret_cast<QLocalSocket*>(object->plastiq_data());

        if(className == "QIODevice") {
            stack[0].s_voidp = static_cast<QIODevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLocalSocket::~PlastiQQLocalSocket() {
    QLocalSocket* o = reinterpret_cast<QLocalSocket*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
