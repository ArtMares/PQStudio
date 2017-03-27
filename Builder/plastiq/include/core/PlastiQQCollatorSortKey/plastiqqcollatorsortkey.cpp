#include "plastiqmethod.h"
#include "plastiqqcollatorsortkey.h"

#include <QCollatorSortKey> 

QHash<QByteArray, PlastiQMethod> PlastiQQCollatorSortKey::plastiqConstructors = {
    { "QCollatorSortKey(QCollatorSortKey&)", { "QCollatorSortKey", "QCollatorSortKey&", "QCollatorSortKey*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCollatorSortKey::plastiqMethods = {
    { "compare(QCollatorSortKey&)", { "compare", "QCollatorSortKey&", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QCollatorSortKey&)", { "swap", "QCollatorSortKey&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCollatorSortKey::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCollatorSortKey::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCollatorSortKey::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCollatorSortKey::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCollatorSortKey::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCollatorSortKey::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCollatorSortKey", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCollatorSortKey::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCollatorSortKey::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCollatorSortKey *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCollatorSortKey((*reinterpret_cast< QCollatorSortKey(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCollatorSortKey *p = new PlastiQQCollatorSortKey();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCollatorSortKey *p = new PlastiQQCollatorSortKey();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCollatorSortKey *o = sc ? Q_NULLPTR : reinterpret_cast<QCollatorSortKey*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->compare((*reinterpret_cast< QCollatorSortKey(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: o->swap((*reinterpret_cast< QCollatorSortKey(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

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
        QCollatorSortKey *o = reinterpret_cast<QCollatorSortKey*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCollatorSortKey::~PlastiQQCollatorSortKey() {
    QCollatorSortKey* o = reinterpret_cast<QCollatorSortKey*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
