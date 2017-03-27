#include "plastiqmethod.h"
#include "plastiqqgraphicsopacityeffect.h"

#include "widgets/PlastiQQGraphicsEffect/plastiqqgraphicseffect.h"
#include <QGraphicsOpacityEffect> 
#include <QBrush>
#include <QPainter>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsOpacityEffect::plastiqConstructors = {
    { "QGraphicsOpacityEffect()", { "QGraphicsOpacityEffect", "", "QGraphicsOpacityEffect*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsOpacityEffect(QObject*)", { "QGraphicsOpacityEffect", "QObject*", "QGraphicsOpacityEffect*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsOpacityEffect::plastiqMethods = {
    { "opacity()", { "opacity", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opacityMask()", { "opacityMask", "", "QBrush", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "draw(QPainter*)", { "draw", "QPainter*", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setOpacity(double)", { "setOpacity", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOpacityMask(QBrush&)", { "setOpacityMask", "QBrush&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsOpacityEffect::plastiqSignals = {
    { "opacityChanged(double)", { "opacityChanged", "qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "opacityMaskChanged(QBrush&)", { "opacityMaskChanged", "QBrush&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsOpacityEffect::plastiqProperties = {
    { "opacity", { "opacity", "qreal", "setOpacity", "opacity" } },
    { "opacityMask", { "opacityMask", "QBrush", "setOpacityMask", "opacityMask" } },

};

QHash<QByteArray, long> PlastiQQGraphicsOpacityEffect::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsOpacityEffect::plastiqInherits = { &PlastiQQGraphicsEffect::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsOpacityEffect::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGraphicsOpacityEffect::plastiq_static_metaObject = {
    { &PlastiQQGraphicsEffect::plastiq_static_metaObject, &plastiqInherits, "QGraphicsOpacityEffect", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsOpacityEffect::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsOpacityEffectWrapper : public QGraphicsOpacityEffect {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsOpacityEffectWrapper(QObject *parent = Q_NULLPTR)
         : QGraphicsOpacityEffect(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void draw(QPainter *painter) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void draw(QPainter*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsOpacityEffect::draw(painter);
    }

    void PlastiQParentCall_draw(QPainter *painter) {
        return QGraphicsOpacityEffect::draw(painter);
    }

    QRectF boundingRectFor(const QRectF &rect) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QRectF boundingRectFor(const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRectF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QRectF _r = QRectF(*reinterpret_cast<QRectF*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsOpacityEffect::boundingRectFor(rect);
    }

    QRectF PlastiQParentCall_boundingRectFor(const QRectF &rect) const {
        return QGraphicsOpacityEffect::boundingRectFor(rect);
    }

    void sourceChanged(ChangeFlags flags) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void sourceChanged(ChangeFlags)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = flags;
            stack[1].name = QByteArrayLiteral("ChangeFlags");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsOpacityEffect::sourceChanged(flags);
    }

    void PlastiQParentCall_sourceChanged(ChangeFlags flags) {
        return QGraphicsOpacityEffect::sourceChanged(flags);
    }

};

void PlastiQQGraphicsOpacityEffect::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsOpacityEffectWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsOpacityEffectWrapper(); break;
        case 1: o = new PlastiQQGraphicsOpacityEffectWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsOpacityEffect *p = new PlastiQQGraphicsOpacityEffect();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsOpacityEffect *p = new PlastiQQGraphicsOpacityEffect();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQGraphicsEffect::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsOpacityEffect *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsOpacityEffect*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->opacity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->opacityMask());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: if (isWrapper) ((PlastiQQGraphicsOpacityEffectWrapper*)o)->PlastiQParentCall_draw(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setOpacity(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setOpacityMask((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQGraphicsEffect::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGraphicsOpacityEffect *o = reinterpret_cast<QGraphicsOpacityEffect*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QGraphicsOpacityEffect::opacityChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "opacityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QGraphicsOpacityEffect::opacityMaskChanged,
            [=](const QBrush& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QBrush(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QBrush";
                PlastiQ_activate(sender, "opacityMaskChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsOpacityEffect *o = reinterpret_cast<QGraphicsOpacityEffect*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsOpacityEffect *o = reinterpret_cast<QGraphicsOpacityEffect*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsOpacityEffect *o = reinterpret_cast<QGraphicsOpacityEffect*>(object->plastiq_data());

        if(className == "QGraphicsEffect") {
            stack[0].s_voidp = static_cast<QGraphicsEffect*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsOpacityEffect::~PlastiQQGraphicsOpacityEffect() {
    QGraphicsOpacityEffect* o = reinterpret_cast<QGraphicsOpacityEffect*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
