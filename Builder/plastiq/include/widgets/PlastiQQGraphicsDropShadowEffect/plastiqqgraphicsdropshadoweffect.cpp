#include "plastiqmethod.h"
#include "plastiqqgraphicsdropshadoweffect.h"

#include "widgets/PlastiQQGraphicsEffect/plastiqqgraphicseffect.h"
#include <QGraphicsDropShadowEffect> 
#include <QColor>
#include <QPointF>
#include <QPainter>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsDropShadowEffect::plastiqConstructors = {
    { "QGraphicsDropShadowEffect()", { "QGraphicsDropShadowEffect", "", "QGraphicsDropShadowEffect*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsDropShadowEffect(QObject*)", { "QGraphicsDropShadowEffect", "QObject*", "QGraphicsDropShadowEffect*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsDropShadowEffect::plastiqMethods = {
    { "blurRadius()", { "blurRadius", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color()", { "color", "", "QColor", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "offset()", { "offset", "", "QPointF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xOffset()", { "xOffset", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yOffset()", { "yOffset", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "draw(QPainter*)", { "draw", "QPainter*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setBlurRadius(double)", { "setBlurRadius", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setColor(QColor&)", { "setColor", "QColor&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOffset(QPointF&)", { "setOffset", "QPointF&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOffset(double,double)", { "setOffset", "qreal,qreal", "void", 9, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOffset(double)", { "setOffset", "qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setXOffset(double)", { "setXOffset", "qreal", "void", 11, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setYOffset(double)", { "setYOffset", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsDropShadowEffect::plastiqSignals = {
    { "blurRadiusChanged(double)", { "blurRadiusChanged", "qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "colorChanged(QColor&)", { "colorChanged", "QColor&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "offsetChanged(QPointF&)", { "offsetChanged", "QPointF&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsDropShadowEffect::plastiqProperties = {
    { "blurRadius", { "blurRadius", "qreal", "setBlurRadius", "blurRadius" } },
    { "color", { "color", "QColor", "setColor", "color" } },
    { "offset", { "offset", "QPointF", "setOffset", "offset" } },
    { "xOffset", { "xOffset", "qreal", "setXOffset", "xOffset" } },
    { "yOffset", { "yOffset", "qreal", "setYOffset", "yOffset" } },

};

QHash<QByteArray, long> PlastiQQGraphicsDropShadowEffect::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsDropShadowEffect::plastiqInherits = { &PlastiQQGraphicsEffect::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsDropShadowEffect::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsDropShadowEffect::plastiq_static_metaObject = {
    { &PlastiQQGraphicsEffect::plastiq_static_metaObject, &plastiqInherits, "QGraphicsDropShadowEffect", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsDropShadowEffect::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsDropShadowEffectWrapper : public QGraphicsDropShadowEffect {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsDropShadowEffectWrapper(QObject *parent = Q_NULLPTR)
         : QGraphicsDropShadowEffect(parent),
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
        else return QGraphicsDropShadowEffect::draw(painter);
    }

    void PlastiQParentCall_draw(QPainter *painter) {
        return QGraphicsDropShadowEffect::draw(painter);
    }

};

void PlastiQQGraphicsDropShadowEffect::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsDropShadowEffectWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsDropShadowEffectWrapper(); break;
        case 1: o = new PlastiQQGraphicsDropShadowEffectWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsDropShadowEffect *p = new PlastiQQGraphicsDropShadowEffect();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsDropShadowEffect *p = new PlastiQQGraphicsDropShadowEffect();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            PlastiQQGraphicsEffect::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsDropShadowEffect *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsDropShadowEffect*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->blurRadius();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->offset());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { double _r = o->xOffset();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->yOffset();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: if (isWrapper) ((PlastiQQGraphicsDropShadowEffectWrapper*)o)->PlastiQParentCall_draw(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setBlurRadius(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setOffset((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setOffset(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setOffset(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setXOffset(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setYOffset(stack[1].s_double);
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
        QGraphicsDropShadowEffect *o = reinterpret_cast<QGraphicsDropShadowEffect*>(object->plastiq_data());

        if(className == "QGraphicsEffect") {
            stack[0].s_voidp = static_cast<QGraphicsEffect*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsDropShadowEffect::~PlastiQQGraphicsDropShadowEffect() {
    QGraphicsDropShadowEffect* o = reinterpret_cast<QGraphicsDropShadowEffect*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
