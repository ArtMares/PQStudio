#include "plastiqmethod.h"
#include "plastiqqstylehintreturnvariant.h"

#include "widgets/PlastiQQStyleHintReturn/plastiqqstylehintreturn.h"
#include <QStyleHintReturnVariant> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturnVariant::plastiqConstructors = {
    { "QStyleHintReturnVariant()", { "QStyleHintReturnVariant", "", "QStyleHintReturnVariant*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturnVariant::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturnVariant::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleHintReturnVariant::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleHintReturnVariant::plastiqConstants = {

    /* QStyleHintReturnVariant::StyleOptionType */
   { "Type", QStyleHintReturnVariant::Type },

    /* QStyleHintReturnVariant::StyleOptionVersion */
   { "Version", QStyleHintReturnVariant::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleHintReturnVariant::plastiqInherits = { &PlastiQQStyleHintReturn::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleHintReturnVariant::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleHintReturnVariant::plastiq_static_metaObject = {
    { &PlastiQQStyleHintReturn::plastiq_static_metaObject, &plastiqInherits, "QStyleHintReturnVariant", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleHintReturnVariant::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleHintReturnVariant::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleHintReturnVariant *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleHintReturnVariant(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleHintReturnVariant *p = new PlastiQQStyleHintReturnVariant();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleHintReturnVariant *p = new PlastiQQStyleHintReturnVariant();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQStyleHintReturn::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleHintReturnVariant *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleHintReturnVariant*>(object->plastiq_data());

        switch(id) {

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
        QStyleHintReturnVariant *o = reinterpret_cast<QStyleHintReturnVariant*>(object->plastiq_data());

        if(className == "QStyleHintReturn") {
            stack[0].s_voidp = static_cast<QStyleHintReturn*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleHintReturnVariant::~PlastiQQStyleHintReturnVariant() {
    QStyleHintReturnVariant* o = reinterpret_cast<QStyleHintReturnVariant*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
