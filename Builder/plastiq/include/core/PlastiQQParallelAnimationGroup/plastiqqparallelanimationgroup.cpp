#include "plastiqmethod.h"
#include "plastiqqparallelanimationgroup.h"

#include "core/PlastiQQAnimationGroup/plastiqqanimationgroup.h"
#include <QParallelAnimationGroup> 
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQParallelAnimationGroup::plastiqConstructors = {
    { "QParallelAnimationGroup()", { "QParallelAnimationGroup", "", "QParallelAnimationGroup*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QParallelAnimationGroup(QObject*)", { "QParallelAnimationGroup", "QObject*", "QParallelAnimationGroup*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQParallelAnimationGroup::plastiqMethods = {
    { "event(QEvent*)", { "event", "QEvent*", "bool", 0, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateCurrentTime(int)", { "updateCurrentTime", "int", "void", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateDirection(enum)", { "updateDirection", "QAbstractAnimation::Direction", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateState(enum,enum)", { "updateState", "QAbstractAnimation::State,QAbstractAnimation::State", "void", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQParallelAnimationGroup::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQParallelAnimationGroup::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQParallelAnimationGroup::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQParallelAnimationGroup::plastiqInherits = { &PlastiQQAnimationGroup::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQParallelAnimationGroup::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQParallelAnimationGroup::plastiq_static_metaObject = {
    { &PlastiQQAnimationGroup::plastiq_static_metaObject, &plastiqInherits, "QParallelAnimationGroup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQParallelAnimationGroup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQParallelAnimationGroupWrapper : public QParallelAnimationGroup {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQParallelAnimationGroupWrapper(QObject *parent = Q_NULLPTR)
         : QParallelAnimationGroup(parent),
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
        else return QParallelAnimationGroup::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QParallelAnimationGroup::event(event);
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
        else return QParallelAnimationGroup::updateCurrentTime(currentTime);
    }

    void PlastiQParentCall_updateCurrentTime(int currentTime) {
        return QParallelAnimationGroup::updateCurrentTime(currentTime);
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
        else return QParallelAnimationGroup::updateDirection(direction);
    }

    void PlastiQParentCall_updateDirection(QAbstractAnimation::Direction direction) {
        return QParallelAnimationGroup::updateDirection(direction);
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
        else return QParallelAnimationGroup::updateState(newState,oldState);
    }

    void PlastiQParentCall_updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
        return QParallelAnimationGroup::updateState(newState,oldState);
    }

};

void PlastiQQParallelAnimationGroup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQParallelAnimationGroupWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQParallelAnimationGroupWrapper(); break;
        case 1: o = new PlastiQQParallelAnimationGroupWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQParallelAnimationGroup *p = new PlastiQQParallelAnimationGroup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQParallelAnimationGroup *p = new PlastiQQParallelAnimationGroup();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQAnimationGroup::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QParallelAnimationGroup *o = sc ? Q_NULLPTR : reinterpret_cast<QParallelAnimationGroup*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r;
                if (isWrapper) _r = ((PlastiQQParallelAnimationGroupWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: if (isWrapper) ((PlastiQQParallelAnimationGroupWrapper*)o)->PlastiQParentCall_updateCurrentTime(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQParallelAnimationGroupWrapper*)o)->PlastiQParentCall_updateDirection(QAbstractAnimation::Direction(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 3: if (isWrapper) ((PlastiQQParallelAnimationGroupWrapper*)o)->PlastiQParentCall_updateState(QAbstractAnimation::State(stack[1].s_int64),
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
        QParallelAnimationGroup *o = reinterpret_cast<QParallelAnimationGroup*>(object->plastiq_data());

        if(className == "QAnimationGroup") {
            stack[0].s_voidp = static_cast<QAnimationGroup*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQParallelAnimationGroup::~PlastiQQParallelAnimationGroup() {
    QParallelAnimationGroup* o = reinterpret_cast<QParallelAnimationGroup*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
