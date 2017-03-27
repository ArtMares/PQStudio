#include "plastiqmethod.h"
#include "plastiqqnetworkproxy.h"

#include <QNetworkProxy> 
#include <QVariant>
#include <QString>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxy::plastiqConstructors = {
    { "QNetworkProxy()", { "QNetworkProxy", "", "QNetworkProxy*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxy(enum)", { "QNetworkProxy", "ProxyType", "QNetworkProxy*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxy(enum,QString)", { "QNetworkProxy", "ProxyType,QString&", "QNetworkProxy*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxy(enum,QString,int)", { "QNetworkProxy", "ProxyType,QString&,quint16", "QNetworkProxy*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxy(enum,QString,int,QString)", { "QNetworkProxy", "ProxyType,QString&,quint16,QString&", "QNetworkProxy*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxy(enum,QString,int,QString,QString)", { "QNetworkProxy", "ProxyType,QString&,quint16,QString&,QString&", "QNetworkProxy*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxy(QNetworkProxy&)", { "QNetworkProxy", "QNetworkProxy&", "QNetworkProxy*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxy::plastiqMethods = {
    { "capabilities()", { "capabilities", "", "Capabilities", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasRawHeader(QByteArray)", { "hasRawHeader", "QByteArray&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "header(enum)", { "header", "QNetworkRequest::KnownHeaders", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hostName()", { "hostName", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCachingProxy()", { "isCachingProxy", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTransparentProxy()", { "isTransparentProxy", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "password()", { "password", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "port()", { "port", "", "quint16", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rawHeader(QByteArray)", { "rawHeader", "QByteArray&", "QByteArray", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCapabilities(enum)", { "setCapabilities", "Capabilities", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeader(enum,QVariant)", { "setHeader", "QNetworkRequest::KnownHeaders,QVariant&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHostName(QString)", { "setHostName", "QString&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPassword(QString)", { "setPassword", "QString&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPort(int)", { "setPort", "quint16", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRawHeader(QByteArray,QByteArray)", { "setRawHeader", "QByteArray&,QByteArray&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setType(enum)", { "setType", "QNetworkProxy::ProxyType", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUser(QString)", { "setUser", "QString&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QNetworkProxy&)", { "swap", "QNetworkProxy&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "QNetworkProxy::ProxyType", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "user()", { "user", "", "QString", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "applicationProxy()", { "applicationProxy", "", "QNetworkProxy", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setApplicationProxy(QNetworkProxy&)", { "setApplicationProxy", "QNetworkProxy&", "void", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxy::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkProxy::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkProxy::plastiqConstants = {

    /* QNetworkProxy::Capability */
   { "TunnelingCapability", QNetworkProxy::TunnelingCapability },
   { "ListeningCapability", QNetworkProxy::ListeningCapability },
   { "UdpTunnelingCapability", QNetworkProxy::UdpTunnelingCapability },
   { "CachingCapability", QNetworkProxy::CachingCapability },
   { "HostNameLookupCapability", QNetworkProxy::HostNameLookupCapability },
   { "SctpTunnelingCapability", QNetworkProxy::SctpTunnelingCapability },
   { "SctpListeningCapability", QNetworkProxy::SctpListeningCapability },

    /* QNetworkProxy::ProxyType */
   { "DefaultProxy", QNetworkProxy::DefaultProxy },
   { "Socks5Proxy", QNetworkProxy::Socks5Proxy },
   { "NoProxy", QNetworkProxy::NoProxy },
   { "HttpProxy", QNetworkProxy::HttpProxy },
   { "HttpCachingProxy", QNetworkProxy::HttpCachingProxy },
   { "FtpCachingProxy", QNetworkProxy::FtpCachingProxy },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkProxy::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkProxy::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkProxy::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkProxy", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkProxy::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkProxy::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkProxy *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkProxy(); break;
        case 1: o = new QNetworkProxy(QNetworkProxy::ProxyType(stack[1].s_int64)); break;
        case 2: o = new QNetworkProxy(QNetworkProxy::ProxyType(stack[1].s_int64),
                    stack[2].s_string); break;
        case 3: o = new QNetworkProxy(QNetworkProxy::ProxyType(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_int); break;
        case 4: o = new QNetworkProxy(QNetworkProxy::ProxyType(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_int,
                    stack[4].s_string); break;
        case 5: o = new QNetworkProxy(QNetworkProxy::ProxyType(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_int,
                    stack[4].s_string,
                    stack[5].s_string); break;
        case 6: o = new QNetworkProxy((*reinterpret_cast< QNetworkProxy(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkProxy *p = new PlastiQQNetworkProxy();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkProxy *p = new PlastiQQNetworkProxy();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 22) {
            id -= 22;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkProxy *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkProxy*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->capabilities(); // HACK for Capabilities 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->hasRawHeader(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->header(QNetworkRequest::KnownHeaders(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { QString _r = o->hostName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { bool _r = o->isCachingProxy();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isTransparentProxy();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { QString _r = o->password();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: /* UNSUPPORTED_RETURN_VALUE o->port() | ret: `quint16` */ break;
        case 8: { QByteArray _r = o->rawHeader(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 9: o->setCapabilities(QNetworkProxy::Capabilities(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setHeader(QNetworkRequest::KnownHeaders(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setHostName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setPassword(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setPort(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setRawHeader(stack[1].s_bytearray,
                    stack[2].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setType(QNetworkProxy::ProxyType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setUser(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->swap((*reinterpret_cast< QNetworkProxy(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: { qint64 _r = o->type(); // HACK for QNetworkProxy::ProxyType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { QString _r = o->user();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 20: { /* COPY OBJECT */
            QNetworkProxy *_r = sc ? new QNetworkProxy(QNetworkProxy::applicationProxy()) : new QNetworkProxy(o->applicationProxy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkProxy";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: if(sc) { QNetworkProxy::setApplicationProxy((*reinterpret_cast< QNetworkProxy(*) >(stack[1].s_voidp))); } else { o->setApplicationProxy((*reinterpret_cast< QNetworkProxy(*) >(stack[1].s_voidp))); }
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
        QNetworkProxy *o = reinterpret_cast<QNetworkProxy*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkProxy::~PlastiQQNetworkProxy() {
    QNetworkProxy* o = reinterpret_cast<QNetworkProxy*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
