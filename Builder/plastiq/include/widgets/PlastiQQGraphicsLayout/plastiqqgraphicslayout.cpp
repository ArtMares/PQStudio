#include "plastiqmethod.h"
#include "plastiqqgraphicslayout.h"

#include "widgets/PlastiQQGraphicsLayoutItem/plastiqqgraphicslayoutitem.h"
#include <QGraphicsLayout> 
#include <QGraphicsLayoutItem>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLayout::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLayout::plastiqMethods = {
    { "activate()", { "activate", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invalidate()", { "invalidate", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActivated()", { "isActivated", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int)", { "itemAt", "int", "QGraphicsLayoutItem*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAt(int)", { "removeAt", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentsMargins(double,double,double,double)", { "setContentsMargins", "qreal,qreal,qreal,qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widgetEvent(QEvent*)", { "widgetEvent", "QEvent*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addChildLayoutItem(QGraphicsLayoutItem*)", { "addChildLayoutItem", "QGraphicsLayoutItem*", "void", 8, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsLayout::plastiqInherits = { &PlastiQQGraphicsLayoutItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsLayout::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsLayout::plastiq_static_metaObject = {
    { &PlastiQQGraphicsLayoutItem::plastiq_static_metaObject, &plastiqInherits, "QGraphicsLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsLayoutWrapper : public QGraphicsLayout {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void invalidate() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void invalidate()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsLayout::invalidate();
    }

    void PlastiQParentCall_invalidate() {
        return QGraphicsLayout::invalidate();
    }

    void widgetEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void widgetEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsLayout::widgetEvent(e);
    }

    void PlastiQParentCall_widgetEvent(QEvent *e) {
        return QGraphicsLayout::widgetEvent(e);
    }

};

void PlastiQQGraphicsLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsLayoutWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsLayout *p = new PlastiQQGraphicsLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsLayout *p = new PlastiQQGraphicsLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQGraphicsLayoutItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsLayout*>(object->plastiq_data());

        switch(id) {
        case 0: o->activate();
                stack[0].type = PlastiQ::Void; break;
        case 1: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: if (isWrapper) ((PlastiQQGraphicsLayoutWrapper*)o)->PlastiQParentCall_invalidate();
                else o->invalidate();
                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r = o->isActivated();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { QGraphicsLayoutItem* _r = o->itemAt(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsLayoutItem"; } break;
        case 5: o->removeAt(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setContentsMargins(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: if (isWrapper) ((PlastiQQGraphicsLayoutWrapper*)o)->PlastiQParentCall_widgetEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else o->widgetEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

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
        QGraphicsLayout *o = reinterpret_cast<QGraphicsLayout*>(object->plastiq_data());

        if(className == "QGraphicsLayoutItem") {
            stack[0].s_voidp = static_cast<QGraphicsLayoutItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsLayout::~PlastiQQGraphicsLayout() {
    QGraphicsLayout* o = reinterpret_cast<QGraphicsLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
