#include "plastiqmethod.h"
#include "plastiqqurl.h"

#include <QUrl> 
#include <QString>
#include <QByteArray>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQUrl::plastiqConstructors = {
    { "QUrl()", { "QUrl", "", "QUrl*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUrl(QUrl&)", { "QUrl", "QUrl&", "QUrl*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUrl(QString)", { "QUrl", "QString&", "QUrl*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUrl(QString,enum)", { "QUrl", "QString&,ParsingMode", "QUrl*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUrl(QUrl&&)", { "QUrl", "QUrl&&", "QUrl*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUrl::plastiqMethods = {
    { "adjusted(enum)", { "adjusted", "FormattingOptions", "QUrl", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "authority()", { "authority", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "authority(enum)", { "authority", "ComponentFormattingOptions", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName(enum)", { "fileName", "ComponentFormattingOptions", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fragment()", { "fragment", "", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fragment(enum)", { "fragment", "ComponentFormattingOptions", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFragment()", { "hasFragment", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasQuery()", { "hasQuery", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "host()", { "host", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "host(enum)", { "host", "ComponentFormattingOptions", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLocalFile()", { "isLocalFile", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isParentOf(QUrl&)", { "isParentOf", "QUrl&", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRelative()", { "isRelative", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matches(QUrl&,enum)", { "matches", "QUrl&,FormattingOptions", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "password()", { "password", "", "QString", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "password(enum)", { "password", "ComponentFormattingOptions", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "path()", { "path", "", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "path(enum)", { "path", "ComponentFormattingOptions", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "port()", { "port", "", "int", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "port(int)", { "port", "int", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "query()", { "query", "", "QString", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "query(enum)", { "query", "ComponentFormattingOptions", "QString", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolved(QUrl&)", { "resolved", "QUrl&", "QUrl", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scheme()", { "scheme", "", "QString", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAuthority(QString)", { "setAuthority", "QString&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAuthority(QString,enum)", { "setAuthority", "QString&,ParsingMode", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFragment(QString)", { "setFragment", "QString&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFragment(QString,enum)", { "setFragment", "QString&,ParsingMode", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHost(QString)", { "setHost", "QString&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHost(QString,enum)", { "setHost", "QString&,ParsingMode", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPassword(QString)", { "setPassword", "QString&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPassword(QString,enum)", { "setPassword", "QString&,ParsingMode", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPath(QString)", { "setPath", "QString&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPath(QString,enum)", { "setPath", "QString&,ParsingMode", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPort(int)", { "setPort", "int", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuery(QString)", { "setQuery", "QString&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuery(QString,enum)", { "setQuery", "QString&,ParsingMode", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuery(QUrlQuery&)", { "setQuery", "QUrlQuery&", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScheme(QString)", { "setScheme", "QString&", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUrl(QString)", { "setUrl", "QString&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUrl(QString,enum)", { "setUrl", "QString&,ParsingMode", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUserInfo(QString)", { "setUserInfo", "QString&", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUserInfo(QString,enum)", { "setUserInfo", "QString&,ParsingMode", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUserName(QString)", { "setUserName", "QString&", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUserName(QString,enum)", { "setUserName", "QString&,ParsingMode", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QUrl&)", { "swap", "QUrl&", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCFURL()", { "toCFURL", "", "CFURLRef", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDisplayString()", { "toDisplayString", "", "QString", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDisplayString(enum)", { "toDisplayString", "FormattingOptions", "QString", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toEncoded()", { "toEncoded", "", "QByteArray", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toEncoded(enum)", { "toEncoded", "FormattingOptions", "QByteArray", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLocalFile()", { "toLocalFile", "", "QString", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(enum)", { "toString", "FormattingOptions", "QString", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topLevelDomain()", { "topLevelDomain", "", "QString", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topLevelDomain(enum)", { "topLevelDomain", "ComponentFormattingOptions", "QString", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QString", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url(enum)", { "url", "FormattingOptions", "QString", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "userInfo()", { "userInfo", "", "QString", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "userInfo(enum)", { "userInfo", "ComponentFormattingOptions", "QString", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "userName()", { "userName", "", "QString", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "userName(enum)", { "userName", "ComponentFormattingOptions", "QString", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromAce(QByteArray)", { "fromAce", "QByteArray&", "QString", 67, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCFURL(CFURLRef)", { "fromCFURL", "CFURLRef", "QUrl", 68, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromEncoded(QByteArray)", { "fromEncoded", "QByteArray&", "QUrl", 69, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromEncoded(QByteArray,enum)", { "fromEncoded", "QByteArray&,ParsingMode", "QUrl", 70, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromLocalFile(QString)", { "fromLocalFile", "QString&", "QUrl", 71, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromPercentEncoding(QByteArray)", { "fromPercentEncoding", "QByteArray&", "QString", 72, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUserInput(QString)", { "fromUserInput", "QString&", "QUrl", 73, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUserInput(QString,QString)", { "fromUserInput", "QString&,QString&", "QUrl", 74, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromUserInput(QString,QString,enum)", { "fromUserInput", "QString&,QString&,UserInputResolutionOptions", "QUrl", 75, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "idnWhitelist()", { "idnWhitelist", "", "QStringList", 76, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setIdnWhitelist(QStringList&)", { "setIdnWhitelist", "QStringList&", "void", 77, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toAce(QString)", { "toAce", "QString&", "QByteArray", 78, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toPercentEncoding(QString)", { "toPercentEncoding", "QString&", "QByteArray", 79, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toPercentEncoding(QString,QByteArray)", { "toPercentEncoding", "QString&,QByteArray&", "QByteArray", 80, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toPercentEncoding(QString,QByteArray,QByteArray)", { "toPercentEncoding", "QString&,QByteArray&,QByteArray&", "QByteArray", 81, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toStringList(QList<QUrl>&)", { "toStringList", "QList<QUrl>&", "QStringList", 82, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toStringList(QList<QUrl>&,enum)", { "toStringList", "QList<QUrl>&,FormattingOptions", "QStringList", 83, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUrl::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQUrl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQUrl::plastiqConstants = {

    /* QUrl::ComponentFormattingOption */
   { "PrettyDecoded", QUrl::PrettyDecoded },
   { "EncodeSpaces", QUrl::EncodeSpaces },
   { "EncodeUnicode", QUrl::EncodeUnicode },
   { "EncodeDelimiters", QUrl::EncodeDelimiters },
   { "EncodeReserved", QUrl::EncodeReserved },
   { "DecodeReserved", QUrl::DecodeReserved },
   { "FullyEncoded", QUrl::FullyEncoded },
   { "FullyDecoded", QUrl::FullyDecoded },

    /* QUrl::ParsingMode */
   { "TolerantMode", QUrl::TolerantMode },
   { "StrictMode", QUrl::StrictMode },
   { "DecodedMode", QUrl::DecodedMode },

    /* QUrl::UrlFormattingOption */
   { "None", QUrl::None },
   { "RemoveScheme", QUrl::RemoveScheme },
   { "RemovePassword", QUrl::RemovePassword },
   { "RemoveUserInfo", QUrl::RemoveUserInfo },
   { "RemovePort", QUrl::RemovePort },
   { "RemoveAuthority", QUrl::RemoveAuthority },
   { "RemovePath", QUrl::RemovePath },
   { "RemoveQuery", QUrl::RemoveQuery },
   { "RemoveFragment", QUrl::RemoveFragment },
   { "PreferLocalFile", QUrl::PreferLocalFile },
   { "StripTrailingSlash", QUrl::StripTrailingSlash },
   { "RemoveFilename", QUrl::RemoveFilename },
   { "NormalizePathSegments", QUrl::NormalizePathSegments },

    /* QUrl::UserInputResolutionOption */
   { "DefaultResolution", QUrl::DefaultResolution },
   { "AssumeLocalFile", QUrl::AssumeLocalFile },

};

QVector<PlastiQMetaObject*> PlastiQQUrl::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQUrl::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQUrl::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QUrl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUrl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQUrl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QUrl *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QUrl(); break;
        case 1: o = new QUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))); break;
        case 2: o = new QUrl(stack[1].s_string); break;
        case 3: o = new QUrl(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64)); break;
        case 4: o = new QUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQUrl *p = new PlastiQQUrl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUrl *p = new PlastiQQUrl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 84) {
            id -= 84;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QUrl *o = sc ? Q_NULLPTR : reinterpret_cast<QUrl*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->adjusted(QUrl::FormattingOptions(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->authority();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->authority(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 4: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = o->fileName(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { QString _r = o->fragment();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->fragment(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { bool _r = o->hasFragment();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->hasQuery();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { QString _r = o->host();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { QString _r = o->host(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isLocalFile();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isParentOf((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isRelative();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->matches((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    QUrl::FormattingOptions(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { QString _r = o->password();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 20: { QString _r = o->password(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: { QString _r = o->path();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: { QString _r = o->path(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: { int _r = o->port();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 24: { int _r = o->port(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { QString _r = o->query();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 26: { QString _r = o->query(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 27: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->resolved((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { QString _r = o->scheme();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 29: o->setAuthority(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setAuthority(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setFragment(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setFragment(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setHost(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setHost(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setPassword(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setPassword(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setPath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setPath(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setPort(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setQuery(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setQuery(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setQuery((*reinterpret_cast< QUrlQuery(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setScheme(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setUrl(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setUrl(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setUserInfo(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setUserInfo(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setUserName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setUserName(stack[1].s_string,
                    QUrl::ParsingMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 50: o->swap((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 51: /* UNSUPPORTED_RETURN_VALUE o->toCFURL() | ret: `CFURLRef` */ break;
        case 52: { QString _r = o->toDisplayString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 53: { QString _r = o->toDisplayString(QUrl::FormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 54: { QByteArray _r = o->toEncoded();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 55: { QByteArray _r = o->toEncoded(QUrl::FormattingOptions(stack[1].s_int64));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 56: { QString _r = o->toLocalFile();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 57: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 58: { QString _r = o->toString(QUrl::FormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 59: { QString _r = o->topLevelDomain();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 60: { QString _r = o->topLevelDomain(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 61: { QString _r = o->url();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 62: { QString _r = o->url(QUrl::FormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 63: { QString _r = o->userInfo();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 64: { QString _r = o->userInfo(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 65: { QString _r = o->userName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 66: { QString _r = o->userName(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 67: { QString _r = sc ? QUrl::fromAce(stack[1].s_bytearray) : o->fromAce(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 68: /* o->fromCFURL(UNSUPPORTED_TYPE_CFURLRef) | ret: `QUrl` */ break;
        case 69: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QUrl::fromEncoded(stack[1].s_bytearray)) : new QUrl(o->fromEncoded(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 70: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QUrl::fromEncoded(stack[1].s_bytearray,
                    QUrl::ParsingMode(stack[2].s_int64))) : new QUrl(o->fromEncoded(stack[1].s_bytearray,
                    QUrl::ParsingMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 71: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QUrl::fromLocalFile(stack[1].s_string)) : new QUrl(o->fromLocalFile(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 72: { QString _r = sc ? QUrl::fromPercentEncoding(stack[1].s_bytearray) : o->fromPercentEncoding(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 73: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QUrl::fromUserInput(stack[1].s_string)) : new QUrl(o->fromUserInput(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 74: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QUrl::fromUserInput(stack[1].s_string,
                    stack[2].s_string)) : new QUrl(o->fromUserInput(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 75: { /* COPY OBJECT */
            QUrl *_r = sc ? new QUrl(QUrl::fromUserInput(stack[1].s_string,
                    stack[2].s_string,
                    QUrl::UserInputResolutionOptions(stack[3].s_int64))) : new QUrl(o->fromUserInput(stack[1].s_string,
                    stack[2].s_string,
                    QUrl::UserInputResolutionOptions(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 76: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QUrl::idnWhitelist()) : new QStringList(o->idnWhitelist());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 77: if(sc) { QUrl::setIdnWhitelist((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); } else { o->setIdnWhitelist((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 78: { QByteArray _r = sc ? QUrl::toAce(stack[1].s_string) : o->toAce(stack[1].s_string);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 79: { QByteArray _r = sc ? QUrl::toPercentEncoding(stack[1].s_string) : o->toPercentEncoding(stack[1].s_string);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 80: { QByteArray _r = sc ? QUrl::toPercentEncoding(stack[1].s_string,
                    stack[2].s_bytearray) : o->toPercentEncoding(stack[1].s_string,
                    stack[2].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 81: { QByteArray _r = sc ? QUrl::toPercentEncoding(stack[1].s_string,
                    stack[2].s_bytearray,
                    stack[3].s_bytearray) : o->toPercentEncoding(stack[1].s_string,
                    stack[2].s_bytearray,
                    stack[3].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 82: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QUrl::toStringList((*reinterpret_cast< QList<QUrl>(*) >(stack[1].s_voidp)))) : new QStringList(o->toStringList((*reinterpret_cast< QList<QUrl>(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 83: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QUrl::toStringList((*reinterpret_cast< QList<QUrl>(*) >(stack[1].s_voidp)),
                    QUrl::FormattingOptions(stack[2].s_int64))) : new QStringList(o->toStringList((*reinterpret_cast< QList<QUrl>(*) >(stack[1].s_voidp)),
                    QUrl::FormattingOptions(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
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
        QUrl *o = reinterpret_cast<QUrl*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQUrl::~PlastiQQUrl() {
    QUrl* o = reinterpret_cast<QUrl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
