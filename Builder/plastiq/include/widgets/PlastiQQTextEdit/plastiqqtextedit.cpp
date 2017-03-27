#include "plastiqmethod.h"
#include "plastiqqtextedit.h"

#include "widgets/PlastiQQAbstractScrollArea/plastiqqabstractscrollarea.h"
#include <QTextEdit> 
#include <QString>
#include <QMenu>
#include <QTextCharFormat>
#include <QFont>
#include <QTextCursor>
#include <QRect>
#include <QTextDocument>
#include <QVariant>
#include <QUrl>
#include <QColor>
#include <QMimeData>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQTextEdit::plastiqConstructors = {
    { "QTextEdit()", { "QTextEdit", "", "QTextEdit*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextEdit(QWidget*)", { "QTextEdit", "QWidget*", "QTextEdit*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextEdit(QString)", { "QTextEdit", "QString&", "QTextEdit*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextEdit(QString,QWidget*)", { "QTextEdit", "QString&,QWidget*", "QTextEdit*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextEdit::plastiqMethods = {
    { "acceptRichText()", { "acceptRichText", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alignment()", { "alignment", "", "Qt::Alignment", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "anchorAt(QPoint&)", { "anchorAt", "QPoint&", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoFormatting()", { "autoFormatting", "", "AutoFormatting", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canPaste()", { "canPaste", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createStandardContextMenu()", { "createStandardContextMenu", "", "QMenu*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createStandardContextMenu(QPoint&)", { "createStandardContextMenu", "QPoint&", "QMenu*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentCharFormat()", { "currentCharFormat", "", "QTextCharFormat", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentFont()", { "currentFont", "", "QFont", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorForPosition(QPoint&)", { "cursorForPosition", "QPoint&", "QTextCursor", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorRect(QTextCursor&)", { "cursorRect", "QTextCursor&", "QRect", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorRect()", { "cursorRect", "", "QRect", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorWidth()", { "cursorWidth", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "document()", { "document", "", "QTextDocument*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentTitle()", { "documentTitle", "", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureCursorVisible()", { "ensureCursorVisible", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString)", { "find", "QString&", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString,enum)", { "find", "QString&,QTextDocument::FindFlags", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&)", { "find", "QRegExp&", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&,enum)", { "find", "QRegExp&,QTextDocument::FindFlags", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontFamily()", { "fontFamily", "", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontItalic()", { "fontItalic", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontPointSize()", { "fontPointSize", "", "qreal", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontUnderline()", { "fontUnderline", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontWeight()", { "fontWeight", "", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadOnly()", { "isReadOnly", "", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUndoRedoEnabled()", { "isUndoRedoEnabled", "", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineWrapColumnOrWidth()", { "lineWrapColumnOrWidth", "", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineWrapMode()", { "lineWrapMode", "", "LineWrapMode", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadResource(int,QUrl&)", { "loadResource", "int,QUrl&", "QVariant", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mergeCurrentCharFormat(QTextCharFormat&)", { "mergeCurrentCharFormat", "QTextCharFormat&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveCursor(enum)", { "moveCursor", "QTextCursor::MoveOperation", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveCursor(enum,enum)", { "moveCursor", "QTextCursor::MoveOperation,QTextCursor::MoveMode", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overwriteMode()", { "overwriteMode", "", "bool", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "placeholderText()", { "placeholderText", "", "QString", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "print(QPagedPaintDevice*)", { "print", "QPagedPaintDevice*", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAcceptRichText(bool)", { "setAcceptRichText", "bool", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoFormatting(enum)", { "setAutoFormatting", "AutoFormatting", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentCharFormat(QTextCharFormat&)", { "setCurrentCharFormat", "QTextCharFormat&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursorWidth(int)", { "setCursorWidth", "int", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocument(QTextDocument*)", { "setDocument", "QTextDocument*", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocumentTitle(QString)", { "setDocumentTitle", "QString&", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineWrapColumnOrWidth(int)", { "setLineWrapColumnOrWidth", "int", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineWrapMode(enum)", { "setLineWrapMode", "LineWrapMode", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOverwriteMode(bool)", { "setOverwriteMode", "bool", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlaceholderText(QString)", { "setPlaceholderText", "QString&", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadOnly(bool)", { "setReadOnly", "bool", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabChangesFocus(bool)", { "setTabChangesFocus", "bool", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabStopWidth(int)", { "setTabStopWidth", "int", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextCursor(QTextCursor&)", { "setTextCursor", "QTextCursor&", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextInteractionFlags(enum)", { "setTextInteractionFlags", "Qt::TextInteractionFlags", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUndoRedoEnabled(bool)", { "setUndoRedoEnabled", "bool", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWordWrapMode(enum)", { "setWordWrapMode", "QTextOption::WrapMode", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabChangesFocus()", { "tabChangesFocus", "", "bool", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabStopWidth()", { "tabStopWidth", "", "int", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textBackgroundColor()", { "textBackgroundColor", "", "QColor", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textColor()", { "textColor", "", "QColor", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textCursor()", { "textCursor", "", "QTextCursor", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textInteractionFlags()", { "textInteractionFlags", "", "Qt::TextInteractionFlags", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHtml()", { "toHtml", "", "QString", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPlainText()", { "toPlainText", "", "QString", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wordWrapMode()", { "wordWrapMode", "", "QTextOption::WrapMode", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canInsertFromMimeData(const QMimeData*)", { "canInsertFromMimeData", "QMimeData*", "bool", 62, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "createMimeDataFromSelection()", { "createMimeDataFromSelection", "", "QMimeData*", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "insertFromMimeData(const QMimeData*)", { "insertFromMimeData", "QMimeData*", "void", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 66, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QDragEnterEvent*)", { "dragEnterEvent", "QDragEnterEvent*", "void", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QDragLeaveEvent*)", { "dragLeaveEvent", "QDragLeaveEvent*", "void", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 71, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 72, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 73, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 74, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 75, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 76, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 77, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 78, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 79, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 80, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 81, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 82, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "scrollContentsBy(int,int)", { "scrollContentsBy", "int,int", "void", 83, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 84, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 85, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "append(QString)", { "append", "QString&", "void", 86, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "clear()", { "clear", "", "void", 87, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "copy()", { "copy", "", "void", 88, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "cut()", { "cut", "", "void", 89, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "insertHtml(QString)", { "insertHtml", "QString&", "void", 90, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "insertPlainText(QString)", { "insertPlainText", "QString&", "void", 91, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "paste()", { "paste", "", "void", 92, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "redo()", { "redo", "", "void", 93, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToAnchor(QString)", { "scrollToAnchor", "QString&", "void", 94, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "selectAll()", { "selectAll", "", "void", 95, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 96, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentFont(QFont&)", { "setCurrentFont", "QFont&", "void", 97, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFontFamily(QString)", { "setFontFamily", "QString&", "void", 98, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFontItalic(bool)", { "setFontItalic", "bool", "void", 99, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFontPointSize(double)", { "setFontPointSize", "qreal", "void", 100, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFontUnderline(bool)", { "setFontUnderline", "bool", "void", 101, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFontWeight(int)", { "setFontWeight", "int", "void", 102, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setHtml(QString)", { "setHtml", "QString&", "void", 103, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPlainText(QString)", { "setPlainText", "QString&", "void", 104, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setText(QString)", { "setText", "QString&", "void", 105, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setTextBackgroundColor(QColor&)", { "setTextBackgroundColor", "QColor&", "void", 106, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setTextColor(QColor&)", { "setTextColor", "QColor&", "void", 107, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "undo()", { "undo", "", "void", 108, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "zoomIn()", { "zoomIn", "", "void", 109, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "zoomIn(int)", { "zoomIn", "int", "void", 110, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "zoomOut()", { "zoomOut", "", "void", 111, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "zoomOut(int)", { "zoomOut", "int", "void", 112, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextEdit::plastiqSignals = {
    { "copyAvailable(bool)", { "copyAvailable", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentCharFormatChanged(QTextCharFormat&)", { "currentCharFormatChanged", "QTextCharFormat&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cursorPositionChanged()", { "cursorPositionChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "redoAvailable(bool)", { "redoAvailable", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectionChanged()", { "selectionChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "textChanged()", { "textChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "undoAvailable(bool)", { "undoAvailable", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextEdit::plastiqProperties = {
    { "acceptRichText", { "acceptRichText", "bool", "setAcceptRichText", "acceptRichText" } },
    { "autoFormatting", { "autoFormatting", "long", "setAutoFormatting", "autoFormatting" } },
    { "cursorWidth", { "cursorWidth", "int", "setCursorWidth", "cursorWidth" } },
    { "document", { "document", "QTextDocument*", "setDocument", "document" } },
    { "documentTitle", { "documentTitle", "QString", "setDocumentTitle", "documentTitle" } },
    { "html", { "html", "QString", "setHtml", "toHtml" } },
    { "lineWrapColumnOrWidth", { "lineWrapColumnOrWidth", "int", "setLineWrapColumnOrWidth", "lineWrapColumnOrWidth" } },
    { "lineWrapMode", { "lineWrapMode", "long", "setLineWrapMode", "lineWrapMode" } },
    { "overwriteMode", { "overwriteMode", "bool", "setOverwriteMode", "overwriteMode" } },
    { "placeholderText", { "placeholderText", "QString", "setPlaceholderText", "placeholderText" } },
    { "plainText", { "plainText", "QString", "setPlainText", "toPlainText" } },
    { "readOnly", { "readOnly", "bool", "setReadOnly", "isReadOnly" } },
    { "tabChangesFocus", { "tabChangesFocus", "bool", "setTabChangesFocus", "tabChangesFocus" } },
    { "tabStopWidth", { "tabStopWidth", "int", "setTabStopWidth", "tabStopWidth" } },
    { "textInteractionFlags", { "textInteractionFlags", "long", "setTextInteractionFlags", "textInteractionFlags" } },
    { "undoRedoEnabled", { "undoRedoEnabled", "bool", "setUndoRedoEnabled", "isUndoRedoEnabled" } },
    { "wordWrapMode", { "wordWrapMode", "long", "setWordWrapMode", "wordWrapMode" } },

};

QHash<QByteArray, long> PlastiQQTextEdit::plastiqConstants = {

    /* QTextEdit::AutoFormattingFlag */
   { "AutoNone", QTextEdit::AutoNone },
   { "AutoBulletList", QTextEdit::AutoBulletList },
   { "AutoAll", QTextEdit::AutoAll },

    /* QTextEdit::LineWrapMode */
   { "NoWrap", QTextEdit::NoWrap },
   { "WidgetWidth", QTextEdit::WidgetWidth },
   { "FixedPixelWidth", QTextEdit::FixedPixelWidth },
   { "FixedColumnWidth", QTextEdit::FixedColumnWidth },

};

QVector<PlastiQMetaObject*> PlastiQQTextEdit::plastiqInherits = { &PlastiQQAbstractScrollArea::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextEdit::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQTextEdit::plastiq_static_metaObject = {
    { &PlastiQQAbstractScrollArea::plastiq_static_metaObject, &plastiqInherits, "QTextEdit", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextEdit::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTextEditWrapper : public QTextEdit {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTextEditWrapper(QWidget *parent = Q_NULLPTR)
         : QTextEdit(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTextEditWrapper(const QString &text, QWidget *parent = Q_NULLPTR)
         : QTextEdit(text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QVariant loadResource(int type, const QUrl &name) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant loadResource(int,const QUrl&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = type;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_voidp = new QUrl(name) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QUrl");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QTextEdit::loadResource(type,name);
    }

    QVariant PlastiQParentCall_loadResource(int type, const QUrl &name) {
        return QTextEdit::loadResource(type,name);
    }

    bool canInsertFromMimeData(const QMimeData *source) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool canInsertFromMimeData(const QMimeData*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QMimeData*>(source));
            stack[1].name = QByteArrayLiteral("QMimeData");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTextEdit::canInsertFromMimeData(source);
    }

    bool PlastiQParentCall_canInsertFromMimeData(const QMimeData *source) const {
        return QTextEdit::canInsertFromMimeData(source);
    }

    QMimeData* createMimeDataFromSelection() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QMimeData* createMimeDataFromSelection()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMimeData* _r = reinterpret_cast<QMimeData*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QTextEdit::createMimeDataFromSelection();
    }

    QMimeData* PlastiQParentCall_createMimeDataFromSelection() const {
        return QTextEdit::createMimeDataFromSelection();
    }

    void insertFromMimeData(const QMimeData *source) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void insertFromMimeData(const QMimeData*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QMimeData*>(source));
            stack[1].name = QByteArrayLiteral("QMimeData");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextEdit::insertFromMimeData(source);
    }

    void PlastiQParentCall_insertFromMimeData(const QMimeData *source) {
        return QTextEdit::insertFromMimeData(source);
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
        else return QTextEdit::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QTextEdit::changeEvent(e);
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
        else return QTextEdit::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QTextEdit::contextMenuEvent(event);
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
        else return QTextEdit::dragEnterEvent(e);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *e) {
        return QTextEdit::dragEnterEvent(e);
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
        else return QTextEdit::dragLeaveEvent(e);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *e) {
        return QTextEdit::dragLeaveEvent(e);
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
        else return QTextEdit::dragMoveEvent(e);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *e) {
        return QTextEdit::dragMoveEvent(e);
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
        else return QTextEdit::dropEvent(e);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *e) {
        return QTextEdit::dropEvent(e);
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
        else return QTextEdit::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QTextEdit::focusInEvent(e);
    }

    bool focusNextPrevChild(bool next) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool focusNextPrevChild(bool)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_bool = next;
            stack[1].name = QByteArrayLiteral("bool");
            stack[1].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTextEdit::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QTextEdit::focusNextPrevChild(next);
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
        else return QTextEdit::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QTextEdit::focusOutEvent(e);
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
        else return QTextEdit::inputMethodEvent(e);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *e) {
        return QTextEdit::inputMethodEvent(e);
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
        else return QTextEdit::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QTextEdit::keyPressEvent(e);
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
        else return QTextEdit::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QTextEdit::keyReleaseEvent(e);
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
        else return QTextEdit::mouseDoubleClickEvent(e);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *e) {
        return QTextEdit::mouseDoubleClickEvent(e);
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
        else return QTextEdit::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QTextEdit::mouseMoveEvent(e);
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
        else return QTextEdit::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QTextEdit::mousePressEvent(e);
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
        else return QTextEdit::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QTextEdit::mouseReleaseEvent(e);
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
        else return QTextEdit::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QTextEdit::paintEvent(event);
    }

    void resizeEvent(QResizeEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextEdit::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QTextEdit::resizeEvent(e);
    }

    void scrollContentsBy(int dx, int dy) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void scrollContentsBy(int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = dx;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = dy;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextEdit::scrollContentsBy(dx,dy);
    }

    void PlastiQParentCall_scrollContentsBy(int dx, int dy) {
        return QTextEdit::scrollContentsBy(dx,dy);
    }

    void wheelEvent(QWheelEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextEdit::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QTextEdit::wheelEvent(e);
    }

    void setupViewport(QWidget *viewport) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setupViewport(QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(viewport);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextEdit::setupViewport(viewport);
    }

    void PlastiQParentCall_setupViewport(QWidget *viewport) {
        return QTextEdit::setupViewport(viewport);
    }

    bool viewportEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool viewportEvent(QEvent*)");
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
        else return QTextEdit::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QTextEdit::viewportEvent(event);
    }

    QSize viewportSizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize viewportSizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QTextEdit::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QTextEdit::viewportSizeHint();
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
        else return QTextEdit::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QTextEdit::event(event);
    }

};

void PlastiQQTextEdit::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTextEditWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTextEditWrapper(); break;
        case 1: o = new PlastiQQTextEditWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQTextEditWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQTextEditWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTextEdit *p = new PlastiQQTextEdit();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextEdit *p = new PlastiQQTextEdit();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 113) {
            id -= 113;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextEdit *o = sc ? Q_NULLPTR : reinterpret_cast<QTextEdit*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->acceptRichText();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QString _r = o->anchorAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { qint64 _r = o->autoFormatting(); // HACK for AutoFormatting 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { bool _r = o->canPaste();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { QMenu* _r = o->createStandardContextMenu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 6: { QMenu* _r = o->createStandardContextMenu((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 7: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->currentCharFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QFont *_r = new QFont(o->currentFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->cursorForPosition((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QRect *_r = new QRect(o->cursorRect((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QRect *_r = new QRect(o->cursorRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { int _r = o->cursorWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { QTextDocument* _r = o->document();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 14: { QString _r = o->documentTitle();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 15: o->ensureCursorVisible();
                stack[0].type = PlastiQ::Void; break;
        case 16: { bool _r = o->find(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->find(stack[1].s_string,
                    QTextDocument::FindFlags(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    QTextDocument::FindFlags(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { QString _r = o->fontFamily();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: { bool _r = o->fontItalic();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { double _r = o->fontPointSize();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 23: { bool _r = o->fontUnderline();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { int _r = o->fontWeight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { bool _r = o->isReadOnly();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { bool _r = o->isUndoRedoEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: { int _r = o->lineWrapColumnOrWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: { qint64 _r = o->lineWrapMode(); // HACK for LineWrapMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 29: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_loadResource(stack[1].s_int,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp))));
                else _r = new QVariant(o->loadResource(stack[1].s_int,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: o->mergeCurrentCharFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->moveCursor(QTextCursor::MoveOperation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->moveCursor(QTextCursor::MoveOperation(stack[1].s_int64),
                    QTextCursor::MoveMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 33: { bool _r = o->overwriteMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 34: { QString _r = o->placeholderText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 35: o->print(reinterpret_cast<QPagedPaintDevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setAcceptRichText(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setAutoFormatting(QTextEdit::AutoFormatting(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setCurrentCharFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setCursorWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setDocument(reinterpret_cast<QTextDocument*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setDocumentTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setLineWrapColumnOrWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setLineWrapMode(QTextEdit::LineWrapMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setOverwriteMode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setPlaceholderText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setReadOnly(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setTabChangesFocus(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setTabStopWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setTextCursor((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setTextInteractionFlags(Qt::TextInteractionFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setUndoRedoEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 52: o->setWordWrapMode(QTextOption::WrapMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 53: { bool _r = o->tabChangesFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 54: { int _r = o->tabStopWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 55: { /* COPY OBJECT */
            QColor *_r = new QColor(o->textBackgroundColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: { /* COPY OBJECT */
            QColor *_r = new QColor(o->textColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 57: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->textCursor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: { qint64 _r = o->textInteractionFlags(); // HACK for Qt::TextInteractionFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 59: { QString _r = o->toHtml();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 60: { QString _r = o->toPlainText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 61: { qint64 _r = o->wordWrapMode(); // HACK for QTextOption::WrapMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 62: { bool _r;
                if (isWrapper) _r = ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_canInsertFromMimeData(reinterpret_cast<const QMimeData*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 63: { QMimeData* _r;
                if (isWrapper) _r = ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_createMimeDataFromSelection();
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMimeData"; } break;
        case 64: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_insertFromMimeData(reinterpret_cast<const QMimeData*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 65: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 66: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 67: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QDragEnterEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 68: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QDragLeaveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 69: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 70: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 71: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 72: { bool _r;
                if (isWrapper) _r = ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 73: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 74: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 75: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 76: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 77: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 78: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 79: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 80: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 81: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 82: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 83: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_scrollContentsBy(stack[1].s_int,
                    stack[2].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 84: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 85: if (isWrapper) ((PlastiQQTextEditWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 86: o->append(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 87: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 88: o->copy();
                stack[0].type = PlastiQ::Void; break;
        case 89: o->cut();
                stack[0].type = PlastiQ::Void; break;
        case 90: o->insertHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 91: o->insertPlainText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 92: o->paste();
                stack[0].type = PlastiQ::Void; break;
        case 93: o->redo();
                stack[0].type = PlastiQ::Void; break;
        case 94: o->scrollToAnchor(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 95: o->selectAll();
                stack[0].type = PlastiQ::Void; break;
        case 96: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 97: o->setCurrentFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 98: o->setFontFamily(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 99: o->setFontItalic(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 100: o->setFontPointSize(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 101: o->setFontUnderline(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 102: o->setFontWeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 103: o->setHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 104: o->setPlainText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 105: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 106: o->setTextBackgroundColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 107: o->setTextColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 108: o->undo();
                stack[0].type = PlastiQ::Void; break;
        case 109: o->zoomIn();
                stack[0].type = PlastiQ::Void; break;
        case 110: o->zoomIn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 111: o->zoomOut();
                stack[0].type = PlastiQ::Void; break;
        case 112: o->zoomOut(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTextEdit *o = reinterpret_cast<QTextEdit*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTextEdit::copyAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "copyAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTextEdit::currentCharFormatChanged,
            [=](const QTextCharFormat& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QTextCharFormat(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QTextCharFormat";
                PlastiQ_activate(sender, "currentCharFormatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QTextEdit::cursorPositionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "cursorPositionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QTextEdit::redoAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "redoAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QTextEdit::selectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "selectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QTextEdit::textChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "textChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QTextEdit::undoAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "undoAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTextEdit *o = reinterpret_cast<QTextEdit*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTextEdit *o = reinterpret_cast<QTextEdit*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTextEdit *o = reinterpret_cast<QTextEdit*>(object->plastiq_data());

        if(className == "QAbstractScrollArea") {
            stack[0].s_voidp = static_cast<QAbstractScrollArea*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextEdit::~PlastiQQTextEdit() {
    QTextEdit* o = reinterpret_cast<QTextEdit*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
