#include "plastiqmethod.h"
#include "plastiqqsequentialanimationgroup.h"

#include "core/PlastiQQAnimationGroup/plastiqqanimationgroup.h"
#include <QSequentialAnimationGroup> 
#include <QPauseAnimation>
#include <QAbstractAnimation>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQSequentialAnimationGroup::plastiqConstructors = {
    { "QSequentialAnimationGroup()", { "QSequentialAnimationGroup", "", "QSequentialAnimationGroup*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSequentialAnimationGroup(QObject*)", { "QSequentialAnimationGroup", "QObject*", "QSequentialAnimationGroup*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSequentialAnimationGroup::plastiqMethods = {
    { "addPause(int)", { "addPause", "int", "QPauseAnimation*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentAnimation()", { "currentAnimation", "", "QAbstractAnimation*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertPause(int,int)", { "insertPause", "int,int", "QPauseAnimation*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateCurrentTime(int)", { "updateCurrentTime", "int", "void", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateDirection(enum)", { "updateDirection", "QAbstractAnimation::Direction", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateState(enum,enum)", { "updateState", "QAbstractAnimation::State,QAbstractAnimation::State", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSequentialAnimationGroup::plastiqSignals = {
    { "currentAnimationChanged(QAbstractAnimation*)", { "currentAnimationChanged", "QAbstractAnimation*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQSequentialAnimationGroup::plastiqProperties = {
    { "currentAnimation", { "currentAnimation", "QAbstractAnimationconst*", "currentAnimationChanged", "currentAnimation" } },

};

QHash<QByteArray, long> PlastiQQSequentialAnimationGroup::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSequentialAnimationGroup::plastiqInherits = { &PlastiQQAnimationGroup::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSequentialAnimationGroup::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSequentialAnimationGroup::plastiq_static_metaObject = {
    { &PlastiQQAnimationGroup::plastiq_static_metaObject, &plastiqInherits, "QSequentialAnimationGroup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSequentialAnimationGroup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSequentialAnimationGroupWrapper : public QSequentialAnimationGroup {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSequentialAnimationGroupWrapper(QObject *parent = Q_NULLPTR)
         : QSequentialAnimationGroup(parent),
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
        else return QSequentialAnimationGroup::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QSequentialAnimationGroup::event(event);
    }

    void updateCurrentTime(int currentTime) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateCurrentTime(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = currentTime;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSequentialAnimationGroup::updateCurrentTime(currentTime);
    }

    void PlastiQParentCall_updateCurrentTime(int currentTime) {
        return QSequentialAnimationGroup::updateCurrentTime(currentTime);
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
        else return QSequentialAnimationGroup::updateDirection(direction);
    }

    void PlastiQParentCall_updateDirection(QAbstractAnimation::Direction direction) {
        return QSequentialAnimationGroup::updateDirection(direction);
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
        else return QSequentialAnimationGroup::updateState(newState,oldState);
    }

    void PlastiQParentCall_updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
        return QSequentialAnimationGroup::updateState(newState,oldState);
    }

};

void PlastiQQSequentialAnimationGroup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSequentialAnimationGroupWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSequentialAnimationGroupWrapper(); break;
        case 1: o = new PlastiQQSequentialAnimationGroupWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSequentialAnimationGroup *p = new PlastiQQSequentialAnimationGroup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSequentialAnimationGroup *p = new PlastiQQSequentialAnimationGroup();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQAnimationGroup::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSequentialAnimationGroup *o = sc ? Q_NULLPTR : reinterpret_cast<QSequentialAnimationGroup*>(object->plastiq_data());

        switch(id) {
        case 0: { QPauseAnimation* _r = o->addPause(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPauseAnimation"; } break;
        case 1: { QAbstractAnimation* _r = o->currentAnimation();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractAnimation"; } break;
        case 2: { QPauseAnimation* _r = o->insertPause(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPauseAnimation"; } break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQSequentialAnimationGroupWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: if (isWrapper) ((PlastiQQSequentialAnimationGroupWrapper*)o)->PlastiQParentCall_updateCurrentTime(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQSequentialAnimationGroupWrapper*)o)->PlastiQParentCall_updateDirection(QAbstractAnimation::Direction(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQSequentialAnimationGroupWrapper*)o)->PlastiQParentCall_updateState(QAbstractAnimation::State(stack[1].s_int64),
                    QAbstractAnimation::State(stack[2].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
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
        QSequentialAnimationGroup *o = reinterpret_cast<QSequentialAnimationGroup*>(object->plastiq_data());

        if(className == "QAnimationGroup") {
            stack[0].s_voidp = static_cast<QAnimationGroup*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSequentialAnimationGroup::~PlastiQQSequentialAnimationGroup() {
    QSequentialAnimationGroup* o = reinterpret_cast<QSequentialAnimationGroup*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
