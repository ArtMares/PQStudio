#include "plastiqmethod.h"
#include "plastiqqjsonobject.h"

#include <QJsonObject> 
#include <QStringList>
#include <QJsonValue>
#include <QVariantHash>
#include <QVariantMap>

QHash<QByteArray, PlastiQMethod> PlastiQQJsonObject::plastiqConstructors = {
    { "QJsonObject()", { "QJsonObject", "", "QJsonObject*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonObject(std::initializer_list<QPair<QString,QJsonValue> >)", { "QJsonObject", "std::initializer_list<QPair<QString,QJsonValue> >", "QJsonObject*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonObject(QJsonObject&)", { "QJsonObject", "QJsonObject&", "QJsonObject*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonObject::plastiqMethods = {
    { "begin()", { "begin", "", "iterator", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constBegin()", { "constBegin", "", "const_iterator", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constEnd()", { "constEnd", "", "const_iterator", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constFind(QString)", { "constFind", "QString&", "const_iterator", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constFind(QLatin1String)", { "constFind", "QLatin1String", "const_iterator", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QString)", { "contains", "QString&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QLatin1String)", { "contains", "QLatin1String", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "empty()", { "empty", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "iterator", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "erase(iterator)", { "erase", "iterator", "iterator", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString)", { "find", "QString&", "iterator", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QLatin1String)", { "find", "QLatin1String", "iterator", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(QString,QJsonValue&)", { "insert", "QString&,QJsonValue&", "iterator", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keys()", { "keys", "", "QStringList", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "take(QString)", { "take", "QString&", "QJsonValue", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVariantHash()", { "toVariantHash", "", "QVariantHash", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVariantMap()", { "toVariantMap", "", "QVariantMap", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QString)", { "value", "QString&", "QJsonValue", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QLatin1String)", { "value", "QLatin1String", "QJsonValue", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromVariantHash(QVariantHash&)", { "fromVariantHash", "QVariantHash&", "QJsonObject", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromVariantMap(QVariantMap&)", { "fromVariantMap", "QVariantMap&", "QJsonObject", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonObject::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQJsonObject::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQJsonObject::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQJsonObject::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQJsonObject::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQJsonObject::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QJsonObject", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQJsonObject::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQJsonObject::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QJsonObject *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QJsonObject(); break;
        /*case 1: o = new QJsonObject(UNSUPPORTED_TYPE_std::initializer_list<QPair<QString,
                    UNSUPPORTED_TYPE_QJsonValue> >); break;*/
        case 2: o = new QJsonObject((*reinterpret_cast< QJsonObject(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQJsonObject *p = new PlastiQQJsonObject();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQJsonObject *p = new PlastiQQJsonObject();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 26) {
            id -= 26;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QJsonObject *o = sc ? Q_NULLPTR : reinterpret_cast<QJsonObject*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->begin() | ret: `iterator` */ break;
        case 1: /* o->constBegin() | ret: `const_iterator` */ break;
        case 2: /* o->constEnd() | ret: `const_iterator` */ break;
        case 3: /* o->constFind(stack[1].s_string) | ret: `const_iterator` */ break;
        case 4: /* o->constFind((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))) | ret: `const_iterator` */ break;
        case 5: { bool _r = o->contains(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->contains((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { bool _r = o->empty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: /* UNSUPPORTED_RETURN_VALUE o->end() | ret: `iterator` */ break;
        case 10: /* o->erase(UNSUPPORTED_TYPE_iterator) | ret: `iterator` */ break;
        case 11: /* UNSUPPORTED_RETURN_VALUE o->find(stack[1].s_string) | ret: `iterator` */ break;
        case 12: /* UNSUPPORTED_RETURN_VALUE o->find((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))) | ret: `iterator` */ break;
        case 13: /* UNSUPPORTED_RETURN_VALUE o->insert(stack[1].s_string,
                    (*reinterpret_cast< QJsonValue(*) >(stack[2].s_voidp))) | ret: `iterator` */ break;
        case 14: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->keys());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { int _r = o->length();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: o->remove(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 18: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { /* COPY OBJECT */
            QJsonValue *_r = new QJsonValue(o->take(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: /* UNSUPPORTED_RETURN_VALUE o->toVariantHash() | ret: `QVariantHash` */ break;
        case 21: /* UNSUPPORTED_RETURN_VALUE o->toVariantMap() | ret: `QVariantMap` */ break;
        case 22: { /* COPY OBJECT */
            QJsonValue *_r = new QJsonValue(o->value(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QJsonValue *_r = new QJsonValue(o->value((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QJsonObject *_r = sc ? new QJsonObject(QJsonObject::fromVariantHash((*reinterpret_cast< QVariantHash(*) >(stack[1].s_voidp)))) : new QJsonObject(o->fromVariantHash((*reinterpret_cast< QVariantHash(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonObject";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { /* COPY OBJECT */
            QJsonObject *_r = sc ? new QJsonObject(QJsonObject::fromVariantMap((*reinterpret_cast< QVariantMap(*) >(stack[1].s_voidp)))) : new QJsonObject(o->fromVariantMap((*reinterpret_cast< QVariantMap(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonObject";
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
        QJsonObject *o = reinterpret_cast<QJsonObject*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQJsonObject::~PlastiQQJsonObject() {
    QJsonObject* o = reinterpret_cast<QJsonObject*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
