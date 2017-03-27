#include "plastiqmethod.h"
#include "plastiqqgraphicsgridlayout.h"

#include "widgets/PlastiQQGraphicsLayout/plastiqqgraphicslayout.h"
#include <QGraphicsGridLayout> 
#include <QGraphicsLayoutItem>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsGridLayout::plastiqConstructors = {
    { "QGraphicsGridLayout()", { "QGraphicsGridLayout", "", "QGraphicsGridLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsGridLayout(QGraphicsLayoutItem*)", { "QGraphicsGridLayout", "QGraphicsLayoutItem*", "QGraphicsGridLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsGridLayout::plastiqMethods = {
    { "addItem(QGraphicsLayoutItem*,int,int,int,int)", { "addItem", "QGraphicsLayoutItem*,int,int,int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QGraphicsLayoutItem*,int,int,int,int,enum)", { "addItem", "QGraphicsLayoutItem*,int,int,int,int,Qt::Alignment", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QGraphicsLayoutItem*,int,int)", { "addItem", "QGraphicsLayoutItem*,int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QGraphicsLayoutItem*,int,int,enum)", { "addItem", "QGraphicsLayoutItem*,int,int,Qt::Alignment", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alignment(QGraphicsLayoutItem*)", { "alignment", "QGraphicsLayoutItem*", "Qt::Alignment", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnAlignment(int)", { "columnAlignment", "int", "Qt::Alignment", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnMaximumWidth(int)", { "columnMaximumWidth", "int", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnMinimumWidth(int)", { "columnMinimumWidth", "int", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnPreferredWidth(int)", { "columnPreferredWidth", "int", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnSpacing(int)", { "columnSpacing", "int", "qreal", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnStretchFactor(int)", { "columnStretchFactor", "int", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalSpacing()", { "horizontalSpacing", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int,int)", { "itemAt", "int,int", "QGraphicsLayoutItem*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItem(QGraphicsLayoutItem*)", { "removeItem", "QGraphicsLayoutItem*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowAlignment(int)", { "rowAlignment", "int", "Qt::Alignment", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowMaximumHeight(int)", { "rowMaximumHeight", "int", "qreal", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowMinimumHeight(int)", { "rowMinimumHeight", "int", "qreal", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowPreferredHeight(int)", { "rowPreferredHeight", "int", "qreal", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowSpacing(int)", { "rowSpacing", "int", "qreal", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowStretchFactor(int)", { "rowStretchFactor", "int", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(QGraphicsLayoutItem*,enum)", { "setAlignment", "QGraphicsLayoutItem*,Qt::Alignment", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnAlignment(int,enum)", { "setColumnAlignment", "int,Qt::Alignment", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnFixedWidth(int,double)", { "setColumnFixedWidth", "int,qreal", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnMaximumWidth(int,double)", { "setColumnMaximumWidth", "int,qreal", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnMinimumWidth(int,double)", { "setColumnMinimumWidth", "int,qreal", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnPreferredWidth(int,double)", { "setColumnPreferredWidth", "int,qreal", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnSpacing(int,double)", { "setColumnSpacing", "int,qreal", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnStretchFactor(int,int)", { "setColumnStretchFactor", "int,int", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalSpacing(double)", { "setHorizontalSpacing", "qreal", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowAlignment(int,enum)", { "setRowAlignment", "int,Qt::Alignment", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowFixedHeight(int,double)", { "setRowFixedHeight", "int,qreal", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowMaximumHeight(int,double)", { "setRowMaximumHeight", "int,qreal", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowMinimumHeight(int,double)", { "setRowMinimumHeight", "int,qreal", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowPreferredHeight(int,double)", { "setRowPreferredHeight", "int,qreal", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowSpacing(int,double)", { "setRowSpacing", "int,qreal", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowStretchFactor(int,int)", { "setRowStretchFactor", "int,int", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(double)", { "setSpacing", "qreal", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalSpacing(double)", { "setVerticalSpacing", "qreal", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalSpacing()", { "verticalSpacing", "", "qreal", 40, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsGridLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsGridLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsGridLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsGridLayout::plastiqInherits = { &PlastiQQGraphicsLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsGridLayout::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsGridLayout::plastiq_static_metaObject = {
    { &PlastiQQGraphicsLayout::plastiq_static_metaObject, &plastiqInherits, "QGraphicsGridLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsGridLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsGridLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsGridLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsGridLayout(); break;
        case 1: o = new QGraphicsGridLayout(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsGridLayout *p = new PlastiQQGraphicsGridLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsGridLayout *p = new PlastiQQGraphicsGridLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 41) {
            id -= 41;
            PlastiQQGraphicsLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsGridLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsGridLayout*>(object->plastiq_data());

        switch(id) {
        case 0: o->addItem(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addItem(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    Qt::Alignment(stack[6].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addItem(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addItem(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    Qt::Alignment(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: { qint64 _r = o->alignment(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp)); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { qint64 _r = o->columnAlignment(stack[1].s_int); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { double _r = o->columnMaximumWidth(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { double _r = o->columnMinimumWidth(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { double _r = o->columnPreferredWidth(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { double _r = o->columnSpacing(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: { int _r = o->columnStretchFactor(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { double _r = o->horizontalSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { QGraphicsLayoutItem* _r = o->itemAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsLayoutItem"; } break;
        case 14: o->removeItem(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: { qint64 _r = o->rowAlignment(stack[1].s_int); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { double _r = o->rowMaximumHeight(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 18: { double _r = o->rowMinimumHeight(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 19: { double _r = o->rowPreferredHeight(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 20: { double _r = o->rowSpacing(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 21: { int _r = o->rowStretchFactor(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: o->setAlignment(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    Qt::Alignment(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setColumnAlignment(stack[1].s_int,
                    Qt::Alignment(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setColumnFixedWidth(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setColumnMaximumWidth(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setColumnMinimumWidth(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setColumnPreferredWidth(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setColumnSpacing(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setColumnStretchFactor(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setHorizontalSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setRowAlignment(stack[1].s_int,
                    Qt::Alignment(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setRowFixedHeight(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setRowMaximumHeight(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setRowMinimumHeight(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setRowPreferredHeight(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setRowSpacing(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setRowStretchFactor(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setVerticalSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 40: { double _r = o->verticalSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QGraphicsGridLayout *o = reinterpret_cast<QGraphicsGridLayout*>(object->plastiq_data());

        if(className == "QGraphicsLayout") {
            stack[0].s_voidp = static_cast<QGraphicsLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsGridLayout::~PlastiQQGraphicsGridLayout() {
    QGraphicsGridLayout* o = reinterpret_cast<QGraphicsGridLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
