#include "plastiqmethod.h"
#include "plastiqqstyleoptiontoolbar.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionToolBar> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolBar::plastiqConstructors = {
    { "QStyleOptionToolBar()", { "QStyleOptionToolBar", "", "QStyleOptionToolBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionToolBar(QStyleOptionToolBar&)", { "QStyleOptionToolBar", "QStyleOptionToolBar&", "QStyleOptionToolBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolBar::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionToolBar::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionToolBar::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionToolBar::plastiqConstants = {

    /* QStyleOptionToolBar::StyleOptionType */
   { "Type", QStyleOptionToolBar::Type },

    /* QStyleOptionToolBar::StyleOptionVersion */
   { "Version", QStyleOptionToolBar::Version },

    /* QStyleOptionToolBar::ToolBarFeature */
   { "None", QStyleOptionToolBar::None },
   { "Movable", QStyleOptionToolBar::Movable },

    /* QStyleOptionToolBar::ToolBarPosition */
   { "Beginning", QStyleOptionToolBar::Beginning },
   { "Middle", QStyleOptionToolBar::Middle },
   { "End", QStyleOptionToolBar::End },
   { "OnlyOne", QStyleOptionToolBar::OnlyOne },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionToolBar::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionToolBar::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionToolBar::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionToolBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionToolBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionToolBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionToolBar *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionToolBar(); break;
        case 1: o = new QStyleOptionToolBar((*reinterpret_cast< QStyleOptionToolBar(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionToolBar *p = new PlastiQQStyleOptionToolBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionToolBar *p = new PlastiQQStyleOptionToolBar();
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
        QStyleOptionToolBar *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionToolBar*>(object->plastiq_data());

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
        QStyleOptionToolBar *o = reinterpret_cast<QStyleOptionToolBar*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionToolBar::~PlastiQQStyleOptionToolBar() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
