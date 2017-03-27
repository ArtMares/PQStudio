#include "plastiqmethod.h"
#include "plastiqqabstractspinbox.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QAbstractSpinBox> 
#include <QString>
#include <QLineEdit>
#include <QEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QTimerEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSpinBox::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSpinBox::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttonSymbols()", { "buttonSymbols", "", "ButtonSymbols", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "correctionMode()", { "correctionMode", "", "CorrectionMode", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fixup(QString&)", { "fixup", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasAcceptableInput()", { "hasAcceptableInput", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFrame()", { "hasFrame", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "interpretText()", { "interpretText", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAccelerated()", { "isAccelerated", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isGroupSeparatorShown()", { "isGroupSeparatorShown", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadOnly()", { "isReadOnly", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyboardTracking()", { "keyboardTracking", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccelerated(bool)", { "setAccelerated", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setButtonSymbols(enum)", { "setButtonSymbols", "ButtonSymbols", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCorrectionMode(enum)", { "setCorrectionMode", "CorrectionMode", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrame(bool)", { "setFrame", "bool", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGroupSeparatorShown(bool)", { "setGroupSeparatorShown", "bool", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKeyboardTracking(bool)", { "setKeyboardTracking", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadOnly(bool)", { "setReadOnly", "bool", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpecialValueText(QString)", { "setSpecialValueText", "QString&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWrapping(bool)", { "setWrapping", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "specialValueText()", { "specialValueText", "", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stepBy(int)", { "stepBy", "int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "validate(QString&,int&)", { "validate", "QString&,int&", "QValidator::State", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wrapping()", { "wrapping", "", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionSpinBox*)", { "initStyleOption", "QStyleOptionSpinBox*", "void", 26, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "lineEdit()", { "lineEdit", "", "QLineEdit*", 27, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setLineEdit(QLineEdit*)", { "setLineEdit", "QLineEdit*", "void", 28, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "stepEnabled()", { "stepEnabled", "", "StepEnabled", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "closeEvent(QCloseEvent*)", { "closeEvent", "QCloseEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 36, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 37, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 38, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 39, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 40, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 41, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 42, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 43, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 44, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 45, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 46, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "selectAll()", { "selectAll", "", "void", 47, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stepDown()", { "stepDown", "", "void", 48, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stepUp()", { "stepUp", "", "void", 49, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSpinBox::plastiqSignals = {
    { "editingFinished()", { "editingFinished", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractSpinBox::plastiqProperties = {
    { "accelerated", { "accelerated", "bool", "setAccelerated", "isAccelerated" } },
    { "acceptableInput", { "acceptableInput", "bool", "", "hasAcceptableInput" } },
    { "alignment", { "alignment", "long", "setAlignment", "alignment" } },
    { "buttonSymbols", { "buttonSymbols", "long", "setButtonSymbols", "buttonSymbols" } },
    { "correctionMode", { "correctionMode", "long", "setCorrectionMode", "correctionMode" } },
    { "frame", { "frame", "bool", "setFrame", "hasFrame" } },
    { "keyboardTracking", { "keyboardTracking", "bool", "setKeyboardTracking", "keyboardTracking" } },
    { "readOnly", { "readOnly", "bool", "setReadOnly", "isReadOnly" } },
    { "showGroupSeparator", { "showGroupSeparator", "bool", "setGroupSeparatorShown", "isGroupSeparatorShown" } },
    { "specialValueText", { "specialValueText", "QString", "setSpecialValueText", "specialValueText" } },
    { "text", { "text", "QString", "", "text" } },
    { "wrapping", { "wrapping", "bool", "setWrapping", "wrapping" } },

};

QHash<QByteArray, long> PlastiQQAbstractSpinBox::plastiqConstants = {

    /* QAbstractSpinBox::ButtonSymbols */
   { "UpDownArrows", QAbstractSpinBox::UpDownArrows },
   { "PlusMinus", QAbstractSpinBox::PlusMinus },
   { "NoButtons", QAbstractSpinBox::NoButtons },

    /* QAbstractSpinBox::CorrectionMode */
   { "CorrectToPreviousValue", QAbstractSpinBox::CorrectToPreviousValue },
   { "CorrectToNearestValue", QAbstractSpinBox::CorrectToNearestValue },

    /* QAbstractSpinBox::StepEnabledFlag */
   { "StepNone", QAbstractSpinBox::StepNone },
   { "StepUpEnabled", QAbstractSpinBox::StepUpEnabled },
   { "StepDownEnabled", QAbstractSpinBox::StepDownEnabled },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractSpinBox::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractSpinBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQAbstractSpinBox::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QAbstractSpinBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractSpinBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractSpinBoxWrapper : public QAbstractSpinBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QAbstractSpinBox::fixup(input);
    }

    void PlastiQParentCall_fixup(QString &input) const {
        return QAbstractSpinBox::fixup(input);
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
        else return QAbstractSpinBox::stepBy(steps);
    }

    void PlastiQParentCall_stepBy(int steps) {
        return QAbstractSpinBox::stepBy(steps);
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
        else return QAbstractSpinBox::validate(input,pos);
    }

    QValidator::State PlastiQParentCall_validate(QString &input, int &pos) const {
        return QAbstractSpinBox::validate(input,pos);
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
        else return QAbstractSpinBox::stepEnabled();
    }

    StepEnabled PlastiQParentCall_stepEnabled() const {
        return QAbstractSpinBox::stepEnabled();
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
        else return QAbstractSpinBox::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QAbstractSpinBox::changeEvent(event);
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
        else return QAbstractSpinBox::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QAbstractSpinBox::closeEvent(event);
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
        else return QAbstractSpinBox::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QAbstractSpinBox::contextMenuEvent(event);
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
        else return QAbstractSpinBox::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QAbstractSpinBox::focusInEvent(event);
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
        else return QAbstractSpinBox::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QAbstractSpinBox::focusOutEvent(event);
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
        else return QAbstractSpinBox::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QAbstractSpinBox::hideEvent(event);
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
        else return QAbstractSpinBox::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QAbstractSpinBox::keyPressEvent(event);
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
        else return QAbstractSpinBox::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QAbstractSpinBox::keyReleaseEvent(event);
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
        else return QAbstractSpinBox::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QAbstractSpinBox::mouseMoveEvent(event);
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
        else return QAbstractSpinBox::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QAbstractSpinBox::mousePressEvent(event);
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
        else return QAbstractSpinBox::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QAbstractSpinBox::mouseReleaseEvent(event);
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
        else return QAbstractSpinBox::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QAbstractSpinBox::paintEvent(event);
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
        else return QAbstractSpinBox::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QAbstractSpinBox::resizeEvent(event);
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
        else return QAbstractSpinBox::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QAbstractSpinBox::showEvent(event);
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
        else return QAbstractSpinBox::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QAbstractSpinBox::timerEvent(event);
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
        else return QAbstractSpinBox::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QAbstractSpinBox::wheelEvent(event);
    }

};

void PlastiQQAbstractSpinBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractSpinBoxWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractSpinBox *p = new PlastiQQAbstractSpinBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractSpinBox *p = new PlastiQQAbstractSpinBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 50) {
            id -= 50;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractSpinBox *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractSpinBox*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->buttonSymbols(); // HACK for ButtonSymbols 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->correctionMode(); // HACK for CorrectionMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_fixup((*reinterpret_cast< QString(*) >(stack[1].s_voidp)));
                else o->fixup((*reinterpret_cast< QString(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->hasAcceptableInput();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->hasFrame();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->interpretText();
                stack[0].type = PlastiQ::Void; break;
        case 7: { bool _r = o->isAccelerated();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isGroupSeparatorShown();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isReadOnly();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->keyboardTracking();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: o->setAccelerated(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setButtonSymbols(QAbstractSpinBox::ButtonSymbols(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setCorrectionMode(QAbstractSpinBox::CorrectionMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setFrame(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setGroupSeparatorShown(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setKeyboardTracking(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setReadOnly(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setSpecialValueText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setWrapping(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 21: { QString _r = o->specialValueText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_stepBy(stack[1].s_int);
                else o->stepBy(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 24: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_validate((*reinterpret_cast< QString(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< int(*) >(stack[2].s_voidp)));
                else _r = o->validate((*reinterpret_cast< QString(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< int(*) >(stack[2].s_voidp))); // HACK for QValidator::State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 25: { bool _r = o->wrapping();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 27: { QLineEdit* _r; stack[0].type = PlastiQ::Error; } break;
        case 28: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 29: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_stepEnabled();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 30: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_closeEvent(reinterpret_cast<QCloseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 34: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_hideEvent(reinterpret_cast<QHideEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 36: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 37: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 38: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 39: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 40: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 41: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 42: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 43: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 44: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 45: if (isWrapper) ((PlastiQQAbstractSpinBoxWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 46: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 47: o->selectAll();
                stack[0].type = PlastiQ::Void; break;
        case 48: o->stepDown();
                stack[0].type = PlastiQ::Void; break;
        case 49: o->stepUp();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractSpinBox *o = reinterpret_cast<QAbstractSpinBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractSpinBox::editingFinished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "editingFinished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractSpinBox *o = reinterpret_cast<QAbstractSpinBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractSpinBox *o = reinterpret_cast<QAbstractSpinBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractSpinBox *o = reinterpret_cast<QAbstractSpinBox*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractSpinBox::~PlastiQQAbstractSpinBox() {
    QAbstractSpinBox* o = reinterpret_cast<QAbstractSpinBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
