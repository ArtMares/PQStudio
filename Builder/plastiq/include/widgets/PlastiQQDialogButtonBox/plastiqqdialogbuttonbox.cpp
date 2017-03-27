#include "plastiqmethod.h"
#include "plastiqqdialogbuttonbox.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QDialogButtonBox> 
#include <QPushButton>
#include <QEvent>
#include <QAbstractButton>

QHash<QByteArray, PlastiQMethod> PlastiQQDialogButtonBox::plastiqConstructors = {
    { "QDialogButtonBox()", { "QDialogButtonBox", "", "QDialogButtonBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDialogButtonBox(QWidget*)", { "QDialogButtonBox", "QWidget*", "QDialogButtonBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDialogButtonBox(enum)", { "QDialogButtonBox", "Qt::Orientation", "QDialogButtonBox*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDialogButtonBox(enum,QWidget*)", { "QDialogButtonBox", "Qt::Orientation,QWidget*", "QDialogButtonBox*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDialogButtonBox(enum,enum)", { "QDialogButtonBox", "StandardButtons,Qt::Orientation", "QDialogButtonBox*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDialogButtonBox(enum,enum,QWidget*)", { "QDialogButtonBox", "StandardButtons,Qt::Orientation,QWidget*", "QDialogButtonBox*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDialogButtonBox::plastiqMethods = {
    { "addButton(QAbstractButton*,enum)", { "addButton", "QAbstractButton*,ButtonRole", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addButton(QString,enum)", { "addButton", "QString&,ButtonRole", "QPushButton*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addButton(enum)", { "addButton", "StandardButton", "QPushButton*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "button(enum)", { "button", "StandardButton", "QPushButton*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttonRole(QAbstractButton*)", { "buttonRole", "QAbstractButton*", "ButtonRole", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "centerButtons()", { "centerButtons", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeButton(QAbstractButton*)", { "removeButton", "QAbstractButton*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCenterButtons(bool)", { "setCenterButtons", "bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrientation(enum)", { "setOrientation", "Qt::Orientation", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStandardButtons(enum)", { "setStandardButtons", "StandardButtons", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardButton(QAbstractButton*)", { "standardButton", "QAbstractButton*", "StandardButton", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardButtons()", { "standardButtons", "", "StandardButtons", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDialogButtonBox::plastiqSignals = {
    { "accepted()", { "accepted", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(QAbstractButton*)", { "clicked", "QAbstractButton*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "helpRequested()", { "helpRequested", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rejected()", { "rejected", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDialogButtonBox::plastiqProperties = {
    { "centerButtons", { "centerButtons", "bool", "setCenterButtons", "centerButtons" } },
    { "orientation", { "orientation", "long", "setOrientation", "orientation" } },
    { "standardButtons", { "standardButtons", "long", "setStandardButtons", "standardButtons" } },

};

QHash<QByteArray, long> PlastiQQDialogButtonBox::plastiqConstants = {

    /* QDialogButtonBox::ButtonLayout */
   { "WinLayout", QDialogButtonBox::WinLayout },
   { "MacLayout", QDialogButtonBox::MacLayout },
   { "KdeLayout", QDialogButtonBox::KdeLayout },
   { "GnomeLayout", QDialogButtonBox::GnomeLayout },

    /* QDialogButtonBox::ButtonRole */
   { "InvalidRole", QDialogButtonBox::InvalidRole },
   { "AcceptRole", QDialogButtonBox::AcceptRole },
   { "RejectRole", QDialogButtonBox::RejectRole },
   { "DestructiveRole", QDialogButtonBox::DestructiveRole },
   { "ActionRole", QDialogButtonBox::ActionRole },
   { "HelpRole", QDialogButtonBox::HelpRole },
   { "YesRole", QDialogButtonBox::YesRole },
   { "NoRole", QDialogButtonBox::NoRole },
   { "ResetRole", QDialogButtonBox::ResetRole },
   { "ApplyRole", QDialogButtonBox::ApplyRole },
   { "NRoles", QDialogButtonBox::NRoles },

    /* QDialogButtonBox::StandardButton */
   { "NoButton", QDialogButtonBox::NoButton },
   { "Ok", QDialogButtonBox::Ok },
   { "Save", QDialogButtonBox::Save },
   { "SaveAll", QDialogButtonBox::SaveAll },
   { "Open", QDialogButtonBox::Open },
   { "Yes", QDialogButtonBox::Yes },
   { "YesToAll", QDialogButtonBox::YesToAll },
   { "No", QDialogButtonBox::No },
   { "NoToAll", QDialogButtonBox::NoToAll },
   { "Abort", QDialogButtonBox::Abort },
   { "Retry", QDialogButtonBox::Retry },
   { "Ignore", QDialogButtonBox::Ignore },
   { "Close", QDialogButtonBox::Close },
   { "Cancel", QDialogButtonBox::Cancel },
   { "Discard", QDialogButtonBox::Discard },
   { "Help", QDialogButtonBox::Help },
   { "Apply", QDialogButtonBox::Apply },
   { "Reset", QDialogButtonBox::Reset },
   { "RestoreDefaults", QDialogButtonBox::RestoreDefaults },
   { "FirstButton", QDialogButtonBox::FirstButton },
   { "LastButton", QDialogButtonBox::LastButton },

};

QVector<PlastiQMetaObject*> PlastiQQDialogButtonBox::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDialogButtonBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQDialogButtonBox::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QDialogButtonBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDialogButtonBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQDialogButtonBoxWrapper : public QDialogButtonBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQDialogButtonBoxWrapper(QWidget *parent = Q_NULLPTR)
         : QDialogButtonBox(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQDialogButtonBoxWrapper(Qt::Orientation orientation, QWidget *parent = Q_NULLPTR)
         : QDialogButtonBox(orientation,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQDialogButtonBoxWrapper(StandardButtons buttons, QWidget *parent = Q_NULLPTR)
         : QDialogButtonBox(buttons,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQDialogButtonBoxWrapper(StandardButtons buttons, Qt::Orientation orientation, QWidget *parent = Q_NULLPTR)
         : QDialogButtonBox(buttons,orientation,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void changeEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDialogButtonBox::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QDialogButtonBox::changeEvent(event);
    }

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
        else return QDialogButtonBox::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QDialogButtonBox::event(event);
    }

};

void PlastiQQDialogButtonBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQDialogButtonBoxWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQDialogButtonBoxWrapper(); break;
        case 1: o = new PlastiQQDialogButtonBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQDialogButtonBoxWrapper(Qt::Orientation(stack[1].s_int64)); break;
        case 3: o = new PlastiQQDialogButtonBoxWrapper(Qt::Orientation(stack[1].s_int64),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 4: o = new PlastiQQDialogButtonBoxWrapper(QDialogButtonBox::StandardButtons(stack[1].s_int64),
                    Qt::Orientation(stack[2].s_int64)); break;
        case 5: o = new PlastiQQDialogButtonBoxWrapper(QDialogButtonBox::StandardButtons(stack[1].s_int64),
                    Qt::Orientation(stack[2].s_int64),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQDialogButtonBox *p = new PlastiQQDialogButtonBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDialogButtonBox *p = new PlastiQQDialogButtonBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDialogButtonBox *o = sc ? Q_NULLPTR : reinterpret_cast<QDialogButtonBox*>(object->plastiq_data());

        switch(id) {
        case 0: o->addButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp),
                    QDialogButtonBox::ButtonRole(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QPushButton* _r = o->addButton(stack[1].s_string,
                    QDialogButtonBox::ButtonRole(stack[2].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPushButton"; } break;
        case 2: { QPushButton* _r = o->addButton(QDialogButtonBox::StandardButton(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPushButton"; } break;
        case 3: { QPushButton* _r = o->button(QDialogButtonBox::StandardButton(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPushButton"; } break;
        case 4: { qint64 _r = o->buttonRole(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp)); // HACK for ButtonRole 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { bool _r = o->centerButtons();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 7: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: o->removeButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setCenterButtons(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setOrientation(Qt::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setStandardButtons(QDialogButtonBox::StandardButtons(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: { qint64 _r = o->standardButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: { qint64 _r = o->standardButtons(); // HACK for StandardButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: if (isWrapper) ((PlastiQQDialogButtonBoxWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 15: { bool _r;
                if (isWrapper) _r = ((PlastiQQDialogButtonBoxWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDialogButtonBox *o = reinterpret_cast<QDialogButtonBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDialogButtonBox::accepted,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "accepted", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QDialogButtonBox::clicked,
            [=](QAbstractButton* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAbstractButton";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QDialogButtonBox::helpRequested,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "helpRequested", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QDialogButtonBox::rejected,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "rejected", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDialogButtonBox *o = reinterpret_cast<QDialogButtonBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDialogButtonBox *o = reinterpret_cast<QDialogButtonBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDialogButtonBox *o = reinterpret_cast<QDialogButtonBox*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDialogButtonBox::~PlastiQQDialogButtonBox() {
    QDialogButtonBox* o = reinterpret_cast<QDialogButtonBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
