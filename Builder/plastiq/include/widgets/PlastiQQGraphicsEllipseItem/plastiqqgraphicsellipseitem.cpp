#include "plastiqmethod.h"
#include "plastiqqgraphicsellipseitem.h"

#include "widgets/PlastiQQAbstractGraphicsShapeItem/plastiqqabstractgraphicsshapeitem.h"
#include <QGraphicsEllipseItem> 
#include <QRectF>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsEllipseItem::plastiqConstructors = {
    { "QGraphicsEllipseItem()", { "QGraphicsEllipseItem", "", "QGraphicsEllipseItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsEllipseItem(QGraphicsItem*)", { "QGraphicsEllipseItem", "QGraphicsItem*", "QGraphicsEllipseItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsEllipseItem(QRectF&)", { "QGraphicsEllipseItem", "QRectF&", "QGraphicsEllipseItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsEllipseItem(QRectF&,QGraphicsItem*)", { "QGraphicsEllipseItem", "QRectF&,QGraphicsItem*", "QGraphicsEllipseItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsEllipseItem(double,double,double,double)", { "QGraphicsEllipseItem", "qreal,qreal,qreal,qreal", "QGraphicsEllipseItem*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsEllipseItem(double,double,double,double,QGraphicsItem*)", { "QGraphicsEllipseItem", "qreal,qreal,qreal,qreal,QGraphicsItem*", "QGraphicsEllipseItem*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsEllipseItem::plastiqMethods = {
    { "rect()", { "rect", "", "QRectF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRect(QRectF&)", { "setRect", "QRectF&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRect(double,double,double,double)", { "setRect", "qreal,qreal,qreal,qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpanAngle(int)", { "setSpanAngle", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStartAngle(int)", { "setStartAngle", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spanAngle()", { "spanAngle", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startAngle()", { "startAngle", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsEllipseItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsEllipseItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsEllipseItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsEllipseItem::plastiqInherits = { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsEllipseItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsEllipseItem::plastiq_static_metaObject = {
    { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsEllipseItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsEllipseItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsEllipseItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsEllipseItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsEllipseItem(); break;
        case 1: o = new QGraphicsEllipseItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QGraphicsEllipseItem((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))); break;
        case 3: o = new QGraphicsEllipseItem((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QGraphicsItem*>(stack[2].s_voidp)); break;
        case 4: o = new QGraphicsEllipseItem(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 5: o = new QGraphicsEllipseItem(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    reinterpret_cast<QGraphicsItem*>(stack[5].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsEllipseItem *p = new PlastiQQGraphicsEllipseItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsEllipseItem *p = new PlastiQQGraphicsEllipseItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsEllipseItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsEllipseItem*>(object->plastiq_data());

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
        case 3: o->setSpanAngle(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setStartAngle(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: { int _r = o->spanAngle();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->startAngle();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QGraphicsEllipseItem *o = reinterpret_cast<QGraphicsEllipseItem*>(object->plastiq_data());

        if(className == "QAbstractGraphicsShapeItem") {
            stack[0].s_voidp = static_cast<QAbstractGraphicsShapeItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsEllipseItem::~PlastiQQGraphicsEllipseItem() {
    QGraphicsEllipseItem* o = reinterpret_cast<QGraphicsEllipseItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
