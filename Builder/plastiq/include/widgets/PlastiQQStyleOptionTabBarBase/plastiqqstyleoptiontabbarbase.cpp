#include "plastiqmethod.h"
#include "plastiqqstyleoptiontabbarbase.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionTabBarBase> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTabBarBase::plastiqConstructors = {
    { "QStyleOptionTabBarBase()", { "QStyleOptionTabBarBase", "", "QStyleOptionTabBarBase*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionTabBarBase(QStyleOptionTabBarBase&)", { "QStyleOptionTabBarBase", "QStyleOptionTabBarBase&", "QStyleOptionTabBarBase*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTabBarBase::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTabBarBase::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionTabBarBase::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionTabBarBase::plastiqConstants = {

    /* QStyleOptionTabBarBase::StyleOptionType */
   { "Type", QStyleOptionTabBarBase::Type },

    /* QStyleOptionTabBarBase::StyleOptionVersion */
   { "Version", QStyleOptionTabBarBase::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionTabBarBase::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionTabBarBase::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionTabBarBase::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionTabBarBase", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionTabBarBase::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionTabBarBase::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionTabBarBase *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionTabBarBase(); break;
        case 1: o = new QStyleOptionTabBarBase((*reinterpret_cast< QStyleOptionTabBarBase(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionTabBarBase *p = new PlastiQQStyleOptionTabBarBase();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionTabBarBase *p = new PlastiQQStyleOptionTabBarBase();
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
        QStyleOptionTabBarBase *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionTabBarBase*>(object->plastiq_data());

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
        QStyleOptionTabBarBase *o = reinterpret_cast<QStyleOptionTabBarBase*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionTabBarBase::~PlastiQQStyleOptionTabBarBase() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
