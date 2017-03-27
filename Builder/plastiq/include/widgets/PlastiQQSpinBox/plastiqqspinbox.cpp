#include "plastiqmethod.h"
#include "plastiqqspinbox.h"

#include "widgets/PlastiQQAbstractSpinBox/plastiqqabstractspinbox.h"
#include <QSpinBox> 
#include <QString>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQSpinBox::plastiqConstructors = {
    { "QSpinBox()", { "QSpinBox", "", "QSpinBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSpinBox(QWidget*)", { "QSpinBox", "QWidget*", "QSpinBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSpinBox::plastiqMethods = {
    { "cleanText()", { "cleanText", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayIntegerBase()", { "displayIntegerBase", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximum()", { "maximum", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimum()", { "minimum", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prefix()", { "prefix", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDisplayIntegerBase(int)", { "setDisplayIntegerBase", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximum(int)", { "setMaximum", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimum(int)", { "setMinimum", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrefix(QString)", { "setPrefix", "QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(int,int)", { "setRange", "int,int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSingleStep(int)", { "setSingleStep", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSuffix(QString)", { "setSuffix", "QString&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "singleStep()", { "singleStep", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "suffix()", { "suffix", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textFromValue(int)", { "textFromValue", "int", "QString", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "valueFromText(QString)", { "valueFromText", "QString&", "int", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "fixup(QString&)", { "fixup", "QString&", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "validate(QString&,int&)", { "validate", "QString&,int&", "QValidator::State", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setValue(int)", { "setValue", "int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSpinBox::plastiqSignals = {
    { "valueChanged(int)", { "valueChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valueChanged(QString)", { "valueChanged", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQSpinBox::plastiqProperties = {
    { "cleanText", { "cleanText", "QString", "", "cleanText" } },
    { "displayIntegerBase", { "displayIntegerBase", "int", "setDisplayIntegerBase", "displayIntegerBase" } },
    { "maximum", { "maximum", "int", "setMaximum", "maximum" } },
    { "minimum", { "minimum", "int", "setMinimum", "minimum" } },
    { "prefix", { "prefix", "QString", "setPrefix", "prefix" } },
    { "singleStep", { "singleStep", "int", "setSingleStep", "singleStep" } },
    { "suffix", { "suffix", "QString", "setSuffix", "suffix" } },
    { "value", { "value", "int", "setValue", "value" } },

};

QHash<QByteArray, long> PlastiQQSpinBox::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSpinBox::plastiqInherits = { &PlastiQQAbstractSpinBox::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSpinBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQSpinBox::plastiq_static_metaObject = {
    { &PlastiQQAbstractSpinBox::plastiq_static_metaObject, &plastiqInherits, "QSpinBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSpinBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSpinBoxWrapper : public QSpinBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSpinBoxWrapper(QWidget *parent = Q_NULLPTR)
         : QSpinBox(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QString textFromValue(int value) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString textFromValue(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = value;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QSpinBox::textFromValue(value);
    }

    QString PlastiQParentCall_textFromValue(int value) const {
        return QSpinBox::textFromValue(value);
    }

    int valueFromText(const QString &text) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int valueFromText(const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_string = const_cast<QString&>(text);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QSpinBox::valueFromText(text);
    }

    int PlastiQParentCall_valueFromText(const QString &text) const {
        return QSpinBox::valueFromText(text);
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
        else return QSpinBox::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QSpinBox::event(event);
    }

    void fixup(QString &input) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void fixup(QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_string = input;
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::fixup(input);
    }

    void PlastiQParentCall_fixup(QString &input) const {
        return QSpinBox::fixup(input);
    }

    QValidator::State validate(QString &text, int &pos) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QValidator::State validate(QString&,int&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_string = text;
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            stack[2].s_int = pos;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QValidator::State _r = QValidator::State(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QSpinBox::validate(text,pos);
    }

    QValidator::State PlastiQParentCall_validate(QString &text, int &pos) const {
        return QSpinBox::validate(text,pos);
    }

    void stepBy(int steps) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void stepBy(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = steps;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::stepBy(steps);
    }

    void PlastiQParentCall_stepBy(int steps) {
        return QSpinBox::stepBy(steps);
    }

    StepEnabled stepEnabled() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("StepEnabled stepEnabled()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            StepEnabled _r = StepEnabled(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QSpinBox::stepEnabled();
    }

    StepEnabled PlastiQParentCall_stepEnabled() const {
        return QSpinBox::stepEnabled();
    }

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
        else return QSpinBox::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QSpinBox::changeEvent(event);
    }

    void closeEvent(QCloseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QSpinBox::closeEvent(event);
    }

    void contextMenuEvent(QContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QSpinBox::contextMenuEvent(event);
    }

    void focusInEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QSpinBox::focusInEvent(event);
    }

    void focusOutEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QSpinBox::focusOutEvent(event);
    }

    void hideEvent(QHideEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hideEvent(QHideEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QHideEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QSpinBox::hideEvent(event);
    }

    void keyPressEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QSpinBox::keyPressEvent(event);
    }

    void keyReleaseEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QSpinBox::keyReleaseEvent(event);
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QSpinBox::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QSpinBox::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QSpinBox::mouseReleaseEvent(event);
    }

    void paintEvent(QPaintEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QSpinBox::paintEvent(event);
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
        else return QSpinBox::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QSpinBox::resizeEvent(event);
    }

    void showEvent(QShowEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QSpinBox::showEvent(event);
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
        else return QSpinBox::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QSpinBox::timerEvent(event);
    }

    void wheelEvent(QWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSpinBox::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QSpinBox::wheelEvent(event);
    }

};

void PlastiQQSpinBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSpinBoxWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSpinBoxWrapper(); break;
        case 1: o = new PlastiQQSpinBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSpinBox *p = new PlastiQQSpinBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSpinBox *p = new PlastiQQSpinBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            PlastiQQAbstractSpinBox::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSpinBox *o = sc ? Q_NULLPTR : reinterpret_cast<QSpinBox*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->cleanText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { int _r = o->displayIntegerBase();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->maximum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->minimum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QString _r = o->prefix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: o->setDisplayIntegerBase(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setMaximum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setMinimum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setPrefix(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setRange(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setSingleStep(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setSuffix(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 12: { int _r = o->singleStep();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { QString _r = o->suffix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { int _r = o->value();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { QString _r;
                if (isWrapper) _r = ((PlastiQQSpinBoxWrapper*)o)->PlastiQParentCall_textFromValue(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 16: { int _r;
                if (isWrapper) _r = ((PlastiQQSpinBoxWrapper*)o)->PlastiQParentCall_valueFromText(stack[1].s_string);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { bool _r;
                if (isWrapper) _r = ((PlastiQQSpinBoxWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: if (isWrapper) ((PlastiQQSpinBoxWrapper*)o)->PlastiQParentCall_fixup((*reinterpret_cast< QString(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 19: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQSpinBoxWrapper*)o)->PlastiQParentCall_validate((*reinterpret_cast< QString(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< int(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: o->setValue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQAbstractSpinBox::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSpinBox *o = reinterpret_cast<QSpinBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QSpinBox::*)(const QString&)>(&QSpinBox::valueChanged),
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSpinBox *o = reinterpret_cast<QSpinBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSpinBox *o = reinterpret_cast<QSpinBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSpinBox *o = reinterpret_cast<QSpinBox*>(object->plastiq_data());

        if(className == "QAbstractSpinBox") {
            stack[0].s_voidp = static_cast<QAbstractSpinBox*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSpinBox::~PlastiQQSpinBox() {
    QSpinBox* o = reinterpret_cast<QSpinBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
