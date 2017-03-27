#include "plastiqmethod.h"
#include "plastiqqframe.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QFrame> 
#include <QRect>
#include <QEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQFrame::plastiqConstructors = {
    { "QFrame()", { "QFrame", "", "QFrame*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFrame(QWidget*)", { "QFrame", "QWidget*", "QFrame*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFrame(QWidget*,enum)", { "QFrame", "QWidget*,Qt::WindowFlags", "QFrame*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFrame::plastiqMethods = {
    { "frameRect()", { "frameRect", "", "QRect", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameShadow()", { "frameShadow", "", "Shadow", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameShape()", { "frameShape", "", "Shape", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameStyle()", { "frameStyle", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameWidth()", { "frameWidth", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineWidth()", { "lineWidth", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "midLineWidth()", { "midLineWidth", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameRect(QRect&)", { "setFrameRect", "QRect&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameShadow(enum)", { "setFrameShadow", "Shadow", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameShape(enum)", { "setFrameShape", "Shape", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameStyle(int)", { "setFrameStyle", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineWidth(int)", { "setLineWidth", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMidLineWidth(int)", { "setMidLineWidth", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionFrame*)", { "initStyleOption", "QStyleOptionFrame*", "void", 13, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFrame::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFrame::plastiqProperties = {
    { "frameRect", { "frameRect", "QRect", "setFrameRect", "frameRect" } },
    { "frameShadow", { "frameShadow", "long", "setFrameShadow", "frameShadow" } },
    { "frameShape", { "frameShape", "long", "setFrameShape", "frameShape" } },
    { "frameWidth", { "frameWidth", "int", "", "frameWidth" } },
    { "lineWidth", { "lineWidth", "int", "setLineWidth", "lineWidth" } },
    { "midLineWidth", { "midLineWidth", "int", "setMidLineWidth", "midLineWidth" } },

};

QHash<QByteArray, long> PlastiQQFrame::plastiqConstants = {

    /* QFrame::Shadow */
   { "Plain", QFrame::Plain },
   { "Raised", QFrame::Raised },
   { "Sunken", QFrame::Sunken },

    /* QFrame::Shape */
   { "NoFrame", QFrame::NoFrame },
   { "Box", QFrame::Box },
   { "Panel", QFrame::Panel },
   { "WinPanel", QFrame::WinPanel },
   { "HLine", QFrame::HLine },
   { "VLine", QFrame::VLine },
   { "StyledPanel", QFrame::StyledPanel },

    /* QFrame::StyleMask */
   { "Shadow_Mask", QFrame::Shadow_Mask },
   { "Shape_Mask", QFrame::Shape_Mask },

};

QVector<PlastiQMetaObject*> PlastiQQFrame::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFrame::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQFrame::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QFrame", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFrame::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFrameWrapper : public QFrame {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQFrameWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QFrame(parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QFrame::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QFrame::changeEvent(ev);
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
        else return QFrame::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QFrame::event(e);
    }

};

void PlastiQQFrame::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFrameWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQFrameWrapper(); break;
        case 1: o = new PlastiQQFrameWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQFrameWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFrame *p = new PlastiQQFrame();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFrame *p = new PlastiQQFrame();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFrame *o = sc ? Q_NULLPTR : reinterpret_cast<QFrame*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRect *_r = new QRect(o->frameRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->frameShadow(); // HACK for Shadow 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->frameShape(); // HACK for Shape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { int _r = o->frameStyle();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->frameWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->lineWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->midLineWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: o->setFrameRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFrameShadow(QFrame::Shadow(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setFrameShape(QFrame::Shape(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setFrameStyle(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setLineWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setMidLineWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQFrameWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 15: { bool _r;
                if (isWrapper) _r = ((PlastiQQFrameWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFrame *o = reinterpret_cast<QFrame*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFrame *o = reinterpret_cast<QFrame*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFrame *o = reinterpret_cast<QFrame*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFrame *o = reinterpret_cast<QFrame*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFrame::~PlastiQQFrame() {
    QFrame* o = reinterpret_cast<QFrame*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
