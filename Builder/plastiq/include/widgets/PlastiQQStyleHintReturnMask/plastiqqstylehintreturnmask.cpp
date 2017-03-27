#include "plastiqmethod.h"
#include "plastiqqstylehintreturnmask.h"

#include "widgets/PlastiQQStyleHintReturn/plastiqqstylehintreturn.h"
#include <QStyleHintReturnMask> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturnMask::plastiqConstructors = {
    { "QStyleHintReturnMask()", { "QStyleHintReturnMask", "", "QStyleHintReturnMask*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturnMask::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHintReturnMask::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleHintReturnMask::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleHintReturnMask::plastiqConstants = {

    /* QStyleHintReturnMask::StyleOptionType */
   { "Type", QStyleHintReturnMask::Type },

    /* QStyleHintReturnMask::StyleOptionVersion */
   { "Version", QStyleHintReturnMask::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleHintReturnMask::plastiqInherits = { &PlastiQQStyleHintReturn::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleHintReturnMask::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleHintReturnMask::plastiq_static_metaObject = {
    { &PlastiQQStyleHintReturn::plastiq_static_metaObject, &plastiqInherits, "QStyleHintReturnMask", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleHintReturnMask::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleHintReturnMask::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleHintReturnMask *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleHintReturnMask(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleHintReturnMask *p = new PlastiQQStyleHintReturnMask();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleHintReturnMask *p = new PlastiQQStyleHintReturnMask();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQStyleHintReturn::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleHintReturnMask *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleHintReturnMask*>(object->plastiq_data());

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
        QStyleHintReturnMask *o = reinterpret_cast<QStyleHintReturnMask*>(object->plastiq_data());

        if(className == "QStyleHintReturn") {
            stack[0].s_voidp = static_cast<QStyleHintReturn*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleHintReturnMask::~PlastiQQStyleHintReturnMask() {
    QStyleHintReturnMask* o = reinterpret_cast<QStyleHintReturnMask*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
