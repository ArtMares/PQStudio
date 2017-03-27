#include "plastiqmethod.h"
#include "plastiqqstyleoptionfocusrect.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionFocusRect> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionFocusRect::plastiqConstructors = {
    { "QStyleOptionFocusRect()", { "QStyleOptionFocusRect", "", "QStyleOptionFocusRect*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionFocusRect(QStyleOptionFocusRect&)", { "QStyleOptionFocusRect", "QStyleOptionFocusRect&", "QStyleOptionFocusRect*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionFocusRect::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionFocusRect::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionFocusRect::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionFocusRect::plastiqConstants = {

    /* QStyleOptionFocusRect::StyleOptionType */
   { "Type", QStyleOptionFocusRect::Type },

    /* QStyleOptionFocusRect::StyleOptionVersion */
   { "Version", QStyleOptionFocusRect::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionFocusRect::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionFocusRect::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionFocusRect::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionFocusRect", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionFocusRect::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionFocusRect::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionFocusRect *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionFocusRect(); break;
        case 1: o = new QStyleOptionFocusRect((*reinterpret_cast< QStyleOptionFocusRect(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionFocusRect *p = new PlastiQQStyleOptionFocusRect();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionFocusRect *p = new PlastiQQStyleOptionFocusRect();
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
        QStyleOptionFocusRect *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionFocusRect*>(object->plastiq_data());

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
        QStyleOptionFocusRect *o = reinterpret_cast<QStyleOptionFocusRect*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionFocusRect::~PlastiQQStyleOptionFocusRect() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
