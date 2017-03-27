#include "plastiqmethod.h"
#include "plastiqqdial.h"

#include "widgets/PlastiQQAbstractSlider/plastiqqabstractslider.h"
#include <QDial> 
#include <QEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQDial::plastiqConstructors = {
    { "QDial()", { "QDial", "", "QDial*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDial(QWidget*)", { "QDial", "QWidget*", "QDial*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDial::plastiqMethods = {
    { "notchSize()", { "notchSize", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "notchTarget()", { "notchTarget", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "notchesVisible()", { "notchesVisible", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNotchTarget(double)", { "setNotchTarget", "double", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wrapping()", { "wrapping", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionSlider*)", { "initStyleOption", "QStyleOptionSlider*", "void", 5, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sliderChange(SliderChange)", { "sliderChange", "SliderChange", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setNotchesVisible(bool)", { "setNotchesVisible", "bool", "void", 13, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setWrapping(bool)", { "setWrapping", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDial::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDial::plastiqProperties = {
    { "notchSize", { "notchSize", "int", "", "notchSize" } },
    { "notchTarget", { "notchTarget", "qreal", "setNotchTarget", "notchTarget" } },
    { "notchesVisible", { "notchesVisible", "bool", "setNotchesVisible", "notchesVisible" } },
    { "wrapping", { "wrapping", "bool", "setWrapping", "wrapping" } },

};

QHash<QByteArray, long> PlastiQQDial::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDial::plastiqInherits = { &PlastiQQAbstractSlider::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDial::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQDial::plastiq_static_metaObject = {
    { &PlastiQQAbstractSlider::plastiq_static_metaObject, &plastiqInherits, "QDial", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDial::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQDialWrapper : public QDial {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQDialWrapper(QWidget *parent = Q_NULLPTR)
         : QDial(parent),
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
        else return QDial::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QDial::event(e);
    }

    void mouseMoveEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDial::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QDial::mouseMoveEvent(e);
    }

    void mousePressEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDial::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QDial::mousePressEvent(e);
    }

    void mouseReleaseEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDial::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QDial::mouseReleaseEvent(e);
    }

    void paintEvent(QPaintEvent *pe) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(pe);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDial::paintEvent(pe);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *pe) {
        return QDial::paintEvent(pe);
    }

    void resizeEvent(QResizeEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDial::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QDial::resizeEvent(e);
    }

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
        else return QDial::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QDial::changeEvent(ev);
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
        else return QDial::keyPressEvent(ev);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *ev) {
        return QDial::keyPressEvent(ev);
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
        else return QDial::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QDial::timerEvent(e);
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
        else return QDial::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QDial::wheelEvent(e);
    }

};

void PlastiQQDial::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQDialWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQDialWrapper(); break;
        case 1: o = new PlastiQQDialWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQDial *p = new PlastiQQDial();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDial *p = new PlastiQQDial();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQAbstractSlider::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDial *o = sc ? Q_NULLPTR : reinterpret_cast<QDial*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->notchSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { double _r = o->notchTarget();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { bool _r = o->notchesVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->setNotchTarget(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->wrapping();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQDialWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: if (isWrapper) ((PlastiQQDialWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 8: if (isWrapper) ((PlastiQQDialWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 9: if (isWrapper) ((PlastiQQDialWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 10: if (isWrapper) ((PlastiQQDialWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 11: if (isWrapper) ((PlastiQQDialWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 12: /* o->sliderChange(UNSUPPORTED_TYPE_SliderChange) | ret: `void` */ break;
        case 13: o->setNotchesVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setWrapping(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractSlider::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDial *o = reinterpret_cast<QDial*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDial *o = reinterpret_cast<QDial*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDial *o = reinterpret_cast<QDial*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDial *o = reinterpret_cast<QDial*>(object->plastiq_data());

        if(className == "QAbstractSlider") {
            stack[0].s_voidp = static_cast<QAbstractSlider*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDial::~PlastiQQDial() {
    QDial* o = reinterpret_cast<QDial*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
