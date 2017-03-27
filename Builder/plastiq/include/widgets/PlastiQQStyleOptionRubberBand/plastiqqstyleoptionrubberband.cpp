#include "plastiqmethod.h"
#include "plastiqqstyleoptionrubberband.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionRubberBand> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionRubberBand::plastiqConstructors = {
    { "QStyleOptionRubberBand()", { "QStyleOptionRubberBand", "", "QStyleOptionRubberBand*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionRubberBand(QStyleOptionRubberBand&)", { "QStyleOptionRubberBand", "QStyleOptionRubberBand&", "QStyleOptionRubberBand*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionRubberBand::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionRubberBand::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionRubberBand::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionRubberBand::plastiqConstants = {

    /* QStyleOptionRubberBand::StyleOptionType */
   { "Type", QStyleOptionRubberBand::Type },

    /* QStyleOptionRubberBand::StyleOptionVersion */
   { "Version", QStyleOptionRubberBand::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionRubberBand::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionRubberBand::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionRubberBand::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionRubberBand", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionRubberBand::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionRubberBand::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionRubberBand *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionRubberBand(); break;
        case 1: o = new QStyleOptionRubberBand((*reinterpret_cast< QStyleOptionRubberBand(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionRubberBand *p = new PlastiQQStyleOptionRubberBand();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionRubberBand *p = new PlastiQQStyleOptionRubberBand();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQStyleOption::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleOptionRubberBand *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionRubberBand*>(object->plastiq_data());

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
        QStyleOptionRubberBand *o = reinterpret_cast<QStyleOptionRubberBand*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionRubberBand::~PlastiQQStyleOptionRubberBand() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
