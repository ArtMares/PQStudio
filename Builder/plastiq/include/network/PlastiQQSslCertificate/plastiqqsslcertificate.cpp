#include "plastiqmethod.h"
#include "plastiqqsslcertificate.h"

#include <QSslCertificate> 
#include <QByteArray>
#include <QDateTime>
#include <QStringList>
#include <QSslKey>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSslCertificate::plastiqConstructors = {
    { "QSslCertificate(QIODevice*)", { "QSslCertificate", "QIODevice*", "QSslCertificate*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCertificate(QIODevice*,QSsl::EncodingFormat)", { "QSslCertificate", "QIODevice*,QSsl::EncodingFormat", "QSslCertificate*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCertificate()", { "QSslCertificate", "", "QSslCertificate*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCertificate(QByteArray)", { "QSslCertificate", "QByteArray&", "QSslCertificate*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCertificate(QByteArray,QSsl::EncodingFormat)", { "QSslCertificate", "QByteArray&,QSsl::EncodingFormat", "QSslCertificate*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCertificate(QSslCertificate&)", { "QSslCertificate", "QSslCertificate&", "QSslCertificate*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslCertificate::plastiqMethods = {
    { "clear()", { "clear", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "digest()", { "digest", "", "QByteArray", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "digest(enum)", { "digest", "QCryptographicHash::Algorithm", "QByteArray", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "effectiveDate()", { "effectiveDate", "", "QDateTime", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expiryDate()", { "expiryDate", "", "QDateTime", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handle()", { "handle", "", "Qt::HANDLE", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBlacklisted()", { "isBlacklisted", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSelfSigned()", { "isSelfSigned", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "issuerInfo(enum)", { "issuerInfo", "SubjectInfo", "QStringList", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "issuerInfo(QByteArray)", { "issuerInfo", "QByteArray&", "QStringList", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "publicKey()", { "publicKey", "", "QSslKey", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "serialNumber()", { "serialNumber", "", "QByteArray", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subjectInfo(enum)", { "subjectInfo", "SubjectInfo", "QStringList", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subjectInfo(QByteArray)", { "subjectInfo", "QByteArray&", "QStringList", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QSslCertificate&)", { "swap", "QSslCertificate&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDer()", { "toDer", "", "QByteArray", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPem()", { "toPem", "", "QByteArray", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toText()", { "toText", "", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "version()", { "version", "", "QByteArray", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "importPkcs12(QIODevice*,QSslKey*,QSslCertificate*)", { "importPkcs12", "QIODevice*,QSslKey*,QSslCertificate*", "bool", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "importPkcs12(QIODevice*,QSslKey*,QSslCertificate*,QList<QSslCertificate>*)", { "importPkcs12", "QIODevice*,QSslKey*,QSslCertificate*,QList<QSslCertificate>*", "bool", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "importPkcs12(QIODevice*,QSslKey*,QSslCertificate*,QList<QSslCertificate>*,QByteArray)", { "importPkcs12", "QIODevice*,QSslKey*,QSslCertificate*,QList<QSslCertificate>*,QByteArray&", "bool", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslCertificate::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslCertificate::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslCertificate::plastiqConstants = {

    /* QSslCertificate::SubjectInfo */
   { "Organization", QSslCertificate::Organization },
   { "CommonName", QSslCertificate::CommonName },
   { "LocalityName", QSslCertificate::LocalityName },
   { "OrganizationalUnitName", QSslCertificate::OrganizationalUnitName },
   { "CountryName", QSslCertificate::CountryName },
   { "StateOrProvinceName", QSslCertificate::StateOrProvinceName },
   { "DistinguishedNameQualifier", QSslCertificate::DistinguishedNameQualifier },
   { "SerialNumber", QSslCertificate::SerialNumber },
   { "EmailAddress", QSslCertificate::EmailAddress },

};

QVector<PlastiQMetaObject*> PlastiQQSslCertificate::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSslCertificate::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSslCertificate::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSslCertificate", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslCertificate::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSslCertificate::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSslCertificate *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSslCertificate(reinterpret_cast<QIODevice*>(stack[1].s_voidp)); break;
        /*case 1: o = new QSslCertificate(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat); break;*/
        case 2: o = new QSslCertificate(); break;
        case 3: o = new QSslCertificate(stack[1].s_bytearray); break;
        /*case 4: o = new QSslCertificate(stack[1].s_bytearray,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat); break;*/
        case 5: o = new QSslCertificate((*reinterpret_cast< QSslCertificate(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSslCertificate *p = new PlastiQQSslCertificate();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslCertificate *p = new PlastiQQSslCertificate();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 23) {
            id -= 23;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSslCertificate *o = sc ? Q_NULLPTR : reinterpret_cast<QSslCertificate*>(object->plastiq_data());

        switch(id) {
        case 0: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 1: { QByteArray _r = o->digest();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 2: { QByteArray _r = o->digest(QCryptographicHash::Algorithm(stack[1].s_int64));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 3: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->effectiveDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->expiryDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: /* o->handle() | ret: `Qt::HANDLE` */ break;
        case 6: { bool _r = o->isBlacklisted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isSelfSigned();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->issuerInfo(QSslCertificate::SubjectInfo(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->issuerInfo(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QSslKey *_r = new QSslKey(o->publicKey());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslKey";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { QByteArray _r = o->serialNumber();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 13: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->subjectInfo(QSslCertificate::SubjectInfo(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->subjectInfo(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: o->swap((*reinterpret_cast< QSslCertificate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: { QByteArray _r = o->toDer();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 17: { QByteArray _r = o->toPem();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 18: { QString _r = o->toText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: { QByteArray _r = o->version();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 20: { bool _r = sc ? QSslCertificate::importPkcs12(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<QSslKey*>(stack[2].s_voidp),
                    reinterpret_cast<QSslCertificate*>(stack[3].s_voidp)) : o->importPkcs12(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<QSslKey*>(stack[2].s_voidp),
                    reinterpret_cast<QSslCertificate*>(stack[3].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = sc ? QSslCertificate::importPkcs12(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<QSslKey*>(stack[2].s_voidp),
                    reinterpret_cast<QSslCertificate*>(stack[3].s_voidp),
                    reinterpret_cast<QList<QSslCertificate>*>(stack[4].s_voidp)) : o->importPkcs12(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<QSslKey*>(stack[2].s_voidp),
                    reinterpret_cast<QSslCertificate*>(stack[3].s_voidp),
                    reinterpret_cast<QList<QSslCertificate>*>(stack[4].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = sc ? QSslCertificate::importPkcs12(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<QSslKey*>(stack[2].s_voidp),
                    reinterpret_cast<QSslCertificate*>(stack[3].s_voidp),
                    reinterpret_cast<QList<QSslCertificate>*>(stack[4].s_voidp),
                    stack[5].s_bytearray) : o->importPkcs12(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<QSslKey*>(stack[2].s_voidp),
                    reinterpret_cast<QSslCertificate*>(stack[3].s_voidp),
                    reinterpret_cast<QList<QSslCertificate>*>(stack[4].s_voidp),
                    stack[5].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QSslCertificate *o = reinterpret_cast<QSslCertificate*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSslCertificate::~PlastiQQSslCertificate() {
    QSslCertificate* o = reinterpret_cast<QSslCertificate*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
