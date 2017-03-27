#include "plastiqmethod.h"
#include "plastiqqgraphicsrectitem.h"

#include "widgets/PlastiQQAbstractGraphicsShapeItem/plastiqqabstractgraphicsshapeitem.h"
#include <QGraphicsRectItem> 
#include <QRectF>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsRectItem::plastiqConstructors = {
    { "QGraphicsRectItem()", { "QGraphicsRectItem", "", "QGraphicsRectItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsRectItem(QGraphicsItem*)", { "QGraphicsRectItem", "QGraphicsItem*", "QGraphicsRectItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsRectItem(QRectF&)", { "QGraphicsRectItem", "QRectF&", "QGraphicsRectItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsRectItem(QRectF&,QGraphicsItem*)", { "QGraphicsRectItem", "QRectF&,QGraphicsItem*", "QGraphicsRectItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsRectItem(double,double,double,double)", { "QGraphicsRectItem", "qreal,qreal,qreal,qreal", "QGraphicsRectItem*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsRectItem(double,double,double,double,QGraphicsItem*)", { "QGraphicsRectItem", "qreal,qreal,qreal,qreal,QGraphicsItem*", "QGraphicsRectItem*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsRectItem::plastiqMethods = {
    { "rect()", { "rect", "", "QRectF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRect(QRectF&)", { "setRect", "QRectF&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRect(double,double,double,double)", { "setRect", "qreal,qreal,qreal,qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsRectItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsRectItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsRectItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsRectItem::plastiqInherits = { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsRectItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsRectItem::plastiq_static_metaObject = {
    { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsRectItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsRectItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsRectItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsRectItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsRectItem(); break;
        case 1: o = new QGraphicsRectItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QGraphicsRectItem((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))); break;
        case 3: o = new QGraphicsRectItem((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QGraphicsItem*>(stack[2].s_voidp)); break;
        case 4: o = new QGraphicsRectItem(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 5: o = new QGraphicsRectItem(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    reinterpret_cast<QGraphicsItem*>(stack[5].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsRectItem *p = new PlastiQQGraphicsRectItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsRectItem *p = new PlastiQQGraphicsRectItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsRectItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsRectItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->setRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
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
        QGraphicsRectItem *o = reinterpret_cast<QGraphicsRectItem*>(object->plastiq_data());

        if(className == "QAbstractGraphicsShapeItem") {
            stack[0].s_voidp = static_cast<QAbstractGraphicsShapeItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsRectItem::~PlastiQQGraphicsRectItem() {
    QGraphicsRectItem* o = reinterpret_cast<QGraphicsRectItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
