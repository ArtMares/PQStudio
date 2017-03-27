#include "plastiqmethod.h"
#include "plastiqqslider.h"

#include "widgets/PlastiQQAbstractSlider/plastiqqabstractslider.h"
#include <QSlider> 
#include <QMouseEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQSlider::plastiqConstructors = {
    { "QSlider()", { "QSlider", "", "QSlider*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSlider(QWidget*)", { "QSlider", "QWidget*", "QSlider*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSlider(enum)", { "QSlider", "Qt::Orientation", "QSlider*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSlider(enum,QWidget*)", { "QSlider", "Qt::Orientation,QWidget*", "QSlider*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSlider::plastiqMethods = {
    { "setTickInterval(int)", { "setTickInterval", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTickPosition(enum)", { "setTickPosition", "TickPosition", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tickInterval()", { "tickInterval", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tickPosition()", { "tickPosition", "", "TickPosition", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionSlider*)", { "initStyleOption", "QStyleOptionSlider*", "void", 4, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSlider::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSlider::plastiqProperties = {
    { "tickInterval", { "tickInterval", "int", "setTickInterval", "tickInterval" } },
    { "tickPosition", { "tickPosition", "long", "setTickPosition", "tickPosition" } },

};

QHash<QByteArray, long> PlastiQQSlider::plastiqConstants = {

    /* QSlider::TickPosition */
   { "NoTicks", QSlider::NoTicks },
   { "TicksAbove", QSlider::TicksAbove },
   { "TicksLeft", QSlider::TicksLeft },
   { "TicksBelow", QSlider::TicksBelow },
   { "TicksRight", QSlider::TicksRight },
   { "TicksBothSides", QSlider::TicksBothSides },

};

QVector<PlastiQMetaObject*> PlastiQQSlider::plastiqInherits = { &PlastiQQAbstractSlider::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSlider::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQSlider::plastiq_static_metaObject = {
    { &PlastiQQAbstractSlider::plastiq_static_metaObject, &plastiqInherits, "QSlider", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSlider::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSliderWrapper : public QSlider {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSliderWrapper(QWidget *parent = Q_NULLPTR)
         : QSlider(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSliderWrapper(Qt::Orientation orientation, QWidget *parent = Q_NULLPTR)
         : QSlider(orientation,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void mouseMoveEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSlider::mouseMoveEvent(ev);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *ev) {
        return QSlider::mouseMoveEvent(ev);
    }

    void mousePressEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSlider::mousePressEvent(ev);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *ev) {
        return QSlider::mousePressEvent(ev);
    }

    void mouseReleaseEvent(QMouseEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSlider::mouseReleaseEvent(ev);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *ev) {
        return QSlider::mouseReleaseEvent(ev);
    }

    void paintEvent(QPaintEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSlider::paintEvent(ev);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *ev) {
        return QSlider::paintEvent(ev);
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
        else return QSlider::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QSlider::changeEvent(ev);
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
        else return QSlider::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QSlider::event(e);
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
        else return QSlider::keyPressEvent(ev);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *ev) {
        return QSlider::keyPressEvent(ev);
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
        else return QSlider::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QSlider::timerEvent(e);
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
        else return QSlider::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QSlider::wheelEvent(e);
    }

};

void PlastiQQSlider::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSliderWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSliderWrapper(); break;
        case 1: o = new PlastiQQSliderWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQSliderWrapper(Qt::Orientation(stack[1].s_int64)); break;
        case 3: o = new PlastiQQSliderWrapper(Qt::Orientation(stack[1].s_int64),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSlider *p = new PlastiQQSlider();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSlider *p = new PlastiQQSlider();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQAbstractSlider::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSlider *o = sc ? Q_NULLPTR : reinterpret_cast<QSlider*>(object->plastiq_data());

        switch(id) {
        case 0: o->setTickInterval(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->setTickPosition(QSlider::TickPosition(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: { int _r = o->tickInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { qint64 _r = o->tickPosition(); // HACK for TickPosition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQSliderWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQSliderWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 7: if (isWrapper) ((PlastiQQSliderWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 8: if (isWrapper) ((PlastiQQSliderWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
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

        QSlider *o = reinterpret_cast<QSlider*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSlider *o = reinterpret_cast<QSlider*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSlider *o = reinterpret_cast<QSlider*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSlider *o = reinterpret_cast<QSlider*>(object->plastiq_data());

        if(className == "QAbstractSlider") {
            stack[0].s_voidp = static_cast<QAbstractSlider*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSlider::~PlastiQQSlider() {
    QSlider* o = reinterpret_cast<QSlider*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
