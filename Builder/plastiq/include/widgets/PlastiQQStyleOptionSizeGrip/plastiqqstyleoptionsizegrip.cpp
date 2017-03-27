#include "plastiqmethod.h"
#include "plastiqqstyleoptionsizegrip.h"

#include "widgets/PlastiQQStyleOptionComplex/plastiqqstyleoptioncomplex.h"
#include <QStyleOptionSizeGrip> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSizeGrip::plastiqConstructors = {
    { "QStyleOptionSizeGrip()", { "QStyleOptionSizeGrip", "", "QStyleOptionSizeGrip*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionSizeGrip(QStyleOptionSizeGrip&)", { "QStyleOptionSizeGrip", "QStyleOptionSizeGrip&", "QStyleOptionSizeGrip*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSizeGrip::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSizeGrip::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionSizeGrip::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionSizeGrip::plastiqConstants = {

    /* QStyleOptionSizeGrip::StyleOptionType */
   { "Type", QStyleOptionSizeGrip::Type },

    /* QStyleOptionSizeGrip::StyleOptionVersion */
   { "Version", QStyleOptionSizeGrip::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionSizeGrip::plastiqInherits = { &PlastiQQStyleOptionComplex::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionSizeGrip::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionSizeGrip::plastiq_static_metaObject = {
    { &PlastiQQStyleOptionComplex::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionSizeGrip", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionSizeGrip::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionSizeGrip::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionSizeGrip *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionSizeGrip(); break;
        case 1: o = new QStyleOptionSizeGrip((*reinterpret_cast< QStyleOptionSizeGrip(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionSizeGrip *p = new PlastiQQStyleOptionSizeGrip();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionSizeGrip *p = new PlastiQQStyleOptionSizeGrip();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQStyleOptionComplex::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleOptionSizeGrip *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionSizeGrip*>(object->plastiq_data());

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
        QStyleOptionSizeGrip *o = reinterpret_cast<QStyleOptionSizeGrip*>(object->plastiq_data());

        if(className == "QStyleOptionComplex") {
            stack[0].s_voidp = static_cast<QStyleOptionComplex*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionSizeGrip::~PlastiQQStyleOptionSizeGrip() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
