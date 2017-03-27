#include "plastiqmethod.h"
#include "plastiqqsslsocket.h"

#include "network/PlastiQQTcpSocket/plastiqqtcpsocket.h"
#include <QSslSocket> 
#include <QSslCertificate>
#include <QString>
#include <QSslKey>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>

QHash<QByteArray, PlastiQMethod> PlastiQQSslSocket::plastiqConstructors = {
    { "QSslSocket()", { "QSslSocket", "", "QSslSocket*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslSocket(QObject*)", { "QSslSocket", "QObject*", "QSslSocket*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslSocket::plastiqMethods = {
    { "abort()", { "abort", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addCaCertificate(QSslCertificate&)", { "addCaCertificate", "QSslCertificate&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addCaCertificates(QString)", { "addCaCertificates", "QString&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addCaCertificates(QString,QSsl::EncodingFormat)", { "addCaCertificates", "QString&,QSsl::EncodingFormat", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addCaCertificates(QString,QSsl::EncodingFormat,enum)", { "addCaCertificates", "QString&,QSsl::EncodingFormat,QRegExp::PatternSyntax", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addCaCertificates(QList<QSslCertificate>&)", { "addCaCertificates", "QList<QSslCertificate>&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString,int)", { "connectToHostEncrypted", "QString&,quint16", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString,int,OpenMode)", { "connectToHostEncrypted", "QString&,quint16,OpenMode", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString,int,OpenMode,NetworkLayerProtocol)", { "connectToHostEncrypted", "QString&,quint16,OpenMode,NetworkLayerProtocol", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString,int,QString)", { "connectToHostEncrypted", "QString&,quint16,QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString,int,QString,OpenMode)", { "connectToHostEncrypted", "QString&,quint16,QString&,OpenMode", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString,int,QString,OpenMode,NetworkLayerProtocol)", { "connectToHostEncrypted", "QString&,quint16,QString&,OpenMode,NetworkLayerProtocol", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encryptedBytesAvailable()", { "encryptedBytesAvailable", "", "qint64", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encryptedBytesToWrite()", { "encryptedBytesToWrite", "", "qint64", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flush()", { "flush", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignoreSslErrors(QList<QSslError>&)", { "ignoreSslErrors", "QList<QSslError>&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEncrypted()", { "isEncrypted", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localCertificate()", { "localCertificate", "", "QSslCertificate", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mode()", { "mode", "", "SslMode", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerCertificate()", { "peerCertificate", "", "QSslCertificate", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerVerifyDepth()", { "peerVerifyDepth", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerVerifyMode()", { "peerVerifyMode", "", "QSslSocket::PeerVerifyMode", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerVerifyName()", { "peerVerifyName", "", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "privateKey()", { "privateKey", "", "QSslKey", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "protocol()", { "protocol", "", "QSsl::SslProtocol", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionCipher()", { "sessionCipher", "", "QSslCipher", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionProtocol()", { "sessionProtocol", "", "QSsl::SslProtocol", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalCertificate(QSslCertificate&)", { "setLocalCertificate", "QSslCertificate&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalCertificate(QString)", { "setLocalCertificate", "QString&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalCertificate(QString,QSsl::EncodingFormat)", { "setLocalCertificate", "QString&,QSsl::EncodingFormat", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalCertificateChain(QList<QSslCertificate>&)", { "setLocalCertificateChain", "QList<QSslCertificate>&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPeerVerifyDepth(int)", { "setPeerVerifyDepth", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPeerVerifyMode(enum)", { "setPeerVerifyMode", "QSslSocket::PeerVerifyMode", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPeerVerifyName(QString)", { "setPeerVerifyName", "QString&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrivateKey(QSslKey&)", { "setPrivateKey", "QSslKey&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrivateKey(QString)", { "setPrivateKey", "QString&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrivateKey(QString,QSsl::KeyAlgorithm)", { "setPrivateKey", "QString&,QSsl::KeyAlgorithm", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrivateKey(QString,QSsl::KeyAlgorithm,QSsl::EncodingFormat)", { "setPrivateKey", "QString&,QSsl::KeyAlgorithm,QSsl::EncodingFormat", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrivateKey(QString,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QByteArray)", { "setPrivateKey", "QString&,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QByteArray&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProtocol(QSsl::SslProtocol)", { "setProtocol", "QSsl::SslProtocol", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSslConfiguration(QSslConfiguration&)", { "setSslConfiguration", "QSslConfiguration&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sslConfiguration()", { "sslConfiguration", "", "QSslConfiguration", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForEncrypted()", { "waitForEncrypted", "", "bool", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForEncrypted(int)", { "waitForEncrypted", "int", "bool", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addDefaultCaCertificate(QSslCertificate&)", { "addDefaultCaCertificate", "QSslCertificate&", "void", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "addDefaultCaCertificates(QString)", { "addDefaultCaCertificates", "QString&", "bool", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "addDefaultCaCertificates(QString,QSsl::EncodingFormat)", { "addDefaultCaCertificates", "QString&,QSsl::EncodingFormat", "bool", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "addDefaultCaCertificates(QString,QSsl::EncodingFormat,enum)", { "addDefaultCaCertificates", "QString&,QSsl::EncodingFormat,QRegExp::PatternSyntax", "bool", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "addDefaultCaCertificates(QList<QSslCertificate>&)", { "addDefaultCaCertificates", "QList<QSslCertificate>&", "void", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sslLibraryBuildVersionNumber()", { "sslLibraryBuildVersionNumber", "", "long", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sslLibraryBuildVersionString()", { "sslLibraryBuildVersionString", "", "QString", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sslLibraryVersionNumber()", { "sslLibraryVersionNumber", "", "long", 51, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sslLibraryVersionString()", { "sslLibraryVersionString", "", "QString", 52, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "supportsSsl()", { "supportsSsl", "", "bool", 53, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "readData(char*,long)", { "readData", "char*,qint64", "qint64", 54, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "writeData(const char*,long)", { "writeData", "char*,qint64", "qint64", 55, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "ignoreSslErrors()", { "ignoreSslErrors", "", "void", 56, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "startClientEncryption()", { "startClientEncryption", "", "void", 57, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "startServerEncryption()", { "startServerEncryption", "", "void", 58, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslSocket::plastiqSignals = {
    { "encrypted()", { "encrypted", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "encryptedBytesWritten(long)", { "encryptedBytesWritten", "qint64", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modeChanged(enum)", { "modeChanged", "QSslSocket::SslMode", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "peerVerifyError(QSslError&)", { "peerVerifyError", "QSslError&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator*)", { "preSharedKeyAuthenticationRequired", "QSslPreSharedKeyAuthenticator*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslSocket::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslSocket::plastiqConstants = {

    /* QSslSocket::PeerVerifyMode */
   { "VerifyNone", QSslSocket::VerifyNone },
   { "QueryPeer", QSslSocket::QueryPeer },
   { "VerifyPeer", QSslSocket::VerifyPeer },
   { "AutoVerifyPeer", QSslSocket::AutoVerifyPeer },

    /* QSslSocket::SslMode */
   { "UnencryptedMode", QSslSocket::UnencryptedMode },
   { "SslClientMode", QSslSocket::SslClientMode },
   { "SslServerMode", QSslSocket::SslServerMode },

};

QVector<PlastiQMetaObject*> PlastiQQSslSocket::plastiqInherits = { &PlastiQQTcpSocket::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSslSocket::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSslSocket::plastiq_static_metaObject = {
    { &PlastiQQTcpSocket::plastiq_static_metaObject, &plastiqInherits, "QSslSocket", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslSocket::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSslSocketWrapper : public QSslSocket {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSslSocketWrapper(QObject *parent = Q_NULLPTR)
         : QSslSocket(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    qint64 readData(char *data, qint64 maxlen) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readData(char*,qint64)");
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
        else return QSslSocket::readData(data,maxlen);
    }

    qint64 PlastiQParentCall_readData(char *data, qint64 maxlen) {
        return QSslSocket::readData(data,maxlen);
    }

    qint64 writeData(const char *data, qint64 len) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 writeData(const char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<char*>(data));
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = len;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QSslSocket::writeData(data,len);
    }

    qint64 PlastiQParentCall_writeData(const char *data, qint64 len) {
        return QSslSocket::writeData(data,len);
    }

};

void PlastiQQSslSocket::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSslSocketWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSslSocketWrapper(); break;
        case 1: o = new PlastiQQSslSocketWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSslSocket *p = new PlastiQQSslSocket();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslSocket *p = new PlastiQQSslSocket();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 59) {
            id -= 59;
            PlastiQQTcpSocket::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSslSocket *o = sc ? Q_NULLPTR : reinterpret_cast<QSslSocket*>(object->plastiq_data());

        switch(id) {
        case 0: o->abort();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addCaCertificate((*reinterpret_cast< QSslCertificate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->addCaCertificates(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: /* o->addCaCertificates(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat) | ret: `bool` */ break;
        case 4: /* o->addCaCertificates(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat,
                    QRegExp::PatternSyntax(stack[3].s_int64)) | ret: `bool` */ break;
        case 5: o->addCaCertificates((*reinterpret_cast< QList<QSslCertificate>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->connectToHostEncrypted(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: /* o->connectToHostEncrypted(stack[1].s_string,
                    stack[2].s_int,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 8: /* o->connectToHostEncrypted(stack[1].s_string,
                    stack[2].s_int,
                    UNSUPPORTED_TYPE_OpenMode,
                    UNSUPPORTED_TYPE_NetworkLayerProtocol) | ret: `void` */ break;
        case 9: o->connectToHostEncrypted(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: /* o->connectToHostEncrypted(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_string,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 11: /* o->connectToHostEncrypted(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_string,
                    UNSUPPORTED_TYPE_OpenMode,
                    UNSUPPORTED_TYPE_NetworkLayerProtocol) | ret: `void` */ break;
        case 12: { long _r = o->encryptedBytesAvailable();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 13: { long _r = o->encryptedBytesToWrite();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 14: { bool _r = o->flush();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: o->ignoreSslErrors((*reinterpret_cast< QList<QSslError>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: { bool _r = o->isEncrypted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { /* COPY OBJECT */
            QSslCertificate *_r = new QSslCertificate(o->localCertificate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslCertificate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { qint64 _r = o->mode(); // HACK for SslMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { /* COPY OBJECT */
            QSslCertificate *_r = new QSslCertificate(o->peerCertificate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslCertificate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { int _r = o->peerVerifyDepth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { qint64 _r = o->peerVerifyMode(); // HACK for QSslSocket::PeerVerifyMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 22: { QString _r = o->peerVerifyName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: { /* COPY OBJECT */
            QSslKey *_r = new QSslKey(o->privateKey());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslKey";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: /* o->protocol() | ret: `QSsl::SslProtocol` */ break;
        case 25: { /* COPY OBJECT */
            QSslCipher *_r = new QSslCipher(o->sessionCipher());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslCipher";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: /* o->sessionProtocol() | ret: `QSsl::SslProtocol` */ break;
        case 27: o->setLocalCertificate((*reinterpret_cast< QSslCertificate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setLocalCertificate(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 29: /* o->setLocalCertificate(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat) | ret: `void` */ break;
        case 30: o->setLocalCertificateChain((*reinterpret_cast< QList<QSslCertificate>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setPeerVerifyDepth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setPeerVerifyMode(QSslSocket::PeerVerifyMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setPeerVerifyName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setPrivateKey((*reinterpret_cast< QSslKey(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setPrivateKey(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 36: /* o->setPrivateKey(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm) | ret: `void` */ break;
        case 37: /* o->setPrivateKey(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat) | ret: `void` */ break;
        case 38: /* o->setPrivateKey(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat,
                    stack[4].s_bytearray) | ret: `void` */ break;
        case 39: /* o->setProtocol(UNSUPPORTED_TYPE_QSsl::SslProtocol) | ret: `void` */ break;
        case 40: o->setSslConfiguration((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 41: { /* COPY OBJECT */
            QSslConfiguration *_r = new QSslConfiguration(o->sslConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: { bool _r = o->waitForEncrypted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 43: { bool _r = o->waitForEncrypted(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 44: if(sc) { QSslSocket::addDefaultCaCertificate((*reinterpret_cast< QSslCertificate(*) >(stack[1].s_voidp))); } else { o->addDefaultCaCertificate((*reinterpret_cast< QSslCertificate(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 45: { bool _r = sc ? QSslSocket::addDefaultCaCertificates(stack[1].s_string) : o->addDefaultCaCertificates(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 46: /* o->addDefaultCaCertificates(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat) | ret: `bool` */ break;
        case 47: /* o->addDefaultCaCertificates(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat,
                    QRegExp::PatternSyntax(stack[3].s_int64)) | ret: `bool` */ break;
        case 48: if(sc) { QSslSocket::addDefaultCaCertificates((*reinterpret_cast< QList<QSslCertificate>(*) >(stack[1].s_voidp))); } else { o->addDefaultCaCertificates((*reinterpret_cast< QList<QSslCertificate>(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 49: { long _r = sc ? QSslSocket::sslLibraryBuildVersionNumber() : o->sslLibraryBuildVersionNumber();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 50: { QString _r = sc ? QSslSocket::sslLibraryBuildVersionString() : o->sslLibraryBuildVersionString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 51: { long _r = sc ? QSslSocket::sslLibraryVersionNumber() : o->sslLibraryVersionNumber();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 52: { QString _r = sc ? QSslSocket::sslLibraryVersionString() : o->sslLibraryVersionString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 53: { bool _r = sc ? QSslSocket::supportsSsl() : o->supportsSsl();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 54: { long _r;
                if (isWrapper) _r = ((PlastiQQSslSocketWrapper*)o)->PlastiQParentCall_readData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 55: { long _r;
                if (isWrapper) _r = ((PlastiQQSslSocketWrapper*)o)->PlastiQParentCall_writeData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 56: o->ignoreSslErrors();
                stack[0].type = PlastiQ::Void; break;
        case 57: o->startClientEncryption();
                stack[0].type = PlastiQ::Void; break;
        case 58: o->startServerEncryption();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQTcpSocket::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSslSocket *o = reinterpret_cast<QSslSocket*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QSslSocket::*)()>(&QSslSocket::encrypted),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "encrypted", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QSslSocket::encryptedBytesWritten,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "encryptedBytesWritten", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QSslSocket::modeChanged,
            [=](QSslSocket::SslMode arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QSslSocket::SslMode";
                PlastiQ_activate(sender, "modeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QSslSocket::peerVerifyError,
            [=](const QSslError& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSslError(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSslError";
                PlastiQ_activate(sender, "peerVerifyError", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QSslSocket::preSharedKeyAuthenticationRequired,
            [=](QSslPreSharedKeyAuthenticator* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QSslPreSharedKeyAuthenticator";
                PlastiQ_activate(sender, "preSharedKeyAuthenticationRequired", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSslSocket *o = reinterpret_cast<QSslSocket*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSslSocket *o = reinterpret_cast<QSslSocket*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSslSocket *o = reinterpret_cast<QSslSocket*>(object->plastiq_data());

        if(className == "QTcpSocket") {
            stack[0].s_voidp = static_cast<QTcpSocket*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSslSocket::~PlastiQQSslSocket() {
    QSslSocket* o = reinterpret_cast<QSslSocket*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
