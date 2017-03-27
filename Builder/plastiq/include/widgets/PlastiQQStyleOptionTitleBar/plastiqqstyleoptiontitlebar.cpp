#include "plastiqmethod.h"
#include "plastiqqstyleoptiontitlebar.h"

#include "widgets/PlastiQQStyleOptionComplex/plastiqqstyleoptioncomplex.h"
#include <QStyleOptionTitleBar> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTitleBar::plastiqConstructors = {
    { "QStyleOptionTitleBar()", { "QStyleOptionTitleBar", "", "QStyleOptionTitleBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionTitleBar(QStyleOptionTitleBar&)", { "QStyleOptionTitleBar", "QStyleOptionTitleBar&", "QStyleOptionTitleBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTitleBar::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTitleBar::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionTitleBar::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionTitleBar::plastiqConstants = {

    /* QStyleOptionTitleBar::StyleOptionType */
   { "Type", QStyleOptionTitleBar::Type },

    /* QStyleOptionTitleBar::StyleOptionVersion */
   { "Version", QStyleOptionTitleBar::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionTitleBar::plastiqInherits = { &PlastiQQStyleOptionComplex::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionTitleBar::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionTitleBar::plastiq_static_metaObject = {
    { &PlastiQQStyleOptionComplex::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionTitleBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionTitleBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionTitleBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionTitleBar *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionTitleBar(); break;
        case 1: o = new QStyleOptionTitleBar((*reinterpret_cast< QStyleOptionTitleBar(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionTitleBar *p = new PlastiQQStyleOptionTitleBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionTitleBar *p = new PlastiQQStyleOptionTitleBar();
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
        QStyleOptionTitleBar *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionTitleBar*>(object->plastiq_data());

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
        QStyleOptionTitleBar *o = reinterpret_cast<QStyleOptionTitleBar*>(object->plastiq_data());

        if(className == "QStyleOptionComplex") {
            stack[0].s_voidp = static_cast<QStyleOptionComplex*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionTitleBar::~PlastiQQStyleOptionTitleBar() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
