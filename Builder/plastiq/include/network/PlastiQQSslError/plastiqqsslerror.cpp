#include "plastiqmethod.h"
#include "plastiqqsslerror.h"

#include <QSslError> 
#include <QSslCertificate>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSslError::plastiqConstructors = {
    { "QSslError()", { "QSslError", "", "QSslError*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslError(enum)", { "QSslError", "SslError", "QSslError*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslError(enum,QSslCertificate&)", { "QSslError", "SslError,QSslCertificate&", "QSslError*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslError(QSslError&)", { "QSslError", "QSslError&", "QSslError*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslError::plastiqMethods = {
    { "certificate()", { "certificate", "", "QSslCertificate", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "SslError", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QSslError&)", { "swap", "QSslError&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslError::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslError::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslError::plastiqConstants = {

    /* QSslError::SslError */
   { "NoError", QSslError::NoError },
   { "UnableToGetIssuerCertificate", QSslError::UnableToGetIssuerCertificate },
   { "UnableToDecryptCertificateSignature", QSslError::UnableToDecryptCertificateSignature },
   { "UnableToDecodeIssuerPublicKey", QSslError::UnableToDecodeIssuerPublicKey },
   { "CertificateSignatureFailed", QSslError::CertificateSignatureFailed },
   { "CertificateNotYetValid", QSslError::CertificateNotYetValid },
   { "CertificateExpired", QSslError::CertificateExpired },
   { "InvalidNotBeforeField", QSslError::InvalidNotBeforeField },
   { "InvalidNotAfterField", QSslError::InvalidNotAfterField },
   { "SelfSignedCertificate", QSslError::SelfSignedCertificate },
   { "SelfSignedCertificateInChain", QSslError::SelfSignedCertificateInChain },
   { "UnableToGetLocalIssuerCertificate", QSslError::UnableToGetLocalIssuerCertificate },
   { "UnableToVerifyFirstCertificate", QSslError::UnableToVerifyFirstCertificate },
   { "CertificateRevoked", QSslError::CertificateRevoked },
   { "InvalidCaCertificate", QSslError::InvalidCaCertificate },
   { "PathLengthExceeded", QSslError::PathLengthExceeded },
   { "InvalidPurpose", QSslError::InvalidPurpose },
   { "CertificateUntrusted", QSslError::CertificateUntrusted },
   { "CertificateRejected", QSslError::CertificateRejected },
   { "SubjectIssuerMismatch", QSslError::SubjectIssuerMismatch },
   { "AuthorityIssuerSerialNumberMismatch", QSslError::AuthorityIssuerSerialNumberMismatch },
   { "NoPeerCertificate", QSslError::NoPeerCertificate },
   { "HostNameMismatch", QSslError::HostNameMismatch },
   { "NoSslSupport", QSslError::NoSslSupport },
   { "CertificateBlacklisted", QSslError::CertificateBlacklisted },
   { "UnspecifiedError", QSslError::UnspecifiedError },

};

QVector<PlastiQMetaObject*> PlastiQQSslError::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSslError::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSslError::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSslError", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslError::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSslError::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSslError *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSslError(); break;
        case 1: o = new QSslError(QSslError::SslError(stack[1].s_int64)); break;
        case 2: o = new QSslError(QSslError::SslError(stack[1].s_int64),
                    (*reinterpret_cast< QSslCertificate(*) >(stack[2].s_voidp))); break;
        case 3: o = new QSslError((*reinterpret_cast< QSslError(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSslError *p = new PlastiQQSslError();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslError *p = new PlastiQQSslError();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSslError *o = sc ? Q_NULLPTR : reinterpret_cast<QSslError*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSslCertificate *_r = new QSslCertificate(o->certificate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslCertificate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->error(); // HACK for SslError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: o->swap((*reinterpret_cast< QSslError(*) >(stack[1].s_voidp)));
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
        QSslError *o = reinterpret_cast<QSslError*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSslError::~PlastiQQSslError() {
    QSslError* o = reinterpret_cast<QSslError*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
