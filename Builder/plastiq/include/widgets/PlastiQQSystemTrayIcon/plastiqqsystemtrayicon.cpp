#include "plastiqmethod.h"
#include "plastiqqsystemtrayicon.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QSystemTrayIcon> 
#include <QMenu>
#include <QRect>
#include <QIcon>
#include <QString>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQSystemTrayIcon::plastiqConstructors = {
    { "QSystemTrayIcon()", { "QSystemTrayIcon", "", "QSystemTrayIcon*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSystemTrayIcon(QObject*)", { "QSystemTrayIcon", "QObject*", "QSystemTrayIcon*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSystemTrayIcon(QIcon&)", { "QSystemTrayIcon", "QIcon&", "QSystemTrayIcon*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSystemTrayIcon(QIcon&,QObject*)", { "QSystemTrayIcon", "QIcon&,QObject*", "QSystemTrayIcon*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSystemTrayIcon::plastiqMethods = {
    { "contextMenu()", { "contextMenu", "", "QMenu*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "geometry()", { "geometry", "", "QRect", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContextMenu(QMenu*)", { "setContextMenu", "QMenu*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSystemTrayAvailable()", { "isSystemTrayAvailable", "", "bool", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "supportsMessages()", { "supportsMessages", "", "bool", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hide()", { "hide", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "show()", { "show", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString,QString)", { "showMessage", "QString&,QString&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString,QString,enum)", { "showMessage", "QString&,QString&,QSystemTrayIcon::MessageIcon", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString,QString,enum,int)", { "showMessage", "QString&,QString&,QSystemTrayIcon::MessageIcon,int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSystemTrayIcon::plastiqSignals = {
    { "activated(enum)", { "activated", "QSystemTrayIcon::ActivationReason", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "messageClicked()", { "messageClicked", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQSystemTrayIcon::plastiqProperties = {
    { "icon", { "icon", "QIcon", "setIcon", "icon" } },
    { "toolTip", { "toolTip", "QString", "setToolTip", "toolTip" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },

};

QHash<QByteArray, long> PlastiQQSystemTrayIcon::plastiqConstants = {

    /* QSystemTrayIcon::ActivationReason */
   { "Unknown", QSystemTrayIcon::Unknown },
   { "Context", QSystemTrayIcon::Context },
   { "DoubleClick", QSystemTrayIcon::DoubleClick },
   { "Trigger", QSystemTrayIcon::Trigger },
   { "MiddleClick", QSystemTrayIcon::MiddleClick },

    /* QSystemTrayIcon::MessageIcon */
   { "NoIcon", QSystemTrayIcon::NoIcon },
   { "Information", QSystemTrayIcon::Information },
   { "Warning", QSystemTrayIcon::Warning },
   { "Critical", QSystemTrayIcon::Critical },

};

QVector<PlastiQMetaObject*> PlastiQQSystemTrayIcon::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSystemTrayIcon::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSystemTrayIcon::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QSystemTrayIcon", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSystemTrayIcon::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSystemTrayIconWrapper : public QSystemTrayIcon {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSystemTrayIconWrapper(QObject *parent = Q_NULLPTR)
         : QSystemTrayIcon(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSystemTrayIconWrapper(const QIcon &icon, QObject *parent = Q_NULLPTR)
         : QSystemTrayIcon(icon,parent),
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
        else return QSystemTrayIcon::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QSystemTrayIcon::event(e);
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
        else return QSystemTrayIcon::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QSystemTrayIcon::eventFilter(watched,event);
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
        else return QSystemTrayIcon::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QSystemTrayIcon::metaObject();
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
        else return QSystemTrayIcon::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QSystemTrayIcon::childEvent(event);
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
        else return QSystemTrayIcon::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QSystemTrayIcon::connectNotify(signal);
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
        else return QSystemTrayIcon::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QSystemTrayIcon::customEvent(event);
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
        else return QSystemTrayIcon::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QSystemTrayIcon::disconnectNotify(signal);
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
        else return QSystemTrayIcon::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QSystemTrayIcon::timerEvent(event);
    }

};

void PlastiQQSystemTrayIcon::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSystemTrayIconWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSystemTrayIconWrapper(); break;
        case 1: o = new PlastiQQSystemTrayIconWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQSystemTrayIconWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp))); break;
        case 3: o = new PlastiQQSystemTrayIconWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSystemTrayIcon *p = new PlastiQQSystemTrayIcon();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSystemTrayIcon *p = new PlastiQQSystemTrayIcon();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSystemTrayIcon *o = sc ? Q_NULLPTR : reinterpret_cast<QSystemTrayIcon*>(object->plastiq_data());

        switch(id) {
        case 0: { QMenu* _r = o->contextMenu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 1: { /* COPY OBJECT */
            QRect *_r = new QRect(o->geometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: o->setContextMenu(reinterpret_cast<QMenu*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: { QString _r = o->toolTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { bool _r = sc ? QSystemTrayIcon::isSystemTrayAvailable() : o->isSystemTrayAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = sc ? QSystemTrayIcon::supportsMessages() : o->supportsMessages();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r;
                if (isWrapper) _r = ((PlastiQQSystemTrayIconWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: o->hide();
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->show();
                stack[0].type = PlastiQ::Void; break;
        case 14: o->showMessage(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->showMessage(stack[1].s_string,
                    stack[2].s_string,
                    QSystemTrayIcon::MessageIcon(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->showMessage(stack[1].s_string,
                    stack[2].s_string,
                    QSystemTrayIcon::MessageIcon(stack[3].s_int64),
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSystemTrayIcon *o = reinterpret_cast<QSystemTrayIcon*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QSystemTrayIcon::activated,
            [=](QSystemTrayIcon::ActivationReason arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QSystemTrayIcon::ActivationReason";
                PlastiQ_activate(sender, "activated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QSystemTrayIcon::messageClicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "messageClicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSystemTrayIcon *o = reinterpret_cast<QSystemTrayIcon*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSystemTrayIcon *o = reinterpret_cast<QSystemTrayIcon*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSystemTrayIcon *o = reinterpret_cast<QSystemTrayIcon*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSystemTrayIcon::~PlastiQQSystemTrayIcon() {
    QSystemTrayIcon* o = reinterpret_cast<QSystemTrayIcon*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
