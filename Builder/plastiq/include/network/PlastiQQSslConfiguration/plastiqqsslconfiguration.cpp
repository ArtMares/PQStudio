#include "plastiqmethod.h"
#include "plastiqqsslconfiguration.h"

#include <QSslConfiguration> 
#include <QSslDiffieHellmanParameters>
#include <QSslKey>
#include <QSslCertificate>
#include <QByteArray>
#include <QSslCipher>

QHash<QByteArray, PlastiQMethod> PlastiQQSslConfiguration::plastiqConstructors = {
    { "QSslConfiguration()", { "QSslConfiguration", "", "QSslConfiguration*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslConfiguration(QSslConfiguration&)", { "QSslConfiguration", "QSslConfiguration&", "QSslConfiguration*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslConfiguration::plastiqMethods = {
    { "diffieHellmanParameters()", { "diffieHellmanParameters", "", "QSslDiffieHellmanParameters", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ephemeralServerKey()", { "ephemeralServerKey", "", "QSslKey", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localCertificate()", { "localCertificate", "", "QSslCertificate", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextNegotiatedProtocol()", { "nextNegotiatedProtocol", "", "QByteArray", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextProtocolNegotiationStatus()", { "nextProtocolNegotiationStatus", "", "NextProtocolNegotiationStatus", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerCertificate()", { "peerCertificate", "", "QSslCertificate", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerVerifyDepth()", { "peerVerifyDepth", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerVerifyMode()", { "peerVerifyMode", "", "QSslSocket::PeerVerifyMode", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preSharedKeyIdentityHint()", { "preSharedKeyIdentityHint", "", "QByteArray", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "privateKey()", { "privateKey", "", "QSslKey", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "protocol()", { "protocol", "", "QSsl::SslProtocol", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionCipher()", { "sessionCipher", "", "QSslCipher", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionProtocol()", { "sessionProtocol", "", "QSsl::SslProtocol", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionTicket()", { "sessionTicket", "", "QByteArray", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionTicketLifeTimeHint()", { "sessionTicketLifeTimeHint", "", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAllowedNextProtocols(QList<QByteArray>)", { "setAllowedNextProtocols", "QList<QByteArray>", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaCertificates(QList<QSslCertificate>&)", { "setCaCertificates", "QList<QSslCertificate>&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCiphers(QList<QSslCipher>&)", { "setCiphers", "QList<QSslCipher>&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDiffieHellmanParameters(QSslDiffieHellmanParameters&)", { "setDiffieHellmanParameters", "QSslDiffieHellmanParameters&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEllipticCurves(QVector<QSslEllipticCurve>&)", { "setEllipticCurves", "QVector<QSslEllipticCurve>&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalCertificate(QSslCertificate&)", { "setLocalCertificate", "QSslCertificate&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalCertificateChain(QList<QSslCertificate>&)", { "setLocalCertificateChain", "QList<QSslCertificate>&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPeerVerifyDepth(int)", { "setPeerVerifyDepth", "int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPeerVerifyMode(enum)", { "setPeerVerifyMode", "QSslSocket::PeerVerifyMode", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPreSharedKeyIdentityHint(QByteArray)", { "setPreSharedKeyIdentityHint", "QByteArray&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrivateKey(QSslKey&)", { "setPrivateKey", "QSslKey&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProtocol(QSsl::SslProtocol)", { "setProtocol", "QSsl::SslProtocol", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSessionTicket(QByteArray)", { "setSessionTicket", "QByteArray&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSslOption(QSsl::SslOption,bool)", { "setSslOption", "QSsl::SslOption,bool", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QSslConfiguration&)", { "swap", "QSslConfiguration&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testSslOption(QSsl::SslOption)", { "testSslOption", "QSsl::SslOption", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "NextProtocolHttp1_1()", { "NextProtocolHttp1_1", "", "const char", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "NextProtocolSpdy3_0()", { "NextProtocolSpdy3_0", "", "const char", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "defaultConfiguration()", { "defaultConfiguration", "", "QSslConfiguration", 34, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setDefaultConfiguration(QSslConfiguration&)", { "setDefaultConfiguration", "QSslConfiguration&", "void", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslConfiguration::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslConfiguration::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslConfiguration::plastiqConstants = {

    /* QSslConfiguration::NextProtocolNegotiationStatus */
   { "NextProtocolNegotiationNone", QSslConfiguration::NextProtocolNegotiationNone },
   { "NextProtocolNegotiationNegotiated", QSslConfiguration::NextProtocolNegotiationNegotiated },
   { "NextProtocolNegotiationUnsupported", QSslConfiguration::NextProtocolNegotiationUnsupported },

};

QVector<PlastiQMetaObject*> PlastiQQSslConfiguration::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSslConfiguration::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSslConfiguration::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSslConfiguration", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslConfiguration::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSslConfiguration::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSslConfiguration *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSslConfiguration(); break;
        case 1: o = new QSslConfiguration((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSslConfiguration *p = new PlastiQQSslConfiguration();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslConfiguration *p = new PlastiQQSslConfiguration();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 36) {
            id -= 36;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSslConfiguration *o = sc ? Q_NULLPTR : reinterpret_cast<QSslConfiguration*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->diffieHellmanParameters() | ret: `QSslDiffieHellmanParameters` */ break;
        case 1: { /* COPY OBJECT */
            QSslKey *_r = new QSslKey(o->ephemeralServerKey());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslKey";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QSslCertificate *_r = new QSslCertificate(o->localCertificate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslCertificate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { QByteArray _r = o->nextNegotiatedProtocol();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 5: { qint64 _r = o->nextProtocolNegotiationStatus(); // HACK for NextProtocolNegotiationStatus 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { /* COPY OBJECT */
            QSslCertificate *_r = new QSslCertificate(o->peerCertificate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslCertificate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->peerVerifyDepth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { qint64 _r = o->peerVerifyMode(); // HACK for QSslSocket::PeerVerifyMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { QByteArray _r = o->preSharedKeyIdentityHint();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 10: { /* COPY OBJECT */
            QSslKey *_r = new QSslKey(o->privateKey());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslKey";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: /* o->protocol() | ret: `QSsl::SslProtocol` */ break;
        case 12: { /* COPY OBJECT */
            QSslCipher *_r = new QSslCipher(o->sessionCipher());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslCipher";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: /* o->sessionProtocol() | ret: `QSsl::SslProtocol` */ break;
        case 14: { QByteArray _r = o->sessionTicket();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 15: { int _r = o->sessionTicketLifeTimeHint();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: /* o->setAllowedNextProtocols(UNSUPPORTED_TYPE_QList<QByteArray>) | ret: `void` */ break;
        case 17: o->setCaCertificates((*reinterpret_cast< QList<QSslCertificate>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setCiphers((*reinterpret_cast< QList<QSslCipher>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setDiffieHellmanParameters((*reinterpret_cast< QSslDiffieHellmanParameters(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setEllipticCurves((*reinterpret_cast< QVector<QSslEllipticCurve>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setLocalCertificate((*reinterpret_cast< QSslCertificate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setLocalCertificateChain((*reinterpret_cast< QList<QSslCertificate>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setPeerVerifyDepth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setPeerVerifyMode(QSslSocket::PeerVerifyMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setPreSharedKeyIdentityHint(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setPrivateKey((*reinterpret_cast< QSslKey(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: /* o->setProtocol(UNSUPPORTED_TYPE_QSsl::SslProtocol) | ret: `void` */ break;
        case 28: o->setSessionTicket(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 29: /* o->setSslOption(UNSUPPORTED_TYPE_QSsl::SslOption,
                    stack[2].s_bool) | ret: `void` */ break;
        case 30: o->swap((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: /* o->testSslOption(UNSUPPORTED_TYPE_QSsl::SslOption) | ret: `bool` */ break;
        case 32: /* UNSUPPORTED_RETURN_VALUE o->NextProtocolHttp1_1() | ret: `const char` */ break;
        case 33: /* UNSUPPORTED_RETURN_VALUE o->NextProtocolSpdy3_0() | ret: `const char` */ break;
        case 34: { /* COPY OBJECT */
            QSslConfiguration *_r = sc ? new QSslConfiguration(QSslConfiguration::defaultConfiguration()) : new QSslConfiguration(o->defaultConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: if(sc) { QSslConfiguration::setDefaultConfiguration((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp))); } else { o->setDefaultConfiguration((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp))); }
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
        QSslConfiguration *o = reinterpret_cast<QSslConfiguration*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSslConfiguration::~PlastiQQSslConfiguration() {
    QSslConfiguration* o = reinterpret_cast<QSslConfiguration*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
