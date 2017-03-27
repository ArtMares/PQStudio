#include "plastiqmethod.h"
#include "plastiqqstyleoptionheader.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionHeader> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionHeader::plastiqConstructors = {
    { "QStyleOptionHeader()", { "QStyleOptionHeader", "", "QStyleOptionHeader*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionHeader(QStyleOptionHeader&)", { "QStyleOptionHeader", "QStyleOptionHeader&", "QStyleOptionHeader*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionHeader::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionHeader::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionHeader::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionHeader::plastiqConstants = {

    /* QStyleOptionHeader::SectionPosition */
   { "Beginning", QStyleOptionHeader::Beginning },
   { "Middle", QStyleOptionHeader::Middle },
   { "End", QStyleOptionHeader::End },
   { "OnlyOneSection", QStyleOptionHeader::OnlyOneSection },

    /* QStyleOptionHeader::SelectedPosition */
   { "NotAdjacent", QStyleOptionHeader::NotAdjacent },
   { "NextIsSelected", QStyleOptionHeader::NextIsSelected },
   { "PreviousIsSelected", QStyleOptionHeader::PreviousIsSelected },
   { "NextAndPreviousAreSelected", QStyleOptionHeader::NextAndPreviousAreSelected },

    /* QStyleOptionHeader::SortIndicator */
   { "None", QStyleOptionHeader::None },
   { "SortUp", QStyleOptionHeader::SortUp },
   { "SortDown", QStyleOptionHeader::SortDown },

    /* QStyleOptionHeader::StyleOptionType */
   { "Type", QStyleOptionHeader::Type },

    /* QStyleOptionHeader::StyleOptionVersion */
   { "Version", QStyleOptionHeader::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionHeader::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionHeader::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionHeader::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionHeader", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionHeader::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionHeader::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionHeader *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionHeader(); break;
        case 1: o = new QStyleOptionHeader((*reinterpret_cast< QStyleOptionHeader(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionHeader *p = new PlastiQQStyleOptionHeader();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionHeader *p = new PlastiQQStyleOptionHeader();
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
        QStyleOptionHeader *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionHeader*>(object->plastiq_data());

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
        QStyleOptionHeader *o = reinterpret_cast<QStyleOptionHeader*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionHeader::~PlastiQQStyleOptionHeader() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
