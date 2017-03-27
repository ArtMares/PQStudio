#include "plastiqmethod.h"
#include "plastiqqstyleoptionslider.h"

#include "widgets/PlastiQQStyleOptionComplex/plastiqqstyleoptioncomplex.h"
#include <QStyleOptionSlider> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSlider::plastiqConstructors = {
    { "QStyleOptionSlider()", { "QStyleOptionSlider", "", "QStyleOptionSlider*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionSlider(QStyleOptionSlider&)", { "QStyleOptionSlider", "QStyleOptionSlider&", "QStyleOptionSlider*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSlider::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSlider::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionSlider::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionSlider::plastiqConstants = {

    /* QStyleOptionSlider::StyleOptionType */
   { "Type", QStyleOptionSlider::Type },

    /* QStyleOptionSlider::StyleOptionVersion */
   { "Version", QStyleOptionSlider::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionSlider::plastiqInherits = { &PlastiQQStyleOptionComplex::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionSlider::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionSlider::plastiq_static_metaObject = {
    { &PlastiQQStyleOptionComplex::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionSlider", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionSlider::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionSlider::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionSlider *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionSlider(); break;
        case 1: o = new QStyleOptionSlider((*reinterpret_cast< QStyleOptionSlider(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionSlider *p = new PlastiQQStyleOptionSlider();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionSlider *p = new PlastiQQStyleOptionSlider();
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
        QStyleOptionSlider *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionSlider*>(object->plastiq_data());

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
        QStyleOptionSlider *o = reinterpret_cast<QStyleOptionSlider*>(object->plastiq_data());

        if(className == "QStyleOptionComplex") {
            stack[0].s_voidp = static_cast<QStyleOptionComplex*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionSlider::~PlastiQQStyleOptionSlider() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
