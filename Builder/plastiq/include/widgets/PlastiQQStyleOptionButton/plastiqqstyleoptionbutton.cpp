#include "plastiqmethod.h"
#include "plastiqqstyleoptionbutton.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionButton> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionButton::plastiqConstructors = {
    { "QStyleOptionButton()", { "QStyleOptionButton", "", "QStyleOptionButton*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionButton(QStyleOptionButton&)", { "QStyleOptionButton", "QStyleOptionButton&", "QStyleOptionButton*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionButton::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionButton::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionButton::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionButton::plastiqConstants = {

    /* QStyleOptionButton::ButtonFeature */
   { "None", QStyleOptionButton::None },
   { "Flat", QStyleOptionButton::Flat },
   { "HasMenu", QStyleOptionButton::HasMenu },
   { "DefaultButton", QStyleOptionButton::DefaultButton },
   { "AutoDefaultButton", QStyleOptionButton::AutoDefaultButton },
   { "CommandLinkButton", QStyleOptionButton::CommandLinkButton },

    /* QStyleOptionButton::StyleOptionType */
   { "Type", QStyleOptionButton::Type },

    /* QStyleOptionButton::StyleOptionVersion */
   { "Version", QStyleOptionButton::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionButton::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionButton::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionButton::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionButton *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionButton(); break;
        case 1: o = new QStyleOptionButton((*reinterpret_cast< QStyleOptionButton(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionButton *p = new PlastiQQStyleOptionButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionButton *p = new PlastiQQStyleOptionButton();
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
        QStyleOptionButton *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionButton*>(object->plastiq_data());

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
        QStyleOptionButton *o = reinterpret_cast<QStyleOptionButton*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionButton::~PlastiQQStyleOptionButton() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
