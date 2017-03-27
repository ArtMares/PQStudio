#include "plastiqmethod.h"
#include "plastiqqgraphicsanchorlayout.h"

#include "widgets/PlastiQQGraphicsLayout/plastiqqgraphicslayout.h"
#include <QGraphicsAnchorLayout> 
#include <QGraphicsAnchor>
#include <QSizeF>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsAnchorLayout::plastiqConstructors = {
    { "QGraphicsAnchorLayout()", { "QGraphicsAnchorLayout", "", "QGraphicsAnchorLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsAnchorLayout(QGraphicsLayoutItem*)", { "QGraphicsAnchorLayout", "QGraphicsLayoutItem*", "QGraphicsAnchorLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsAnchorLayout::plastiqMethods = {
    { "addAnchor(QGraphicsLayoutItem*,enum,QGraphicsLayoutItem*,enum)", { "addAnchor", "QGraphicsLayoutItem*,Qt::AnchorPoint,QGraphicsLayoutItem*,Qt::AnchorPoint", "QGraphicsAnchor*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAnchors(QGraphicsLayoutItem*,QGraphicsLayoutItem*)", { "addAnchors", "QGraphicsLayoutItem*,QGraphicsLayoutItem*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAnchors(QGraphicsLayoutItem*,QGraphicsLayoutItem*,enum)", { "addAnchors", "QGraphicsLayoutItem*,QGraphicsLayoutItem*,Qt::Orientations", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addCornerAnchors(QGraphicsLayoutItem*,enum,QGraphicsLayoutItem*,enum)", { "addCornerAnchors", "QGraphicsLayoutItem*,Qt::Corner,QGraphicsLayoutItem*,Qt::Corner", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "anchor(QGraphicsLayoutItem*,enum,QGraphicsLayoutItem*,enum)", { "anchor", "QGraphicsLayoutItem*,Qt::AnchorPoint,QGraphicsLayoutItem*,Qt::AnchorPoint", "QGraphicsAnchor*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalSpacing()", { "horizontalSpacing", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalSpacing(double)", { "setHorizontalSpacing", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(double)", { "setSpacing", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalSpacing(double)", { "setVerticalSpacing", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalSpacing()", { "verticalSpacing", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint(enum)", { "sizeHint", "Qt::SizeHint", "QSizeF", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHint(enum,QSizeF&)", { "sizeHint", "Qt::SizeHint,QSizeF&", "QSizeF", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsAnchorLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsAnchorLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsAnchorLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsAnchorLayout::plastiqInherits = { &PlastiQQGraphicsLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsAnchorLayout::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsAnchorLayout::plastiq_static_metaObject = {
    { &PlastiQQGraphicsLayout::plastiq_static_metaObject, &plastiqInherits, "QGraphicsAnchorLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsAnchorLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsAnchorLayoutWrapper : public QGraphicsAnchorLayout {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsAnchorLayoutWrapper(QGraphicsLayoutItem *parent = Q_NULLPTR)
         : QGraphicsAnchorLayout(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSizeF sizeHint(Qt::SizeHint,const QSizeF&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int64 = which;
            stack[1].name = QByteArrayLiteral("Qt::SizeHint");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_voidp = new QSizeF(constraint) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QSizeF");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSizeF _r = QSizeF(*reinterpret_cast<QSizeF*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsAnchorLayout::sizeHint(which,constraint);
    }

    QSizeF PlastiQParentCall_sizeHint(Qt::SizeHint which, const QSizeF &constraint = QSizeF()) const {
        return QGraphicsAnchorLayout::sizeHint(which,constraint);
    }

};

void PlastiQQGraphicsAnchorLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsAnchorLayoutWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsAnchorLayoutWrapper(); break;
        case 1: o = new PlastiQQGraphicsAnchorLayoutWrapper(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsAnchorLayout *p = new PlastiQQGraphicsAnchorLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsAnchorLayout *p = new PlastiQQGraphicsAnchorLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQGraphicsLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsAnchorLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsAnchorLayout*>(object->plastiq_data());

        switch(id) {
        case 0: { QGraphicsAnchor* _r = o->addAnchor(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    Qt::AnchorPoint(stack[2].s_int64),
                    reinterpret_cast<QGraphicsLayoutItem*>(stack[3].s_voidp),
                    Qt::AnchorPoint(stack[4].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsAnchor"; } break;
        case 1: o->addAnchors(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    reinterpret_cast<QGraphicsLayoutItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addAnchors(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    reinterpret_cast<QGraphicsLayoutItem*>(stack[2].s_voidp),
                    Qt::Orientations(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addCornerAnchors(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    Qt::Corner(stack[2].s_int64),
                    reinterpret_cast<QGraphicsLayoutItem*>(stack[3].s_voidp),
                    Qt::Corner(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QGraphicsAnchor* _r = o->anchor(reinterpret_cast<QGraphicsLayoutItem*>(stack[1].s_voidp),
                    Qt::AnchorPoint(stack[2].s_int64),
                    reinterpret_cast<QGraphicsLayoutItem*>(stack[3].s_voidp),
                    Qt::AnchorPoint(stack[4].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsAnchor"; } break;
        case 5: { double _r = o->horizontalSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: o->setHorizontalSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setVerticalSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: { double _r = o->verticalSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { /* COPY OBJECT */
            QSizeF *_r;
                if (isWrapper) _r = new QSizeF(((PlastiQQGraphicsAnchorLayoutWrapper*)o)->PlastiQParentCall_sizeHint(Qt::SizeHint(stack[1].s_int64)));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QSizeF *_r;
                if (isWrapper) _r = new QSizeF(((PlastiQQGraphicsAnchorLayoutWrapper*)o)->PlastiQParentCall_sizeHint(Qt::SizeHint(stack[1].s_int64),
                    (*reinterpret_cast< QSizeF(*) >(stack[2].s_voidp))));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QGraphicsAnchorLayout *o = reinterpret_cast<QGraphicsAnchorLayout*>(object->plastiq_data());

        if(className == "QGraphicsLayout") {
            stack[0].s_voidp = static_cast<QGraphicsLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsAnchorLayout::~PlastiQQGraphicsAnchorLayout() {
    QGraphicsAnchorLayout* o = reinterpret_cast<QGraphicsAnchorLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
