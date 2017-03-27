#include "plastiqmethod.h"
#include "plastiqqstyleoptionviewitem.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionViewItem> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionViewItem::plastiqConstructors = {
    { "QStyleOptionViewItem()", { "QStyleOptionViewItem", "", "QStyleOptionViewItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionViewItem(QStyleOptionViewItem&)", { "QStyleOptionViewItem", "QStyleOptionViewItem&", "QStyleOptionViewItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionViewItem::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionViewItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionViewItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionViewItem::plastiqConstants = {

    /* QStyleOptionViewItem::Position */
   { "Left", QStyleOptionViewItem::Left },
   { "Right", QStyleOptionViewItem::Right },
   { "Top", QStyleOptionViewItem::Top },
   { "Bottom", QStyleOptionViewItem::Bottom },

    /* QStyleOptionViewItem::StyleOptionType */
   { "Type", QStyleOptionViewItem::Type },

    /* QStyleOptionViewItem::StyleOptionVersion */
   { "Version", QStyleOptionViewItem::Version },

    /* QStyleOptionViewItem::ViewItemFeature */
   { "None", QStyleOptionViewItem::None },
   { "WrapText", QStyleOptionViewItem::WrapText },
   { "Alternate", QStyleOptionViewItem::Alternate },
   { "HasCheckIndicator", QStyleOptionViewItem::HasCheckIndicator },
   { "HasDisplay", QStyleOptionViewItem::HasDisplay },
   { "HasDecoration", QStyleOptionViewItem::HasDecoration },

    /* QStyleOptionViewItem::ViewItemPosition */
   { "Invalid", QStyleOptionViewItem::Invalid },
   { "Beginning", QStyleOptionViewItem::Beginning },
   { "Middle", QStyleOptionViewItem::Middle },
   { "End", QStyleOptionViewItem::End },
   { "OnlyOne", QStyleOptionViewItem::OnlyOne },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionViewItem::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionViewItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQStyleOptionViewItem::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionViewItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionViewItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionViewItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionViewItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionViewItem(); break;
        case 1: o = new QStyleOptionViewItem((*reinterpret_cast< QStyleOptionViewItem(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionViewItem *p = new PlastiQQStyleOptionViewItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionViewItem *p = new PlastiQQStyleOptionViewItem();
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
        QStyleOptionViewItem *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionViewItem*>(object->plastiq_data());

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
        QStyleOptionViewItem *o = reinterpret_cast<QStyleOptionViewItem*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionViewItem::~PlastiQQStyleOptionViewItem() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
