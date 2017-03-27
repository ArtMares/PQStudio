#include "plastiqmethod.h"
#include "plastiqqpropertyanimation.h"

#include "core/PlastiQQVariantAnimation/plastiqqvariantanimation.h"
#include <QPropertyAnimation> 
#include <QByteArray>
#include <QObject>
#include <QEvent>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQPropertyAnimation::plastiqConstructors = {
    { "QPropertyAnimation()", { "QPropertyAnimation", "", "QPropertyAnimation*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPropertyAnimation(QObject*)", { "QPropertyAnimation", "QObject*", "QPropertyAnimation*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPropertyAnimation(QObject*,QByteArray)", { "QPropertyAnimation", "QObject*,QByteArray&", "QPropertyAnimation*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPropertyAnimation(QObject*,QByteArray,QObject*)", { "QPropertyAnimation", "QObject*,QByteArray&,QObject*", "QPropertyAnimation*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPropertyAnimation::plastiqMethods = {
    { "propertyName()", { "propertyName", "", "QByteArray", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPropertyName(QByteArray)", { "setPropertyName", "QByteArray&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTargetObject(QObject*)", { "setTargetObject", "QObject*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "targetObject()", { "targetObject", "", "QObject*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateCurrentValue(QVariant)", { "updateCurrentValue", "QVariant&", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateState(enum,enum)", { "updateState", "QAbstractAnimation::State,QAbstractAnimation::State", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPropertyAnimation::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPropertyAnimation::plastiqProperties = {
    { "propertyName", { "propertyName", "QByteArray", "setPropertyName", "propertyName" } },
    { "targetObject", { "targetObject", "QObject*", "setTargetObject", "targetObject" } },

};

QHash<QByteArray, long> PlastiQQPropertyAnimation::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPropertyAnimation::plastiqInherits = { &PlastiQQVariantAnimation::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPropertyAnimation::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPropertyAnimation::plastiq_static_metaObject = {
    { &PlastiQQVariantAnimation::plastiq_static_metaObject, &plastiqInherits, "QPropertyAnimation", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPropertyAnimation::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPropertyAnimationWrapper : public QPropertyAnimation {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQPropertyAnimationWrapper(QObject *parent = Q_NULLPTR)
         : QPropertyAnimation(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQPropertyAnimationWrapper(QObject *target, const QByteArray &propertyName, QObject *parent = Q_NULLPTR)
         : QPropertyAnimation(target,propertyName,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QPropertyAnimation::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QPropertyAnimation::event(event);
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
        else return QPropertyAnimation::updateCurrentValue(value);
    }

    void PlastiQParentCall_updateCurrentValue(const QVariant &value) {
        return QPropertyAnimation::updateCurrentValue(value);
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
        else return QPropertyAnimation::updateState(newState,oldState);
    }

    void PlastiQParentCall_updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
        return QPropertyAnimation::updateState(newState,oldState);
    }

};

void PlastiQQPropertyAnimation::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPropertyAnimationWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQPropertyAnimationWrapper(); break;
        case 1: o = new PlastiQQPropertyAnimationWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQPropertyAnimationWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_bytearray); break;
        case 3: o = new PlastiQQPropertyAnimationWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_bytearray,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPropertyAnimation *p = new PlastiQQPropertyAnimation();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPropertyAnimation *p = new PlastiQQPropertyAnimation();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQVariantAnimation::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPropertyAnimation *o = sc ? Q_NULLPTR : reinterpret_cast<QPropertyAnimation*>(object->plastiq_data());

        switch(id) {
        case 0: { QByteArray _r = o->propertyName();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 1: o->setPropertyName(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->setTargetObject(reinterpret_cast<QObject*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: { QObject* _r = o->targetObject();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQPropertyAnimationWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: if (isWrapper) ((PlastiQQPropertyAnimationWrapper*)o)->PlastiQParentCall_updateCurrentValue(stack[1].s_variant);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQPropertyAnimationWrapper*)o)->PlastiQParentCall_updateState(QAbstractAnimation::State(stack[1].s_int64),
                    QAbstractAnimation::State(stack[2].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQVariantAnimation::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPropertyAnimation *o = reinterpret_cast<QPropertyAnimation*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPropertyAnimation *o = reinterpret_cast<QPropertyAnimation*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPropertyAnimation *o = reinterpret_cast<QPropertyAnimation*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPropertyAnimation *o = reinterpret_cast<QPropertyAnimation*>(object->plastiq_data());

        if(className == "QVariantAnimation") {
            stack[0].s_voidp = static_cast<QVariantAnimation*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPropertyAnimation::~PlastiQQPropertyAnimation() {
    QPropertyAnimation* o = reinterpret_cast<QPropertyAnimation*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
