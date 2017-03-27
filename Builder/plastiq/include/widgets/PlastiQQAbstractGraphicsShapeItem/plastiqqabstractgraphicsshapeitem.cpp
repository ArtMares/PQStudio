#include "plastiqmethod.h"
#include "plastiqqabstractgraphicsshapeitem.h"

#include "widgets/PlastiQQGraphicsItem/plastiqqgraphicsitem.h"
#include <QAbstractGraphicsShapeItem> 
#include <QBrush>
#include <QPen>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractGraphicsShapeItem::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractGraphicsShapeItem::plastiqMethods = {
    { "brush()", { "brush", "", "QBrush", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractGraphicsShapeItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractGraphicsShapeItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractGraphicsShapeItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractGraphicsShapeItem::plastiqInherits = { &PlastiQQGraphicsItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractGraphicsShapeItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject = {
    { &PlastiQQGraphicsItem::plastiq_static_metaObject, &plastiqInherits, "QAbstractGraphicsShapeItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractGraphicsShapeItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractGraphicsShapeItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractGraphicsShapeItem *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractGraphicsShapeItem *p = new PlastiQQAbstractGraphicsShapeItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractGraphicsShapeItem *p = new PlastiQQAbstractGraphicsShapeItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQGraphicsItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractGraphicsShapeItem *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractGraphicsShapeItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
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
        QAbstractGraphicsShapeItem *o = reinterpret_cast<QAbstractGraphicsShapeItem*>(object->plastiq_data());

        if(className == "QGraphicsItem") {
            stack[0].s_voidp = static_cast<QGraphicsItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractGraphicsShapeItem::~PlastiQQAbstractGraphicsShapeItem() {
    QAbstractGraphicsShapeItem* o = reinterpret_cast<QAbstractGraphicsShapeItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
