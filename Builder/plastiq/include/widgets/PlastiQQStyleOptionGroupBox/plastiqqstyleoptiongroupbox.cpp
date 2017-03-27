#include "plastiqmethod.h"
#include "plastiqqstyleoptiongroupbox.h"

#include "widgets/PlastiQQStyleOptionComplex/plastiqqstyleoptioncomplex.h"
#include <QStyleOptionGroupBox> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionGroupBox::plastiqConstructors = {
    { "QStyleOptionGroupBox()", { "QStyleOptionGroupBox", "", "QStyleOptionGroupBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionGroupBox(QStyleOptionGroupBox&)", { "QStyleOptionGroupBox", "QStyleOptionGroupBox&", "QStyleOptionGroupBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionGroupBox::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionGroupBox::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionGroupBox::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionGroupBox::plastiqConstants = {

    /* QStyleOptionGroupBox::StyleOptionType */
   { "Type", QStyleOptionGroupBox::Type },

    /* QStyleOptionGroupBox::StyleOptionVersion */
   { "Version", QStyleOptionGroupBox::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionGroupBox::plastiqInherits = { &PlastiQQStyleOptionComplex::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionGroupBox::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionGroupBox::plastiq_static_metaObject = {
    { &PlastiQQStyleOptionComplex::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionGroupBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionGroupBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionGroupBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionGroupBox *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionGroupBox(); break;
        case 1: o = new QStyleOptionGroupBox((*reinterpret_cast< QStyleOptionGroupBox(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionGroupBox *p = new PlastiQQStyleOptionGroupBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionGroupBox *p = new PlastiQQStyleOptionGroupBox();
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
        QStyleOptionGroupBox *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionGroupBox*>(object->plastiq_data());

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
        QStyleOptionGroupBox *o = reinterpret_cast<QStyleOptionGroupBox*>(object->plastiq_data());

        if(className == "QStyleOptionComplex") {
            stack[0].s_voidp = static_cast<QStyleOptionComplex*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionGroupBox::~PlastiQQStyleOptionGroupBox() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
