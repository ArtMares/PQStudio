#include "plastiqmethod.h"
#include "plastiqqlineedit.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QLineEdit> 
#include <QAction>
#include <QCompleter>
#include <QMenu>
#include <QString>
#include <QMargins>
#include <QValidator>
#include <QRect>
#include <QEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QFocusEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQLineEdit::plastiqConstructors = {
    { "QLineEdit()", { "QLineEdit", "", "QLineEdit*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLineEdit(QWidget*)", { "QLineEdit", "QWidget*", "QLineEdit*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLineEdit(QString)", { "QLineEdit", "QString&", "QLineEdit*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLineEdit(QString,QWidget*)", { "QLineEdit", "QString&,QWidget*", "QLineEdit*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLineEdit::plastiqMethods = {
    { "addAction(QAction*,enum)", { "addAction", "QAction*,ActionPosition", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,enum)", { "addAction", "QIcon&,ActionPosition", "QAction*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alignment()", { "alignment", "", "Qt::Alignment", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backspace()", { "backspace", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completer()", { "completer", "", "QCompleter*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createStandardContextMenu()", { "createStandardContextMenu", "", "QMenu*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorBackward(bool)", { "cursorBackward", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorBackward(bool,int)", { "cursorBackward", "bool,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorForward(bool)", { "cursorForward", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorForward(bool,int)", { "cursorForward", "bool,int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorMoveStyle()", { "cursorMoveStyle", "", "Qt::CursorMoveStyle", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorPosition()", { "cursorPosition", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorPositionAt(QPoint&)", { "cursorPositionAt", "QPoint&", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorWordBackward(bool)", { "cursorWordBackward", "bool", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorWordForward(bool)", { "cursorWordForward", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "del()", { "del", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deselect()", { "deselect", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayText()", { "displayText", "", "QString", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dragEnabled()", { "dragEnabled", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "echoMode()", { "echoMode", "", "EchoMode", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end(bool)", { "end", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getTextMargins(int*,int*,int*,int*)", { "getTextMargins", "int*,int*,int*,int*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasAcceptableInput()", { "hasAcceptableInput", "", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFrame()", { "hasFrame", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasSelectedText()", { "hasSelectedText", "", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "home(bool)", { "home", "bool", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputMask()", { "inputMask", "", "QString", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(QString)", { "insert", "QString&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isClearButtonEnabled()", { "isClearButtonEnabled", "", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isModified()", { "isModified", "", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadOnly()", { "isReadOnly", "", "bool", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRedoAvailable()", { "isRedoAvailable", "", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUndoAvailable()", { "isUndoAvailable", "", "bool", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxLength()", { "maxLength", "", "int", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "placeholderText()", { "placeholderText", "", "QString", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedText()", { "selectedText", "", "QString", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionStart()", { "selectionStart", "", "int", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClearButtonEnabled(bool)", { "setClearButtonEnabled", "bool", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCompleter(QCompleter*)", { "setCompleter", "QCompleter*", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursorMoveStyle(enum)", { "setCursorMoveStyle", "Qt::CursorMoveStyle", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursorPosition(int)", { "setCursorPosition", "int", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDragEnabled(bool)", { "setDragEnabled", "bool", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEchoMode(enum)", { "setEchoMode", "EchoMode", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrame(bool)", { "setFrame", "bool", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInputMask(QString)", { "setInputMask", "QString&", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaxLength(int)", { "setMaxLength", "int", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModified(bool)", { "setModified", "bool", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlaceholderText(QString)", { "setPlaceholderText", "QString&", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadOnly(bool)", { "setReadOnly", "bool", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelection(int,int)", { "setSelection", "int,int", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextMargins(int,int,int,int)", { "setTextMargins", "int,int,int,int", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextMargins(QMargins&)", { "setTextMargins", "QMargins&", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValidator(const QValidator*)", { "setValidator", "QValidator*", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textMargins()", { "textMargins", "", "QMargins", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "validator()", { "validator", "", "const QValidator*", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorRect()", { "cursorRect", "", "QRect", 57, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionFrame*)", { "initStyleOption", "QStyleOptionFrame*", "void", 58, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 59, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 60, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QDragEnterEvent*)", { "dragEnterEvent", "QDragEnterEvent*", "void", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QDragLeaveEvent*)", { "dragLeaveEvent", "QDragLeaveEvent*", "void", 62, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 66, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 71, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 72, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 73, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 74, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "copy()", { "copy", "", "void", 75, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "cut()", { "cut", "", "void", 76, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "paste()", { "paste", "", "void", 77, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "redo()", { "redo", "", "void", 78, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "selectAll()", { "selectAll", "", "void", 79, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setText(QString)", { "setText", "QString&", "void", 80, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "undo()", { "undo", "", "void", 81, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLineEdit::plastiqSignals = {
    { "cursorPositionChanged(int,int)", { "cursorPositionChanged", "int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "editingFinished()", { "editingFinished", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "returnPressed()", { "returnPressed", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectionChanged()", { "selectionChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "textChanged(QString)", { "textChanged", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "textEdited(QString)", { "textEdited", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQLineEdit::plastiqProperties = {
    { "acceptableInput", { "acceptableInput", "bool", "", "hasAcceptableInput" } },
    { "alignment", { "alignment", "long", "setAlignment", "alignment" } },
    { "clearButtonEnabled", { "clearButtonEnabled", "bool", "setClearButtonEnabled", "isClearButtonEnabled" } },
    { "cursorMoveStyle", { "cursorMoveStyle", "long", "setCursorMoveStyle", "cursorMoveStyle" } },
    { "cursorPosition", { "cursorPosition", "int", "setCursorPosition", "cursorPosition" } },
    { "displayText", { "displayText", "QString", "", "displayText" } },
    { "dragEnabled", { "dragEnabled", "bool", "setDragEnabled", "dragEnabled" } },
    { "echoMode", { "echoMode", "long", "setEchoMode", "echoMode" } },
    { "frame", { "frame", "bool", "setFrame", "hasFrame" } },
    { "hasSelectedText", { "hasSelectedText", "bool", "", "hasSelectedText" } },
    { "inputMask", { "inputMask", "QString", "setInputMask", "inputMask" } },
    { "maxLength", { "maxLength", "int", "setMaxLength", "maxLength" } },
    { "modified", { "modified", "bool", "setModified", "isModified" } },
    { "placeholderText", { "placeholderText", "QString", "setPlaceholderText", "placeholderText" } },
    { "readOnly", { "readOnly", "bool", "setReadOnly", "isReadOnly" } },
    { "redoAvailable", { "redoAvailable", "bool", "", "isRedoAvailable" } },
    { "selectedText", { "selectedText", "QString", "", "selectedText" } },
    { "text", { "text", "QString", "setText", "text" } },
    { "undoAvailable", { "undoAvailable", "bool", "", "isUndoAvailable" } },

};

QHash<QByteArray, long> PlastiQQLineEdit::plastiqConstants = {

    /* QLineEdit::ActionPosition */
   { "LeadingPosition", QLineEdit::LeadingPosition },
   { "TrailingPosition", QLineEdit::TrailingPosition },

    /* QLineEdit::EchoMode */
   { "Normal", QLineEdit::Normal },
   { "NoEcho", QLineEdit::NoEcho },
   { "Password", QLineEdit::Password },
   { "PasswordEchoOnEdit", QLineEdit::PasswordEchoOnEdit },

};

QVector<PlastiQMetaObject*> PlastiQQLineEdit::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLineEdit::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQLineEdit::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QLineEdit", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLineEdit::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQLineEditWrapper : public QLineEdit {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQLineEditWrapper(QWidget *parent = Q_NULLPTR)
         : QLineEdit(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQLineEditWrapper(const QString &contents, QWidget *parent = Q_NULLPTR)
         : QLineEdit(contents,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void changeEvent(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLineEdit::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QLineEdit::changeEvent(ev);
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
        else return QLineEdit::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QLineEdit::contextMenuEvent(event);
    }

    void dragEnterEvent(QDragEnterEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragEnterEvent(QDragEnterEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDragEnterEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLineEdit::dragEnterEvent(e);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *e) {
        return QLineEdit::dragEnterEvent(e);
    }

    void dragLeaveEvent(QDragLeaveEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragLeaveEvent(QDragLeaveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDragLeaveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLineEdit::dragLeaveEvent(e);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *e) {
        return QLineEdit::dragLeaveEvent(e);
    }

    void dragMoveEvent(QDragMoveEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragMoveEvent(QDragMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDragMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLineEdit::dragMoveEvent(e);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *e) {
        return QLineEdit::dragMoveEvent(e);
    }

    void dropEvent(QDropEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dropEvent(QDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLineEdit::dropEvent(e);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *e) {
        return QLineEdit::dropEvent(e);
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
        else return QLineEdit::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QLineEdit::focusInEvent(e);
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
        else return QLineEdit::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QLineEdit::focusOutEvent(e);
    }

    void inputMethodEvent(QInputMethodEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void inputMethodEvent(QInputMethodEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QInputMethodEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLineEdit::inputMethodEvent(e);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *e) {
        return QLineEdit::inputMethodEvent(e);
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
        else return QLineEdit::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QLineEdit::keyPressEvent(event);
    }

    void mouseDoubleClickEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLineEdit::mouseDoubleClickEvent(e);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *e) {
        return QLineEdit::mouseDoubleClickEvent(e);
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
        else return QLineEdit::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QLineEdit::mouseMoveEvent(e);
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
        else return QLineEdit::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QLineEdit::mousePressEvent(e);
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
        else return QLineEdit::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QLineEdit::mouseReleaseEvent(e);
    }

};

void PlastiQQLineEdit::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQLineEditWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQLineEditWrapper(); break;
        case 1: o = new PlastiQQLineEditWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQLineEditWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQLineEditWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQLineEdit *p = new PlastiQQLineEdit();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLineEdit *p = new PlastiQQLineEdit();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 82) {
            id -= 82;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLineEdit *o = sc ? Q_NULLPTR : reinterpret_cast<QLineEdit*>(object->plastiq_data());

        switch(id) {
        case 0: o->addAction(reinterpret_cast<QAction*>(stack[1].s_voidp),
                    QLineEdit::ActionPosition(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QAction* _r = o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    QLineEdit::ActionPosition(stack[2].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 2: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: o->backspace();
                stack[0].type = PlastiQ::Void; break;
        case 4: { QCompleter* _r = o->completer();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCompleter"; } break;
        case 5: { QMenu* _r = o->createStandardContextMenu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 6: o->cursorBackward(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->cursorBackward(stack[1].s_bool,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->cursorForward(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->cursorForward(stack[1].s_bool,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: { qint64 _r = o->cursorMoveStyle(); // HACK for Qt::CursorMoveStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { int _r = o->cursorPosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->cursorPositionAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: o->cursorWordBackward(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->cursorWordForward(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->del();
                stack[0].type = PlastiQ::Void; break;
        case 16: o->deselect();
                stack[0].type = PlastiQ::Void; break;
        case 17: { QString _r = o->displayText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 18: { bool _r = o->dragEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { qint64 _r = o->echoMode(); // HACK for EchoMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: o->end(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->getTextMargins(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: { bool _r = o->hasAcceptableInput();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->hasFrame();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r = o->hasSelectedText();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: o->home(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 26: { QString _r = o->inputMask();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 27: o->insert(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 28: { bool _r = o->isClearButtonEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: { bool _r = o->isModified();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: { bool _r = o->isReadOnly();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 31: { bool _r = o->isRedoAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { bool _r = o->isUndoAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: { int _r = o->maxLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 34: { QString _r = o->placeholderText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 35: { QString _r = o->selectedText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 36: { int _r = o->selectionStart();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 37: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setClearButtonEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setCompleter(reinterpret_cast<QCompleter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setCursorMoveStyle(Qt::CursorMoveStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setCursorPosition(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setDragEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setEchoMode(QLineEdit::EchoMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setFrame(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setInputMask(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setMaxLength(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setModified(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setPlaceholderText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setReadOnly(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setSelection(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setTextMargins(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 52: o->setTextMargins((*reinterpret_cast< QMargins(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 53: o->setValidator(reinterpret_cast<const QValidator*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 54: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 55: { /* COPY OBJECT */
            QMargins *_r = new QMargins(o->textMargins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMargins";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: { QValidator* _r = const_cast<QValidator*>(o->validator());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QValidator"; } break;
        case 57: { /* COPY OBJECT */
            QRect *_r; stack[0].type = PlastiQ::Error; } break;
        case 58: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 59: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 60: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 61: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QDragEnterEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 62: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QDragLeaveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 63: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 64: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 65: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 66: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 67: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 68: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 69: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 70: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 71: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 72: if (isWrapper) ((PlastiQQLineEditWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 73: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 74: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 75: o->copy();
                stack[0].type = PlastiQ::Void; break;
        case 76: o->cut();
                stack[0].type = PlastiQ::Void; break;
        case 77: o->paste();
                stack[0].type = PlastiQ::Void; break;
        case 78: o->redo();
                stack[0].type = PlastiQ::Void; break;
        case 79: o->selectAll();
                stack[0].type = PlastiQ::Void; break;
        case 80: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 81: o->undo();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLineEdit *o = reinterpret_cast<QLineEdit*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QLineEdit::cursorPositionChanged,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "cursorPositionChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QLineEdit::editingFinished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "editingFinished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QLineEdit::returnPressed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "returnPressed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QLineEdit::selectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "selectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QLineEdit::textChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "textChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QLineEdit::textEdited,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "textEdited", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLineEdit *o = reinterpret_cast<QLineEdit*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLineEdit *o = reinterpret_cast<QLineEdit*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLineEdit *o = reinterpret_cast<QLineEdit*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLineEdit::~PlastiQQLineEdit() {
    QLineEdit* o = reinterpret_cast<QLineEdit*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
