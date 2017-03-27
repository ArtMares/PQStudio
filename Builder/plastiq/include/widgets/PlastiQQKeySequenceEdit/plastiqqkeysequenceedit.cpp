#include "plastiqmethod.h"
#include "plastiqqkeysequenceedit.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QKeySequenceEdit> 
#include <QKeySequence>
#include <QEvent>
#include <QKeyEvent>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQKeySequenceEdit::plastiqConstructors = {
    { "QKeySequenceEdit()", { "QKeySequenceEdit", "", "QKeySequenceEdit*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequenceEdit(QWidget*)", { "QKeySequenceEdit", "QWidget*", "QKeySequenceEdit*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequenceEdit(QKeySequence&)", { "QKeySequenceEdit", "QKeySequence&", "QKeySequenceEdit*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeySequenceEdit(QKeySequence&,QWidget*)", { "QKeySequenceEdit", "QKeySequence&,QWidget*", "QKeySequenceEdit*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQKeySequenceEdit::plastiqMethods = {
    { "keySequence()", { "keySequence", "", "QKeySequence", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setKeySequence(QKeySequence&)", { "setKeySequence", "QKeySequence&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQKeySequenceEdit::plastiqSignals = {
    { "editingFinished()", { "editingFinished", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "keySequenceChanged(QKeySequence&)", { "keySequenceChanged", "QKeySequence&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQKeySequenceEdit::plastiqProperties = {
    { "keySequence", { "keySequence", "QKeySequence", "setKeySequence", "keySequence" } },

};

QHash<QByteArray, long> PlastiQQKeySequenceEdit::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQKeySequenceEdit::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQKeySequenceEdit::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQKeySequenceEdit::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QKeySequenceEdit", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQKeySequenceEdit::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQKeySequenceEditWrapper : public QKeySequenceEdit {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQKeySequenceEditWrapper(QWidget *parent = Q_NULLPTR)
         : QKeySequenceEdit(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQKeySequenceEditWrapper(const QKeySequence &keySequence, QWidget *parent = Q_NULLPTR)
         : QKeySequenceEdit(keySequence,parent),
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
        else return QKeySequenceEdit::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QKeySequenceEdit::event(e);
    }

    void keyPressEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QKeySequenceEdit::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QKeySequenceEdit::keyPressEvent(e);
    }

    void keyReleaseEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QKeySequenceEdit::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QKeySequenceEdit::keyReleaseEvent(e);
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
        else return QKeySequenceEdit::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QKeySequenceEdit::timerEvent(e);
    }

};

void PlastiQQKeySequenceEdit::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQKeySequenceEditWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQKeySequenceEditWrapper(); break;
        case 1: o = new PlastiQQKeySequenceEditWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQKeySequenceEditWrapper((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp))); break;
        case 3: o = new PlastiQQKeySequenceEditWrapper((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQKeySequenceEdit *p = new PlastiQQKeySequenceEdit();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQKeySequenceEdit *p = new PlastiQQKeySequenceEdit();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QKeySequenceEdit *o = sc ? Q_NULLPTR : reinterpret_cast<QKeySequenceEdit*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QKeySequence *_r = new QKeySequence(o->keySequence());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QKeySequence";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r;
                if (isWrapper) _r = ((PlastiQQKeySequenceEditWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: if (isWrapper) ((PlastiQQKeySequenceEditWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 3: if (isWrapper) ((PlastiQQKeySequenceEditWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 4: if (isWrapper) ((PlastiQQKeySequenceEditWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 5: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setKeySequence((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QKeySequenceEdit *o = reinterpret_cast<QKeySequenceEdit*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QKeySequenceEdit::editingFinished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "editingFinished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QKeySequenceEdit::keySequenceChanged,
            [=](const QKeySequence& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QKeySequence(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QKeySequence";
                PlastiQ_activate(sender, "keySequenceChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QKeySequenceEdit *o = reinterpret_cast<QKeySequenceEdit*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QKeySequenceEdit *o = reinterpret_cast<QKeySequenceEdit*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QKeySequenceEdit *o = reinterpret_cast<QKeySequenceEdit*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQKeySequenceEdit::~PlastiQQKeySequenceEdit() {
    QKeySequenceEdit* o = reinterpret_cast<QKeySequenceEdit*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
