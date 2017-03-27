#include "plastiqmethod.h"
#include "plastiqqaccessibleobject.h"

#include "gui/PlastiQQAccessibleInterface/plastiqqaccessibleinterface.h"
#include <QAccessibleObject> 

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleObject::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleObject::plastiqMethods = {
    { "~QAccessibleObject()", { "~QAccessibleObject", "", "virtual", 0, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleObject::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleObject::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleObject::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleObject::plastiqInherits = { &PlastiQQAccessibleInterface::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleObject::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessibleObject::plastiq_static_metaObject = {
    { &PlastiQQAccessibleInterface::plastiq_static_metaObject, &plastiqInherits, "QAccessibleObject", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleObject::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleObject::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleObject *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleObject *p = new PlastiQQAccessibleObject();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleObject *p = new PlastiQQAccessibleObject();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAccessibleInterface::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleObject *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleObject*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->~QAccessibleObject() | ret: `virtual` */ break;

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
        QAccessibleObject *o = reinterpret_cast<QAccessibleObject*>(object->plastiq_data());

        if(className == "QAccessibleInterface") {
            stack[0].s_voidp = static_cast<QAccessibleInterface*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleObject::~PlastiQQAccessibleObject() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
