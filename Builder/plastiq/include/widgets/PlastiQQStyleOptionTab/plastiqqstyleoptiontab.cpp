#include "plastiqmethod.h"
#include "plastiqqstyleoptiontab.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionTab> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTab::plastiqConstructors = {
    { "QStyleOptionTab()", { "QStyleOptionTab", "", "QStyleOptionTab*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionTab(QStyleOptionTab&)", { "QStyleOptionTab", "QStyleOptionTab&", "QStyleOptionTab*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTab::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTab::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionTab::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionTab::plastiqConstants = {

    /* QStyleOptionTab::CornerWidget */
   { "NoCornerWidgets", QStyleOptionTab::NoCornerWidgets },
   { "LeftCornerWidget", QStyleOptionTab::LeftCornerWidget },
   { "RightCornerWidget", QStyleOptionTab::RightCornerWidget },

    /* QStyleOptionTab::SelectedPosition */
   { "NotAdjacent", QStyleOptionTab::NotAdjacent },
   { "NextIsSelected", QStyleOptionTab::NextIsSelected },
   { "PreviousIsSelected", QStyleOptionTab::PreviousIsSelected },

    /* QStyleOptionTab::StyleOptionType */
   { "Type", QStyleOptionTab::Type },

    /* QStyleOptionTab::StyleOptionVersion */
   { "Version", QStyleOptionTab::Version },

    /* QStyleOptionTab::TabFeature */
   { "None", QStyleOptionTab::None },
   { "HasFrame", QStyleOptionTab::HasFrame },

    /* QStyleOptionTab::TabPosition */
   { "Beginning", QStyleOptionTab::Beginning },
   { "Middle", QStyleOptionTab::Middle },
   { "End", QStyleOptionTab::End },
   { "OnlyOneTab", QStyleOptionTab::OnlyOneTab },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionTab::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionTab::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionTab::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionTab", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionTab::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionTab::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionTab *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionTab(); break;
        case 1: o = new QStyleOptionTab((*reinterpret_cast< QStyleOptionTab(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionTab *p = new PlastiQQStyleOptionTab();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionTab *p = new PlastiQQStyleOptionTab();
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
        QStyleOptionTab *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionTab*>(object->plastiq_data());

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
        QStyleOptionTab *o = reinterpret_cast<QStyleOptionTab*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionTab::~PlastiQQStyleOptionTab() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
