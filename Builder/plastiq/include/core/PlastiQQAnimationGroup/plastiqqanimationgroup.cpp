#include "plastiqmethod.h"
#include "plastiqqanimationgroup.h"

#include "core/PlastiQQAbstractAnimation/plastiqqabstractanimation.h"
#include <QAnimationGroup> 
#include <QAbstractAnimation>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAnimationGroup::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAnimationGroup::plastiqMethods = {
    { "addAnimation(QAbstractAnimation*)", { "addAnimation", "QAbstractAnimation*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "animationAt(int)", { "animationAt", "int", "QAbstractAnimation*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "animationCount()", { "animationCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOfAnimation(QAbstractAnimation*)", { "indexOfAnimation", "QAbstractAnimation*", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertAnimation(int,QAbstractAnimation*)", { "insertAnimation", "int,QAbstractAnimation*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAnimation(QAbstractAnimation*)", { "removeAnimation", "QAbstractAnimation*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeAnimation(int)", { "takeAnimation", "int", "QAbstractAnimation*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAnimationGroup::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAnimationGroup::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAnimationGroup::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAnimationGroup::plastiqInherits = { &PlastiQQAbstractAnimation::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAnimationGroup::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAnimationGroup::plastiq_static_metaObject = {
    { &PlastiQQAbstractAnimation::plastiq_static_metaObject, &plastiqInherits, "QAnimationGroup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAnimationGroup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAnimationGroupWrapper : public QAnimationGroup {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QAnimationGroup::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QAnimationGroup::event(event);
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
        else return QAnimationGroup::updateDirection(direction);
    }

    void PlastiQParentCall_updateDirection(QAbstractAnimation::Direction direction) {
        return QAnimationGroup::updateDirection(direction);
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
        else return QAnimationGroup::updateState(newState,oldState);
    }

    void PlastiQParentCall_updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
        return QAnimationGroup::updateState(newState,oldState);
    }

};

void PlastiQQAnimationGroup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAnimationGroupWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAnimationGroup *p = new PlastiQQAnimationGroup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAnimationGroup *p = new PlastiQQAnimationGroup();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQAbstractAnimation::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAnimationGroup *o = sc ? Q_NULLPTR : reinterpret_cast<QAnimationGroup*>(object->plastiq_data());

        switch(id) {
        case 0: o->addAnimation(reinterpret_cast<QAbstractAnimation*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QAbstractAnimation* _r = o->animationAt(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractAnimation"; } break;
        case 2: { int _r = o->animationCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 4: { int _r = o->indexOfAnimation(reinterpret_cast<QAbstractAnimation*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: o->insertAnimation(stack[1].s_int,
                    reinterpret_cast<QAbstractAnimation*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->removeAnimation(reinterpret_cast<QAbstractAnimation*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: { QAbstractAnimation* _r = o->takeAnimation(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractAnimation"; } break;
        case 8: { bool _r;
                if (isWrapper) _r = ((PlastiQQAnimationGroupWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractAnimation::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAnimationGroup *o = reinterpret_cast<QAnimationGroup*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAnimationGroup *o = reinterpret_cast<QAnimationGroup*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAnimationGroup *o = reinterpret_cast<QAnimationGroup*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAnimationGroup *o = reinterpret_cast<QAnimationGroup*>(object->plastiq_data());

        if(className == "QAbstractAnimation") {
            stack[0].s_voidp = static_cast<QAbstractAnimation*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAnimationGroup::~PlastiQQAnimationGroup() {
    QAnimationGroup* o = reinterpret_cast<QAnimationGroup*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
