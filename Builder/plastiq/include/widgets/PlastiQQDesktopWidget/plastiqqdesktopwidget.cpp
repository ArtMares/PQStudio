#include "plastiqmethod.h"
#include "plastiqqdesktopwidget.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QDesktopWidget> 
#include <QRect>
#include <QWidget>
#include <QResizeEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQDesktopWidget::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQDesktopWidget::plastiqMethods = {
    { "availableGeometry()", { "availableGeometry", "", "const QRect", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableGeometry(int)", { "availableGeometry", "int", "const QRect", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableGeometry(const QWidget*)", { "availableGeometry", "QWidget*", "const QRect", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableGeometry(QPoint&)", { "availableGeometry", "QPoint&", "const QRect", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVirtualDesktop()", { "isVirtualDesktop", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "primaryScreen()", { "primaryScreen", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screen()", { "screen", "", "QWidget*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screen(int)", { "screen", "int", "QWidget*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenCount()", { "screenCount", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenGeometry()", { "screenGeometry", "", "const QRect", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenGeometry(int)", { "screenGeometry", "int", "const QRect", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenGeometry(const QWidget*)", { "screenGeometry", "QWidget*", "const QRect", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenGeometry(QPoint&)", { "screenGeometry", "QPoint&", "const QRect", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenNumber()", { "screenNumber", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenNumber(const QWidget*)", { "screenNumber", "QWidget*", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenNumber(QPoint&)", { "screenNumber", "QPoint&", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDesktopWidget::plastiqSignals = {
    { "primaryScreenChanged()", { "primaryScreenChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "resized(int)", { "resized", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "screenCountChanged(int)", { "screenCountChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "workAreaResized(int)", { "workAreaResized", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDesktopWidget::plastiqProperties = {
    { "primaryScreen", { "primaryScreen", "int", "primaryScreenChanged", "primaryScreen" } },
    { "screenCount", { "screenCount", "int", "screenCountChanged", "screenCount" } },
    { "virtualDesktop", { "virtualDesktop", "bool", "", "isVirtualDesktop" } },

};

QHash<QByteArray, long> PlastiQQDesktopWidget::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDesktopWidget::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDesktopWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQDesktopWidget::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QDesktopWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDesktopWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQDesktopWidgetWrapper : public QDesktopWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QDesktopWidget::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QDesktopWidget::resizeEvent(event);
    }

};

void PlastiQQDesktopWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQDesktopWidgetWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQDesktopWidget *p = new PlastiQQDesktopWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDesktopWidget *p = new PlastiQQDesktopWidget();
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
        QDesktopWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QDesktopWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRect *_r = new QRect(o->availableGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QRect *_r = new QRect(o->availableGeometry(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QRect *_r = new QRect(o->availableGeometry(reinterpret_cast<const QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QRect *_r = new QRect(o->availableGeometry((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->isVirtualDesktop();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { int _r = o->primaryScreen();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { QWidget* _r = o->screen();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 7: { QWidget* _r = o->screen(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 8: { int _r = o->screenCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { /* COPY OBJECT */
            QRect *_r = new QRect(o->screenGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QRect *_r = new QRect(o->screenGeometry(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QRect *_r = new QRect(o->screenGeometry(reinterpret_cast<const QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QRect *_r = new QRect(o->screenGeometry((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { int _r = o->screenNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->screenNumber(reinterpret_cast<const QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { int _r = o->screenNumber((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: if (isWrapper) ((PlastiQQDesktopWidgetWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
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

        QDesktopWidget *o = reinterpret_cast<QDesktopWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDesktopWidget::primaryScreenChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "primaryScreenChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QDesktopWidget::resized,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "resized", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QDesktopWidget::screenCountChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "screenCountChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QDesktopWidget::workAreaResized,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "workAreaResized", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDesktopWidget *o = reinterpret_cast<QDesktopWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDesktopWidget *o = reinterpret_cast<QDesktopWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDesktopWidget *o = reinterpret_cast<QDesktopWidget*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDesktopWidget::~PlastiQQDesktopWidget() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
