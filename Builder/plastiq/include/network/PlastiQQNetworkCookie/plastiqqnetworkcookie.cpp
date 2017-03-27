#include "plastiqmethod.h"
#include "plastiqqnetworkcookie.h"

#include <QNetworkCookie> 
#include <QString>
#include <QDateTime>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCookie::plastiqConstructors = {
    { "QNetworkCookie()", { "QNetworkCookie", "", "QNetworkCookie*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkCookie(QByteArray)", { "QNetworkCookie", "QByteArray&", "QNetworkCookie*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkCookie(QByteArray,QByteArray)", { "QNetworkCookie", "QByteArray&,QByteArray&", "QNetworkCookie*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkCookie(QNetworkCookie&)", { "QNetworkCookie", "QNetworkCookie&", "QNetworkCookie*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCookie::plastiqMethods = {
    { "domain()", { "domain", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expirationDate()", { "expirationDate", "", "QDateTime", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasSameIdentifier(QNetworkCookie&)", { "hasSameIdentifier", "QNetworkCookie&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isHttpOnly()", { "isHttpOnly", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSecure()", { "isSecure", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSessionCookie()", { "isSessionCookie", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QByteArray", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalize(QUrl&)", { "normalize", "QUrl&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "path()", { "path", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDomain(QString)", { "setDomain", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExpirationDate(QDateTime&)", { "setExpirationDate", "QDateTime&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHttpOnly(bool)", { "setHttpOnly", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setName(QByteArray)", { "setName", "QByteArray&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPath(QString)", { "setPath", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSecure(bool)", { "setSecure", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValue(QByteArray)", { "setValue", "QByteArray&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QNetworkCookie&)", { "swap", "QNetworkCookie&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRawForm()", { "toRawForm", "", "QByteArray", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRawForm(enum)", { "toRawForm", "RawForm", "QByteArray", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "QByteArray", 19, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCookie::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkCookie::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkCookie::plastiqConstants = {

    /* QNetworkCookie::RawForm */
   { "NameAndValueOnly", QNetworkCookie::NameAndValueOnly },
   { "Full", QNetworkCookie::Full },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkCookie::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkCookie::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkCookie::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkCookie", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkCookie::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkCookie::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkCookie *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkCookie(); break;
        case 1: o = new QNetworkCookie(stack[1].s_bytearray); break;
        case 2: o = new QNetworkCookie(stack[1].s_bytearray,
                    stack[2].s_bytearray); break;
        case 3: o = new QNetworkCookie((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkCookie *p = new PlastiQQNetworkCookie();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkCookie *p = new PlastiQQNetworkCookie();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 20) {
            id -= 20;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkCookie *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkCookie*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->domain();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->expirationDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->hasSameIdentifier((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isHttpOnly();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isSecure();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isSessionCookie();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { QByteArray _r = o->name();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 7: o->normalize((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: { QString _r = o->path();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: o->setDomain(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setExpirationDate((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setHttpOnly(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setName(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setPath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setSecure(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setValue(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->swap((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: { QByteArray _r = o->toRawForm();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 18: { QByteArray _r = o->toRawForm(QNetworkCookie::RawForm(stack[1].s_int64));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 19: { QByteArray _r = o->value();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;

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
        QNetworkCookie *o = reinterpret_cast<QNetworkCookie*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkCookie::~PlastiQQNetworkCookie() {
    QNetworkCookie* o = reinterpret_cast<QNetworkCookie*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
