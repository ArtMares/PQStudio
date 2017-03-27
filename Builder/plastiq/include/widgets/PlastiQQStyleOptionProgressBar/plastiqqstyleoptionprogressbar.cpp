#include "plastiqmethod.h"
#include "plastiqqstyleoptionprogressbar.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionProgressBar> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionProgressBar::plastiqConstructors = {
    { "QStyleOptionProgressBar()", { "QStyleOptionProgressBar", "", "QStyleOptionProgressBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionProgressBar(QStyleOptionProgressBar&)", { "QStyleOptionProgressBar", "QStyleOptionProgressBar&", "QStyleOptionProgressBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionProgressBar::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionProgressBar::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionProgressBar::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionProgressBar::plastiqConstants = {

    /* QStyleOptionProgressBar::StyleOptionType */
   { "Type", QStyleOptionProgressBar::Type },

    /* QStyleOptionProgressBar::StyleOptionVersion */
   { "Version", QStyleOptionProgressBar::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionProgressBar::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionProgressBar::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionProgressBar::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionProgressBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionProgressBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionProgressBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionProgressBar *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionProgressBar(); break;
        case 1: o = new QStyleOptionProgressBar((*reinterpret_cast< QStyleOptionProgressBar(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionProgressBar *p = new PlastiQQStyleOptionProgressBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionProgressBar *p = new PlastiQQStyleOptionProgressBar();
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
        QStyleOptionProgressBar *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionProgressBar*>(object->plastiq_data());

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
        QStyleOptionProgressBar *o = reinterpret_cast<QStyleOptionProgressBar*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionProgressBar::~PlastiQQStyleOptionProgressBar() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
