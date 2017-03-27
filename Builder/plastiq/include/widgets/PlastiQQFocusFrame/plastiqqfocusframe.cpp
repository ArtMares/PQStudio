#include "plastiqmethod.h"
#include "plastiqqfocusframe.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QFocusFrame> 
#include <QWidget>
#include <QEvent>
#include <QObject>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQFocusFrame::plastiqConstructors = {
    { "QFocusFrame()", { "QFocusFrame", "", "QFocusFrame*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFocusFrame(QWidget*)", { "QFocusFrame", "QWidget*", "QFocusFrame*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFocusFrame::plastiqMethods = {
    { "setWidget(QWidget*)", { "setWidget", "QWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget()", { "widget", "", "QWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOption*)", { "initStyleOption", "QStyleOption*", "void", 2, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFocusFrame::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFocusFrame::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFocusFrame::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFocusFrame::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFocusFrame::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQFocusFrame::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QFocusFrame", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFocusFrame::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFocusFrameWrapper : public QFocusFrame {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQFocusFrameWrapper(QWidget *parent = Q_NULLPTR)
         : QFocusFrame(parent),
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
        else return QFocusFrame::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QFocusFrame::event(e);
    }

    bool eventFilter(QObject *o, QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(o);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(e);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QFocusFrame::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QFocusFrame::eventFilter(o,e);
    }

};

void PlastiQQFocusFrame::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFocusFrameWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQFocusFrameWrapper(); break;
        case 1: o = new PlastiQQFocusFrameWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFocusFrame *p = new PlastiQQFocusFrame();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFocusFrame *p = new PlastiQQFocusFrame();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFocusFrame *o = sc ? Q_NULLPTR : reinterpret_cast<QFocusFrame*>(object->plastiq_data());

        switch(id) {
        case 0: o->setWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QWidget* _r = o->widget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 2: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQFocusFrameWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQFocusFrameWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFocusFrame *o = reinterpret_cast<QFocusFrame*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFocusFrame *o = reinterpret_cast<QFocusFrame*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFocusFrame *o = reinterpret_cast<QFocusFrame*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFocusFrame *o = reinterpret_cast<QFocusFrame*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFocusFrame::~PlastiQQFocusFrame() {
    QFocusFrame* o = reinterpret_cast<QFocusFrame*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
