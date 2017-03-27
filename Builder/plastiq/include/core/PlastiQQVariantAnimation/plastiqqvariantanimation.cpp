#include "plastiqmethod.h"
#include "plastiqqvariantanimation.h"

#include "core/PlastiQQAbstractAnimation/plastiqqabstractanimation.h"
#include <QVariantAnimation> 
#include <QVariant>
#include <QEasingCurve>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQVariantAnimation::plastiqConstructors = {
    { "QVariantAnimation()", { "QVariantAnimation", "", "QVariantAnimation*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVariantAnimation(QObject*)", { "QVariantAnimation", "QObject*", "QVariantAnimation*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVariantAnimation::plastiqMethods = {
    { "currentValue()", { "currentValue", "", "QVariant", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "easingCurve()", { "easingCurve", "", "QEasingCurve", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endValue()", { "endValue", "", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyValueAt(double)", { "keyValueAt", "qreal", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyValues()", { "keyValues", "", "KeyValues", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDuration(int)", { "setDuration", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEasingCurve(QEasingCurve&)", { "setEasingCurve", "QEasingCurve&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEndValue(QVariant)", { "setEndValue", "QVariant&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKeyValueAt(double,QVariant)", { "setKeyValueAt", "qreal,QVariant&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStartValue(QVariant)", { "setStartValue", "QVariant&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startValue()", { "startValue", "", "QVariant", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "interpolated(QVariant,QVariant,double)", { "interpolated", "QVariant&,QVariant&,qreal", "QVariant", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateCurrentValue(QVariant)", { "updateCurrentValue", "QVariant&", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateCurrentTime(int)", { "updateCurrentTime", "int", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateState(enum,enum)", { "updateState", "QAbstractAnimation::State,QAbstractAnimation::State", "void", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVariantAnimation::plastiqSignals = {
    { "valueChanged(QVariant)", { "valueChanged", "QVariant&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVariantAnimation::plastiqProperties = {
    { "currentValue", { "currentValue", "QVariant", "valueChanged", "currentValue" } },
    { "duration", { "duration", "int", "setDuration", "duration" } },
    { "easingCurve", { "easingCurve", "QEasingCurve", "setEasingCurve", "easingCurve" } },
    { "endValue", { "endValue", "QVariant", "setEndValue", "endValue" } },
    { "startValue", { "startValue", "QVariant", "setStartValue", "startValue" } },

};

QHash<QByteArray, long> PlastiQQVariantAnimation::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVariantAnimation::plastiqInherits = { &PlastiQQAbstractAnimation::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVariantAnimation::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVariantAnimation::plastiq_static_metaObject = {
    { &PlastiQQAbstractAnimation::plastiq_static_metaObject, &plastiqInherits, "QVariantAnimation", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVariantAnimation::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQVariantAnimationWrapper : public QVariantAnimation {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQVariantAnimationWrapper(QObject *parent = Q_NULLPTR)
         : QVariantAnimation(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QVariant interpolated(const QVariant &from, const QVariant &to, qreal progress) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant interpolated(const QVariant&,const QVariant&,qreal)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QVariant(from) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QVariant");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QVariant(to) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QVariant");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_double = progress;
            stack[3].name = QByteArrayLiteral("qreal");
            stack[3].type = PlastiQ::Double;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QVariantAnimation::interpolated(from,to,progress);
    }

    QVariant PlastiQParentCall_interpolated(const QVariant &from, const QVariant &to, qreal progress) const {
        return QVariantAnimation::interpolated(from,to,progress);
    }

    void updateCurrentValue(const QVariant &value) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateCurrentValue(const QVariant&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QVariant");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QVariantAnimation::updateCurrentValue(value);
    }

    void PlastiQParentCall_updateCurrentValue(const QVariant &value) {
        return QVariantAnimation::updateCurrentValue(value);
    }

    bool event(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QVariantAnimation::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QVariantAnimation::event(event);
    }

    void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateState(QAbstractAnimation::State,QAbstractAnimation::State)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int64 = newState;
            stack[1].name = QByteArrayLiteral("QAbstractAnimation::State");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_int64 = oldState;
            stack[2].name = QByteArrayLiteral("QAbstractAnimation::State");
            stack[2].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QVariantAnimation::updateState(newState,oldState);
    }

    void PlastiQParentCall_updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
        return QVariantAnimation::updateState(newState,oldState);
    }

    void updateDirection(QAbstractAnimation::Direction direction) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateDirection(QAbstractAnimation::Direction)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = direction;
            stack[1].name = QByteArrayLiteral("QAbstractAnimation::Direction");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QVariantAnimation::updateDirection(direction);
    }

    void PlastiQParentCall_updateDirection(QAbstractAnimation::Direction direction) {
        return QVariantAnimation::updateDirection(direction);
    }

};

void PlastiQQVariantAnimation::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQVariantAnimationWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQVariantAnimationWrapper(); break;
        case 1: o = new PlastiQQVariantAnimationWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQVariantAnimation *p = new PlastiQQVariantAnimation();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVariantAnimation *p = new PlastiQQVariantAnimation();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQAbstractAnimation::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVariantAnimation *o = sc ? Q_NULLPTR : reinterpret_cast<QVariantAnimation*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->currentValue());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QEasingCurve *_r = new QEasingCurve(o->easingCurve());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QEasingCurve";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->endValue());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->keyValueAt(stack[1].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: /* o->keyValues() | ret: `KeyValues` (INTERNAL CLASS) */ break;
        case 5: o->setDuration(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setEasingCurve((*reinterpret_cast< QEasingCurve(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setEndValue(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setKeyValueAt(stack[1].s_double,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setStartValue(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 10: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->startValue());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQVariantAnimationWrapper*)o)->PlastiQParentCall_interpolated(stack[1].s_variant,
                    stack[2].s_variant,
                    stack[3].s_double));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: if (isWrapper) ((PlastiQQVariantAnimationWrapper*)o)->PlastiQParentCall_updateCurrentValue(stack[1].s_variant);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 13: { bool _r;
                if (isWrapper) _r = ((PlastiQQVariantAnimationWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 15: if (isWrapper) ((PlastiQQVariantAnimationWrapper*)o)->PlastiQParentCall_updateState(QAbstractAnimation::State(stack[1].s_int64),
                    QAbstractAnimation::State(stack[2].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractAnimation::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QVariantAnimation *o = reinterpret_cast<QVariantAnimation*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVariantAnimation::valueChanged,
            [=](const QVariant& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QVariant(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QVariant";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVariantAnimation *o = reinterpret_cast<QVariantAnimation*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVariantAnimation *o = reinterpret_cast<QVariantAnimation*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVariantAnimation *o = reinterpret_cast<QVariantAnimation*>(object->plastiq_data());

        if(className == "QAbstractAnimation") {
            stack[0].s_voidp = static_cast<QAbstractAnimation*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVariantAnimation::~PlastiQQVariantAnimation() {
    QVariantAnimation* o = reinterpret_cast<QVariantAnimation*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
