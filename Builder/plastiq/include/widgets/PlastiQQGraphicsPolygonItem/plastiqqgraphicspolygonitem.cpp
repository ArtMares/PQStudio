#include "plastiqmethod.h"
#include "plastiqqgraphicspolygonitem.h"

#include "widgets/PlastiQQAbstractGraphicsShapeItem/plastiqqabstractgraphicsshapeitem.h"
#include <QGraphicsPolygonItem> 
#include <QPolygonF>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPolygonItem::plastiqConstructors = {
    { "QGraphicsPolygonItem()", { "QGraphicsPolygonItem", "", "QGraphicsPolygonItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPolygonItem(QGraphicsItem*)", { "QGraphicsPolygonItem", "QGraphicsItem*", "QGraphicsPolygonItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPolygonItem(QPolygonF&)", { "QGraphicsPolygonItem", "QPolygonF&", "QGraphicsPolygonItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPolygonItem(QPolygonF&,QGraphicsItem*)", { "QGraphicsPolygonItem", "QPolygonF&,QGraphicsItem*", "QGraphicsPolygonItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPolygonItem::plastiqMethods = {
    { "fillRule()", { "fillRule", "", "Qt::FillRule", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "polygon()", { "polygon", "", "QPolygonF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFillRule(enum)", { "setFillRule", "Qt::FillRule", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPolygon(QPolygonF&)", { "setPolygon", "QPolygonF&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPolygonItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsPolygonItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsPolygonItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsPolygonItem::plastiqInherits = { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsPolygonItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsPolygonItem::plastiq_static_metaObject = {
    { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsPolygonItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsPolygonItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsPolygonItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsPolygonItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsPolygonItem(); break;
        case 1: o = new QGraphicsPolygonItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QGraphicsPolygonItem((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp))); break;
        case 3: o = new QGraphicsPolygonItem((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QGraphicsItem*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsPolygonItem *p = new PlastiQQGraphicsPolygonItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsPolygonItem *p = new PlastiQQGraphicsPolygonItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsPolygonItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsPolygonItem*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->fillRule(); // HACK for Qt::FillRule 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->polygon() | ret: `QPolygonF` */ break;
        case 2: o->setFillRule(Qt::FillRule(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setPolygon((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)));
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
        QGraphicsPolygonItem *o = reinterpret_cast<QGraphicsPolygonItem*>(object->plastiq_data());

        if(className == "QAbstractGraphicsShapeItem") {
            stack[0].s_voidp = static_cast<QAbstractGraphicsShapeItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsPolygonItem::~PlastiQQGraphicsPolygonItem() {
    QGraphicsPolygonItem* o = reinterpret_cast<QGraphicsPolygonItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
