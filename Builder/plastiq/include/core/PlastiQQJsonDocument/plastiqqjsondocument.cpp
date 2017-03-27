#include "plastiqmethod.h"
#include "plastiqqjsondocument.h"

#include <QJsonDocument> 
#include <QJsonArray>
#include <QJsonObject>
#include <QByteArray>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQJsonDocument::plastiqConstructors = {
    { "QJsonDocument()", { "QJsonDocument", "", "QJsonDocument*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonDocument(QJsonObject&)", { "QJsonDocument", "QJsonObject&", "QJsonDocument*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonDocument(QJsonArray&)", { "QJsonDocument", "QJsonArray&", "QJsonDocument*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonDocument(QJsonDocument&)", { "QJsonDocument", "QJsonDocument&", "QJsonDocument*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonDocument::plastiqMethods = {
    { "array()", { "array", "", "QJsonArray", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isArray()", { "isArray", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isObject()", { "isObject", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "object()", { "object", "", "QJsonObject", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rawData(int*)", { "rawData", "int*", "const char*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setArray(QJsonArray&)", { "setArray", "QJsonArray&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setObject(QJsonObject&)", { "setObject", "QJsonObject&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toBinaryData()", { "toBinaryData", "", "QByteArray", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toJson()", { "toJson", "", "QByteArray", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toJson(enum)", { "toJson", "JsonFormat", "QByteArray", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVariant()", { "toVariant", "", "QVariant", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromBinaryData(QByteArray)", { "fromBinaryData", "QByteArray&", "QJsonDocument", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromBinaryData(QByteArray,enum)", { "fromBinaryData", "QByteArray&,DataValidation", "QJsonDocument", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromJson(QByteArray)", { "fromJson", "QByteArray&", "QJsonDocument", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromJson(QByteArray,QJsonParseError*)", { "fromJson", "QByteArray&,QJsonParseError*", "QJsonDocument", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRawData(const char*,int)", { "fromRawData", "char*,int", "QJsonDocument", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRawData(const char*,int,enum)", { "fromRawData", "char*,int,DataValidation", "QJsonDocument", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromVariant(QVariant)", { "fromVariant", "QVariant&", "QJsonDocument", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonDocument::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQJsonDocument::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQJsonDocument::plastiqConstants = {

    /* QJsonDocument::DataValidation */
   { "Validate", QJsonDocument::Validate },
   { "BypassValidation", QJsonDocument::BypassValidation },

    /* QJsonDocument::JsonFormat */
   { "Indented", QJsonDocument::Indented },
   { "Compact", QJsonDocument::Compact },

};

QVector<PlastiQMetaObject*> PlastiQQJsonDocument::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQJsonDocument::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQJsonDocument::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QJsonDocument", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQJsonDocument::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQJsonDocument::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QJsonDocument *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QJsonDocument(); break;
        case 1: o = new QJsonDocument((*reinterpret_cast< QJsonObject(*) >(stack[1].s_voidp))); break;
        case 2: o = new QJsonDocument((*reinterpret_cast< QJsonArray(*) >(stack[1].s_voidp))); break;
        case 3: o = new QJsonDocument((*reinterpret_cast< QJsonDocument(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQJsonDocument *p = new PlastiQQJsonDocument();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQJsonDocument *p = new PlastiQQJsonDocument();
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
        QJsonDocument *o = sc ? Q_NULLPTR : reinterpret_cast<QJsonDocument*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QJsonArray *_r = new QJsonArray(o->array());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->isArray();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isObject();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { /* COPY OBJECT */
            QJsonObject *_r = new QJsonObject(o->object());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonObject";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { char* _r = const_cast<char*>(o->rawData(reinterpret_cast<int*>(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;
        case 7: o->setArray((*reinterpret_cast< QJsonArray(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setObject((*reinterpret_cast< QJsonObject(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: { QByteArray _r = o->toBinaryData();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 10: { QByteArray _r = o->toJson();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 11: { QByteArray _r = o->toJson(QJsonDocument::JsonFormat(stack[1].s_int64));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 12: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->toVariant());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QJsonDocument *_r = sc ? new QJsonDocument(QJsonDocument::fromBinaryData(stack[1].s_bytearray)) : new QJsonDocument(o->fromBinaryData(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonDocument";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QJsonDocument *_r = sc ? new QJsonDocument(QJsonDocument::fromBinaryData(stack[1].s_bytearray,
                    QJsonDocument::DataValidation(stack[2].s_int64))) : new QJsonDocument(o->fromBinaryData(stack[1].s_bytearray,
                    QJsonDocument::DataValidation(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonDocument";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QJsonDocument *_r = sc ? new QJsonDocument(QJsonDocument::fromJson(stack[1].s_bytearray)) : new QJsonDocument(o->fromJson(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonDocument";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QJsonDocument *_r = sc ? new QJsonDocument(QJsonDocument::fromJson(stack[1].s_bytearray,
                    reinterpret_cast<QJsonParseError*>(stack[2].s_voidp))) : new QJsonDocument(o->fromJson(stack[1].s_bytearray,
                    reinterpret_cast<QJsonParseError*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonDocument";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QJsonDocument *_r = sc ? new QJsonDocument(QJsonDocument::fromRawData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int)) : new QJsonDocument(o->fromRawData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonDocument";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QJsonDocument *_r = sc ? new QJsonDocument(QJsonDocument::fromRawData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int,
                    QJsonDocument::DataValidation(stack[3].s_int64))) : new QJsonDocument(o->fromRawData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int,
                    QJsonDocument::DataValidation(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonDocument";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { /* COPY OBJECT */
            QJsonDocument *_r = sc ? new QJsonDocument(QJsonDocument::fromVariant(stack[1].s_variant)) : new QJsonDocument(o->fromVariant(stack[1].s_variant));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonDocument";
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
        QJsonDocument *o = reinterpret_cast<QJsonDocument*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQJsonDocument::~PlastiQQJsonDocument() {
    QJsonDocument* o = reinterpret_cast<QJsonDocument*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
