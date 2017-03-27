#include "plastiqmethod.h"
#include "plastiqqstyleoptionspinbox.h"

#include "widgets/PlastiQQStyleOptionComplex/plastiqqstyleoptioncomplex.h"
#include <QStyleOptionSpinBox> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSpinBox::plastiqConstructors = {
    { "QStyleOptionSpinBox()", { "QStyleOptionSpinBox", "", "QStyleOptionSpinBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionSpinBox(QStyleOptionSpinBox&)", { "QStyleOptionSpinBox", "QStyleOptionSpinBox&", "QStyleOptionSpinBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSpinBox::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionSpinBox::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionSpinBox::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionSpinBox::plastiqConstants = {

    /* QStyleOptionSpinBox::StyleOptionType */
   { "Type", QStyleOptionSpinBox::Type },

    /* QStyleOptionSpinBox::StyleOptionVersion */
   { "Version", QStyleOptionSpinBox::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionSpinBox::plastiqInherits = { &PlastiQQStyleOptionComplex::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionSpinBox::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionSpinBox::plastiq_static_metaObject = {
    { &PlastiQQStyleOptionComplex::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionSpinBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionSpinBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionSpinBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionSpinBox *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionSpinBox(); break;
        case 1: o = new QStyleOptionSpinBox((*reinterpret_cast< QStyleOptionSpinBox(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionSpinBox *p = new PlastiQQStyleOptionSpinBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionSpinBox *p = new PlastiQQStyleOptionSpinBox();
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
        QStyleOptionSpinBox *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionSpinBox*>(object->plastiq_data());

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
        QStyleOptionSpinBox *o = reinterpret_cast<QStyleOptionSpinBox*>(object->plastiq_data());

        if(className == "QStyleOptionComplex") {
            stack[0].s_voidp = static_cast<QStyleOptionComplex*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionSpinBox::~PlastiQQStyleOptionSpinBox() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
