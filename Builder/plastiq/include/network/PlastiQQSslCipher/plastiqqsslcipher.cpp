#include "plastiqmethod.h"
#include "plastiqqsslcipher.h"

#include <QSslCipher> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSslCipher::plastiqConstructors = {
    { "QSslCipher()", { "QSslCipher", "", "QSslCipher*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCipher(QString)", { "QSslCipher", "QString&", "QSslCipher*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCipher(QString,QSsl::SslProtocol)", { "QSslCipher", "QString&,QSsl::SslProtocol", "QSslCipher*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCipher(QSslCipher&)", { "QSslCipher", "QSslCipher&", "QSslCipher*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslCipher::plastiqMethods = {
    { "authenticationMethod()", { "authenticationMethod", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encryptionMethod()", { "encryptionMethod", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyExchangeMethod()", { "keyExchangeMethod", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "protocol()", { "protocol", "", "QSsl::SslProtocol", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "protocolString()", { "protocolString", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedBits()", { "supportedBits", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QSslCipher&)", { "swap", "QSslCipher&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "usedBits()", { "usedBits", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslCipher::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslCipher::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslCipher::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSslCipher::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSslCipher::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSslCipher::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSslCipher", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslCipher::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSslCipher::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSslCipher *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSslCipher(); break;
        case 1: o = new QSslCipher(stack[1].s_string); break;
        /*case 2: o = new QSslCipher(stack[1].s_string,
                    UNSUPPORTED_TYPE_QSsl::SslProtocol); break;*/
        case 3: o = new QSslCipher((*reinterpret_cast< QSslCipher(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSslCipher *p = new PlastiQQSslCipher();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslCipher *p = new PlastiQQSslCipher();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSslCipher *o = sc ? Q_NULLPTR : reinterpret_cast<QSslCipher*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->authenticationMethod();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->encryptionMethod();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { QString _r = o->keyExchangeMethod();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: /* o->protocol() | ret: `QSsl::SslProtocol` */ break;
        case 6: { QString _r = o->protocolString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { int _r = o->supportedBits();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: o->swap((*reinterpret_cast< QSslCipher(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: { int _r = o->usedBits();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QSslCipher *o = reinterpret_cast<QSslCipher*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSslCipher::~PlastiQQSslCipher() {
    QSslCipher* o = reinterpret_cast<QSslCipher*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
