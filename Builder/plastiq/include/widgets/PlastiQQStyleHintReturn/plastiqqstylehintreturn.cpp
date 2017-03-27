#include "plastiqmethod.h"
#include "plastiqqstylehintreturn.h"

#include <QStyleHintReturn> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturn::plastiqConstructors = {
    { "QStyleHintReturn()", { "QStyleHintReturn", "", "QStyleHintReturn*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleHintReturn(int)", { "QStyleHintReturn", "int", "QStyleHintReturn*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleHintReturn(int,int)", { "QStyleHintReturn", "int,int", "QStyleHintReturn*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturn::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturn::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleHintReturn::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleHintReturn::plastiqConstants = {

    /* QStyleHintReturn::HintReturnType */
   { "SH_Default", QStyleHintReturn::SH_Default },
   { "SH_Mask", QStyleHintReturn::SH_Mask },
   { "SH_Variant", QStyleHintReturn::SH_Variant },

    /* QStyleHintReturn::StyleOptionType */
   { "Type", QStyleHintReturn::Type },

    /* QStyleHintReturn::StyleOptionVersion */
   { "Version", QStyleHintReturn::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleHintReturn::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStyleHintReturn::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleHintReturn::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStyleHintReturn", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleHintReturn::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleHintReturn::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleHintReturn *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleHintReturn(); break;
        case 1: o = new QStyleHintReturn(stack[1].s_int); break;
        case 2: o = new QStyleHintReturn(stack[1].s_int,
                    stack[2].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleHintReturn *p = new PlastiQQStyleHintReturn();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleHintReturn *p = new PlastiQQStyleHintReturn();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleHintReturn *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleHintReturn*>(object->plastiq_data());

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
        QStyleHintReturn *o = reinterpret_cast<QStyleHintReturn*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStyleHintReturn::~PlastiQQStyleHintReturn() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
