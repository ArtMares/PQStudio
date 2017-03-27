#include "plastiqmethod.h"
#include "plastiqqsequentialiterable.h"

#include <QSequentialIterable> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQSequentialIterable::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQSequentialIterable::plastiqMethods = {
    { "at(int)", { "at", "int", "QVariant", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "begin()", { "begin", "", "const_iterator", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canReverseIterate()", { "canReverseIterate", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "const_iterator", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSequentialIterable::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSequentialIterable::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSequentialIterable::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSequentialIterable::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSequentialIterable::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSequentialIterable::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSequentialIterable", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSequentialIterable::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSequentialIterable::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSequentialIterable *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSequentialIterable *p = new PlastiQQSequentialIterable();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSequentialIterable *p = new PlastiQQSequentialIterable();
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
        QSequentialIterable *o = sc ? Q_NULLPTR : reinterpret_cast<QSequentialIterable*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->at(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: /* o->begin() | ret: `const_iterator` */ break;
        case 2: { bool _r = o->canReverseIterate();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: /* o->end() | ret: `const_iterator` */ break;
        case 4: { int _r = o->size();
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
        QSequentialIterable *o = reinterpret_cast<QSequentialIterable*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSequentialIterable::~PlastiQQSequentialIterable() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
