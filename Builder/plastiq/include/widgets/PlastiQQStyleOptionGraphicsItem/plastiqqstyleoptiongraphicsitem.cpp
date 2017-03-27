#include "plastiqmethod.h"
#include "plastiqqstyleoptiongraphicsitem.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionGraphicsItem> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionGraphicsItem::plastiqConstructors = {
    { "QStyleOptionGraphicsItem()", { "QStyleOptionGraphicsItem", "", "QStyleOptionGraphicsItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionGraphicsItem(QStyleOptionGraphicsItem&)", { "QStyleOptionGraphicsItem", "QStyleOptionGraphicsItem&", "QStyleOptionGraphicsItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionGraphicsItem::plastiqMethods = {
    { "levelOfDetailFromTransform(QTransform&)", { "levelOfDetailFromTransform", "QTransform&", "qreal", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionGraphicsItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionGraphicsItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionGraphicsItem::plastiqConstants = {

    /* QStyleOptionGraphicsItem::StyleOptionType */
   { "Type", QStyleOptionGraphicsItem::Type },

    /* QStyleOptionGraphicsItem::StyleOptionVersion */
   { "Version", QStyleOptionGraphicsItem::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionGraphicsItem::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionGraphicsItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQStyleOptionGraphicsItem::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionGraphicsItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionGraphicsItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionGraphicsItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionGraphicsItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionGraphicsItem(); break;
        case 1: o = new QStyleOptionGraphicsItem((*reinterpret_cast< QStyleOptionGraphicsItem(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionGraphicsItem *p = new PlastiQQStyleOptionGraphicsItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionGraphicsItem *p = new PlastiQQStyleOptionGraphicsItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQStyleOption::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleOptionGraphicsItem *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionGraphicsItem*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = sc ? QStyleOptionGraphicsItem::levelOfDetailFromTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))) : o->levelOfDetailFromTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QStyleOptionGraphicsItem *o = reinterpret_cast<QStyleOptionGraphicsItem*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionGraphicsItem::~PlastiQQStyleOptionGraphicsItem() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
