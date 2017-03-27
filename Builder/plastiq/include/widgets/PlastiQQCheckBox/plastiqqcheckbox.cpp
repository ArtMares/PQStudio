#include "plastiqmethod.h"
#include "plastiqqcheckbox.h"

#include "widgets/PlastiQQAbstractButton/plastiqqabstractbutton.h"
#include <QCheckBox> 
#include <QEvent>
#include <QPoint>
#include <QMouseEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQCheckBox::plastiqConstructors = {
    { "QCheckBox()", { "QCheckBox", "", "QCheckBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCheckBox(QWidget*)", { "QCheckBox", "QWidget*", "QCheckBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCheckBox(QString)", { "QCheckBox", "QString&", "QCheckBox*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCheckBox(QString,QWidget*)", { "QCheckBox", "QString&,QWidget*", "QCheckBox*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCheckBox::plastiqMethods = {
    { "checkState()", { "checkState", "", "Qt::CheckState", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTristate()", { "isTristate", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckState(enum)", { "setCheckState", "Qt::CheckState", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTristate()", { "setTristate", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTristate(bool)", { "setTristate", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionButton*)", { "initStyleOption", "QStyleOptionButton*", "void", 5, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "checkStateSet()", { "checkStateSet", "", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hitButton(QPoint&)", { "hitButton", "QPoint&", "bool", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "nextCheckState()", { "nextCheckState", "", "void", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCheckBox::plastiqSignals = {
    { "stateChanged(int)", { "stateChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCheckBox::plastiqProperties = {
    { "tristate", { "tristate", "bool", "setTristate", "isTristate" } },

};

QHash<QByteArray, long> PlastiQQCheckBox::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCheckBox::plastiqInherits = { &PlastiQQAbstractButton::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCheckBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQCheckBox::plastiq_static_metaObject = {
    { &PlastiQQAbstractButton::plastiq_static_metaObject, &plastiqInherits, "QCheckBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCheckBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQCheckBoxWrapper : public QCheckBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQCheckBoxWrapper(QWidget *parent = Q_NULLPTR)
         : QCheckBox(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQCheckBoxWrapper(const QString &text, QWidget *parent = Q_NULLPTR)
         : QCheckBox(text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void checkStateSet() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void checkStateSet()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCheckBox::checkStateSet();
    }

    void PlastiQParentCall_checkStateSet() {
        return QCheckBox::checkStateSet();
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
        else return QCheckBox::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QCheckBox::event(e);
    }

    bool hitButton(const QPoint &pos) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hitButton(const QPoint&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QPoint(pos) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPoint");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QCheckBox::hitButton(pos);
    }

    bool PlastiQParentCall_hitButton(const QPoint &pos) const {
        return QCheckBox::hitButton(pos);
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
        else return QCheckBox::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QCheckBox::mouseMoveEvent(e);
    }

    void nextCheckState() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void nextCheckState()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCheckBox::nextCheckState();
    }

    void PlastiQParentCall_nextCheckState() {
        return QCheckBox::nextCheckState();
    }

    void changeEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCheckBox::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QCheckBox::changeEvent(e);
    }

    void focusInEvent(QFocusEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCheckBox::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QCheckBox::focusInEvent(e);
    }

    void focusOutEvent(QFocusEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCheckBox::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QCheckBox::focusOutEvent(e);
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
        else return QCheckBox::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QCheckBox::keyPressEvent(e);
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
        else return QCheckBox::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QCheckBox::keyReleaseEvent(e);
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
        else return QCheckBox::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QCheckBox::mousePressEvent(e);
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
        else return QCheckBox::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QCheckBox::mouseReleaseEvent(e);
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
        else return QCheckBox::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QCheckBox::timerEvent(e);
    }

};

void PlastiQQCheckBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQCheckBoxWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQCheckBoxWrapper(); break;
        case 1: o = new PlastiQQCheckBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQCheckBoxWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQCheckBoxWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQCheckBox *p = new PlastiQQCheckBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCheckBox *p = new PlastiQQCheckBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQAbstractButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCheckBox *o = sc ? Q_NULLPTR : reinterpret_cast<QCheckBox*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->checkState(); // HACK for Qt::CheckState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->isTristate();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->setCheckState(Qt::CheckState(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setTristate();
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setTristate(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 5: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQCheckBoxWrapper*)o)->PlastiQParentCall_checkStateSet();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 7: { bool _r;
                if (isWrapper) _r = ((PlastiQQCheckBoxWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r;
                if (isWrapper) _r = ((PlastiQQCheckBoxWrapper*)o)->PlastiQParentCall_hitButton((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: if (isWrapper) ((PlastiQQCheckBoxWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 10: if (isWrapper) ((PlastiQQCheckBoxWrapper*)o)->PlastiQParentCall_nextCheckState();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 11: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCheckBox *o = reinterpret_cast<QCheckBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCheckBox::stateChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCheckBox *o = reinterpret_cast<QCheckBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCheckBox *o = reinterpret_cast<QCheckBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCheckBox *o = reinterpret_cast<QCheckBox*>(object->plastiq_data());

        if(className == "QAbstractButton") {
            stack[0].s_voidp = static_cast<QAbstractButton*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCheckBox::~PlastiQQCheckBox() {
    QCheckBox* o = reinterpret_cast<QCheckBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
