#include "plastiqmethod.h"
#include "plastiqqnetworkaccessmanager.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QNetworkAccessManager> 
#include <QNetworkConfiguration>
#include <QAbstractNetworkCache>
#include <QNetworkCookieJar>
#include <QNetworkReply>
#include <QNetworkProxy>
#include <QNetworkProxyFactory>
#include <QStringList>
#include <QNetworkRequest>
#include <QIODevice>
#include <QAuthenticator>
#include <QSslPreSharedKeyAuthenticator>
#include <QList>
#include <QSslError>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkAccessManager::plastiqConstructors = {
    { "QNetworkAccessManager()", { "QNetworkAccessManager", "", "QNetworkAccessManager*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkAccessManager(QObject*)", { "QNetworkAccessManager", "QObject*", "QNetworkAccessManager*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkAccessManager::plastiqMethods = {
    { "activeConfiguration()", { "activeConfiguration", "", "QNetworkConfiguration", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cache()", { "cache", "", "QAbstractNetworkCache*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearAccessCache()", { "clearAccessCache", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "configuration()", { "configuration", "", "QNetworkConfiguration", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHost(QString)", { "connectToHost", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHost(QString,int)", { "connectToHost", "QString&,quint16", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString)", { "connectToHostEncrypted", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString,int)", { "connectToHostEncrypted", "QString&,quint16", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectToHostEncrypted(QString,int,QSslConfiguration&)", { "connectToHostEncrypted", "QString&,quint16,QSslConfiguration&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cookieJar()", { "cookieJar", "", "QNetworkCookieJar*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deleteResource(QNetworkRequest&)", { "deleteResource", "QNetworkRequest&", "QNetworkReply*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "get(QNetworkRequest&)", { "get", "QNetworkRequest&", "QNetworkReply*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "head(QNetworkRequest&)", { "head", "QNetworkRequest&", "QNetworkReply*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "networkAccessible()", { "networkAccessible", "", "NetworkAccessibility", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "post(QNetworkRequest&,QIODevice*)", { "post", "QNetworkRequest&,QIODevice*", "QNetworkReply*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "post(QNetworkRequest&,QByteArray)", { "post", "QNetworkRequest&,QByteArray&", "QNetworkReply*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "post(QNetworkRequest&,QHttpMultiPart*)", { "post", "QNetworkRequest&,QHttpMultiPart*", "QNetworkReply*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "proxy()", { "proxy", "", "QNetworkProxy", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "proxyFactory()", { "proxyFactory", "", "QNetworkProxyFactory*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "put(QNetworkRequest&,QIODevice*)", { "put", "QNetworkRequest&,QIODevice*", "QNetworkReply*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "put(QNetworkRequest&,QByteArray)", { "put", "QNetworkRequest&,QByteArray&", "QNetworkReply*", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "put(QNetworkRequest&,QHttpMultiPart*)", { "put", "QNetworkRequest&,QHttpMultiPart*", "QNetworkReply*", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sendCustomRequest(QNetworkRequest&,QByteArray)", { "sendCustomRequest", "QNetworkRequest&,QByteArray&", "QNetworkReply*", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sendCustomRequest(QNetworkRequest&,QByteArray,QIODevice*)", { "sendCustomRequest", "QNetworkRequest&,QByteArray&,QIODevice*", "QNetworkReply*", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sendCustomRequest(QNetworkRequest&,QByteArray,QByteArray)", { "sendCustomRequest", "QNetworkRequest&,QByteArray&,QByteArray&", "QNetworkReply*", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sendCustomRequest(QNetworkRequest&,QByteArray,QHttpMultiPart*)", { "sendCustomRequest", "QNetworkRequest&,QByteArray&,QHttpMultiPart*", "QNetworkReply*", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCache(QAbstractNetworkCache*)", { "setCache", "QAbstractNetworkCache*", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setConfiguration(QNetworkConfiguration&)", { "setConfiguration", "QNetworkConfiguration&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCookieJar(QNetworkCookieJar*)", { "setCookieJar", "QNetworkCookieJar*", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNetworkAccessible(enum)", { "setNetworkAccessible", "NetworkAccessibility", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProxy(QNetworkProxy&)", { "setProxy", "QNetworkProxy&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProxyFactory(QNetworkProxyFactory*)", { "setProxyFactory", "QNetworkProxyFactory*", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedSchemes()", { "supportedSchemes", "", "QStringList", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createRequest(enum,QNetworkRequest&)", { "createRequest", "Operation,QNetworkRequest&", "QNetworkReply*", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "createRequest(enum,QNetworkRequest&,QIODevice*)", { "createRequest", "Operation,QNetworkRequest&,QIODevice*", "QNetworkReply*", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkAccessManager::plastiqSignals = {
    { "authenticationRequired(QNetworkReply*,QAuthenticator*)", { "authenticationRequired", "QNetworkReply*,QAuthenticator*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "encrypted(QNetworkReply*)", { "encrypted", "QNetworkReply*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished(QNetworkReply*)", { "finished", "QNetworkReply*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "networkAccessibleChanged(enum)", { "networkAccessibleChanged", "QNetworkAccessManager::NetworkAccessibility", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "preSharedKeyAuthenticationRequired(QNetworkReply*,QSslPreSharedKeyAuthenticator*)", { "preSharedKeyAuthenticationRequired", "QNetworkReply*,QSslPreSharedKeyAuthenticator*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "proxyAuthenticationRequired(QNetworkProxy&,QAuthenticator*)", { "proxyAuthenticationRequired", "QNetworkProxy&,QAuthenticator*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sslErrors(QNetworkReply*,QList<QSslError>&)", { "sslErrors", "QNetworkReply*,QList<QSslError>&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkAccessManager::plastiqProperties = {
    { "networkAccessible", { "networkAccessible", "long", "setNetworkAccessible", "networkAccessible" } },

};

QHash<QByteArray, long> PlastiQQNetworkAccessManager::plastiqConstants = {

    /* QNetworkAccessManager::NetworkAccessibility */
   { "UnknownAccessibility", QNetworkAccessManager::UnknownAccessibility },
   { "NotAccessible", QNetworkAccessManager::NotAccessible },
   { "Accessible", QNetworkAccessManager::Accessible },

    /* QNetworkAccessManager::Operation */
   { "HeadOperation", QNetworkAccessManager::HeadOperation },
   { "GetOperation", QNetworkAccessManager::GetOperation },
   { "PutOperation", QNetworkAccessManager::PutOperation },
   { "PostOperation", QNetworkAccessManager::PostOperation },
   { "DeleteOperation", QNetworkAccessManager::DeleteOperation },
   { "CustomOperation", QNetworkAccessManager::CustomOperation },
   { "UnknownOperation", QNetworkAccessManager::UnknownOperation },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkAccessManager::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQNetworkAccessManager::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQNetworkAccessManager::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QNetworkAccessManager", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkAccessManager::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQNetworkAccessManagerWrapper : public QNetworkAccessManager {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQNetworkAccessManagerWrapper(QObject *parent = Q_NULLPTR)
         : QNetworkAccessManager(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QNetworkReply* createRequest(Operation op, const QNetworkRequest &req, QIODevice *outgoingData = Q_NULLPTR) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QNetworkReply* createRequest(Operation,const QNetworkRequest&,QIODevice*=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int64 = op;
            stack[1].name = QByteArrayLiteral("Operation");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_voidp = new QNetworkRequest(req) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QNetworkRequest");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_voidp = reinterpret_cast<void*>(outgoingData);
            stack[3].name = QByteArrayLiteral("QIODevice");
            stack[3].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QNetworkReply* _r = reinterpret_cast<QNetworkReply*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QNetworkAccessManager::createRequest(op,req,outgoingData);
    }

    QNetworkReply* PlastiQParentCall_createRequest(Operation op, const QNetworkRequest &req, QIODevice *outgoingData = Q_NULLPTR) {
        return QNetworkAccessManager::createRequest(op,req,outgoingData);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QNetworkAccessManager::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QNetworkAccessManager::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QNetworkAccessManager::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QNetworkAccessManager::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QNetworkAccessManager::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QNetworkAccessManager::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkAccessManager::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QNetworkAccessManager::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkAccessManager::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QNetworkAccessManager::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkAccessManager::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QNetworkAccessManager::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkAccessManager::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QNetworkAccessManager::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkAccessManager::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QNetworkAccessManager::timerEvent(event);
    }

};

void PlastiQQNetworkAccessManager::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQNetworkAccessManagerWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQNetworkAccessManagerWrapper(); break;
        case 1: o = new PlastiQQNetworkAccessManagerWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQNetworkAccessManager *p = new PlastiQQNetworkAccessManager();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkAccessManager *p = new PlastiQQNetworkAccessManager();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 35) {
            id -= 35;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkAccessManager *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkAccessManager*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QNetworkConfiguration *_r = new QNetworkConfiguration(o->activeConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QAbstractNetworkCache* _r = o->cache();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractNetworkCache"; } break;
        case 2: o->clearAccessCache();
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QNetworkConfiguration *_r = new QNetworkConfiguration(o->configuration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->connectToHost(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->connectToHost(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->connectToHostEncrypted(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->connectToHostEncrypted(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->connectToHostEncrypted(stack[1].s_string,
                    stack[2].s_int,
                    (*reinterpret_cast< QSslConfiguration(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: { QNetworkCookieJar* _r = o->cookieJar();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkCookieJar"; } break;
        case 10: { QNetworkReply* _r = o->deleteResource((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 11: { QNetworkReply* _r = o->get((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 12: { QNetworkReply* _r = o->head((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 13: { qint64 _r = o->networkAccessible(); // HACK for NetworkAccessibility 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { QNetworkReply* _r = o->post((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QIODevice*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 15: { QNetworkReply* _r = o->post((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 16: { QNetworkReply* _r = o->post((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QHttpMultiPart*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 17: { /* COPY OBJECT */
            QNetworkProxy *_r = new QNetworkProxy(o->proxy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkProxy";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { QNetworkProxyFactory* _r = o->proxyFactory();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QNetworkProxyFactory"; } break;
        case 19: { QNetworkReply* _r = o->put((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QIODevice*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 20: { QNetworkReply* _r = o->put((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 21: { QNetworkReply* _r = o->put((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QHttpMultiPart*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 22: { QNetworkReply* _r = o->sendCustomRequest((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 23: { QNetworkReply* _r = o->sendCustomRequest((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray,
                    reinterpret_cast<QIODevice*>(stack[3].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 24: { QNetworkReply* _r = o->sendCustomRequest((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray,
                    stack[3].s_bytearray);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 25: { QNetworkReply* _r = o->sendCustomRequest((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray,
                    reinterpret_cast<QHttpMultiPart*>(stack[3].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 26: o->setCache(reinterpret_cast<QAbstractNetworkCache*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setConfiguration((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setCookieJar(reinterpret_cast<QNetworkCookieJar*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setNetworkAccessible(QNetworkAccessManager::NetworkAccessibility(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setProxy((*reinterpret_cast< QNetworkProxy(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setProxyFactory(reinterpret_cast<QNetworkProxyFactory*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 32: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedSchemes());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { QNetworkReply* _r;
                if (isWrapper) _r = ((PlastiQQNetworkAccessManagerWrapper*)o)->PlastiQParentCall_createRequest(QNetworkAccessManager::Operation(stack[1].s_int64),
                    (*reinterpret_cast< QNetworkRequest(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;
        case 34: { QNetworkReply* _r;
                if (isWrapper) _r = ((PlastiQQNetworkAccessManagerWrapper*)o)->PlastiQParentCall_createRequest(QNetworkAccessManager::Operation(stack[1].s_int64),
                    (*reinterpret_cast< QNetworkRequest(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QIODevice*>(stack[3].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QNetworkReply"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QNetworkAccessManager *o = reinterpret_cast<QNetworkAccessManager*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QNetworkAccessManager::authenticationRequired,
            [=](QNetworkReply* arg0, QAuthenticator* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QNetworkReply";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QAuthenticator";
                PlastiQ_activate(sender, "authenticationRequired", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QNetworkAccessManager::encrypted,
            [=](QNetworkReply* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QNetworkReply";
                PlastiQ_activate(sender, "encrypted", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QNetworkAccessManager::finished,
            [=](QNetworkReply* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QNetworkReply";
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QNetworkAccessManager::networkAccessibleChanged,
            [=](QNetworkAccessManager::NetworkAccessibility arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QNetworkAccessManager::NetworkAccessibility";
                PlastiQ_activate(sender, "networkAccessibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QNetworkAccessManager::preSharedKeyAuthenticationRequired,
            [=](QNetworkReply* arg0, QSslPreSharedKeyAuthenticator* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QNetworkReply";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QSslPreSharedKeyAuthenticator";
                PlastiQ_activate(sender, "preSharedKeyAuthenticationRequired", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QNetworkAccessManager::proxyAuthenticationRequired,
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

        case 6: QObject::connect(o, &QNetworkAccessManager::sslErrors,
            [=](QNetworkReply* arg0, const QList<QSslError>& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QNetworkReply";
                    cstack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QList<QSslError>&>(arg1));
                    cstack[1].type = PlastiQ::QObject; cstack[1].name = "QList<QSslError>";
                    cstack[1].isRef = true;
                PlastiQ_activate(sender, "sslErrors", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QNetworkAccessManager *o = reinterpret_cast<QNetworkAccessManager*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QNetworkAccessManager *o = reinterpret_cast<QNetworkAccessManager*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QNetworkAccessManager *o = reinterpret_cast<QNetworkAccessManager*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQNetworkAccessManager::~PlastiQQNetworkAccessManager() {
    QNetworkAccessManager* o = reinterpret_cast<QNetworkAccessManager*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
