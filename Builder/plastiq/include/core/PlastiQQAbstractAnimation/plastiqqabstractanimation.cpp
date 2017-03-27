#include "plastiqmethod.h"
#include "plastiqqabstractanimation.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractAnimation> 
#include <QAnimationGroup>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractAnimation::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractAnimation::plastiqMethods = {
    { "currentLoop()", { "currentLoop", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentLoopTime()", { "currentLoopTime", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentTime()", { "currentTime", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "direction()", { "direction", "", "Direction", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "group()", { "group", "", "QAnimationGroup*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopCount()", { "loopCount", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDirection(enum)", { "setDirection", "Direction", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLoopCount(int)", { "setLoopCount", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "totalDuration()", { "totalDuration", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateCurrentTime(int)", { "updateCurrentTime", "int", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateDirection(enum)", { "updateDirection", "QAbstractAnimation::Direction", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateState(enum,enum)", { "updateState", "QAbstractAnimation::State,QAbstractAnimation::State", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "pause()", { "pause", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resume()", { "resume", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentTime(int)", { "setCurrentTime", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPaused(bool)", { "setPaused", "bool", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start()", { "start", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start(enum)", { "start", "QAbstractAnimation::DeletionPolicy", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractAnimation::plastiqSignals = {
    { "currentLoopChanged(int)", { "currentLoopChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "directionChanged(enum)", { "directionChanged", "QAbstractAnimation::Direction", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished()", { "finished", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum,enum)", { "stateChanged", "QAbstractAnimation::State,QAbstractAnimation::State", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractAnimation::plastiqProperties = {
    { "currentLoop", { "currentLoop", "int", "currentLoopChanged", "currentLoop" } },
    { "currentTime", { "currentTime", "int", "setCurrentTime", "currentTime" } },
    { "direction", { "direction", "long", "setDirection", "direction" } },
    { "duration", { "duration", "int", "", "duration" } },
    { "loopCount", { "loopCount", "int", "setLoopCount", "loopCount" } },
    { "state", { "state", "long", "stateChanged", "state" } },

};

QHash<QByteArray, long> PlastiQQAbstractAnimation::plastiqConstants = {

    /* QAbstractAnimation::DeletionPolicy */
   { "KeepWhenStopped", QAbstractAnimation::KeepWhenStopped },
   { "DeleteWhenStopped", QAbstractAnimation::DeleteWhenStopped },

    /* QAbstractAnimation::Direction */
   { "Forward", QAbstractAnimation::Forward },
   { "Backward", QAbstractAnimation::Backward },

    /* QAbstractAnimation::State */
   { "Stopped", QAbstractAnimation::Stopped },
   { "Paused", QAbstractAnimation::Paused },
   { "Running", QAbstractAnimation::Running },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractAnimation::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractAnimation::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractAnimation::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractAnimation", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractAnimation::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractAnimationWrapper : public QAbstractAnimation {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QAbstractAnimation::updateDirection(direction);
    }

    void PlastiQParentCall_updateDirection(QAbstractAnimation::Direction direction) {
        return QAbstractAnimation::updateDirection(direction);
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
        else return QAbstractAnimation::updateState(newState,oldState);
    }

    void PlastiQParentCall_updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
        return QAbstractAnimation::updateState(newState,oldState);
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
        else return QAbstractAnimation::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QAbstractAnimation::event(event);
    }

};

void PlastiQQAbstractAnimation::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractAnimationWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractAnimation *p = new PlastiQQAbstractAnimation();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractAnimation *p = new PlastiQQAbstractAnimation();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 22) {
            id -= 22;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractAnimation *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractAnimation*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->currentLoop();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->currentLoopTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->currentTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { qint64 _r = o->direction(); // HACK for Direction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { int _r = o->duration();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QAnimationGroup* _r = o->group();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAnimationGroup"; } break;
        case 6: { int _r = o->loopCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: o->setDirection(QAbstractAnimation::Direction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setLoopCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { int _r = o->totalDuration();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 12: if (isWrapper) ((PlastiQQAbstractAnimationWrapper*)o)->PlastiQParentCall_updateDirection(QAbstractAnimation::Direction(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 13: if (isWrapper) ((PlastiQQAbstractAnimationWrapper*)o)->PlastiQParentCall_updateState(QAbstractAnimation::State(stack[1].s_int64),
                    QAbstractAnimation::State(stack[2].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 14: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractAnimationWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: o->pause();
                stack[0].type = PlastiQ::Void; break;
        case 16: o->resume();
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setCurrentTime(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setPaused(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 20: o->start(QAbstractAnimation::DeletionPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractAnimation *o = reinterpret_cast<QAbstractAnimation*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractAnimation::currentLoopChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentLoopChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractAnimation::directionChanged,
            [=](QAbstractAnimation::Direction arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QAbstractAnimation::Direction";
                PlastiQ_activate(sender, "directionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractAnimation::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractAnimation::stateChanged,
            [=](QAbstractAnimation::State arg0, QAbstractAnimation::State arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QAbstractAnimation::State";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QAbstractAnimation::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractAnimation *o = reinterpret_cast<QAbstractAnimation*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractAnimation *o = reinterpret_cast<QAbstractAnimation*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractAnimation *o = reinterpret_cast<QAbstractAnimation*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractAnimation::~PlastiQQAbstractAnimation() {
    QAbstractAnimation* o = reinterpret_cast<QAbstractAnimation*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
