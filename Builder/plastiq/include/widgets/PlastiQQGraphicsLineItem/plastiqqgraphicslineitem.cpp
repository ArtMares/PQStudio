#include "plastiqmethod.h"
#include "plastiqqgraphicslineitem.h"

#include "widgets/PlastiQQGraphicsItem/plastiqqgraphicsitem.h"
#include <QGraphicsLineItem> 
#include <QLineF>
#include <QPen>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLineItem::plastiqConstructors = {
    { "QGraphicsLineItem()", { "QGraphicsLineItem", "", "QGraphicsLineItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsLineItem(QGraphicsItem*)", { "QGraphicsLineItem", "QGraphicsItem*", "QGraphicsLineItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsLineItem(QLineF&)", { "QGraphicsLineItem", "QLineF&", "QGraphicsLineItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsLineItem(QLineF&,QGraphicsItem*)", { "QGraphicsLineItem", "QLineF&,QGraphicsItem*", "QGraphicsLineItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsLineItem(double,double,double,double)", { "QGraphicsLineItem", "qreal,qreal,qreal,qreal", "QGraphicsLineItem*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsLineItem(double,double,double,double,QGraphicsItem*)", { "QGraphicsLineItem", "qreal,qreal,qreal,qreal,QGraphicsItem*", "QGraphicsLineItem*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLineItem::plastiqMethods = {
    { "line()", { "line", "", "QLineF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLine(QLineF&)", { "setLine", "QLineF&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLine(double,double,double,double)", { "setLine", "qreal,qreal,qreal,qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLineItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsLineItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsLineItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsLineItem::plastiqInherits = { &PlastiQQGraphicsItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsLineItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsLineItem::plastiq_static_metaObject = {
    { &PlastiQQGraphicsItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsLineItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsLineItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsLineItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsLineItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsLineItem(); break;
        case 1: o = new QGraphicsLineItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QGraphicsLineItem((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp))); break;
        case 3: o = new QGraphicsLineItem((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QGraphicsItem*>(stack[2].s_voidp)); break;
        case 4: o = new QGraphicsLineItem(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 5: o = new QGraphicsLineItem(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    reinterpret_cast<QGraphicsItem*>(stack[5].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsLineItem *p = new PlastiQQGraphicsLineItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsLineItem *p = new PlastiQQGraphicsLineItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQGraphicsItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsLineItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsLineItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QLineF *_r = new QLineF(o->line());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLineF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->setLine((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setLine(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
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
        QGraphicsLineItem *o = reinterpret_cast<QGraphicsLineItem*>(object->plastiq_data());

        if(className == "QGraphicsItem") {
            stack[0].s_voidp = static_cast<QGraphicsItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsLineItem::~PlastiQQGraphicsLineItem() {
    QGraphicsLineItem* o = reinterpret_cast<QGraphicsLineItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
