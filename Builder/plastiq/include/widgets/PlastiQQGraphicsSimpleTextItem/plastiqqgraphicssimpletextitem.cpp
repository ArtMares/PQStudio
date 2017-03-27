#include "plastiqmethod.h"
#include "plastiqqgraphicssimpletextitem.h"

#include "widgets/PlastiQQAbstractGraphicsShapeItem/plastiqqabstractgraphicsshapeitem.h"
#include <QGraphicsSimpleTextItem> 
#include <QFont>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSimpleTextItem::plastiqConstructors = {
    { "QGraphicsSimpleTextItem()", { "QGraphicsSimpleTextItem", "", "QGraphicsSimpleTextItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsSimpleTextItem(QGraphicsItem*)", { "QGraphicsSimpleTextItem", "QGraphicsItem*", "QGraphicsSimpleTextItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsSimpleTextItem(QString)", { "QGraphicsSimpleTextItem", "QString&", "QGraphicsSimpleTextItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsSimpleTextItem(QString,QGraphicsItem*)", { "QGraphicsSimpleTextItem", "QString&,QGraphicsItem*", "QGraphicsSimpleTextItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSimpleTextItem::plastiqMethods = {
    { "font()", { "font", "", "QFont", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSimpleTextItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsSimpleTextItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsSimpleTextItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsSimpleTextItem::plastiqInherits = { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsSimpleTextItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsSimpleTextItem::plastiq_static_metaObject = {
    { &PlastiQQAbstractGraphicsShapeItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsSimpleTextItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsSimpleTextItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsSimpleTextItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsSimpleTextItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsSimpleTextItem(); break;
        case 1: o = new QGraphicsSimpleTextItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QGraphicsSimpleTextItem(stack[1].s_string); break;
        case 3: o = new QGraphicsSimpleTextItem(stack[1].s_string,
                    reinterpret_cast<QGraphicsItem*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsSimpleTextItem *p = new PlastiQQGraphicsSimpleTextItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsSimpleTextItem *p = new PlastiQQGraphicsSimpleTextItem();
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
        QGraphicsSimpleTextItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsSimpleTextItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 3: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QGraphicsSimpleTextItem *o = reinterpret_cast<QGraphicsSimpleTextItem*>(object->plastiq_data());

        if(className == "QAbstractGraphicsShapeItem") {
            stack[0].s_voidp = static_cast<QAbstractGraphicsShapeItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsSimpleTextItem::~PlastiQQGraphicsSimpleTextItem() {
    QGraphicsSimpleTextItem* o = reinterpret_cast<QGraphicsSimpleTextItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
