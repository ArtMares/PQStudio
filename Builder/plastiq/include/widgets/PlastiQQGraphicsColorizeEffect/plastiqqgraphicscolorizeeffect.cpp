#include "plastiqmethod.h"
#include "plastiqqgraphicscolorizeeffect.h"

#include "widgets/PlastiQQGraphicsEffect/plastiqqgraphicseffect.h"
#include <QGraphicsColorizeEffect> 
#include <QColor>
#include <QPainter>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsColorizeEffect::plastiqConstructors = {
    { "QGraphicsColorizeEffect()", { "QGraphicsColorizeEffect", "", "QGraphicsColorizeEffect*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsColorizeEffect(QObject*)", { "QGraphicsColorizeEffect", "QObject*", "QGraphicsColorizeEffect*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsColorizeEffect::plastiqMethods = {
    { "color()", { "color", "", "QColor", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "strength()", { "strength", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "draw(QPainter*)", { "draw", "QPainter*", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setColor(QColor&)", { "setColor", "QColor&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setStrength(double)", { "setStrength", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsColorizeEffect::plastiqSignals = {
    { "colorChanged(QColor&)", { "colorChanged", "QColor&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "strengthChanged(double)", { "strengthChanged", "qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsColorizeEffect::plastiqProperties = {
    { "color", { "color", "QColor", "setColor", "color" } },
    { "strength", { "strength", "qreal", "setStrength", "strength" } },

};

QHash<QByteArray, long> PlastiQQGraphicsColorizeEffect::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsColorizeEffect::plastiqInherits = { &PlastiQQGraphicsEffect::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsColorizeEffect::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsColorizeEffect::plastiq_static_metaObject = {
    { &PlastiQQGraphicsEffect::plastiq_static_metaObject, &plastiqInherits, "QGraphicsColorizeEffect", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsColorizeEffect::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsColorizeEffectWrapper : public QGraphicsColorizeEffect {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsColorizeEffectWrapper(QObject *parent = Q_NULLPTR)
         : QGraphicsColorizeEffect(parent),
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
        else return QGraphicsColorizeEffect::draw(painter);
    }

    void PlastiQParentCall_draw(QPainter *painter) {
        return QGraphicsColorizeEffect::draw(painter);
    }

};

void PlastiQQGraphicsColorizeEffect::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsColorizeEffectWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsColorizeEffectWrapper(); break;
        case 1: o = new PlastiQQGraphicsColorizeEffectWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsColorizeEffect *p = new PlastiQQGraphicsColorizeEffect();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsColorizeEffect *p = new PlastiQQGraphicsColorizeEffect();
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
        QGraphicsColorizeEffect *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsColorizeEffect*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { double _r = o->strength();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: if (isWrapper) ((PlastiQQGraphicsColorizeEffectWrapper*)o)->PlastiQParentCall_draw(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setStrength(stack[1].s_double);
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
        QGraphicsColorizeEffect *o = reinterpret_cast<QGraphicsColorizeEffect*>(object->plastiq_data());

        if(className == "QGraphicsEffect") {
            stack[0].s_voidp = static_cast<QGraphicsEffect*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsColorizeEffect::~PlastiQQGraphicsColorizeEffect() {
    QGraphicsColorizeEffect* o = reinterpret_cast<QGraphicsColorizeEffect*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
