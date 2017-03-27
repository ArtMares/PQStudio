#include "plastiqmethod.h"
#include "plastiqqjsonarray.h"

#include <QJsonArray> 
#include <QJsonValue>
#include <QVariantList>

QHash<QByteArray, PlastiQMethod> PlastiQQJsonArray::plastiqConstructors = {
    { "QJsonArray()", { "QJsonArray", "", "QJsonArray*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonArray(std::initializer_list<QJsonValue>)", { "QJsonArray", "std::initializer_list<QJsonValue>", "QJsonArray*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QJsonArray(QJsonArray&)", { "QJsonArray", "QJsonArray&", "QJsonArray*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonArray::plastiqMethods = {
    { "append(QJsonValue&)", { "append", "QJsonValue&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "at(int)", { "at", "int", "QJsonValue", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "begin()", { "begin", "", "iterator", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constBegin()", { "constBegin", "", "const_iterator", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constEnd()", { "constEnd", "", "const_iterator", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QJsonValue&)", { "contains", "QJsonValue&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "empty()", { "empty", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "iterator", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "erase(iterator)", { "erase", "iterator", "iterator", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "first()", { "first", "", "QJsonValue", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QJsonValue&)", { "insert", "int,QJsonValue&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(iterator,QJsonValue&)", { "insert", "iterator,QJsonValue&", "iterator", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "last()", { "last", "", "QJsonValue", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pop_back()", { "pop_back", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pop_front()", { "pop_front", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepend(QJsonValue&)", { "prepend", "QJsonValue&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_back(QJsonValue&)", { "push_back", "QJsonValue&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push_front(QJsonValue&)", { "push_front", "QJsonValue&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAt(int)", { "removeAt", "int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeFirst()", { "removeFirst", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeLast()", { "removeLast", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(int,QJsonValue&)", { "replace", "int,QJsonValue&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeAt(int)", { "takeAt", "int", "QJsonValue", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVariantList()", { "toVariantList", "", "QVariantList", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromStringList(QStringList&)", { "fromStringList", "QStringList&", "QJsonArray", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromVariantList(QVariantList&)", { "fromVariantList", "QVariantList&", "QJsonArray", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonArray::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQJsonArray::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQJsonArray::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQJsonArray::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQJsonArray::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQJsonArray::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QJsonArray", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQJsonArray::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQJsonArray::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QJsonArray *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QJsonArray(); break;
        /*case 1: o = new QJsonArray(UNSUPPORTED_TYPE_std::initializer_list<QJsonValue>); break;*/
        case 2: o = new QJsonArray((*reinterpret_cast< QJsonArray(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQJsonArray *p = new PlastiQQJsonArray();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQJsonArray *p = new PlastiQQJsonArray();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 29) {
            id -= 29;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QJsonArray *o = sc ? Q_NULLPTR : reinterpret_cast<QJsonArray*>(object->plastiq_data());

        switch(id) {
        case 0: o->append((*reinterpret_cast< QJsonValue(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QJsonValue *_r = new QJsonValue(o->at(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->begin() | ret: `iterator` */ break;
        case 3: /* o->constBegin() | ret: `const_iterator` */ break;
        case 4: /* o->constEnd() | ret: `const_iterator` */ break;
        case 5: { bool _r = o->contains((*reinterpret_cast< QJsonValue(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { bool _r = o->empty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: /* UNSUPPORTED_RETURN_VALUE o->end() | ret: `iterator` */ break;
        case 9: /* o->erase(UNSUPPORTED_TYPE_iterator) | ret: `iterator` */ break;
        case 10: { /* COPY OBJECT */
            QJsonValue *_r = new QJsonValue(o->first());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: o->insert(stack[1].s_int,
                    (*reinterpret_cast< QJsonValue(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: /* o->insert(UNSUPPORTED_TYPE_iterator,
                    (*reinterpret_cast< QJsonValue(*) >(stack[2].s_voidp))) | ret: `iterator` */ break;
        case 13: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { /* COPY OBJECT */
            QJsonValue *_r = new QJsonValue(o->last());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: o->pop_back();
                stack[0].type = PlastiQ::Void; break;
        case 16: o->pop_front();
                stack[0].type = PlastiQ::Void; break;
        case 17: o->prepend((*reinterpret_cast< QJsonValue(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->push_back((*reinterpret_cast< QJsonValue(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->push_front((*reinterpret_cast< QJsonValue(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->removeAt(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->removeFirst();
                stack[0].type = PlastiQ::Void; break;
        case 22: o->removeLast();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->replace(stack[1].s_int,
                    (*reinterpret_cast< QJsonValue(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { /* COPY OBJECT */
            QJsonValue *_r = new QJsonValue(o->takeAt(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonValue";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: /* UNSUPPORTED_RETURN_VALUE o->toVariantList() | ret: `QVariantList` */ break;
        case 27: { /* COPY OBJECT */
            QJsonArray *_r = sc ? new QJsonArray(QJsonArray::fromStringList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)))) : new QJsonArray(o->fromStringList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QJsonArray *_r = sc ? new QJsonArray(QJsonArray::fromVariantList((*reinterpret_cast< QVariantList(*) >(stack[1].s_voidp)))) : new QJsonArray(o->fromVariantList((*reinterpret_cast< QVariantList(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonArray";
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
        QJsonArray *o = reinterpret_cast<QJsonArray*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQJsonArray::~PlastiQQJsonArray() {
    QJsonArray* o = reinterpret_cast<QJsonArray*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
