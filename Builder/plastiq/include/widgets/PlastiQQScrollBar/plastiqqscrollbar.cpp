#include "plastiqmethod.h"
#include "plastiqqscrollbar.h"

#include "widgets/PlastiQQAbstractSlider/plastiqqabstractslider.h"
#include <QScrollBar> 
#include <QContextMenuEvent>
#include <QHideEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQScrollBar::plastiqConstructors = {
    { "QScrollBar()", { "QScrollBar", "", "QScrollBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QScrollBar(QWidget*)", { "QScrollBar", "QWidget*", "QScrollBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QScrollBar(enum)", { "QScrollBar", "Qt::Orientation", "QScrollBar*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QScrollBar(enum,QWidget*)", { "QScrollBar", "Qt::Orientation,QWidget*", "QScrollBar*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScrollBar::plastiqMethods = {
    { "initStyleOption(QStyleOptionSlider*)", { "initStyleOption", "QStyleOptionSlider*", "void", 0, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sliderChange(SliderChange)", { "sliderChange", "SliderChange", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScrollBar::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQScrollBar::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQScrollBar::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQScrollBar::plastiqInherits = { &PlastiQQAbstractSlider::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQScrollBar::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQScrollBar::plastiq_static_metaObject = {
    { &PlastiQQAbstractSlider::plastiq_static_metaObject, &plastiqInherits, "QScrollBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQScrollBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQScrollBarWrapper : public QScrollBar {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQScrollBarWrapper(QWidget *parent = Q_NULLPTR)
         : QScrollBar(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQScrollBarWrapper(Qt::Orientation orientation, QWidget *parent = Q_NULLPTR)
         : QScrollBar(orientation,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void contextMenuEvent(QContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QScrollBar::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QScrollBar::contextMenuEvent(event);
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
        else return QScrollBar::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QScrollBar::mouseMoveEvent(e);
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
        else return QScrollBar::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QScrollBar::mousePressEvent(e);
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
        else return QScrollBar::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QScrollBar::mouseReleaseEvent(e);
    }

    void wheelEvent(QWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QScrollBar::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QScrollBar::wheelEvent(event);
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
        else return QScrollBar::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QScrollBar::changeEvent(ev);
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
        else return QScrollBar::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QScrollBar::event(e);
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
        else return QScrollBar::keyPressEvent(ev);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *ev) {
        return QScrollBar::keyPressEvent(ev);
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
        else return QScrollBar::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QScrollBar::timerEvent(e);
    }

};

void PlastiQQScrollBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQScrollBarWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQScrollBarWrapper(); break;
        case 1: o = new PlastiQQScrollBarWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQScrollBarWrapper(Qt::Orientation(stack[1].s_int64)); break;
        case 3: o = new PlastiQQScrollBarWrapper(Qt::Orientation(stack[1].s_int64),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQScrollBar *p = new PlastiQQScrollBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQScrollBar *p = new PlastiQQScrollBar();
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
        QScrollBar *o = sc ? Q_NULLPTR : reinterpret_cast<QScrollBar*>(object->plastiq_data());

        switch(id) {
        case 0: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 1: if (isWrapper) ((PlastiQQScrollBarWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 2: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 3: if (isWrapper) ((PlastiQQScrollBarWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 4: if (isWrapper) ((PlastiQQScrollBarWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQScrollBarWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 7: /* o->sliderChange(UNSUPPORTED_TYPE_SliderChange) | ret: `void` */ break;
        case 8: if (isWrapper) ((PlastiQQScrollBarWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
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

        QScrollBar *o = reinterpret_cast<QScrollBar*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QScrollBar *o = reinterpret_cast<QScrollBar*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QScrollBar *o = reinterpret_cast<QScrollBar*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QScrollBar *o = reinterpret_cast<QScrollBar*>(object->plastiq_data());

        if(className == "QAbstractSlider") {
            stack[0].s_voidp = static_cast<QAbstractSlider*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQScrollBar::~PlastiQQScrollBar() {
    QScrollBar* o = reinterpret_cast<QScrollBar*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
