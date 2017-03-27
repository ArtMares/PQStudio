#include "plastiqmethod.h"
#include "plastiqqjsonvalue.h"

#include <QJsonValue> 
#include <QJsonArray>
#include <QJsonObject>
#include <QString>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQJsonValue::plastiqConstructors = {
    { "QJsonValue()", { "QJsonValue", "", "QJsonValue*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(enum)", { "QJsonValue", "Type", "QJsonValue*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(bool)", { "QJsonValue", "bool", "QJsonValue*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(double)", { "QJsonValue", "double", "QJsonValue*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(int)", { "QJsonValue", "int", "QJsonValue*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(long)", { "QJsonValue", "qint64", "QJsonValue*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(QString)", { "QJsonValue", "QString&", "QJsonValue*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(QLatin1String)", { "QJsonValue", "QLatin1String", "QJsonValue*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(const char*)", { "QJsonValue", "char*", "QJsonValue*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(QJsonArray&)", { "QJsonValue", "QJsonArray&", "QJsonValue*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(QJsonObject&)", { "QJsonValue", "QJsonObject&", "QJsonValue*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonValue(QJsonValue&)", { "QJsonValue", "QJsonValue&", "QJsonValue*", 11, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonValue::plastiqMethods = {
    { "isArray()", { "isArray", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBool()", { "isBool", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDouble()", { "isDouble", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isObject()", { "isObject", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isString()", { "isString", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUndefined()", { "isUndefined", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toArray(QJsonArray&)", { "toArray", "QJsonArray&", "QJsonArray", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toArray()", { "toArray", "", "QJsonArray", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toBool()", { "toBool", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toBool(bool)", { "toBool", "bool", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble()", { "toDouble", "", "double", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toDouble(double)", { "toDouble", "double", "double", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt()", { "toInt", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toInt(int)", { "toInt", "int", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toObject(QJsonObject&)", { "toObject", "QJsonObject&", "QJsonObject", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toObject()", { "toObject", "", "QJsonObject", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QString)", { "toString", "QString&", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVariant()", { "toVariant", "", "QVariant", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromVariant(QVariant)", { "fromVariant", "QVariant&", "QJsonValue", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonValue::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQJsonValue::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQJsonValue::plastiqConstants = {

    /* QJsonValue::Type */
   { "Null", QJsonValue::Null },
   { "Bool", QJsonValue::Bool },
   { "Double", QJsonValue::Double },
   { "String", QJsonValue::String },
   { "Array", QJsonValue::Array },
   { "Object", QJsonValue::Object },
   { "Undefined", QJsonValue::Undefined },

};

QVector<PlastiQMetaObject*> PlastiQQJsonValue::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQJsonValue::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQJsonValue::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QJsonValue", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQJsonValue::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQJsonValue::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QJsonValue *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QJsonValue(); break;
        case 1: o = new QJsonValue(QJsonValue::Type(stack[1].s_int64)); break;
        case 2: o = new QJsonValue(stack[1].s_bool); break;
        case 3: o = new QJsonValue(stack[1].s_double); break;
        case 4: o = new QJsonValue(stack[1].s_int); break;
        case 5: o = new QJsonValue(stack[1].s_long); break;
        case 6: o = new QJsonValue(stack[1].s_string); break;
        case 7: o = new QJsonValue((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))); break;
        case 8: o = new QJsonValue(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        case 9: o = new QJsonValue((*reinterpret_cast< QJsonArray(*) >(stack[1].s_voidp))); break;
        case 10: o = new QJsonValue((*reinterpret_cast< QJsonObject(*) >(stack[1].s_voidp))); break;
        case 11: o = new QJsonValue((*reinterpret_cast< QJsonValue(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQJsonValue *p = new PlastiQQJsonValue();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQJsonValue *p = new PlastiQQJsonValue();
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
        QJsonValue *o = sc ? Q_NULLPTR : reinterpret_cast<QJsonValue*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isArray();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isBool();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isDouble();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isObject();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isString();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isUndefined();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { /* COPY OBJECT */
            QJsonArray *_r = new QJsonArray(o->toArray((*reinterpret_cast< QJsonArray(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QJsonArray *_r = new QJsonArray(o->toArray());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { bool _r = o->toBool();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->toBool(stack[1].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { double _r = o->toDouble();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { double _r = o->toDouble(stack[1].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { int _r = o->toInt();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->toInt(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { /* COPY OBJECT */
            QJsonObject *_r = new QJsonObject(o->toObject((*reinterpret_cast< QJsonObject(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonObject";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QJsonObject *_r = new QJsonObject(o->toObject());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonObject";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 18: { QString _r = o->toString(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->toVariant());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: { /* COPY OBJECT */
            QJsonValue *_r = sc ? new QJsonValue(QJsonValue::fromVariant(stack[1].s_variant)) : new QJsonValue(o->fromVariant(stack[1].s_variant));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
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
        QJsonValue *o = reinterpret_cast<QJsonValue*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQJsonValue::~PlastiQQJsonValue() {
    QJsonValue* o = reinterpret_cast<QJsonValue*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
