#include "plastiqmethod.h"
#include "plastiqqstyleoptiontabwidgetframe.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionTabWidgetFrame> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTabWidgetFrame::plastiqConstructors = {
    { "QStyleOptionTabWidgetFrame()", { "QStyleOptionTabWidgetFrame", "", "QStyleOptionTabWidgetFrame*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame&)", { "QStyleOptionTabWidgetFrame", "QStyleOptionTabWidgetFrame&", "QStyleOptionTabWidgetFrame*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTabWidgetFrame::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionTabWidgetFrame::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionTabWidgetFrame::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionTabWidgetFrame::plastiqConstants = {

    /* QStyleOptionTabWidgetFrame::StyleOptionType */
   { "Type", QStyleOptionTabWidgetFrame::Type },

    /* QStyleOptionTabWidgetFrame::StyleOptionVersion */
   { "Version", QStyleOptionTabWidgetFrame::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionTabWidgetFrame::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionTabWidgetFrame::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionTabWidgetFrame::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionTabWidgetFrame", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionTabWidgetFrame::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionTabWidgetFrame::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionTabWidgetFrame *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionTabWidgetFrame(); break;
        case 1: o = new QStyleOptionTabWidgetFrame((*reinterpret_cast< QStyleOptionTabWidgetFrame(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionTabWidgetFrame *p = new PlastiQQStyleOptionTabWidgetFrame();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionTabWidgetFrame *p = new PlastiQQStyleOptionTabWidgetFrame();
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
        QStyleOptionTabWidgetFrame *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionTabWidgetFrame*>(object->plastiq_data());

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
        QStyleOptionTabWidgetFrame *o = reinterpret_cast<QStyleOptionTabWidgetFrame*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionTabWidgetFrame::~PlastiQQStyleOptionTabWidgetFrame() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
