#include "plastiqmethod.h"
#include "plastiqqabstractslider.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QAbstractSlider> 
#include <QEvent>
#include <QKeyEvent>
#include <QTimerEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSlider::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSlider::plastiqMethods = {
    { "hasTracking()", { "hasTracking", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invertedAppearance()", { "invertedAppearance", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invertedControls()", { "invertedControls", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSliderDown()", { "isSliderDown", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximum()", { "maximum", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimum()", { "minimum", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageStep()", { "pageStep", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInvertedAppearance(bool)", { "setInvertedAppearance", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInvertedControls(bool)", { "setInvertedControls", "bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximum(int)", { "setMaximum", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimum(int)", { "setMinimum", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageStep(int)", { "setPageStep", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSingleStep(int)", { "setSingleStep", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSliderDown(bool)", { "setSliderDown", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSliderPosition(int)", { "setSliderPosition", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTracking(bool)", { "setTracking", "bool", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "singleStep()", { "singleStep", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sliderPosition()", { "sliderPosition", "", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "triggerAction(enum)", { "triggerAction", "SliderAction", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "repeatAction()", { "repeatAction", "", "SliderAction", 21, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setRepeatAction(enum)", { "setRepeatAction", "SliderAction", "void", 22, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setRepeatAction(enum,int)", { "setRepeatAction", "SliderAction,int", "void", 23, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setRepeatAction(enum,int,int)", { "setRepeatAction", "SliderAction,int,int", "void", 24, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sliderChange(SliderChange)", { "sliderChange", "SliderChange", "void", 25, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setOrientation(enum)", { "setOrientation", "Qt::Orientation", "void", 31, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setRange(int,int)", { "setRange", "int,int", "void", 32, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setValue(int)", { "setValue", "int", "void", 33, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSlider::plastiqSignals = {
    { "actionTriggered(int)", { "actionTriggered", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rangeChanged(int,int)", { "rangeChanged", "int,int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sliderMoved(int)", { "sliderMoved", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sliderPressed()", { "sliderPressed", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sliderReleased()", { "sliderReleased", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valueChanged(int)", { "valueChanged", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractSlider::plastiqProperties = {
    { "invertedAppearance", { "invertedAppearance", "bool", "setInvertedAppearance", "invertedAppearance" } },
    { "invertedControls", { "invertedControls", "bool", "setInvertedControls", "invertedControls" } },
    { "maximum", { "maximum", "int", "setMaximum", "maximum" } },
    { "minimum", { "minimum", "int", "setMinimum", "minimum" } },
    { "orientation", { "orientation", "long", "setOrientation", "orientation" } },
    { "pageStep", { "pageStep", "int", "setPageStep", "pageStep" } },
    { "singleStep", { "singleStep", "int", "setSingleStep", "singleStep" } },
    { "sliderDown", { "sliderDown", "bool", "setSliderDown", "isSliderDown" } },
    { "sliderPosition", { "sliderPosition", "int", "setSliderPosition", "sliderPosition" } },
    { "tracking", { "tracking", "bool", "setTracking", "hasTracking" } },
    { "value", { "value", "int", "setValue", "value" } },

};

QHash<QByteArray, long> PlastiQQAbstractSlider::plastiqConstants = {

    /* QAbstractSlider::SliderAction */
   { "SliderNoAction", QAbstractSlider::SliderNoAction },
   { "SliderSingleStepAdd", QAbstractSlider::SliderSingleStepAdd },
   { "SliderSingleStepSub", QAbstractSlider::SliderSingleStepSub },
   { "SliderPageStepAdd", QAbstractSlider::SliderPageStepAdd },
   { "SliderPageStepSub", QAbstractSlider::SliderPageStepSub },
   { "SliderToMinimum", QAbstractSlider::SliderToMinimum },
   { "SliderToMaximum", QAbstractSlider::SliderToMaximum },
   { "SliderMove", QAbstractSlider::SliderMove },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractSlider::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractSlider::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQAbstractSlider::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QAbstractSlider", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractSlider::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractSliderWrapper : public QAbstractSlider {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void changeEvent(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSlider::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QAbstractSlider::changeEvent(ev);
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
        else return QAbstractSlider::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QAbstractSlider::event(e);
    }

    void keyPressEvent(QKeyEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSlider::keyPressEvent(ev);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *ev) {
        return QAbstractSlider::keyPressEvent(ev);
    }

    void timerEvent(QTimerEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSlider::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QAbstractSlider::timerEvent(e);
    }

    void wheelEvent(QWheelEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractSlider::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QAbstractSlider::wheelEvent(e);
    }

};

void PlastiQQAbstractSlider::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractSliderWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractSlider *p = new PlastiQQAbstractSlider();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractSlider *p = new PlastiQQAbstractSlider();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 34) {
            id -= 34;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractSlider *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractSlider*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->hasTracking();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->invertedAppearance();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->invertedControls();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isSliderDown();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { int _r = o->maximum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->minimum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { int _r = o->pageStep();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: o->setInvertedAppearance(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setInvertedControls(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setMaximum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setMinimum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setPageStep(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setSingleStep(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setSliderDown(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setSliderPosition(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setTracking(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 17: { int _r = o->singleStep();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { int _r = o->sliderPosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: o->triggerAction(QAbstractSlider::SliderAction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 20: { int _r = o->value();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { qint64 _r; stack[0].type = PlastiQ::Error; } break;
        case 22: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 23: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 24: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 25: /* o->sliderChange(UNSUPPORTED_TYPE_SliderChange) | ret: `void` */ break;
        case 26: if (isWrapper) ((PlastiQQAbstractSliderWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 27: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractSliderWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: if (isWrapper) ((PlastiQQAbstractSliderWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: if (isWrapper) ((PlastiQQAbstractSliderWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 30: if (isWrapper) ((PlastiQQAbstractSliderWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setOrientation(Qt::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setRange(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setValue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractSlider *o = reinterpret_cast<QAbstractSlider*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractSlider::actionTriggered,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "actionTriggered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractSlider::rangeChanged,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "rangeChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractSlider::sliderMoved,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "sliderMoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractSlider::sliderPressed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "sliderPressed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAbstractSlider::sliderReleased,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "sliderReleased", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QAbstractSlider::valueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractSlider *o = reinterpret_cast<QAbstractSlider*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractSlider *o = reinterpret_cast<QAbstractSlider*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractSlider *o = reinterpret_cast<QAbstractSlider*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractSlider::~PlastiQQAbstractSlider() {
    QAbstractSlider* o = reinterpret_cast<QAbstractSlider*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
