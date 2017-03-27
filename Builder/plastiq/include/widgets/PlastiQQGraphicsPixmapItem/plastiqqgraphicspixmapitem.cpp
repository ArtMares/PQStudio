#include "plastiqmethod.h"
#include "plastiqqgraphicspixmapitem.h"

#include "widgets/PlastiQQGraphicsItem/plastiqqgraphicsitem.h"
#include <QGraphicsPixmapItem> 
#include <QPointF>
#include <QPixmap>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPixmapItem::plastiqConstructors = {
    { "QGraphicsPixmapItem()", { "QGraphicsPixmapItem", "", "QGraphicsPixmapItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPixmapItem(QGraphicsItem*)", { "QGraphicsPixmapItem", "QGraphicsItem*", "QGraphicsPixmapItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPixmapItem(QPixmap&)", { "QGraphicsPixmapItem", "QPixmap&", "QGraphicsPixmapItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsPixmapItem(QPixmap&,QGraphicsItem*)", { "QGraphicsPixmapItem", "QPixmap&,QGraphicsItem*", "QGraphicsPixmapItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPixmapItem::plastiqMethods = {
    { "offset()", { "offset", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap()", { "pixmap", "", "QPixmap", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOffset(QPointF&)", { "setOffset", "QPointF&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOffset(double,double)", { "setOffset", "qreal,qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixmap(QPixmap&)", { "setPixmap", "QPixmap&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShapeMode(enum)", { "setShapeMode", "ShapeMode", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransformationMode(enum)", { "setTransformationMode", "Qt::TransformationMode", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shapeMode()", { "shapeMode", "", "ShapeMode", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformationMode()", { "transformationMode", "", "Qt::TransformationMode", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsPixmapItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsPixmapItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsPixmapItem::plastiqConstants = {

    /* QGraphicsPixmapItem::ShapeMode */
   { "MaskShape", QGraphicsPixmapItem::MaskShape },
   { "BoundingRectShape", QGraphicsPixmapItem::BoundingRectShape },
   { "HeuristicMaskShape", QGraphicsPixmapItem::HeuristicMaskShape },

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsPixmapItem::plastiqInherits = { &PlastiQQGraphicsItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsPixmapItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsPixmapItem::plastiq_static_metaObject = {
    { &PlastiQQGraphicsItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsPixmapItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsPixmapItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsPixmapItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsPixmapItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsPixmapItem(); break;
        case 1: o = new QGraphicsPixmapItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QGraphicsPixmapItem((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))); break;
        case 3: o = new QGraphicsPixmapItem((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QGraphicsItem*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsPixmapItem *p = new PlastiQQGraphicsPixmapItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsPixmapItem *p = new PlastiQQGraphicsPixmapItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQGraphicsItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsPixmapItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsPixmapItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->offset());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->setOffset((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setOffset(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setShapeMode(QGraphicsPixmapItem::ShapeMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setTransformationMode(Qt::TransformationMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: { qint64 _r = o->shapeMode(); // HACK for ShapeMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { qint64 _r = o->transformationMode(); // HACK for Qt::TransformationMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QGraphicsPixmapItem *o = reinterpret_cast<QGraphicsPixmapItem*>(object->plastiq_data());

        if(className == "QGraphicsItem") {
            stack[0].s_voidp = static_cast<QGraphicsItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsPixmapItem::~PlastiQQGraphicsPixmapItem() {
    QGraphicsPixmapItem* o = reinterpret_cast<QGraphicsPixmapItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
