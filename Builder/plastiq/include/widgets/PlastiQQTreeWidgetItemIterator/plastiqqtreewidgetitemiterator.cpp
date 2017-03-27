#include "plastiqmethod.h"
#include "plastiqqtreewidgetitemiterator.h"

#include <QTreeWidgetItemIterator> 

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidgetItemIterator::plastiqConstructors = {
    { "QTreeWidgetItemIterator(QTreeWidgetItemIterator&)", { "QTreeWidgetItemIterator", "QTreeWidgetItemIterator&", "QTreeWidgetItemIterator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItemIterator(QTreeWidget*)", { "QTreeWidgetItemIterator", "QTreeWidget*", "QTreeWidgetItemIterator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItemIterator(QTreeWidget*,enum)", { "QTreeWidgetItemIterator", "QTreeWidget*,IteratorFlags", "QTreeWidgetItemIterator*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItemIterator(QTreeWidgetItem*)", { "QTreeWidgetItemIterator", "QTreeWidgetItem*", "QTreeWidgetItemIterator*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItemIterator(QTreeWidgetItem*,enum)", { "QTreeWidgetItemIterator", "QTreeWidgetItem*,IteratorFlags", "QTreeWidgetItemIterator*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidgetItemIterator::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidgetItemIterator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTreeWidgetItemIterator::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTreeWidgetItemIterator::plastiqConstants = {

    /* QTreeWidgetItemIterator::IteratorFlag */
   { "All", QTreeWidgetItemIterator::All },
   { "Hidden", QTreeWidgetItemIterator::Hidden },
   { "NotHidden", QTreeWidgetItemIterator::NotHidden },
   { "Selected", QTreeWidgetItemIterator::Selected },
   { "Unselected", QTreeWidgetItemIterator::Unselected },
   { "Selectable", QTreeWidgetItemIterator::Selectable },
   { "NotSelectable", QTreeWidgetItemIterator::NotSelectable },
   { "DragEnabled", QTreeWidgetItemIterator::DragEnabled },
   { "DragDisabled", QTreeWidgetItemIterator::DragDisabled },
   { "DropEnabled", QTreeWidgetItemIterator::DropEnabled },
   { "DropDisabled", QTreeWidgetItemIterator::DropDisabled },
   { "HasChildren", QTreeWidgetItemIterator::HasChildren },
   { "NoChildren", QTreeWidgetItemIterator::NoChildren },
   { "Checked", QTreeWidgetItemIterator::Checked },
   { "NotChecked", QTreeWidgetItemIterator::NotChecked },
   { "Enabled", QTreeWidgetItemIterator::Enabled },
   { "Disabled", QTreeWidgetItemIterator::Disabled },
   { "Editable", QTreeWidgetItemIterator::Editable },
   { "NotEditable", QTreeWidgetItemIterator::NotEditable },
   { "UserFlag", QTreeWidgetItemIterator::UserFlag },

};

QVector<PlastiQMetaObject*> PlastiQQTreeWidgetItemIterator::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTreeWidgetItemIterator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTreeWidgetItemIterator::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTreeWidgetItemIterator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTreeWidgetItemIterator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTreeWidgetItemIterator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTreeWidgetItemIterator *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTreeWidgetItemIterator((*reinterpret_cast< QTreeWidgetItemIterator(*) >(stack[1].s_voidp))); break;
        case 1: o = new QTreeWidgetItemIterator(reinterpret_cast<QTreeWidget*>(stack[1].s_voidp)); break;
        case 2: o = new QTreeWidgetItemIterator(reinterpret_cast<QTreeWidget*>(stack[1].s_voidp),
                    QTreeWidgetItemIterator::IteratorFlags(stack[2].s_int64)); break;
        case 3: o = new QTreeWidgetItemIterator(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp)); break;
        case 4: o = new QTreeWidgetItemIterator(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    QTreeWidgetItemIterator::IteratorFlags(stack[2].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTreeWidgetItemIterator *p = new PlastiQQTreeWidgetItemIterator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTreeWidgetItemIterator *p = new PlastiQQTreeWidgetItemIterator();
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
        QTreeWidgetItemIterator *o = sc ? Q_NULLPTR : reinterpret_cast<QTreeWidgetItemIterator*>(object->plastiq_data());

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
        QTreeWidgetItemIterator *o = reinterpret_cast<QTreeWidgetItemIterator*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTreeWidgetItemIterator::~PlastiQQTreeWidgetItemIterator() {
    QTreeWidgetItemIterator* o = reinterpret_cast<QTreeWidgetItemIterator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
