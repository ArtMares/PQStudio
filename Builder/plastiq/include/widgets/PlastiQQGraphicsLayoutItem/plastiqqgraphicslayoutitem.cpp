#include "plastiqmethod.h"
#include "plastiqqgraphicslayoutitem.h"

#include <QGraphicsLayoutItem> 
#include <QRectF>
#include <QSizeF>
#include <QGraphicsItem>
#include <QSizePolicy>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLayoutItem::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLayoutItem::plastiqMethods = {
    { "contentsRect()", { "contentsRect", "", "QRectF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "effectiveSizeHint(enum)", { "effectiveSizeHint", "Qt::SizeHint", "QSizeF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "effectiveSizeHint(enum,QSizeF&)", { "effectiveSizeHint", "Qt::SizeHint,QSizeF&", "QSizeF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "geometry()", { "geometry", "", "QRectF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getContentsMargins(qreal*,qreal*,qreal*,qreal*)", { "getContentsMargins", "qreal*,qreal*,qreal*,qreal*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "graphicsItem()", { "graphicsItem", "", "QGraphicsItem*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLayout()", { "isLayout", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumHeight()", { "maximumHeight", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumSize()", { "maximumSize", "", "QSizeF", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumWidth()", { "maximumWidth", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumHeight()", { "minimumHeight", "", "qreal", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumSize()", { "minimumSize", "", "QSizeF", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumWidth()", { "minimumWidth", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ownedByLayout()", { "ownedByLayout", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentLayoutItem()", { "parentLayoutItem", "", "QGraphicsLayoutItem*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preferredHeight()", { "preferredHeight", "", "qreal", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preferredSize()", { "preferredSize", "", "QSizeF", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preferredWidth()", { "preferredWidth", "", "qreal", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGeometry(QRectF&)", { "setGeometry", "QRectF&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumHeight(double)", { "setMaximumHeight", "qreal", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumSize(QSizeF&)", { "setMaximumSize", "QSizeF&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumSize(double,double)", { "setMaximumSize", "qreal,qreal", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumWidth(double)", { "setMaximumWidth", "qreal", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumHeight(double)", { "setMinimumHeight", "qreal", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumSize(QSizeF&)", { "setMinimumSize", "QSizeF&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumSize(double,double)", { "setMinimumSize", "qreal,qreal", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumWidth(double)", { "setMinimumWidth", "qreal", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setParentLayoutItem(QGraphicsLayoutItem*)", { "setParentLayoutItem", "QGraphicsLayoutItem*", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPreferredHeight(double)", { "setPreferredHeight", "qreal", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPreferredSize(QSizeF&)", { "setPreferredSize", "QSizeF&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPreferredSize(double,double)", { "setPreferredSize", "qreal,qreal", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPreferredWidth(double)", { "setPreferredWidth", "qreal", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizePolicy(QSizePolicy&)", { "setSizePolicy", "QSizePolicy&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizePolicy(enum,enum)", { "setSizePolicy", "QSizePolicy::Policy,QSizePolicy::Policy", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizePolicy(enum,enum,enum)", { "setSizePolicy", "QSizePolicy::Policy,QSizePolicy::Policy,QSizePolicy::ControlType", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizePolicy()", { "sizePolicy", "", "QSizePolicy", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateGeometry()", { "updateGeometry", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGraphicsItem(QGraphicsItem*)", { "setGraphicsItem", "QGraphicsItem*", "void", 37, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setOwnedByLayout(bool)", { "setOwnedByLayout", "bool", "void", 38, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sizeHint(enum)", { "sizeHint", "Qt::SizeHint", "QSizeF", 39, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHint(enum,QSizeF&)", { "sizeHint", "Qt::SizeHint,QSizeF&", "QSizeF", 40, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsLayoutItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsLayoutItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsLayoutItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsLayoutItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQGraphicsLayoutItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsLayoutItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QGraphicsLayoutItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsLayoutItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsLayoutItemWrapper : public QGraphicsLayoutItem {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    ~PlastiQQGraphicsLayoutItemWrapper() { PlastiQ_self_destroy(pqObjectWPtr); }

    void getContentsMargins(qreal *left, qreal *top, qreal *right, qreal *bottom) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void getContentsMargins(qreal*,qreal*,qreal*,qreal*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(left);
            stack[1].name = QByteArrayLiteral("qreal");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(top);
            stack[2].name = QByteArrayLiteral("qreal");
            stack[2].type = PlastiQ::ObjectStar;
            stack[3].s_voidp = reinterpret_cast<void*>(right);
            stack[3].name = QByteArrayLiteral("qreal");
            stack[3].type = PlastiQ::ObjectStar;
            stack[4].s_voidp = reinterpret_cast<void*>(bottom);
            stack[4].name = QByteArrayLiteral("qreal");
            stack[4].type = PlastiQ::ObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsLayoutItem::getContentsMargins(left,top,right,bottom);
    }

    void PlastiQParentCall_getContentsMargins(qreal *left, qreal *top, qreal *right, qreal *bottom) const {
        return QGraphicsLayoutItem::getContentsMargins(left,top,right,bottom);
    }

    void setGeometry(const QRectF &rect) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setGeometry(const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRectF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsLayoutItem::setGeometry(rect);
    }

    void PlastiQParentCall_setGeometry(const QRectF &rect) {
        return QGraphicsLayoutItem::setGeometry(rect);
    }

    void updateGeometry() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateGeometry()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsLayoutItem::updateGeometry();
    }

    void PlastiQParentCall_updateGeometry() {
        return QGraphicsLayoutItem::updateGeometry();
    }

};

void PlastiQQGraphicsLayoutItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsLayoutItemWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsLayoutItem *p = new PlastiQQGraphicsLayoutItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsLayoutItem *p = new PlastiQQGraphicsLayoutItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 41) {
            id -= 41;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsLayoutItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsLayoutItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->contentsRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->effectiveSizeHint(Qt::SizeHint(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->effectiveSizeHint(Qt::SizeHint(stack[1].s_int64),
                    (*reinterpret_cast< QSizeF(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->geometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: if (isWrapper) ((PlastiQQGraphicsLayoutItemWrapper*)o)->PlastiQParentCall_getContentsMargins(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                else o->getContentsMargins(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: { QGraphicsItem* _r = o->graphicsItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 6: { bool _r = o->isLayout();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { double _r = o->maximumHeight();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->maximumSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { double _r = o->maximumWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { double _r = o->minimumHeight();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->minimumSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { double _r = o->minimumWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { bool _r = o->ownedByLayout();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { QGraphicsLayoutItem* _r = o->parentLayoutItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsLayoutItem"; } break;
        case 15: { double _r = o->preferredHeight();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->preferredSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { double _r = o->preferredWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 18: if (isWrapper) ((PlastiQQGraphicsLayoutItemWrapper*)o)->PlastiQParentCall_setGeometry((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                else o->setGeometry((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setMaximumHeight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setMaximumSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setMaximumSize(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setMaximumWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setMinimumHeight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setMinimumSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setMinimumSize(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setMinimumWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setParentLayoutItem(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setPreferredHeight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setPreferredSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setPreferredSize(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setPreferredWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setSizePolicy((*reinterpret_cast< QSizePolicy(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setSizePolicy(QSizePolicy::Policy(stack[1].s_int64),
                    QSizePolicy::Policy(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setSizePolicy(QSizePolicy::Policy(stack[1].s_int64),
                    QSizePolicy::Policy(stack[2].s_int64),
                    QSizePolicy::ControlType(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 35: { /* COPY OBJECT */
            QSizePolicy *_r = new QSizePolicy(o->sizePolicy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizePolicy";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: if (isWrapper) ((PlastiQQGraphicsLayoutItemWrapper*)o)->PlastiQParentCall_updateGeometry();
                else o->updateGeometry();
                stack[0].type = PlastiQ::Void; break;
        case 37: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 38: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 39: { /* COPY OBJECT */
            QSizeF *_r; stack[0].type = PlastiQ::Error; } break;
        case 40: { /* COPY OBJECT */
            QSizeF *_r; stack[0].type = PlastiQ::Error; } break;

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
        QGraphicsLayoutItem *o = reinterpret_cast<QGraphicsLayoutItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQGraphicsLayoutItem::~PlastiQQGraphicsLayoutItem() {
    QGraphicsLayoutItem* o = reinterpret_cast<QGraphicsLayoutItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
