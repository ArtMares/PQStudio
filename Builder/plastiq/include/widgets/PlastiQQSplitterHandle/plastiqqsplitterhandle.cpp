#include "plastiqmethod.h"
#include "plastiqqsplitterhandle.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QSplitterHandle> 
#include <QSplitter>
#include <QEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQSplitterHandle::plastiqConstructors = {
    { "QSplitterHandle(enum,QSplitter*)", { "QSplitterHandle", "Qt::Orientation,QSplitter*", "QSplitterHandle*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSplitterHandle::plastiqMethods = {
    { "opaqueResize()", { "opaqueResize", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrientation(enum)", { "setOrientation", "Qt::Orientation", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "splitter()", { "splitter", "", "QSplitter*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closestLegalPosition(int)", { "closestLegalPosition", "int", "int", 4, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "moveSplitter(int)", { "moveSplitter", "int", "void", 5, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSplitterHandle::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSplitterHandle::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSplitterHandle::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSplitterHandle::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSplitterHandle::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQSplitterHandle::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QSplitterHandle", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSplitterHandle::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSplitterHandleWrapper : public QSplitterHandle {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSplitterHandleWrapper(Qt::Orientation orientation, QSplitter *parent)
         : QSplitterHandle(orientation,parent),
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
        else return QSplitterHandle::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QSplitterHandle::event(event);
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
        else return QSplitterHandle::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QSplitterHandle::mouseMoveEvent(e);
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
        else return QSplitterHandle::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QSplitterHandle::mousePressEvent(e);
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
        else return QSplitterHandle::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QSplitterHandle::mouseReleaseEvent(e);
    }

    void resizeEvent(QResizeEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSplitterHandle::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QSplitterHandle::resizeEvent(event);
    }

};

void PlastiQQSplitterHandle::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSplitterHandleWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSplitterHandleWrapper(Qt::Orientation(stack[1].s_int64),
                    reinterpret_cast<QSplitter*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSplitterHandle *p = new PlastiQQSplitterHandle();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSplitterHandle *p = new PlastiQQSplitterHandle();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSplitterHandle *o = sc ? Q_NULLPTR : reinterpret_cast<QSplitterHandle*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->opaqueResize();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: o->setOrientation(Qt::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: { QSplitter* _r = o->splitter();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QSplitter"; } break;
        case 4: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 5: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQSplitterHandleWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: if (isWrapper) ((PlastiQQSplitterHandleWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 8: if (isWrapper) ((PlastiQQSplitterHandleWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 9: if (isWrapper) ((PlastiQQSplitterHandleWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 10: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 11: if (isWrapper) ((PlastiQQSplitterHandleWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSplitterHandle *o = reinterpret_cast<QSplitterHandle*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSplitterHandle *o = reinterpret_cast<QSplitterHandle*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSplitterHandle *o = reinterpret_cast<QSplitterHandle*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSplitterHandle *o = reinterpret_cast<QSplitterHandle*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSplitterHandle::~PlastiQQSplitterHandle() {
    QSplitterHandle* o = reinterpret_cast<QSplitterHandle*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
