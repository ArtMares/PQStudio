#include "plastiqmethod.h"
#include "plastiqqnetworkreply.h"

#include "core/PlastiQQIODevice/plastiqqiodevice.h"
#include <QNetworkReply> 
#include <QVariant>
#include <QNetworkAccessManager>
#include <QByteArray>
#include <QNetworkRequest>
#include <QSslConfiguration>
#include <QUrl>
#include <QSslPreSharedKeyAuthenticator>
#include <QList>
#include <QSslError>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkReply::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkReply::plastiqMethods = {
    { "attribute(enum)", { "attribute", "QNetworkRequest::Attribute", "QVariant", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "NetworkError", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasRawHeader(QByteArray)", { "hasRawHeader", "QByteArray&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "header(enum)", { "header", "QNetworkRequest::KnownHeaders", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignoreSslErrors(QList<QSslError>&)", { "ignoreSslErrors", "QList<QSslError>&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFinished()", { "isFinished", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRunning()", { "isRunning", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "manager()", { "manager", "", "QNetworkAccessManager*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "operation()", { "operation", "", "QNetworkAccessManager::Operation", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rawHeader(QByteArray)", { "rawHeader", "QByteArray&", "QByteArray", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readBufferSize()", { "readBufferSize", "", "qint64", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "request()", { "request", "", "QNetworkRequest", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadBufferSize(long)", { "setReadBufferSize", "qint64", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSslConfiguration(QSslConfiguration&)", { "setSslConfiguration", "QSslConfiguration&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sslConfiguration()", { "sslConfiguration", "", "QSslConfiguration", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignoreSslErrorsImplementation(QList<QSslError>&)", { "ignoreSslErrorsImplementation", "QList<QSslError>&", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setAttribute(enum,QVariant)", { "setAttribute", "QNetworkRequest::Attribute,QVariant&", "void", 17, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setError(enum,QString)", { "setError", "NetworkError,QString&", "void", 18, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setFinished(bool)", { "setFinished", "bool", "void", 19, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setHeader(enum,QVariant)", { "setHeader", "QNetworkRequest::KnownHeaders,QVariant&", "void", 20, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setOperation(enum)", { "setOperation", "QNetworkAccessManager::Operation", "void", 21, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setRawHeader(QByteArray,QByteArray)", { "setRawHeader", "QByteArray&,QByteArray&", "void", 22, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setRequest(QNetworkRequest&)", { "setRequest", "QNetworkRequest&", "void", 23, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setSslConfigurationImplementation(QSslConfiguration&)", { "setSslConfigurationImplementation", "QSslConfiguration&", "void", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setUrl(QUrl&)", { "setUrl", "QUrl&", "void", 25, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sslConfigurationImplementation(QSslConfiguration&)", { "sslConfigurationImplementation", "QSslConfiguration&", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "abort()", { "abort", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "ignoreSslErrors()", { "ignoreSslErrors", "", "void", 28, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkReply::plastiqSignals = {
    { "downloadProgress(long,long)", { "downloadProgress", "qint64,qint64", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "encrypted()", { "encrypted", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QNetworkReply::NetworkError", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished()", { "finished", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged()", { "metaDataChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator*)", { "preSharedKeyAuthenticationRequired", "QSslPreSharedKeyAuthenticator*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "redirected(QUrl&)", { "redirected", "QUrl&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sslErrors(QList<QSslError>&)", { "sslErrors", "QList<QSslError>&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "uploadProgress(long,long)", { "uploadProgress", "qint64,qint64", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkReply::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkReply::plastiqConstants = {

    /* QNetworkReply::NetworkError */
   { "NoError", QNetworkReply::NoError },
   { "ConnectionRefusedError", QNetworkReply::ConnectionRefusedError },
   { "RemoteHostClosedError", QNetworkReply::RemoteHostClosedError },
   { "HostNotFoundError", QNetworkReply::HostNotFoundError },
   { "TimeoutError", QNetworkReply::TimeoutError },
   { "OperationCanceledError", QNetworkReply::OperationCanceledError },
   { "SslHandshakeFailedError", QNetworkReply::SslHandshakeFailedError },
   { "TemporaryNetworkFailureError", QNetworkReply::TemporaryNetworkFailureError },
   { "NetworkSessionFailedError", QNetworkReply::NetworkSessionFailedError },
   { "BackgroundRequestNotAllowedError", QNetworkReply::BackgroundRequestNotAllowedError },
   { "TooManyRedirectsError", QNetworkReply::TooManyRedirectsError },
   { "InsecureRedirectError", QNetworkReply::InsecureRedirectError },
   { "UnknownNetworkError", QNetworkReply::UnknownNetworkError },
   { "ProxyConnectionRefusedError", QNetworkReply::ProxyConnectionRefusedError },
   { "ProxyConnectionClosedError", QNetworkReply::ProxyConnectionClosedError },
   { "ProxyNotFoundError", QNetworkReply::ProxyNotFoundError },
   { "ProxyTimeoutError", QNetworkReply::ProxyTimeoutError },
   { "ProxyAuthenticationRequiredError", QNetworkReply::ProxyAuthenticationRequiredError },
   { "UnknownProxyError", QNetworkReply::UnknownProxyError },
   { "ContentAccessDenied", QNetworkReply::ContentAccessDenied },
   { "ContentOperationNotPermittedError", QNetworkReply::ContentOperationNotPermittedError },
   { "ContentNotFoundError", QNetworkReply::ContentNotFoundError },
   { "AuthenticationRequiredError", QNetworkReply::AuthenticationRequiredError },
   { "ContentReSendError", QNetworkReply::ContentReSendError },
   { "ContentConflictError", QNetworkReply::ContentConflictError },
   { "ContentGoneError", QNetworkReply::ContentGoneError },
   { "UnknownContentError", QNetworkReply::UnknownContentError },
   { "ProtocolUnknownError", QNetworkReply::ProtocolUnknownError },
   { "ProtocolInvalidOperationError", QNetworkReply::ProtocolInvalidOperationError },
   { "ProtocolFailure", QNetworkReply::ProtocolFailure },
   { "InternalServerError", QNetworkReply::InternalServerError },
   { "OperationNotImplementedError", QNetworkReply::OperationNotImplementedError },
   { "ServiceUnavailableError", QNetworkReply::ServiceUnavailableError },
   { "UnknownServerError", QNetworkReply::UnknownServerError },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkReply::plastiqInherits = { &PlastiQQIODevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQNetworkReply::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQNetworkReply::plastiq_static_metaObject = {
    { &PlastiQQIODevice::plastiq_static_metaObject, &plastiqInherits, "QNetworkReply", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkReply::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQNetworkReplyWrapper : public QNetworkReply {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QNetworkReply::setReadBufferSize(size);
    }

    void PlastiQParentCall_setReadBufferSize(qint64 size) {
        return QNetworkReply::setReadBufferSize(size);
    }

    void setSslConfigurationImplementation(const QSslConfiguration &configuration) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setSslConfigurationImplementation(const QSslConfiguration&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QSslConfiguration(configuration) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QSslConfiguration");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkReply::setSslConfigurationImplementation(configuration);
    }

    void PlastiQParentCall_setSslConfigurationImplementation(const QSslConfiguration &configuration) {
        return QNetworkReply::setSslConfigurationImplementation(configuration);
    }

    void sslConfigurationImplementation(QSslConfiguration &configuration) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void sslConfigurationImplementation(QSslConfiguration&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QSslConfiguration(configuration) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QSslConfiguration");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkReply::sslConfigurationImplementation(configuration);
    }

    void PlastiQParentCall_sslConfigurationImplementation(QSslConfiguration &configuration) const {
        return QNetworkReply::sslConfigurationImplementation(configuration);
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
        else return QNetworkReply::atEnd();
    }

    bool PlastiQParentCall_atEnd() const {
        return QNetworkReply::atEnd();
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
        else return QNetworkReply::bytesAvailable();
    }

    qint64 PlastiQParentCall_bytesAvailable() const {
        return QNetworkReply::bytesAvailable();
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
        else return QNetworkReply::bytesToWrite();
    }

    qint64 PlastiQParentCall_bytesToWrite() const {
        return QNetworkReply::bytesToWrite();
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
        else return QNetworkReply::canReadLine();
    }

    bool PlastiQParentCall_canReadLine() const {
        return QNetworkReply::canReadLine();
    }

    void close() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void close()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkReply::close();
    }

    void PlastiQParentCall_close() {
        return QNetworkReply::close();
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
        else return QNetworkReply::isSequential();
    }

    bool PlastiQParentCall_isSequential() const {
        return QNetworkReply::isSequential();
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
        else return QNetworkReply::open(mode);
    }

    bool PlastiQParentCall_open(OpenMode mode) {
        return QNetworkReply::open(mode);
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
        else return QNetworkReply::pos();
    }

    qint64 PlastiQParentCall_pos() const {
        return QNetworkReply::pos();
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
        else return QNetworkReply::reset();
    }

    bool PlastiQParentCall_reset() {
        return QNetworkReply::reset();
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
        else return QNetworkReply::seek(pos);
    }

    bool PlastiQParentCall_seek(qint64 pos) {
        return QNetworkReply::seek(pos);
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
        else return QNetworkReply::size();
    }

    qint64 PlastiQParentCall_size() const {
        return QNetworkReply::size();
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
        else return QNetworkReply::waitForBytesWritten(msecs);
    }

    bool PlastiQParentCall_waitForBytesWritten(int msecs) {
        return QNetworkReply::waitForBytesWritten(msecs);
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
        else return QNetworkReply::waitForReadyRead(msecs);
    }

    bool PlastiQParentCall_waitForReadyRead(int msecs) {
        return QNetworkReply::waitForReadyRead(msecs);
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
        else return QNetworkReply::readLineData(data,maxSize);
    }

    qint64 PlastiQParentCall_readLineData(char *data, qint64 maxSize) {
        return QNetworkReply::readLineData(data,maxSize);
    }

};

void PlastiQQNetworkReply::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQNetworkReplyWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQNetworkReply *p = new PlastiQQNetworkReply();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkReply *p = new PlastiQQNetworkReply();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 29) {
            id -= 29;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkReply *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkReply*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->attribute(QNetworkRequest::Attribute(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->error(); // HACK for NetworkError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { bool _r = o->hasRawHeader(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->header(QNetworkRequest::KnownHeaders(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->ignoreSslErrors((*reinterpret_cast< QList<QSslError>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: { bool _r = o->isFinished();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isRunning();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { QNetworkAccessManager* _r = o->manager();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkAccessManager"; } break;
        case 8: { qint64 _r = o->operation(); // HACK for QNetworkAccessManager::Operation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { QByteArray _r = o->rawHeader(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 10: { long _r = o->readBufferSize();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 11: { /* COPY OBJECT */
            QNetworkRequest *_r = new QNetworkRequest(o->request());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkRequest";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: if (isWrapper) ((PlastiQQNetworkReplyWrapper*)o)->PlastiQParentCall_setReadBufferSize(stack[1].s_long);
                else o->setReadBufferSize(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setSslConfiguration((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: { /* COPY OBJECT */
            QSslConfiguration *_r = new QSslConfiguration(o->sslConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 17: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 18: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 19: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 20: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 21: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 22: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 23: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 24: if (isWrapper) ((PlastiQQNetworkReplyWrapper*)o)->PlastiQParentCall_setSslConfigurationImplementation((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 25: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 26: if (isWrapper) ((PlastiQQNetworkReplyWrapper*)o)->PlastiQParentCall_sslConfigurationImplementation((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 27: o->abort();
                stack[0].type = PlastiQ::Void; break;
        case 28: o->ignoreSslErrors();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QNetworkReply *o = reinterpret_cast<QNetworkReply*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QNetworkReply::downloadProgress,
            [=](qint64 arg0, qint64 arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                    cstack[1].s_long = arg1;
                    cstack[1].type = PlastiQ::Long; cstack[1].name = "qint64";
                PlastiQ_activate(sender, "downloadProgress", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QNetworkReply::encrypted,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "encrypted", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QNetworkReply::*)(QNetworkReply::NetworkError)>(&QNetworkReply::error),
            [=](QNetworkReply::NetworkError arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QNetworkReply::NetworkError";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QNetworkReply::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QNetworkReply::metaDataChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "metaDataChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QNetworkReply::preSharedKeyAuthenticationRequired,
            [=](QSslPreSharedKeyAuthenticator* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QSslPreSharedKeyAuthenticator";
                PlastiQ_activate(sender, "preSharedKeyAuthenticationRequired", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QNetworkReply::redirected,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "redirected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QNetworkReply::sslErrors,
            [=](const QList<QSslError>& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&const_cast<QList<QSslError>&>(arg0));
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QSslError>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "sslErrors", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QNetworkReply::uploadProgress,
            [=](qint64 arg0, qint64 arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                    cstack[1].s_long = arg1;
                    cstack[1].type = PlastiQ::Long; cstack[1].name = "qint64";
                PlastiQ_activate(sender, "uploadProgress", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QNetworkReply *o = reinterpret_cast<QNetworkReply*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QNetworkReply *o = reinterpret_cast<QNetworkReply*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QNetworkReply *o = reinterpret_cast<QNetworkReply*>(object->plastiq_data());

        if(className == "QIODevice") {
            stack[0].s_voidp = static_cast<QIODevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQNetworkReply::~PlastiQQNetworkReply() {
    QNetworkReply* o = reinterpret_cast<QNetworkReply*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
