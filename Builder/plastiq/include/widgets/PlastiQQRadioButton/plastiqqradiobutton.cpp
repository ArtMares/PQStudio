#include "plastiqmethod.h"
#include "plastiqqradiobutton.h"

#include "widgets/PlastiQQAbstractButton/plastiqqabstractbutton.h"
#include <QRadioButton> 
#include <QEvent>
#include <QPoint>
#include <QMouseEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQRadioButton::plastiqConstructors = {
    { "QRadioButton()", { "QRadioButton", "", "QRadioButton*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadioButton(QWidget*)", { "QRadioButton", "QWidget*", "QRadioButton*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadioButton(QString)", { "QRadioButton", "QString&", "QRadioButton*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadioButton(QString,QWidget*)", { "QRadioButton", "QString&,QWidget*", "QRadioButton*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioButton::plastiqMethods = {
    { "initStyleOption(QStyleOptionButton*)", { "initStyleOption", "QStyleOptionButton*", "void", 0, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hitButton(QPoint&)", { "hitButton", "QPoint&", "bool", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioButton::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRadioButton::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRadioButton::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRadioButton::plastiqInherits = { &PlastiQQAbstractButton::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQRadioButton::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQRadioButton::plastiq_static_metaObject = {
    { &PlastiQQAbstractButton::plastiq_static_metaObject, &plastiqInherits, "QRadioButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRadioButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQRadioButtonWrapper : public QRadioButton {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQRadioButtonWrapper(QWidget *parent = Q_NULLPTR)
         : QRadioButton(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQRadioButtonWrapper(const QString &text, QWidget *parent = Q_NULLPTR)
         : QRadioButton(text,parent),
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
        else return QRadioButton::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QRadioButton::event(e);
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
        else return QRadioButton::hitButton(pos);
    }

    bool PlastiQParentCall_hitButton(const QPoint &pos) const {
        return QRadioButton::hitButton(pos);
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
        else return QRadioButton::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QRadioButton::mouseMoveEvent(e);
    }

    void checkStateSet() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void checkStateSet()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QRadioButton::checkStateSet();
    }

    void PlastiQParentCall_checkStateSet() {
        return QRadioButton::checkStateSet();
    }

    void nextCheckState() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void nextCheckState()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QRadioButton::nextCheckState();
    }

    void PlastiQParentCall_nextCheckState() {
        return QRadioButton::nextCheckState();
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
        else return QRadioButton::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QRadioButton::changeEvent(e);
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
        else return QRadioButton::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QRadioButton::focusInEvent(e);
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
        else return QRadioButton::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QRadioButton::focusOutEvent(e);
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
        else return QRadioButton::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QRadioButton::keyPressEvent(e);
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
        else return QRadioButton::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QRadioButton::keyReleaseEvent(e);
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
        else return QRadioButton::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QRadioButton::mousePressEvent(e);
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
        else return QRadioButton::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QRadioButton::mouseReleaseEvent(e);
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
        else return QRadioButton::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QRadioButton::timerEvent(e);
    }

};

void PlastiQQRadioButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQRadioButtonWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQRadioButtonWrapper(); break;
        case 1: o = new PlastiQQRadioButtonWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQRadioButtonWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQRadioButtonWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQRadioButton *p = new PlastiQQRadioButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRadioButton *p = new PlastiQQRadioButton();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQAbstractButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRadioButton *o = sc ? Q_NULLPTR : reinterpret_cast<QRadioButton*>(object->plastiq_data());

        switch(id) {
        case 0: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r;
                if (isWrapper) _r = ((PlastiQQRadioButtonWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r;
                if (isWrapper) _r = ((PlastiQQRadioButtonWrapper*)o)->PlastiQParentCall_hitButton((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: if (isWrapper) ((PlastiQQRadioButtonWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 4: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QRadioButton *o = reinterpret_cast<QRadioButton*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QRadioButton *o = reinterpret_cast<QRadioButton*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QRadioButton *o = reinterpret_cast<QRadioButton*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QRadioButton *o = reinterpret_cast<QRadioButton*>(object->plastiq_data());

        if(className == "QAbstractButton") {
            stack[0].s_voidp = static_cast<QAbstractButton*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQRadioButton::~PlastiQQRadioButton() {
    QRadioButton* o = reinterpret_cast<QRadioButton*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
