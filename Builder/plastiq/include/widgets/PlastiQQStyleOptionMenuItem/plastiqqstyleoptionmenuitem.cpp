#include "plastiqmethod.h"
#include "plastiqqstyleoptionmenuitem.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionMenuItem> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionMenuItem::plastiqConstructors = {
    { "QStyleOptionMenuItem()", { "QStyleOptionMenuItem", "", "QStyleOptionMenuItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionMenuItem(QStyleOptionMenuItem&)", { "QStyleOptionMenuItem", "QStyleOptionMenuItem&", "QStyleOptionMenuItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionMenuItem::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionMenuItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionMenuItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionMenuItem::plastiqConstants = {

    /* QStyleOptionMenuItem::CheckType */
   { "NotCheckable", QStyleOptionMenuItem::NotCheckable },
   { "Exclusive", QStyleOptionMenuItem::Exclusive },
   { "NonExclusive", QStyleOptionMenuItem::NonExclusive },

    /* QStyleOptionMenuItem::MenuItemType */
   { "Normal", QStyleOptionMenuItem::Normal },
   { "DefaultItem", QStyleOptionMenuItem::DefaultItem },
   { "Separator", QStyleOptionMenuItem::Separator },
   { "SubMenu", QStyleOptionMenuItem::SubMenu },
   { "Scroller", QStyleOptionMenuItem::Scroller },
   { "TearOff", QStyleOptionMenuItem::TearOff },
   { "Margin", QStyleOptionMenuItem::Margin },
   { "EmptyArea", QStyleOptionMenuItem::EmptyArea },

    /* QStyleOptionMenuItem::StyleOptionType */
   { "Type", QStyleOptionMenuItem::Type },

    /* QStyleOptionMenuItem::StyleOptionVersion */
   { "Version", QStyleOptionMenuItem::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionMenuItem::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionMenuItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQStyleOptionMenuItem::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionMenuItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionMenuItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionMenuItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionMenuItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionMenuItem(); break;
        case 1: o = new QStyleOptionMenuItem((*reinterpret_cast< QStyleOptionMenuItem(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionMenuItem *p = new PlastiQQStyleOptionMenuItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionMenuItem *p = new PlastiQQStyleOptionMenuItem();
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
        QStyleOptionMenuItem *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionMenuItem*>(object->plastiq_data());

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
        QStyleOptionMenuItem *o = reinterpret_cast<QStyleOptionMenuItem*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionMenuItem::~PlastiQQStyleOptionMenuItem() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
