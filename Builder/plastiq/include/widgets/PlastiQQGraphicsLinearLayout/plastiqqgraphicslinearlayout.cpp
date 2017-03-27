#include "plastiqmethod.h"
#include "plastiqqgraphicslinearlayout.h"

#include "widgets/PlastiQQGraphicsLayout/plastiqqgraphicslayout.h"
#include <QGraphicsLinearLayout> 

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLinearLayout::plastiqConstructors = {
    { "QGraphicsLinearLayout()", { "QGraphicsLinearLayout", "", "QGraphicsLinearLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsLinearLayout(QGraphicsLayoutItem*)", { "QGraphicsLinearLayout", "QGraphicsLayoutItem*", "QGraphicsLinearLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsLinearLayout(enum)", { "QGraphicsLinearLayout", "Qt::Orientation", "QGraphicsLinearLayout*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsLinearLayout(enum,QGraphicsLayoutItem*)", { "QGraphicsLinearLayout", "Qt::Orientation,QGraphicsLayoutItem*", "QGraphicsLinearLayout*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLinearLayout::plastiqMethods = {
    { "addItem(QGraphicsLayoutItem*)", { "addItem", "QGraphicsLayoutItem*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addStretch()", { "addStretch", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addStretch(int)", { "addStretch", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alignment(QGraphicsLayoutItem*)", { "alignment", "QGraphicsLayoutItem*", "Qt::Alignment", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QGraphicsLayoutItem*)", { "insertItem", "int,QGraphicsLayoutItem*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertStretch(int)", { "insertStretch", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertStretch(int,int)", { "insertStretch", "int,int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemSpacing(int)", { "itemSpacing", "int", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItem(QGraphicsLayoutItem*)", { "removeItem", "QGraphicsLayoutItem*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(QGraphicsLayoutItem*,enum)", { "setAlignment", "QGraphicsLayoutItem*,Qt::Alignment", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemSpacing(int,double)", { "setItemSpacing", "int,qreal", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrientation(enum)", { "setOrientation", "Qt::Orientation", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(double)", { "setSpacing", "qreal", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStretchFactor(QGraphicsLayoutItem*,int)", { "setStretchFactor", "QGraphicsLayoutItem*,int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spacing()", { "spacing", "", "qreal", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stretchFactor(QGraphicsLayoutItem*)", { "stretchFactor", "QGraphicsLayoutItem*", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLinearLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsLinearLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsLinearLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsLinearLayout::plastiqInherits = { &PlastiQQGraphicsLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsLinearLayout::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsLinearLayout::plastiq_static_metaObject = {
    { &PlastiQQGraphicsLayout::plastiq_static_metaObject, &plastiqInherits, "QGraphicsLinearLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsLinearLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsLinearLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsLinearLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsLinearLayout(); break;
        case 1: o = new QGraphicsLinearLayout(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp)); break;
        case 2: o = new QGraphicsLinearLayout(Qt::Orientation(stack[1].s_int64)); break;
        case 3: o = new QGraphicsLinearLayout(Qt::Orientation(stack[1].s_int64),
                    reinterpret_cast<QGraphicsLayoutItem*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsLinearLayout *p = new PlastiQQGraphicsLinearLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsLinearLayout *p = new PlastiQQGraphicsLinearLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQGraphicsLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsLinearLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsLinearLayout*>(object->plastiq_data());

        switch(id) {
        case 0: o->addItem(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addStretch();
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addStretch(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 3: { qint64 _r = o->alignment(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp)); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: o->insertItem(stack[1].s_int,
                    reinterpret_cast<QGraphicsLayoutItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->insertStretch(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->insertStretch(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: { double _r = o->itemSpacing(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: o->removeItem(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setAlignment(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    Qt::Alignment(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setItemSpacing(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setOrientation(Qt::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setStretchFactor(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: { double _r = o->spacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { int _r = o->stretchFactor(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp));
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
        QGraphicsLinearLayout *o = reinterpret_cast<QGraphicsLinearLayout*>(object->plastiq_data());

        if(className == "QGraphicsLayout") {
            stack[0].s_voidp = static_cast<QGraphicsLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsLinearLayout::~PlastiQQGraphicsLinearLayout() {
    QGraphicsLinearLayout* o = reinterpret_cast<QGraphicsLinearLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
