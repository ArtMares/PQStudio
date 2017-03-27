#include "plastiqmethod.h"
#include "plastiqqgraphicspathitem.h"

#include "widgets/PlastiQQAbstractGraphicsShapeItem/plastiqqabstractgraphicsshapeitem.h"
#include <QGraphicsPathItem> 
#include <QPainterPath>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPathItem::plastiqConstructors = {
    { "QGraphicsPathItem()", { "QGraphicsPathItem", "", "QGraphicsPathItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPathItem(QGraphicsItem*)", { "QGraphicsPathItem", "QGraphicsItem*", "QGraphicsPathItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPathItem(QPainterPath&)", { "QGraphicsPathItem", "QPainterPath&", "QGraphicsPathItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPathItem(QPainterPath&,QGraphicsItem*)", { "QGraphicsPathItem", "QPainterPath&,QGraphicsItem*", "QGraphicsPathItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPathItem::plastiqMethods = {
    { "path()", { "path", "", "QPainterPath", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPath(QPainterPath&)", { "setPath", "QPainterPath&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPathItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsPathItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsPathItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsPathItem::plastiqInherits = { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsPathItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsPathItem::plastiq_static_metaObject = {
    { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsPathItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsPathItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsPathItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsPathItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsPathItem(); break;
        case 1: o = new QGraphicsPathItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QGraphicsPathItem((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))); break;
        case 3: o = new QGraphicsPathItem((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QGraphicsItem*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsPathItem *p = new PlastiQQGraphicsPathItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsPathItem *p = new PlastiQQGraphicsPathItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsPathItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsPathItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->path());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
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
        QGraphicsPathItem *o = reinterpret_cast<QGraphicsPathItem*>(object->plastiq_data());

        if(className == "QAbstractGraphicsShapeItem") {
            stack[0].s_voidp = static_cast<QAbstractGraphicsShapeItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsPathItem::~PlastiQQGraphicsPathItem() {
    QGraphicsPathItem* o = reinterpret_cast<QGraphicsPathItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
