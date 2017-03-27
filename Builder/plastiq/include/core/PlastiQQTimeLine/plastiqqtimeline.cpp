#include "plastiqmethod.h"
#include "plastiqqtimeline.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QTimeLine> 
#include <QEasingCurve>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQTimeLine::plastiqConstructors = {
    { "QTimeLine()", { "QTimeLine", "", "QTimeLine*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeLine(int)", { "QTimeLine", "int", "QTimeLine*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeLine(int,QObject*)", { "QTimeLine", "int,QObject*", "QTimeLine*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimeLine::plastiqMethods = {
    { "currentFrame()", { "currentFrame", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentTime()", { "currentTime", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentValue()", { "currentValue", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "curveShape()", { "curveShape", "", "CurveShape", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "direction()", { "direction", "", "Direction", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "easingCurve()", { "easingCurve", "", "QEasingCurve", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endFrame()", { "endFrame", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameForTime(int)", { "frameForTime", "int", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopCount()", { "loopCount", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurveShape(enum)", { "setCurveShape", "CurveShape", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDirection(enum)", { "setDirection", "Direction", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDuration(int)", { "setDuration", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEasingCurve(QEasingCurve&)", { "setEasingCurve", "QEasingCurve&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEndFrame(int)", { "setEndFrame", "int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameRange(int,int)", { "setFrameRange", "int,int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLoopCount(int)", { "setLoopCount", "int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStartFrame(int)", { "setStartFrame", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUpdateInterval(int)", { "setUpdateInterval", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startFrame()", { "startFrame", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateInterval()", { "updateInterval", "", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valueForTime(int)", { "valueForTime", "int", "qreal", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resume()", { "resume", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentTime(int)", { "setCurrentTime", "int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPaused(bool)", { "setPaused", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start()", { "start", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 28, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "toggleDirection()", { "toggleDirection", "", "void", 29, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimeLine::plastiqSignals = {
    { "finished()", { "finished", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "frameChanged(int)", { "frameChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QTimeLine::State", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valueChanged(double)", { "valueChanged", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTimeLine::plastiqProperties = {
    { "currentTime", { "currentTime", "int", "setCurrentTime", "currentTime" } },
    { "curveShape", { "curveShape", "long", "setCurveShape", "curveShape" } },
    { "direction", { "direction", "long", "setDirection", "direction" } },
    { "duration", { "duration", "int", "setDuration", "duration" } },
    { "easingCurve", { "easingCurve", "QEasingCurve", "setEasingCurve", "easingCurve" } },
    { "loopCount", { "loopCount", "int", "setLoopCount", "loopCount" } },
    { "updateInterval", { "updateInterval", "int", "setUpdateInterval", "updateInterval" } },

};

QHash<QByteArray, long> PlastiQQTimeLine::plastiqConstants = {

    /* QTimeLine::CurveShape */
   { "EaseInCurve", QTimeLine::EaseInCurve },
   { "EaseOutCurve", QTimeLine::EaseOutCurve },
   { "EaseInOutCurve", QTimeLine::EaseInOutCurve },
   { "LinearCurve", QTimeLine::LinearCurve },
   { "SineCurve", QTimeLine::SineCurve },
   { "CosineCurve", QTimeLine::CosineCurve },

    /* QTimeLine::Direction */
   { "Forward", QTimeLine::Forward },
   { "Backward", QTimeLine::Backward },

    /* QTimeLine::State */
   { "NotRunning", QTimeLine::NotRunning },
   { "Paused", QTimeLine::Paused },
   { "Running", QTimeLine::Running },

};

QVector<PlastiQMetaObject*> PlastiQQTimeLine::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTimeLine::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQTimeLine::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QTimeLine", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTimeLine::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTimeLineWrapper : public QTimeLine {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTimeLineWrapper(int duration = 1000, QObject *parent = Q_NULLPTR)
         : QTimeLine(duration,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    qreal valueForTime(int msec) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qreal valueForTime(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = msec;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            double _r = stack[0].s_double;
            delete [] stack;
            return _r;
        }
        else return QTimeLine::valueForTime(msec);
    }

    qreal PlastiQParentCall_valueForTime(int msec) const {
        return QTimeLine::valueForTime(msec);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTimeLine::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTimeLine::timerEvent(event);
    }

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
        else return QTimeLine::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QTimeLine::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTimeLine::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QTimeLine::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QTimeLine::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QTimeLine::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTimeLine::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QTimeLine::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTimeLine::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QTimeLine::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTimeLine::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QTimeLine::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTimeLine::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QTimeLine::disconnectNotify(signal);
    }

};

void PlastiQQTimeLine::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTimeLineWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTimeLineWrapper(); break;
        case 1: o = new PlastiQQTimeLineWrapper(stack[1].s_int); break;
        case 2: o = new PlastiQQTimeLineWrapper(stack[1].s_int,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTimeLine *p = new PlastiQQTimeLine();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTimeLine *p = new PlastiQQTimeLine();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 30) {
            id -= 30;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTimeLine *o = sc ? Q_NULLPTR : reinterpret_cast<QTimeLine*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->currentFrame();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->currentTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { double _r = o->currentValue();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { qint64 _r = o->curveShape(); // HACK for CurveShape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { qint64 _r = o->direction(); // HACK for Direction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { int _r = o->duration();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { /* COPY OBJECT */
            QEasingCurve *_r = new QEasingCurve(o->easingCurve());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QEasingCurve";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->endFrame();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->frameForTime(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = o->loopCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: o->setCurveShape(QTimeLine::CurveShape(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setDirection(QTimeLine::Direction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setDuration(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setEasingCurve((*reinterpret_cast< QEasingCurve(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setEndFrame(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setFrameRange(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setLoopCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setStartFrame(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setUpdateInterval(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: { int _r = o->startFrame();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: { int _r = o->updateInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { double _r;
                if (isWrapper) _r = ((PlastiQQTimeLineWrapper*)o)->PlastiQParentCall_valueForTime(stack[1].s_int);
                else _r = o->valueForTime(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 23: if (isWrapper) ((PlastiQQTimeLineWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 24: o->resume();
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setCurrentTime(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setPaused(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 28: o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 29: o->toggleDirection();
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

        QTimeLine *o = reinterpret_cast<QTimeLine*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTimeLine::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTimeLine::frameChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "frameChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QTimeLine::stateChanged,
            [=](QTimeLine::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QTimeLine::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QTimeLine::valueChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTimeLine *o = reinterpret_cast<QTimeLine*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTimeLine *o = reinterpret_cast<QTimeLine*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTimeLine *o = reinterpret_cast<QTimeLine*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTimeLine::~PlastiQQTimeLine() {
    QTimeLine* o = reinterpret_cast<QTimeLine*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
