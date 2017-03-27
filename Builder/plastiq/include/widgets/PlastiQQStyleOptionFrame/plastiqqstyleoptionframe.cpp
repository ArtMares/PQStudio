#include "plastiqmethod.h"
#include "plastiqqstyleoptionframe.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionFrame> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionFrame::plastiqConstructors = {
    { "QStyleOptionFrame()", { "QStyleOptionFrame", "", "QStyleOptionFrame*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionFrame(QStyleOptionFrame&)", { "QStyleOptionFrame", "QStyleOptionFrame&", "QStyleOptionFrame*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionFrame::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionFrame::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionFrame::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionFrame::plastiqConstants = {

    /* QStyleOptionFrame::FrameFeature */
   { "None", QStyleOptionFrame::None },
   { "Flat", QStyleOptionFrame::Flat },
   { "Rounded", QStyleOptionFrame::Rounded },

    /* QStyleOptionFrame::StyleOptionType */
   { "Type", QStyleOptionFrame::Type },

    /* QStyleOptionFrame::StyleOptionVersion */
   { "Version", QStyleOptionFrame::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionFrame::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionFrame::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionFrame::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionFrame", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionFrame::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionFrame::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionFrame *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionFrame(); break;
        case 1: o = new QStyleOptionFrame((*reinterpret_cast< QStyleOptionFrame(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionFrame *p = new PlastiQQStyleOptionFrame();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionFrame *p = new PlastiQQStyleOptionFrame();
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
        QStyleOptionFrame *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionFrame*>(object->plastiq_data());

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
        QStyleOptionFrame *o = reinterpret_cast<QStyleOptionFrame*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionFrame::~PlastiQQStyleOptionFrame() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
