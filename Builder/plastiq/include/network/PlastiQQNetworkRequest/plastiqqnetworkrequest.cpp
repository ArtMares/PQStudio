#include "plastiqmethod.h"
#include "plastiqqnetworkrequest.h"

#include <QNetworkRequest> 
#include <QVariant>
#include <QObject>
#include <QByteArray>
#include <QSslConfiguration>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkRequest::plastiqConstructors = {
    { "QNetworkRequest()", { "QNetworkRequest", "", "QNetworkRequest*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkRequest(QUrl&)", { "QNetworkRequest", "QUrl&", "QNetworkRequest*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkRequest(QNetworkRequest&)", { "QNetworkRequest", "QNetworkRequest&", "QNetworkRequest*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkRequest::plastiqMethods = {
    { "attribute(enum)", { "attribute", "Attribute", "QVariant", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "attribute(enum,QVariant)", { "attribute", "Attribute,QVariant&", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasRawHeader(QByteArray)", { "hasRawHeader", "QByteArray&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "header(enum)", { "header", "KnownHeaders", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumRedirectsAllowed()", { "maximumRedirectsAllowed", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "originatingObject()", { "originatingObject", "", "QObject*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "priority()", { "priority", "", "Priority", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rawHeader(QByteArray)", { "rawHeader", "QByteArray&", "QByteArray", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAttribute(enum,QVariant)", { "setAttribute", "Attribute,QVariant&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeader(enum,QVariant)", { "setHeader", "KnownHeaders,QVariant&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumRedirectsAllowed(int)", { "setMaximumRedirectsAllowed", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOriginatingObject(QObject*)", { "setOriginatingObject", "QObject*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPriority(enum)", { "setPriority", "Priority", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRawHeader(QByteArray,QByteArray)", { "setRawHeader", "QByteArray&,QByteArray&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSslConfiguration(QSslConfiguration&)", { "setSslConfiguration", "QSslConfiguration&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUrl(QUrl&)", { "setUrl", "QUrl&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sslConfiguration()", { "sslConfiguration", "", "QSslConfiguration", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QNetworkRequest&)", { "swap", "QNetworkRequest&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 18, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkRequest::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkRequest::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkRequest::plastiqConstants = {

    /* QNetworkRequest::Attribute */
   { "HttpStatusCodeAttribute", QNetworkRequest::HttpStatusCodeAttribute },
   { "HttpReasonPhraseAttribute", QNetworkRequest::HttpReasonPhraseAttribute },
   { "RedirectionTargetAttribute", QNetworkRequest::RedirectionTargetAttribute },
   { "ConnectionEncryptedAttribute", QNetworkRequest::ConnectionEncryptedAttribute },
   { "CacheLoadControlAttribute", QNetworkRequest::CacheLoadControlAttribute },
   { "CacheSaveControlAttribute", QNetworkRequest::CacheSaveControlAttribute },
   { "SourceIsFromCacheAttribute", QNetworkRequest::SourceIsFromCacheAttribute },
   { "DoNotBufferUploadDataAttribute", QNetworkRequest::DoNotBufferUploadDataAttribute },
   { "HttpPipeliningAllowedAttribute", QNetworkRequest::HttpPipeliningAllowedAttribute },
   { "HttpPipeliningWasUsedAttribute", QNetworkRequest::HttpPipeliningWasUsedAttribute },
   { "CustomVerbAttribute", QNetworkRequest::CustomVerbAttribute },
   { "CookieLoadControlAttribute", QNetworkRequest::CookieLoadControlAttribute },
   { "AuthenticationReuseAttribute", QNetworkRequest::AuthenticationReuseAttribute },
   { "CookieSaveControlAttribute", QNetworkRequest::CookieSaveControlAttribute },
   { "MaximumDownloadBufferSizeAttribute", QNetworkRequest::MaximumDownloadBufferSizeAttribute },
   { "DownloadBufferAttribute", QNetworkRequest::DownloadBufferAttribute },
   { "SynchronousRequestAttribute", QNetworkRequest::SynchronousRequestAttribute },
   { "BackgroundRequestAttribute", QNetworkRequest::BackgroundRequestAttribute },
   { "SpdyAllowedAttribute", QNetworkRequest::SpdyAllowedAttribute },
   { "SpdyWasUsedAttribute", QNetworkRequest::SpdyWasUsedAttribute },
   { "EmitAllUploadProgressSignalsAttribute", QNetworkRequest::EmitAllUploadProgressSignalsAttribute },
   { "FollowRedirectsAttribute", QNetworkRequest::FollowRedirectsAttribute },
   { "HTTP2AllowedAttribute", QNetworkRequest::HTTP2AllowedAttribute },
   { "HTTP2WasUsedAttribute", QNetworkRequest::HTTP2WasUsedAttribute },
   { "User", QNetworkRequest::User },
   { "UserMax", QNetworkRequest::UserMax },

    /* QNetworkRequest::CacheLoadControl */
   { "AlwaysNetwork", QNetworkRequest::AlwaysNetwork },
   { "PreferNetwork", QNetworkRequest::PreferNetwork },
   { "PreferCache", QNetworkRequest::PreferCache },
   { "AlwaysCache", QNetworkRequest::AlwaysCache },

    /* QNetworkRequest::KnownHeaders */
   { "ContentTypeHeader", QNetworkRequest::ContentTypeHeader },
   { "ContentLengthHeader", QNetworkRequest::ContentLengthHeader },
   { "LocationHeader", QNetworkRequest::LocationHeader },
   { "LastModifiedHeader", QNetworkRequest::LastModifiedHeader },
   { "CookieHeader", QNetworkRequest::CookieHeader },
   { "SetCookieHeader", QNetworkRequest::SetCookieHeader },
   { "ContentDispositionHeader", QNetworkRequest::ContentDispositionHeader },
   { "UserAgentHeader", QNetworkRequest::UserAgentHeader },
   { "ServerHeader", QNetworkRequest::ServerHeader },

    /* QNetworkRequest::LoadControl */
   { "Automatic", QNetworkRequest::Automatic },
   { "Manual", QNetworkRequest::Manual },

    /* QNetworkRequest::Priority */
   { "HighPriority", QNetworkRequest::HighPriority },
   { "NormalPriority", QNetworkRequest::NormalPriority },
   { "LowPriority", QNetworkRequest::LowPriority },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkRequest::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkRequest::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkRequest::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkRequest", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkRequest::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkRequest::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkRequest *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkRequest(); break;
        case 1: o = new QNetworkRequest((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))); break;
        case 2: o = new QNetworkRequest((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkRequest *p = new PlastiQQNetworkRequest();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkRequest *p = new PlastiQQNetworkRequest();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 19) {
            id -= 19;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkRequest *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkRequest*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->attribute(QNetworkRequest::Attribute(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->attribute(QNetworkRequest::Attribute(stack[1].s_int64),
                    stack[2].s_variant));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->hasRawHeader(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->header(QNetworkRequest::KnownHeaders(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { int _r = o->maximumRedirectsAllowed();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QObject* _r = o->originatingObject();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 6: { qint64 _r = o->priority(); // HACK for Priority 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { QByteArray _r = o->rawHeader(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 8: o->setAttribute(QNetworkRequest::Attribute(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setHeader(QNetworkRequest::KnownHeaders(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setMaximumRedirectsAllowed(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setOriginatingObject(reinterpret_cast<QObject*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setPriority(QNetworkRequest::Priority(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setRawHeader(stack[1].s_bytearray,
                    stack[2].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setSslConfiguration((*reinterpret_cast< QSslConfiguration(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: { /* COPY OBJECT */
            QSslConfiguration *_r = new QSslConfiguration(o->sslConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: o->swap((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: { /* COPY OBJECT */
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
        QNetworkRequest *o = reinterpret_cast<QNetworkRequest*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkRequest::~PlastiQQNetworkRequest() {
    QNetworkRequest* o = reinterpret_cast<QNetworkRequest*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
