#include "plastiqmethod.h"
#include "plastiqqgraphicsblureffect.h"

#include "widgets/PlastiQQGraphicsEffect/plastiqqgraphicseffect.h"
#include <QGraphicsBlurEffect> 
#include <QPainter>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsBlurEffect::plastiqConstructors = {
    { "QGraphicsBlurEffect()", { "QGraphicsBlurEffect", "", "QGraphicsBlurEffect*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsBlurEffect(QObject*)", { "QGraphicsBlurEffect", "QObject*", "QGraphicsBlurEffect*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsBlurEffect::plastiqMethods = {
    { "blurHints()", { "blurHints", "", "BlurHints", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blurRadius()", { "blurRadius", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "draw(QPainter*)", { "draw", "QPainter*", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setBlurHints(enum)", { "setBlurHints", "BlurHints", "void", 3, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setBlurRadius(double)", { "setBlurRadius", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsBlurEffect::plastiqSignals = {
    { "blurHintsChanged(enum)", { "blurHintsChanged", "BlurHints", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "blurRadiusChanged(double)", { "blurRadiusChanged", "qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsBlurEffect::plastiqProperties = {
    { "blurHints", { "blurHints", "long", "setBlurHints", "blurHints" } },
    { "blurRadius", { "blurRadius", "qreal", "setBlurRadius", "blurRadius" } },

};

QHash<QByteArray, long> PlastiQQGraphicsBlurEffect::plastiqConstants = {

    /* QGraphicsBlurEffect::BlurHint */
   { "PerformanceHint", QGraphicsBlurEffect::PerformanceHint },
   { "QualityHint", QGraphicsBlurEffect::QualityHint },
   { "AnimationHint", QGraphicsBlurEffect::AnimationHint },

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsBlurEffect::plastiqInherits = { &PlastiQQGraphicsEffect::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsBlurEffect::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsBlurEffect::plastiq_static_metaObject = {
    { &PlastiQQGraphicsEffect::plastiq_static_metaObject, &plastiqInherits, "QGraphicsBlurEffect", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsBlurEffect::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsBlurEffectWrapper : public QGraphicsBlurEffect {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsBlurEffectWrapper(QObject *parent = Q_NULLPTR)
         : QGraphicsBlurEffect(parent),
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
        else return QGraphicsBlurEffect::draw(painter);
    }

    void PlastiQParentCall_draw(QPainter *painter) {
        return QGraphicsBlurEffect::draw(painter);
    }

};

void PlastiQQGraphicsBlurEffect::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsBlurEffectWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsBlurEffectWrapper(); break;
        case 1: o = new PlastiQQGraphicsBlurEffectWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsBlurEffect *p = new PlastiQQGraphicsBlurEffect();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsBlurEffect *p = new PlastiQQGraphicsBlurEffect();
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
        QGraphicsBlurEffect *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsBlurEffect*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->blurHints(); // HACK for BlurHints 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { double _r = o->blurRadius();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: if (isWrapper) ((PlastiQQGraphicsBlurEffectWrapper*)o)->PlastiQParentCall_draw(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setBlurHints(QGraphicsBlurEffect::BlurHints(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setBlurRadius(stack[1].s_double);
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
        QGraphicsBlurEffect *o = reinterpret_cast<QGraphicsBlurEffect*>(object->plastiq_data());

        if(className == "QGraphicsEffect") {
            stack[0].s_voidp = static_cast<QGraphicsEffect*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsBlurEffect::~PlastiQQGraphicsBlurEffect() {
    QGraphicsBlurEffect* o = reinterpret_cast<QGraphicsBlurEffect*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
