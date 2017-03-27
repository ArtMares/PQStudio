#include "plastiqmethod.h"
#include "plastiqqstyleoptioncomplex.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionComplex> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionComplex::plastiqConstructors = {
    { "QStyleOptionComplex()", { "QStyleOptionComplex", "", "QStyleOptionComplex*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionComplex(int)", { "QStyleOptionComplex", "int", "QStyleOptionComplex*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionComplex(int,int)", { "QStyleOptionComplex", "int,int", "QStyleOptionComplex*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionComplex(QStyleOptionComplex&)", { "QStyleOptionComplex", "QStyleOptionComplex&", "QStyleOptionComplex*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionComplex::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionComplex::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionComplex::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionComplex::plastiqConstants = {

    /* QStyleOptionComplex::StyleOptionType */
   { "Type", QStyleOptionComplex::Type },

    /* QStyleOptionComplex::StyleOptionVersion */
   { "Version", QStyleOptionComplex::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionComplex::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionComplex::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionComplex::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionComplex", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionComplex::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionComplex::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionComplex *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionComplex(); break;
        case 1: o = new QStyleOptionComplex(stack[1].s_int); break;
        case 2: o = new QStyleOptionComplex(stack[1].s_int,
                    stack[2].s_int); break;
        case 3: o = new QStyleOptionComplex((*reinterpret_cast< QStyleOptionComplex(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionComplex *p = new PlastiQQStyleOptionComplex();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionComplex *p = new PlastiQQStyleOptionComplex();
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
        QStyleOptionComplex *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionComplex*>(object->plastiq_data());

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
        QStyleOptionComplex *o = reinterpret_cast<QStyleOptionComplex*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionComplex::~PlastiQQStyleOptionComplex() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
