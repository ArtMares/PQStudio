#include "plastiqmethod.h"
#include "plastiqqdoublespinbox.h"

#include "widgets/PlastiQQAbstractSpinBox/plastiqqabstractspinbox.h"
#include <QDoubleSpinBox> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQDoubleSpinBox::plastiqConstructors = {
    { "QDoubleSpinBox()", { "QDoubleSpinBox", "", "QDoubleSpinBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDoubleSpinBox(QWidget*)", { "QDoubleSpinBox", "QWidget*", "QDoubleSpinBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDoubleSpinBox::plastiqMethods = {
    { "cleanText()", { "cleanText", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "decimals()", { "decimals", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximum()", { "maximum", "", "double", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimum()", { "minimum", "", "double", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prefix()", { "prefix", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDecimals(int)", { "setDecimals", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximum(double)", { "setMaximum", "double", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimum(double)", { "setMinimum", "double", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrefix(QString)", { "setPrefix", "QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(double,double)", { "setRange", "double,double", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSingleStep(double)", { "setSingleStep", "double", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSuffix(QString)", { "setSuffix", "QString&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "singleStep()", { "singleStep", "", "double", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "suffix()", { "suffix", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textFromValue(double)", { "textFromValue", "double", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "double", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valueFromText(QString)", { "valueFromText", "QString&", "double", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValue(double)", { "setValue", "double", "void", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDoubleSpinBox::plastiqSignals = {
    { "valueChanged(double)", { "valueChanged", "double", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valueChanged(QString)", { "valueChanged", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDoubleSpinBox::plastiqProperties = {
    { "cleanText", { "cleanText", "QString", "", "cleanText" } },
    { "decimals", { "decimals", "int", "setDecimals", "decimals" } },
    { "maximum", { "maximum", "double", "setMaximum", "maximum" } },
    { "minimum", { "minimum", "double", "setMinimum", "minimum" } },
    { "prefix", { "prefix", "QString", "setPrefix", "prefix" } },
    { "singleStep", { "singleStep", "double", "setSingleStep", "singleStep" } },
    { "suffix", { "suffix", "QString", "setSuffix", "suffix" } },
    { "value", { "value", "double", "setValue", "value" } },

};

QHash<QByteArray, long> PlastiQQDoubleSpinBox::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDoubleSpinBox::plastiqInherits = { &PlastiQQAbstractSpinBox::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDoubleSpinBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQDoubleSpinBox::plastiq_static_metaObject = {
    { &PlastiQQAbstractSpinBox::plastiq_static_metaObject, &plastiqInherits, "QDoubleSpinBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDoubleSpinBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQDoubleSpinBoxWrapper : public QDoubleSpinBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQDoubleSpinBoxWrapper(QWidget *parent = Q_NULLPTR)
         : QDoubleSpinBox(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QString textFromValue(double value) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString textFromValue(double)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_double = value;
            stack[1].name = QByteArrayLiteral("double");
            stack[1].type = PlastiQ::Double;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QDoubleSpinBox::textFromValue(value);
    }

    QString PlastiQParentCall_textFromValue(double value) const {
        return QDoubleSpinBox::textFromValue(value);
    }

    double valueFromText(const QString &text) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("double valueFromText(const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_string = const_cast<QString&>(text);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            double _r = stack[0].s_double;
            delete [] stack;
            return _r;
        }
        else return QDoubleSpinBox::valueFromText(text);
    }

    double PlastiQParentCall_valueFromText(const QString &text) const {
        return QDoubleSpinBox::valueFromText(text);
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
        else return QDoubleSpinBox::fixup(input);
    }

    void PlastiQParentCall_fixup(QString &input) const {
        return QDoubleSpinBox::fixup(input);
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
        else return QDoubleSpinBox::stepBy(steps);
    }

    void PlastiQParentCall_stepBy(int steps) {
        return QDoubleSpinBox::stepBy(steps);
    }

    QValidator::State validate(QString &input, int &pos) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QValidator::State validate(QString&,int&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_string = input;
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
        else return QDoubleSpinBox::validate(input,pos);
    }

    QValidator::State PlastiQParentCall_validate(QString &input, int &pos) const {
        return QDoubleSpinBox::validate(input,pos);
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
        else return QDoubleSpinBox::stepEnabled();
    }

    StepEnabled PlastiQParentCall_stepEnabled() const {
        return QDoubleSpinBox::stepEnabled();
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
        else return QDoubleSpinBox::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QDoubleSpinBox::changeEvent(event);
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
        else return QDoubleSpinBox::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QDoubleSpinBox::closeEvent(event);
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
        else return QDoubleSpinBox::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QDoubleSpinBox::contextMenuEvent(event);
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
        else return QDoubleSpinBox::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QDoubleSpinBox::focusInEvent(event);
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
        else return QDoubleSpinBox::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QDoubleSpinBox::focusOutEvent(event);
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
        else return QDoubleSpinBox::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QDoubleSpinBox::hideEvent(event);
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
        else return QDoubleSpinBox::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QDoubleSpinBox::keyPressEvent(event);
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
        else return QDoubleSpinBox::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QDoubleSpinBox::keyReleaseEvent(event);
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
        else return QDoubleSpinBox::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QDoubleSpinBox::mouseMoveEvent(event);
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
        else return QDoubleSpinBox::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QDoubleSpinBox::mousePressEvent(event);
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
        else return QDoubleSpinBox::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QDoubleSpinBox::mouseReleaseEvent(event);
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
        else return QDoubleSpinBox::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QDoubleSpinBox::paintEvent(event);
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
        else return QDoubleSpinBox::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QDoubleSpinBox::resizeEvent(event);
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
        else return QDoubleSpinBox::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QDoubleSpinBox::showEvent(event);
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
        else return QDoubleSpinBox::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QDoubleSpinBox::timerEvent(event);
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
        else return QDoubleSpinBox::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QDoubleSpinBox::wheelEvent(event);
    }

};

void PlastiQQDoubleSpinBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQDoubleSpinBoxWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQDoubleSpinBoxWrapper(); break;
        case 1: o = new PlastiQQDoubleSpinBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQDoubleSpinBox *p = new PlastiQQDoubleSpinBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDoubleSpinBox *p = new PlastiQQDoubleSpinBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            PlastiQQAbstractSpinBox::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDoubleSpinBox *o = sc ? Q_NULLPTR : reinterpret_cast<QDoubleSpinBox*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->cleanText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { int _r = o->decimals();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { double _r = o->maximum();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->minimum();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { QString _r = o->prefix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: o->setDecimals(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setMaximum(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setMinimum(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setPrefix(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setRange(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setSingleStep(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setSuffix(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 12: { double _r = o->singleStep();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { QString _r = o->suffix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { QString _r;
                if (isWrapper) _r = ((PlastiQQDoubleSpinBoxWrapper*)o)->PlastiQParentCall_textFromValue(stack[1].s_double);
                else _r = o->textFromValue(stack[1].s_double);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 15: { double _r = o->value();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { double _r;
                if (isWrapper) _r = ((PlastiQQDoubleSpinBoxWrapper*)o)->PlastiQParentCall_valueFromText(stack[1].s_string);
                else _r = o->valueFromText(stack[1].s_string);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 17: o->setValue(stack[1].s_double);
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

        QDoubleSpinBox *o = reinterpret_cast<QDoubleSpinBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
            [=](double arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "double";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QDoubleSpinBox::*)(const QString&)>(&QDoubleSpinBox::valueChanged),
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
        QDoubleSpinBox *o = reinterpret_cast<QDoubleSpinBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDoubleSpinBox *o = reinterpret_cast<QDoubleSpinBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDoubleSpinBox *o = reinterpret_cast<QDoubleSpinBox*>(object->plastiq_data());

        if(className == "QAbstractSpinBox") {
            stack[0].s_voidp = static_cast<QAbstractSpinBox*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDoubleSpinBox::~PlastiQQDoubleSpinBox() {
    QDoubleSpinBox* o = reinterpret_cast<QDoubleSpinBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
