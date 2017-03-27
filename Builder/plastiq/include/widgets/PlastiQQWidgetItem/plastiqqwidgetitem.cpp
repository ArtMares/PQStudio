#include "plastiqmethod.h"
#include "plastiqqwidgetitem.h"

#include "widgets/PlastiQQLayoutItem/plastiqqlayoutitem.h"
#include <QWidgetItem> 

QHash<QByteArray, PlastiQMethod> PlastiQQWidgetItem::plastiqConstructors = {
    { "QWidgetItem(QWidget*)", { "QWidgetItem", "QWidget*", "QWidgetItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWidgetItem::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWidgetItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWidgetItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWidgetItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWidgetItem::plastiqInherits = { &PlastiQQLayoutItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWidgetItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQWidgetItem::plastiq_static_metaObject = {
    { &PlastiQQLayoutItem::plastiq_static_metaObject, &plastiqInherits, "QWidgetItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWidgetItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWidgetItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWidgetItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWidgetItem(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWidgetItem *p = new PlastiQQWidgetItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWidgetItem *p = new PlastiQQWidgetItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLayoutItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWidgetItem *o = sc ? Q_NULLPTR : reinterpret_cast<QWidgetItem*>(object->plastiq_data());

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
        QWidgetItem *o = reinterpret_cast<QWidgetItem*>(object->plastiq_data());

        if(className == "QLayoutItem") {
            stack[0].s_voidp = static_cast<QLayoutItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWidgetItem::~PlastiQQWidgetItem() {
    QWidgetItem* o = reinterpret_cast<QWidgetItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
