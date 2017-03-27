#include "plastiqmethod.h"
#include "plastiqqstyleoptiontoolbox.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionToolBox> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolBox::plastiqConstructors = {
    { "QStyleOptionToolBox()", { "QStyleOptionToolBox", "", "QStyleOptionToolBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionToolBox(QStyleOptionToolBox&)", { "QStyleOptionToolBox", "QStyleOptionToolBox&", "QStyleOptionToolBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolBox::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolBox::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionToolBox::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionToolBox::plastiqConstants = {

    /* QStyleOptionToolBox::SelectedPosition */
   { "NotAdjacent", QStyleOptionToolBox::NotAdjacent },
   { "NextIsSelected", QStyleOptionToolBox::NextIsSelected },
   { "PreviousIsSelected", QStyleOptionToolBox::PreviousIsSelected },

    /* QStyleOptionToolBox::StyleOptionType */
   { "Type", QStyleOptionToolBox::Type },

    /* QStyleOptionToolBox::StyleOptionVersion */
   { "Version", QStyleOptionToolBox::Version },

    /* QStyleOptionToolBox::TabPosition */
   { "Beginning", QStyleOptionToolBox::Beginning },
   { "Middle", QStyleOptionToolBox::Middle },
   { "End", QStyleOptionToolBox::End },
   { "OnlyOneTab", QStyleOptionToolBox::OnlyOneTab },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionToolBox::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionToolBox::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionToolBox::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionToolBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionToolBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionToolBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionToolBox *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionToolBox(); break;
        case 1: o = new QStyleOptionToolBox((*reinterpret_cast< QStyleOptionToolBox(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionToolBox *p = new PlastiQQStyleOptionToolBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionToolBox *p = new PlastiQQStyleOptionToolBox();
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
        QStyleOptionToolBox *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionToolBox*>(object->plastiq_data());

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
        QStyleOptionToolBox *o = reinterpret_cast<QStyleOptionToolBox*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionToolBox::~PlastiQQStyleOptionToolBox() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
