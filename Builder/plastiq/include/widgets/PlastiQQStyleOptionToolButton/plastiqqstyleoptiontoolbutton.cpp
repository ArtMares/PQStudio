#include "plastiqmethod.h"
#include "plastiqqstyleoptiontoolbutton.h"

#include "widgets/PlastiQQStyleOptionComplex/plastiqqstyleoptioncomplex.h"
#include <QStyleOptionToolButton> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolButton::plastiqConstructors = {
    { "QStyleOptionToolButton()", { "QStyleOptionToolButton", "", "QStyleOptionToolButton*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionToolButton(QStyleOptionToolButton&)", { "QStyleOptionToolButton", "QStyleOptionToolButton&", "QStyleOptionToolButton*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolButton::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolButton::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionToolButton::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionToolButton::plastiqConstants = {

    /* QStyleOptionToolButton::StyleOptionType */
   { "Type", QStyleOptionToolButton::Type },

    /* QStyleOptionToolButton::StyleOptionVersion */
   { "Version", QStyleOptionToolButton::Version },

    /* QStyleOptionToolButton::ToolButtonFeature */
   { "None", QStyleOptionToolButton::None },
   { "Arrow", QStyleOptionToolButton::Arrow },
   { "Menu", QStyleOptionToolButton::Menu },
   { "MenuButtonPopup", QStyleOptionToolButton::MenuButtonPopup },
   { "PopupDelay", QStyleOptionToolButton::PopupDelay },
   { "HasMenu", QStyleOptionToolButton::HasMenu },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionToolButton::plastiqInherits = { &PlastiQQStyleOptionComplex::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionToolButton::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionToolButton::plastiq_static_metaObject = {
    { &PlastiQQStyleOptionComplex::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionToolButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionToolButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionToolButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionToolButton *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionToolButton(); break;
        case 1: o = new QStyleOptionToolButton((*reinterpret_cast< QStyleOptionToolButton(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionToolButton *p = new PlastiQQStyleOptionToolButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionToolButton *p = new PlastiQQStyleOptionToolButton();
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
        QStyleOptionToolButton *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionToolButton*>(object->plastiq_data());

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
        QStyleOptionToolButton *o = reinterpret_cast<QStyleOptionToolButton*>(object->plastiq_data());

        if(className == "QStyleOptionComplex") {
            stack[0].s_voidp = static_cast<QStyleOptionComplex*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionToolButton::~PlastiQQStyleOptionToolButton() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
