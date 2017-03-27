#include "plastiqmethod.h"
#include "plastiqqsslkey.h"

#include <QSslKey> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQSslKey::plastiqConstructors = {
    { "QSslKey()", { "QSslKey", "", "QSslKey*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QByteArray,QSsl::KeyAlgorithm)", { "QSslKey", "QByteArray&,QSsl::KeyAlgorithm", "QSslKey*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QByteArray,QSsl::KeyAlgorithm,QSsl::EncodingFormat)", { "QSslKey", "QByteArray&,QSsl::KeyAlgorithm,QSsl::EncodingFormat", "QSslKey*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QByteArray,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::KeyType)", { "QSslKey", "QByteArray&,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::KeyType", "QSslKey*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QByteArray,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::KeyType,QByteArray)", { "QSslKey", "QByteArray&,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::KeyType,QByteArray&", "QSslKey*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QIODevice*,QSsl::KeyAlgorithm)", { "QSslKey", "QIODevice*,QSsl::KeyAlgorithm", "QSslKey*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat)", { "QSslKey", "QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat", "QSslKey*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::KeyType)", { "QSslKey", "QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::KeyType", "QSslKey*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::KeyType,QByteArray)", { "QSslKey", "QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::KeyType,QByteArray&", "QSslKey*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(Qt::HANDLE)", { "QSslKey", "Qt::HANDLE", "QSslKey*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(Qt::HANDLE,QSsl::KeyType)", { "QSslKey", "Qt::HANDLE,QSsl::KeyType", "QSslKey*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslKey(QSslKey&)", { "QSslKey", "QSslKey&", "QSslKey*", 11, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslKey::plastiqMethods = {
    { "algorithm()", { "algorithm", "", "QSsl::KeyAlgorithm", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handle()", { "handle", "", "Qt::HANDLE", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QSslKey&)", { "swap", "QSslKey&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDer()", { "toDer", "", "QByteArray", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDer(QByteArray)", { "toDer", "QByteArray&", "QByteArray", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPem()", { "toPem", "", "QByteArray", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPem(QByteArray)", { "toPem", "QByteArray&", "QByteArray", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "QSsl::KeyType", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslKey::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslKey::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslKey::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSslKey::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSslKey::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSslKey::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSslKey", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslKey::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSslKey::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSslKey *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSslKey(); break;
        /*case 1: o = new QSslKey(stack[1].s_bytearray,
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm); break;*/
        /*case 2: o = new QSslKey(stack[1].s_bytearray,
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat); break;*/
        /*case 3: o = new QSslKey(stack[1].s_bytearray,
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat,
                    UNSUPPORTED_TYPE_QSsl::KeyType); break;*/
        /*case 4: o = new QSslKey(stack[1].s_bytearray,
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat,
                    UNSUPPORTED_TYPE_QSsl::KeyType,
                    stack[5].s_bytearray); break;*/
        /*case 5: o = new QSslKey(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm); break;*/
        /*case 6: o = new QSslKey(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat); break;*/
        /*case 7: o = new QSslKey(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat,
                    UNSUPPORTED_TYPE_QSsl::KeyType); break;*/
        /*case 8: o = new QSslKey(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QSsl::KeyAlgorithm,
                    UNSUPPORTED_TYPE_QSsl::EncodingFormat,
                    UNSUPPORTED_TYPE_QSsl::KeyType,
                    stack[5].s_bytearray); break;*/
        case 9: o = new QSslKey((*reinterpret_cast< Qt::HANDLE(*) >(stack[1].s_voidp))); break;
        /*case 10: o = new QSslKey((*reinterpret_cast< Qt::HANDLE(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_QSsl::KeyType); break;*/
        case 11: o = new QSslKey((*reinterpret_cast< QSslKey(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSslKey *p = new PlastiQQSslKey();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslKey *p = new PlastiQQSslKey();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSslKey *o = sc ? Q_NULLPTR : reinterpret_cast<QSslKey*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->algorithm() | ret: `QSsl::KeyAlgorithm` */ break;
        case 1: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 2: /* o->handle() | ret: `Qt::HANDLE` */ break;
        case 3: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { int _r = o->length();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: o->swap((*reinterpret_cast< QSslKey(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: { QByteArray _r = o->toDer();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 7: { QByteArray _r = o->toDer(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 8: { QByteArray _r = o->toPem();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 9: { QByteArray _r = o->toPem(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 10: /* o->type() | ret: `QSsl::KeyType` */ break;

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
        QSslKey *o = reinterpret_cast<QSslKey*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSslKey::~PlastiQQSslKey() {
    QSslKey* o = reinterpret_cast<QSslKey*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
