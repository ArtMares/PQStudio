#include "plastiqmethod.h"
#include "plastiqqabstractsocket.h"

#include "core/PlastiQQIODevice/plastiqqiodevice.h"
#include <QAbstractSocket> 
#include <QString>
#include <QHostAddress>
#include <QNetworkProxy>
#include <QVariant>
#include <QAuthenticator>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSocket::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSocket::plastiqMethods = {
    { "abort()", { "abort", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bind(QHostAddress&)", { "bind", "QHostAddress&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bind(QHostAddress&,int)", { "bind", "QHostAddress&,quint16", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bind(QHostAddress&,int,enum)", { "bind", "QHostAddress&,quint16,BindMode", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bind()", { "bind", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bind(int)", { "bind", "quint16", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bind(int,enum)", { "bind", "quint16,BindMode", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHost(QString,int)", { "connectToHost", "QString&,quint16", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHost(QString,int,OpenMode)", { "connectToHost", "QString&,quint16,OpenMode", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHost(QString,int,OpenMode,enum)", { "connectToHost", "QString&,quint16,OpenMode,NetworkLayerProtocol", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHost(QHostAddress&,int)", { "connectToHost", "QHostAddress&,quint16", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHost(QHostAddress&,int,OpenMode)", { "connectToHost", "QHostAddress&,quint16,OpenMode", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "disconnectFromHost()", { "disconnectFromHost", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "SocketError", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flush()", { "flush", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localAddress()", { "localAddress", "", "QHostAddress", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localPort()", { "localPort", "", "quint16", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pauseMode()", { "pauseMode", "", "PauseModes", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerAddress()", { "peerAddress", "", "QHostAddress", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerName()", { "peerName", "", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerPort()", { "peerPort", "", "quint16", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "proxy()", { "proxy", "", "QNetworkProxy", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readBufferSize()", { "readBufferSize", "", "qint64", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resume()", { "resume", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPauseMode(enum)", { "setPauseMode", "PauseModes", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProxy(QNetworkProxy&)", { "setProxy", "QNetworkProxy&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadBufferSize(long)", { "setReadBufferSize", "qint64", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketDescriptor(qintptr)", { "setSocketDescriptor", "qintptr", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketDescriptor(qintptr,enum)", { "setSocketDescriptor", "qintptr,SocketState", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketDescriptor(qintptr,enum,OpenMode)", { "setSocketDescriptor", "qintptr,SocketState,OpenMode", "bool", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSocketOption(enum,QVariant)", { "setSocketOption", "QAbstractSocket::SocketOption,QVariant&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "socketDescriptor()", { "socketDescriptor", "", "qintptr", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "socketOption(enum)", { "socketOption", "QAbstractSocket::SocketOption", "QVariant", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "socketType()", { "socketType", "", "SocketType", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "SocketState", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForConnected()", { "waitForConnected", "", "bool", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForConnected(int)", { "waitForConnected", "int", "bool", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForDisconnected()", { "waitForDisconnected", "", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForDisconnected(int)", { "waitForDisconnected", "int", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalAddress(QHostAddress&)", { "setLocalAddress", "QHostAddress&", "void", 40, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setLocalPort(int)", { "setLocalPort", "quint16", "void", 41, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setPeerAddress(QHostAddress&)", { "setPeerAddress", "QHostAddress&", "void", 42, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setPeerName(QString)", { "setPeerName", "QString&", "void", 43, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setPeerPort(int)", { "setPeerPort", "quint16", "void", 44, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setSocketError(enum)", { "setSocketError", "SocketError", "void", 45, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setSocketState(enum)", { "setSocketState", "SocketState", "void", 46, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "readData(char*,long)", { "readData", "char*,qint64", "qint64", 47, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "readLineData(char*,long)", { "readLineData", "char*,qint64", "qint64", 48, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "writeData(const char*,long)", { "writeData", "char*,qint64", "qint64", 49, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSocket::plastiqSignals = {
    { "connected()", { "connected", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "disconnected()", { "disconnected", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QAbstractSocket::SocketError", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hostFound()", { "hostFound", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "proxyAuthenticationRequired(QNetworkProxy&,QAuthenticator*)", { "proxyAuthenticationRequired", "QNetworkProxy&,QAuthenticator*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QAbstractSocket::SocketState", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractSocket::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractSocket::plastiqConstants = {

    /* QAbstractSocket::BindFlag */
   { "DefaultForPlatform", QAbstractSocket::DefaultForPlatform },
   { "ShareAddress", QAbstractSocket::ShareAddress },
   { "DontShareAddress", QAbstractSocket::DontShareAddress },
   { "ReuseAddressHint", QAbstractSocket::ReuseAddressHint },

    /* QAbstractSocket::NetworkLayerProtocol */
   { "IPv4Protocol", QAbstractSocket::IPv4Protocol },
   { "IPv6Protocol", QAbstractSocket::IPv6Protocol },
   { "AnyIPProtocol", QAbstractSocket::AnyIPProtocol },
   { "UnknownNetworkLayerProtocol", QAbstractSocket::UnknownNetworkLayerProtocol },

    /* QAbstractSocket::PauseMode */
   { "PauseNever", QAbstractSocket::PauseNever },
   { "PauseOnSslErrors", QAbstractSocket::PauseOnSslErrors },

    /* QAbstractSocket::SocketError */
   { "ConnectionRefusedError", QAbstractSocket::ConnectionRefusedError },
   { "RemoteHostClosedError", QAbstractSocket::RemoteHostClosedError },
   { "HostNotFoundError", QAbstractSocket::HostNotFoundError },
   { "SocketAccessError", QAbstractSocket::SocketAccessError },
   { "SocketResourceError", QAbstractSocket::SocketResourceError },
   { "SocketTimeoutError", QAbstractSocket::SocketTimeoutError },
   { "DatagramTooLargeError", QAbstractSocket::DatagramTooLargeError },
   { "NetworkError", QAbstractSocket::NetworkError },
   { "AddressInUseError", QAbstractSocket::AddressInUseError },
   { "SocketAddressNotAvailableError", QAbstractSocket::SocketAddressNotAvailableError },
   { "UnsupportedSocketOperationError", QAbstractSocket::UnsupportedSocketOperationError },
   { "UnfinishedSocketOperationError", QAbstractSocket::UnfinishedSocketOperationError },
   { "ProxyAuthenticationRequiredError", QAbstractSocket::ProxyAuthenticationRequiredError },
   { "SslHandshakeFailedError", QAbstractSocket::SslHandshakeFailedError },
   { "ProxyConnectionRefusedError", QAbstractSocket::ProxyConnectionRefusedError },
   { "ProxyConnectionClosedError", QAbstractSocket::ProxyConnectionClosedError },
   { "ProxyConnectionTimeoutError", QAbstractSocket::ProxyConnectionTimeoutError },
   { "ProxyNotFoundError", QAbstractSocket::ProxyNotFoundError },
   { "ProxyProtocolError", QAbstractSocket::ProxyProtocolError },
   { "OperationError", QAbstractSocket::OperationError },
   { "SslInternalError", QAbstractSocket::SslInternalError },
   { "SslInvalidUserDataError", QAbstractSocket::SslInvalidUserDataError },
   { "TemporaryError", QAbstractSocket::TemporaryError },
   { "UnknownSocketError", QAbstractSocket::UnknownSocketError },

    /* QAbstractSocket::SocketOption */
   { "LowDelayOption", QAbstractSocket::LowDelayOption },
   { "KeepAliveOption", QAbstractSocket::KeepAliveOption },
   { "MulticastTtlOption", QAbstractSocket::MulticastTtlOption },
   { "MulticastLoopbackOption", QAbstractSocket::MulticastLoopbackOption },
   { "TypeOfServiceOption", QAbstractSocket::TypeOfServiceOption },
   { "SendBufferSizeSocketOption", QAbstractSocket::SendBufferSizeSocketOption },
   { "ReceiveBufferSizeSocketOption", QAbstractSocket::ReceiveBufferSizeSocketOption },

    /* QAbstractSocket::SocketState */
   { "UnconnectedState", QAbstractSocket::UnconnectedState },
   { "HostLookupState", QAbstractSocket::HostLookupState },
   { "ConnectingState", QAbstractSocket::ConnectingState },
   { "ConnectedState", QAbstractSocket::ConnectedState },
   { "BoundState", QAbstractSocket::BoundState },
   { "ListeningState", QAbstractSocket::ListeningState },
   { "ClosingState", QAbstractSocket::ClosingState },

    /* QAbstractSocket::SocketType */
   { "TcpSocket", QAbstractSocket::TcpSocket },
   { "UdpSocket", QAbstractSocket::UdpSocket },
   { "SctpSocket", QAbstractSocket::SctpSocket },
   { "UnknownSocketType", QAbstractSocket::UnknownSocketType },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractSocket::plastiqInherits = { &PlastiQQIODevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractSocket::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractSocket::plastiq_static_metaObject = {
    { &PlastiQQIODevice::plastiq_static_metaObject, &plastiqInherits, "QAbstractSocket", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractSocket::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractSocketWrapper : public QAbstractSocket {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void disconnectFromHost() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectFromHost()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSocket::disconnectFromHost();
    }

    void PlastiQParentCall_disconnectFromHost() {
        return QAbstractSocket::disconnectFromHost();
    }

    void resume() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resume()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSocket::resume();
    }

    void PlastiQParentCall_resume() {
        return QAbstractSocket::resume();
    }

    void setReadBufferSize(qint64 size) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setReadBufferSize(qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_long = size;
            stack[1].name = QByteArrayLiteral("qint64");
            stack[1].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSocket::setReadBufferSize(size);
    }

    void PlastiQParentCall_setReadBufferSize(qint64 size) {
        return QAbstractSocket::setReadBufferSize(size);
    }

    void setSocketOption(QAbstractSocket::SocketOption option, const QVariant &value) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setSocketOption(QAbstractSocket::SocketOption,const QVariant&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int64 = option;
            stack[1].name = QByteArrayLiteral("QAbstractSocket::SocketOption");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QVariant");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSocket::setSocketOption(option,value);
    }

    void PlastiQParentCall_setSocketOption(QAbstractSocket::SocketOption option, const QVariant &value) {
        return QAbstractSocket::setSocketOption(option,value);
    }

    QVariant socketOption(QAbstractSocket::SocketOption option) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant socketOption(QAbstractSocket::SocketOption)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = option;
            stack[1].name = QByteArrayLiteral("QAbstractSocket::SocketOption");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAbstractSocket::socketOption(option);
    }

    QVariant PlastiQParentCall_socketOption(QAbstractSocket::SocketOption option) {
        return QAbstractSocket::socketOption(option);
    }

    bool waitForConnected(int msecs = 30000) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool waitForConnected(int=)");
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
        else return QAbstractSocket::waitForConnected(msecs);
    }

    bool PlastiQParentCall_waitForConnected(int msecs = 30000) {
        return QAbstractSocket::waitForConnected(msecs);
    }

    bool waitForDisconnected(int msecs = 30000) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool waitForDisconnected(int=)");
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
        else return QAbstractSocket::waitForDisconnected(msecs);
    }

    bool PlastiQParentCall_waitForDisconnected(int msecs = 30000) {
        return QAbstractSocket::waitForDisconnected(msecs);
    }

    qint64 readData(char *data, qint64 maxSize) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readData(char*,qint64)");
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
        else return QAbstractSocket::readData(data,maxSize);
    }

    qint64 PlastiQParentCall_readData(char *data, qint64 maxSize) {
        return QAbstractSocket::readData(data,maxSize);
    }

    qint64 readLineData(char *data, qint64 maxlen) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readLineData(char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(data);
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = maxlen;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QAbstractSocket::readLineData(data,maxlen);
    }

    qint64 PlastiQParentCall_readLineData(char *data, qint64 maxlen) {
        return QAbstractSocket::readLineData(data,maxlen);
    }

    qint64 writeData(const char *data, qint64 size) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 writeData(const char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<char*>(data));
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = size;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QAbstractSocket::writeData(data,size);
    }

    qint64 PlastiQParentCall_writeData(const char *data, qint64 size) {
        return QAbstractSocket::writeData(data,size);
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
        else return QAbstractSocket::atEnd();
    }

    bool PlastiQParentCall_atEnd() const {
        return QAbstractSocket::atEnd();
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
        else return QAbstractSocket::bytesAvailable();
    }

    qint64 PlastiQParentCall_bytesAvailable() const {
        return QAbstractSocket::bytesAvailable();
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
        else return QAbstractSocket::bytesToWrite();
    }

    qint64 PlastiQParentCall_bytesToWrite() const {
        return QAbstractSocket::bytesToWrite();
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
        else return QAbstractSocket::canReadLine();
    }

    bool PlastiQParentCall_canReadLine() const {
        return QAbstractSocket::canReadLine();
    }

    void close() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void close()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSocket::close();
    }

    void PlastiQParentCall_close() {
        return QAbstractSocket::close();
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
        else return QAbstractSocket::isSequential();
    }

    bool PlastiQParentCall_isSequential() const {
        return QAbstractSocket::isSequential();
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
        else return QAbstractSocket::open(mode);
    }

    bool PlastiQParentCall_open(OpenMode mode) {
        return QAbstractSocket::open(mode);
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
        else return QAbstractSocket::pos();
    }

    qint64 PlastiQParentCall_pos() const {
        return QAbstractSocket::pos();
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
        else return QAbstractSocket::reset();
    }

    bool PlastiQParentCall_reset() {
        return QAbstractSocket::reset();
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
        else return QAbstractSocket::seek(pos);
    }

    bool PlastiQParentCall_seek(qint64 pos) {
        return QAbstractSocket::seek(pos);
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
        else return QAbstractSocket::size();
    }

    qint64 PlastiQParentCall_size() const {
        return QAbstractSocket::size();
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
        else return QAbstractSocket::waitForBytesWritten(msecs);
    }

    bool PlastiQParentCall_waitForBytesWritten(int msecs) {
        return QAbstractSocket::waitForBytesWritten(msecs);
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
        else return QAbstractSocket::waitForReadyRead(msecs);
    }

    bool PlastiQParentCall_waitForReadyRead(int msecs) {
        return QAbstractSocket::waitForReadyRead(msecs);
    }

};

void PlastiQQAbstractSocket::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractSocketWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractSocket *p = new PlastiQQAbstractSocket();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractSocket *p = new PlastiQQAbstractSocket();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 50) {
            id -= 50;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractSocket *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractSocket*>(object->plastiq_data());

        switch(id) {
        case 0: o->abort();
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r = o->bind((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->bind((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->bind((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    QAbstractSocket::BindMode(stack[3].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->bind();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->bind(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->bind(stack[1].s_int,
                    QAbstractSocket::BindMode(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: o->connectToHost(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: /* o->connectToHost(stack[1].s_string,
                    stack[2].s_int,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 9: /* o->connectToHost(stack[1].s_string,
                    stack[2].s_int,
                    UNSUPPORTED_TYPE_OpenMode,
                    QAbstractSocket::NetworkLayerProtocol(stack[4].s_int64)) | ret: `void` */ break;
        case 10: o->connectToHost((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: /* o->connectToHost((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 12: if (isWrapper) ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_disconnectFromHost();
                else o->disconnectFromHost();
                stack[0].type = PlastiQ::Void; break;
        case 13: { qint64 _r = o->error(); // HACK for SocketError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { bool _r = o->flush();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { /* COPY OBJECT */
            QHostAddress *_r = new QHostAddress(o->localAddress());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostAddress";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: /* UNSUPPORTED_RETURN_VALUE o->localPort() | ret: `quint16` */ break;
        case 18: { qint64 _r = o->pauseMode(); // HACK for PauseModes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { /* COPY OBJECT */
            QHostAddress *_r = new QHostAddress(o->peerAddress());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostAddress";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { QString _r = o->peerName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: /* UNSUPPORTED_RETURN_VALUE o->peerPort() | ret: `quint16` */ break;
        case 22: { /* COPY OBJECT */
            QNetworkProxy *_r = new QNetworkProxy(o->proxy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkProxy";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { long _r = o->readBufferSize();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 24: if (isWrapper) ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_resume();
                else o->resume();
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setPauseMode(QAbstractSocket::PauseModes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setProxy((*reinterpret_cast< QNetworkProxy(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_setReadBufferSize(stack[1].s_long);
                else o->setReadBufferSize(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 28: /* o->setSocketDescriptor(UNSUPPORTED_TYPE_qintptr) | ret: `bool` */ break;
        case 29: /* o->setSocketDescriptor(UNSUPPORTED_TYPE_qintptr,
                    QAbstractSocket::SocketState(stack[2].s_int64)) | ret: `bool` */ break;
        case 30: /* o->setSocketDescriptor(UNSUPPORTED_TYPE_qintptr,
                    QAbstractSocket::SocketState(stack[2].s_int64),
                    UNSUPPORTED_TYPE_OpenMode) | ret: `bool` */ break;
        case 31: if (isWrapper) ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_setSocketOption(QAbstractSocket::SocketOption(stack[1].s_int64),
                    stack[2].s_variant);
                else o->setSocketOption(QAbstractSocket::SocketOption(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 32: /* UNSUPPORTED_RETURN_VALUE o->socketDescriptor() | ret: `qintptr` */ break;
        case 33: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_socketOption(QAbstractSocket::SocketOption(stack[1].s_int64)));
                else _r = new QVariant(o->socketOption(QAbstractSocket::SocketOption(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { qint64 _r = o->socketType(); // HACK for SocketType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 35: { qint64 _r = o->state(); // HACK for SocketState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 36: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_waitForConnected();
                else _r = o->waitForConnected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 37: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_waitForConnected(stack[1].s_int);
                else _r = o->waitForConnected(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_waitForDisconnected();
                else _r = o->waitForDisconnected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_waitForDisconnected(stack[1].s_int);
                else _r = o->waitForDisconnected(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 41: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 42: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 43: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 44: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 45: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 46: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 47: { long _r;
                if (isWrapper) _r = ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_readData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 48: { long _r;
                if (isWrapper) _r = ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_readLineData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 49: { long _r;
                if (isWrapper) _r = ((PlastiQQAbstractSocketWrapper*)o)->PlastiQParentCall_writeData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractSocket *o = reinterpret_cast<QAbstractSocket*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::connected),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "connected", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractSocket::disconnected,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "disconnected", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketError)>(&QAbstractSocket::error),
            [=](QAbstractSocket::SocketError arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QAbstractSocket::SocketError";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractSocket::hostFound,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "hostFound", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAbstractSocket::proxyAuthenticationRequired,
            [=](const QNetworkProxy& arg0, QAuthenticator* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QNetworkProxy(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QNetworkProxy";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QAuthenticator";
                PlastiQ_activate(sender, "proxyAuthenticationRequired", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QAbstractSocket::stateChanged,
            [=](QAbstractSocket::SocketState arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QAbstractSocket::SocketState";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractSocket *o = reinterpret_cast<QAbstractSocket*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractSocket *o = reinterpret_cast<QAbstractSocket*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractSocket *o = reinterpret_cast<QAbstractSocket*>(object->plastiq_data());

        if(className == "QIODevice") {
            stack[0].s_voidp = static_cast<QIODevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractSocket::~PlastiQQAbstractSocket() {
    QAbstractSocket* o = reinterpret_cast<QAbstractSocket*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
