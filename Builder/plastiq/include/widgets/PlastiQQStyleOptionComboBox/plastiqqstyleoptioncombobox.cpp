#include "plastiqmethod.h"
#include "plastiqqstyleoptioncombobox.h"

#include "widgets/PlastiQQStyleOptionComplex/plastiqqstyleoptioncomplex.h"
#include <QStyleOptionComboBox> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionComboBox::plastiqConstructors = {
    { "QStyleOptionComboBox()", { "QStyleOptionComboBox", "", "QStyleOptionComboBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionComboBox(QStyleOptionComboBox&)", { "QStyleOptionComboBox", "QStyleOptionComboBox&", "QStyleOptionComboBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionComboBox::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionComboBox::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionComboBox::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionComboBox::plastiqConstants = {

    /* QStyleOptionComboBox::StyleOptionType */
   { "Type", QStyleOptionComboBox::Type },

    /* QStyleOptionComboBox::StyleOptionVersion */
   { "Version", QStyleOptionComboBox::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionComboBox::plastiqInherits = { &PlastiQQStyleOptionComplex::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionComboBox::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionComboBox::plastiq_static_metaObject = {
    { &PlastiQQStyleOptionComplex::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionComboBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionComboBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionComboBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionComboBox *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionComboBox(); break;
        case 1: o = new QStyleOptionComboBox((*reinterpret_cast< QStyleOptionComboBox(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionComboBox *p = new PlastiQQStyleOptionComboBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionComboBox *p = new PlastiQQStyleOptionComboBox();
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
        QStyleOptionComboBox *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionComboBox*>(object->plastiq_data());

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
        QStyleOptionComboBox *o = reinterpret_cast<QStyleOptionComboBox*>(object->plastiq_data());

        if(className == "QStyleOptionComplex") {
            stack[0].s_voidp = static_cast<QStyleOptionComplex*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionComboBox::~PlastiQQStyleOptionComboBox() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
