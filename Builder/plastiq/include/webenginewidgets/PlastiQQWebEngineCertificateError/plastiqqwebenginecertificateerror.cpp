#include "plastiqmethod.h"
#include "plastiqqwebenginecertificateerror.h"

#include <QWebEngineCertificateError> 
#include <QString>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineCertificateError::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineCertificateError::plastiqMethods = {
    { "error()", { "error", "", "Error", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorDescription()", { "errorDescription", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isOverridable()", { "isOverridable", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineCertificateError::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineCertificateError::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWebEngineCertificateError::plastiqConstants = {

    /* QWebEngineCertificateError::Error */
   { "SslPinnedKeyNotInCertificateChain", QWebEngineCertificateError::SslPinnedKeyNotInCertificateChain },
   { "CertificateCommonNameInvalid", QWebEngineCertificateError::CertificateCommonNameInvalid },
   { "CertificateDateInvalid", QWebEngineCertificateError::CertificateDateInvalid },
   { "CertificateAuthorityInvalid", QWebEngineCertificateError::CertificateAuthorityInvalid },
   { "CertificateContainsErrors", QWebEngineCertificateError::CertificateContainsErrors },
   { "CertificateNoRevocationMechanism", QWebEngineCertificateError::CertificateNoRevocationMechanism },
   { "CertificateUnableToCheckRevocation", QWebEngineCertificateError::CertificateUnableToCheckRevocation },
   { "CertificateRevoked", QWebEngineCertificateError::CertificateRevoked },
   { "CertificateInvalid", QWebEngineCertificateError::CertificateInvalid },
   { "CertificateWeakSignatureAlgorithm", QWebEngineCertificateError::CertificateWeakSignatureAlgorithm },
   { "CertificateNonUniqueName", QWebEngineCertificateError::CertificateNonUniqueName },
   { "CertificateWeakKey", QWebEngineCertificateError::CertificateWeakKey },
   { "CertificateNameConstraintViolation", QWebEngineCertificateError::CertificateNameConstraintViolation },
   { "CertificateValidityTooLong", QWebEngineCertificateError::CertificateValidityTooLong },
   { "CertificateTransparencyRequired", QWebEngineCertificateError::CertificateTransparencyRequired },

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineCertificateError::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWebEngineCertificateError::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWebEngineCertificateError::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWebEngineCertificateError", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineCertificateError::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineCertificateError::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineCertificateError *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineCertificateError *p = new PlastiQQWebEngineCertificateError();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineCertificateError *p = new PlastiQQWebEngineCertificateError();
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
        QWebEngineCertificateError *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineCertificateError*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QString _r = o->errorDescription();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->isOverridable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QWebEngineCertificateError *o = reinterpret_cast<QWebEngineCertificateError*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWebEngineCertificateError::~PlastiQQWebEngineCertificateError() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
