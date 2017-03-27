#include "plastiqmethod.h"
#include "plastiqqopenglwidget.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QOpenGLWidget> 
#include <QOpenGLContext>
#include <QSurfaceFormat>
#include <QImage>
#include <QPaintEvent>
#include <QResizeEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQOpenGLWidget::plastiqConstructors = {
    { "QOpenGLWidget()", { "QOpenGLWidget", "", "QOpenGLWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QOpenGLWidget(QWidget*)", { "QOpenGLWidget", "QWidget*", "QOpenGLWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QOpenGLWidget(QWidget*,enum)", { "QOpenGLWidget", "QWidget*,Qt::WindowFlags", "QOpenGLWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQOpenGLWidget::plastiqMethods = {
    { "context()", { "context", "", "QOpenGLContext*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultFramebufferObject()", { "defaultFramebufferObject", "", "GLuint", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "doneCurrent()", { "doneCurrent", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QSurfaceFormat", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabFramebuffer()", { "grabFramebuffer", "", "QImage", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "makeCurrent()", { "makeCurrent", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QSurfaceFormat&)", { "setFormat", "QSurfaceFormat&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUpdateBehavior(enum)", { "setUpdateBehavior", "UpdateBehavior", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateBehavior()", { "updateBehavior", "", "UpdateBehavior", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initializeGL()", { "initializeGL", "", "void", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintGL()", { "paintGL", "", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeGL(int,int)", { "resizeGL", "int,int", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQOpenGLWidget::plastiqSignals = {
    { "aboutToCompose()", { "aboutToCompose", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "aboutToResize()", { "aboutToResize", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "frameSwapped()", { "frameSwapped", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "resized()", { "resized", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQOpenGLWidget::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQOpenGLWidget::plastiqConstants = {

    /* QOpenGLWidget::UpdateBehavior */
   { "NoPartialUpdate", QOpenGLWidget::NoPartialUpdate },
   { "PartialUpdate", QOpenGLWidget::PartialUpdate },

};

QVector<PlastiQMetaObject*> PlastiQQOpenGLWidget::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQOpenGLWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQOpenGLWidget::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QOpenGLWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQOpenGLWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQOpenGLWidgetWrapper : public QOpenGLWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQOpenGLWidgetWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QOpenGLWidget(parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void initializeGL() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void initializeGL()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QOpenGLWidget::initializeGL();
    }

    void PlastiQParentCall_initializeGL() {
        return QOpenGLWidget::initializeGL();
    }

    void paintGL() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintGL()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QOpenGLWidget::paintGL();
    }

    void PlastiQParentCall_paintGL() {
        return QOpenGLWidget::paintGL();
    }

    void resizeGL(int w, int h) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeGL(int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = w;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = h;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QOpenGLWidget::resizeGL(w,h);
    }

    void PlastiQParentCall_resizeGL(int w, int h) {
        return QOpenGLWidget::resizeGL(w,h);
    }

    void paintEvent(QPaintEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QOpenGLWidget::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QOpenGLWidget::paintEvent(e);
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
        else return QOpenGLWidget::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QOpenGLWidget::resizeEvent(e);
    }

};

void PlastiQQOpenGLWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQOpenGLWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQOpenGLWidgetWrapper(); break;
        case 1: o = new PlastiQQOpenGLWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQOpenGLWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQOpenGLWidget *p = new PlastiQQOpenGLWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQOpenGLWidget *p = new PlastiQQOpenGLWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QOpenGLWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QOpenGLWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { QOpenGLContext* _r = o->context();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QOpenGLContext"; } break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->defaultFramebufferObject() | ret: `GLuint` */ break;
        case 2: o->doneCurrent();
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QSurfaceFormat *_r = new QSurfaceFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSurfaceFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QImage *_r = new QImage(o->grabFramebuffer());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->makeCurrent();
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFormat((*reinterpret_cast< QSurfaceFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setUpdateBehavior(QOpenGLWidget::UpdateBehavior(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: { qint64 _r = o->updateBehavior(); // HACK for UpdateBehavior 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: if (isWrapper) ((PlastiQQOpenGLWidgetWrapper*)o)->PlastiQParentCall_initializeGL();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 11: if (isWrapper) ((PlastiQQOpenGLWidgetWrapper*)o)->PlastiQParentCall_paintGL();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 12: if (isWrapper) ((PlastiQQOpenGLWidgetWrapper*)o)->PlastiQParentCall_resizeGL(stack[1].s_int,
                    stack[2].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 13: if (isWrapper) ((PlastiQQOpenGLWidgetWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQOpenGLWidgetWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QOpenGLWidget *o = reinterpret_cast<QOpenGLWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QOpenGLWidget::aboutToCompose,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "aboutToCompose", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QOpenGLWidget::aboutToResize,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "aboutToResize", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QOpenGLWidget::frameSwapped,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "frameSwapped", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QOpenGLWidget::resized,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "resized", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QOpenGLWidget *o = reinterpret_cast<QOpenGLWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QOpenGLWidget *o = reinterpret_cast<QOpenGLWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QOpenGLWidget *o = reinterpret_cast<QOpenGLWidget*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQOpenGLWidget::~PlastiQQOpenGLWidget() {
    QOpenGLWidget* o = reinterpret_cast<QOpenGLWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
