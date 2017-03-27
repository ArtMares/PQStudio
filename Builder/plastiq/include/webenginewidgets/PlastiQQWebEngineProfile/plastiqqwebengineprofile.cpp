#include "plastiqmethod.h"
#include "plastiqqwebengineprofile.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QWebEngineProfile> 
#include <QString>
#include <QWebEngineCookieStore>
#include <QWebEngineScriptCollection>
#include <QWebEngineSettings>
#include <QStringList>
#include <QWebEngineUrlSchemeHandler>
#include <QWebEngineDownloadItem>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineProfile::plastiqConstructors = {
    { "QWebEngineProfile()", { "QWebEngineProfile", "", "QWebEngineProfile*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWebEngineProfile(QObject*)", { "QWebEngineProfile", "QObject*", "QWebEngineProfile*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWebEngineProfile(QString)", { "QWebEngineProfile", "QString&", "QWebEngineProfile*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWebEngineProfile(QString,QObject*)", { "QWebEngineProfile", "QString&,QObject*", "QWebEngineProfile*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineProfile::plastiqMethods = {
    { "cachePath()", { "cachePath", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearAllVisitedLinks()", { "clearAllVisitedLinks", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearHttpCache()", { "clearHttpCache", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearVisitedLinks(QList<QUrl>&)", { "clearVisitedLinks", "QList<QUrl>&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cookieStore()", { "cookieStore", "", "QWebEngineCookieStore*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "httpAcceptLanguage()", { "httpAcceptLanguage", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "httpCacheMaximumSize()", { "httpCacheMaximumSize", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "httpCacheType()", { "httpCacheType", "", "HttpCacheType", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "httpUserAgent()", { "httpUserAgent", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "installUrlSchemeHandler(QByteArray,QWebEngineUrlSchemeHandler*)", { "installUrlSchemeHandler", "QByteArray&,QWebEngineUrlSchemeHandler*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isOffTheRecord()", { "isOffTheRecord", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSpellCheckEnabled()", { "isSpellCheckEnabled", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "persistentCookiesPolicy()", { "persistentCookiesPolicy", "", "PersistentCookiesPolicy", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "persistentStoragePath()", { "persistentStoragePath", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAllUrlSchemeHandlers()", { "removeAllUrlSchemeHandlers", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeUrlScheme(QByteArray)", { "removeUrlScheme", "QByteArray&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeUrlSchemeHandler(QWebEngineUrlSchemeHandler*)", { "removeUrlSchemeHandler", "QWebEngineUrlSchemeHandler*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scripts()", { "scripts", "", "QWebEngineScriptCollection*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCachePath(QString)", { "setCachePath", "QString&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHttpAcceptLanguage(QString)", { "setHttpAcceptLanguage", "QString&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHttpCacheMaximumSize(int)", { "setHttpCacheMaximumSize", "int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHttpCacheType(enum)", { "setHttpCacheType", "QWebEngineProfile::HttpCacheType", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHttpUserAgent(QString)", { "setHttpUserAgent", "QString&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPersistentCookiesPolicy(enum)", { "setPersistentCookiesPolicy", "QWebEngineProfile::PersistentCookiesPolicy", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPersistentStoragePath(QString)", { "setPersistentStoragePath", "QString&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRequestInterceptor(QWebEngineUrlRequestInterceptor*)", { "setRequestInterceptor", "QWebEngineUrlRequestInterceptor*", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpellCheckEnabled(bool)", { "setSpellCheckEnabled", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpellCheckLanguages(QStringList&)", { "setSpellCheckLanguages", "QStringList&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "settings()", { "settings", "", "QWebEngineSettings*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spellCheckLanguages()", { "spellCheckLanguages", "", "QStringList", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "storageName()", { "storageName", "", "QString", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "urlSchemeHandler(QByteArray)", { "urlSchemeHandler", "QByteArray&", "const QWebEngineUrlSchemeHandler*", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visitedLinksContainsUrl(QUrl&)", { "visitedLinksContainsUrl", "QUrl&", "bool", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultProfile()", { "defaultProfile", "", "QWebEngineProfile*", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineProfile::plastiqSignals = {
    { "downloadRequested(QWebEngineDownloadItem*)", { "downloadRequested", "QWebEngineDownloadItem*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineProfile::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWebEngineProfile::plastiqConstants = {

    /* QWebEngineProfile::HttpCacheType */
   { "MemoryHttpCache", QWebEngineProfile::MemoryHttpCache },
   { "DiskHttpCache", QWebEngineProfile::DiskHttpCache },
   { "NoCache", QWebEngineProfile::NoCache },

    /* QWebEngineProfile::PersistentCookiesPolicy */
   { "NoPersistentCookies", QWebEngineProfile::NoPersistentCookies },
   { "AllowPersistentCookies", QWebEngineProfile::AllowPersistentCookies },
   { "ForcePersistentCookies", QWebEngineProfile::ForcePersistentCookies },

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineProfile::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWebEngineProfile::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWebEngineProfile::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWebEngineProfile", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineProfile::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineProfile::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineProfile *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWebEngineProfile(); break;
        case 1: o = new QWebEngineProfile(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QWebEngineProfile(stack[1].s_string); break;
        case 3: o = new QWebEngineProfile(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineProfile *p = new PlastiQQWebEngineProfile();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineProfile *p = new PlastiQQWebEngineProfile();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 34) {
            id -= 34;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEngineProfile *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineProfile*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->cachePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: o->clearAllVisitedLinks();
                stack[0].type = PlastiQ::Void; break;
        case 2: o->clearHttpCache();
                stack[0].type = PlastiQ::Void; break;
        case 3: o->clearVisitedLinks((*reinterpret_cast< QList<QUrl>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QWebEngineCookieStore* _r = o->cookieStore();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QWebEngineCookieStore"; } break;
        case 5: { QString _r = o->httpAcceptLanguage();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { int _r = o->httpCacheMaximumSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { qint64 _r = o->httpCacheType(); // HACK for HttpCacheType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { QString _r = o->httpUserAgent();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: o->installUrlSchemeHandler(stack[1].s_bytearray,
                    reinterpret_cast<QWebEngineUrlSchemeHandler*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: { bool _r = o->isOffTheRecord();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isSpellCheckEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { qint64 _r = o->persistentCookiesPolicy(); // HACK for PersistentCookiesPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: { QString _r = o->persistentStoragePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: o->removeAllUrlSchemeHandlers();
                stack[0].type = PlastiQ::Void; break;
        case 15: o->removeUrlScheme(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->removeUrlSchemeHandler(reinterpret_cast<QWebEngineUrlSchemeHandler*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 17: { QWebEngineScriptCollection* _r = o->scripts();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWebEngineScriptCollection"; } break;
        case 18: o->setCachePath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setHttpAcceptLanguage(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setHttpCacheMaximumSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setHttpCacheType(QWebEngineProfile::HttpCacheType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setHttpUserAgent(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setPersistentCookiesPolicy(QWebEngineProfile::PersistentCookiesPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setPersistentStoragePath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setRequestInterceptor(reinterpret_cast<QWebEngineUrlRequestInterceptor*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setSpellCheckEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setSpellCheckLanguages((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: { QWebEngineSettings* _r = o->settings();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QWebEngineSettings"; } break;
        case 29: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->spellCheckLanguages());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { QString _r = o->storageName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 31: { QWebEngineUrlSchemeHandler* _r = const_cast<QWebEngineUrlSchemeHandler*>(o->urlSchemeHandler(stack[1].s_bytearray));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QWebEngineUrlSchemeHandler"; } break;
        case 32: { bool _r = o->visitedLinksContainsUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: { QWebEngineProfile* _r = sc ? QWebEngineProfile::defaultProfile() : o->defaultProfile();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWebEngineProfile"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWebEngineProfile *o = reinterpret_cast<QWebEngineProfile*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWebEngineProfile::downloadRequested,
            [=](QWebEngineDownloadItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QWebEngineDownloadItem";
                PlastiQ_activate(sender, "downloadRequested", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWebEngineProfile *o = reinterpret_cast<QWebEngineProfile*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWebEngineProfile *o = reinterpret_cast<QWebEngineProfile*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWebEngineProfile *o = reinterpret_cast<QWebEngineProfile*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWebEngineProfile::~PlastiQQWebEngineProfile() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
