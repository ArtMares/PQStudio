#include "plastiqmethod.h"
#include "plastiqqpauseanimation.h"

#include "core/PlastiQQAbstractAnimation/plastiqqabstractanimation.h"
#include <QPauseAnimation> 
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQPauseAnimation::plastiqConstructors = {
    { "QPauseAnimation()", { "QPauseAnimation", "", "QPauseAnimation*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPauseAnimation(QObject*)", { "QPauseAnimation", "QObject*", "QPauseAnimation*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPauseAnimation(int)", { "QPauseAnimation", "int", "QPauseAnimation*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPauseAnimation(int,QObject*)", { "QPauseAnimation", "int,QObject*", "QPauseAnimation*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPauseAnimation::plastiqMethods = {
    { "setDuration(int)", { "setDuration", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateCurrentTime(int)", { "updateCurrentTime", "int", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPauseAnimation::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPauseAnimation::plastiqProperties = {
    { "duration", { "duration", "int", "setDuration", "duration" } },

};

QHash<QByteArray, long> PlastiQQPauseAnimation::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPauseAnimation::plastiqInherits = { &PlastiQQAbstractAnimation::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPauseAnimation::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPauseAnimation::plastiq_static_metaObject = {
    { &PlastiQQAbstractAnimation::plastiq_static_metaObject, &plastiqInherits, "QPauseAnimation", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPauseAnimation::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPauseAnimationWrapper : public QPauseAnimation {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQPauseAnimationWrapper(QObject *parent = Q_NULLPTR)
         : QPauseAnimation(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQPauseAnimationWrapper(int msecs, QObject *parent = Q_NULLPTR)
         : QPauseAnimation(msecs,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QPauseAnimation::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QPauseAnimation::event(e);
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
        else return QPauseAnimation::updateDirection(direction);
    }

    void PlastiQParentCall_updateDirection(QAbstractAnimation::Direction direction) {
        return QPauseAnimation::updateDirection(direction);
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
        else return QPauseAnimation::updateState(newState,oldState);
    }

    void PlastiQParentCall_updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
        return QPauseAnimation::updateState(newState,oldState);
    }

};

void PlastiQQPauseAnimation::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPauseAnimationWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQPauseAnimationWrapper(); break;
        case 1: o = new PlastiQQPauseAnimationWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQPauseAnimationWrapper(stack[1].s_int); break;
        case 3: o = new PlastiQQPauseAnimationWrapper(stack[1].s_int,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPauseAnimation *p = new PlastiQQPauseAnimation();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPauseAnimation *p = new PlastiQQPauseAnimation();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQAbstractAnimation::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPauseAnimation *o = sc ? Q_NULLPTR : reinterpret_cast<QPauseAnimation*>(object->plastiq_data());

        switch(id) {
        case 0: o->setDuration(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r;
                if (isWrapper) _r = ((PlastiQQPauseAnimationWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractAnimation::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPauseAnimation *o = reinterpret_cast<QPauseAnimation*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPauseAnimation *o = reinterpret_cast<QPauseAnimation*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPauseAnimation *o = reinterpret_cast<QPauseAnimation*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPauseAnimation *o = reinterpret_cast<QPauseAnimation*>(object->plastiq_data());

        if(className == "QAbstractAnimation") {
            stack[0].s_voidp = static_cast<QAbstractAnimation*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPauseAnimation::~PlastiQQPauseAnimation() {
    QPauseAnimation* o = reinterpret_cast<QPauseAnimation*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
