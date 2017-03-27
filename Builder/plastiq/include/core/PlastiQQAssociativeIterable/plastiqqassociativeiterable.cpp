#include "plastiqmethod.h"
#include "plastiqqassociativeiterable.h"

#include <QAssociativeIterable> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQAssociativeIterable::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAssociativeIterable::plastiqMethods = {
    { "begin()", { "begin", "", "const_iterator", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "const_iterator", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QVariant)", { "find", "QVariant&", "const_iterator", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QVariant)", { "value", "QVariant&", "QVariant", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAssociativeIterable::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAssociativeIterable::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAssociativeIterable::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAssociativeIterable::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAssociativeIterable::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAssociativeIterable::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAssociativeIterable", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAssociativeIterable::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAssociativeIterable::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAssociativeIterable *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAssociativeIterable *p = new PlastiQQAssociativeIterable();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAssociativeIterable *p = new PlastiQQAssociativeIterable();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAssociativeIterable *o = sc ? Q_NULLPTR : reinterpret_cast<QAssociativeIterable*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->begin() | ret: `const_iterator` */ break;
        case 1: /* o->end() | ret: `const_iterator` */ break;
        case 2: /* o->find(stack[1].s_variant) | ret: `const_iterator` */ break;
        case 3: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->value(stack[1].s_variant));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
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
        QAssociativeIterable *o = reinterpret_cast<QAssociativeIterable*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAssociativeIterable::~PlastiQQAssociativeIterable() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
