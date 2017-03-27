#include "plastiqmethod.h"
#include "plastiqqgraphicsitemgroup.h"

#include "widgets/PlastiQQGraphicsItem/plastiqqgraphicsitem.h"
#include <QGraphicsItemGroup> 

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsItemGroup::plastiqConstructors = {
    { "QGraphicsItemGroup()", { "QGraphicsItemGroup", "", "QGraphicsItemGroup*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsItemGroup(QGraphicsItem*)", { "QGraphicsItemGroup", "QGraphicsItem*", "QGraphicsItemGroup*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsItemGroup::plastiqMethods = {
    { "addToGroup(QGraphicsItem*)", { "addToGroup", "QGraphicsItem*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeFromGroup(QGraphicsItem*)", { "removeFromGroup", "QGraphicsItem*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsItemGroup::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsItemGroup::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsItemGroup::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsItemGroup::plastiqInherits = { &PlastiQQGraphicsItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsItemGroup::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsItemGroup::plastiq_static_metaObject = {
    { &PlastiQQGraphicsItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsItemGroup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsItemGroup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsItemGroup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsItemGroup *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsItemGroup(); break;
        case 1: o = new QGraphicsItemGroup(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsItemGroup *p = new PlastiQQGraphicsItemGroup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsItemGroup *p = new PlastiQQGraphicsItemGroup();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQGraphicsItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsItemGroup *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsItemGroup*>(object->plastiq_data());

        switch(id) {
        case 0: o->addToGroup(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->removeFromGroup(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;

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
        QGraphicsItemGroup *o = reinterpret_cast<QGraphicsItemGroup*>(object->plastiq_data());

        if(className == "QGraphicsItem") {
            stack[0].s_voidp = static_cast<QGraphicsItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsItemGroup::~PlastiQQGraphicsItemGroup() {
    QGraphicsItemGroup* o = reinterpret_cast<QGraphicsItemGroup*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
