#include "plastiqmethod.h"
#include "plastiqqplaintextedit.h"

#include "widgets/PlastiQQAbstractScrollArea/plastiqqabstractscrollarea.h"
#include <QPlainTextEdit> 
#include <QString>
#include <QMenu>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QRect>
#include <QTextDocument>
#include <QVariant>
#include <QUrl>
#include <QRectF>
#include <QMimeData>
#include <QPointF>
#include <QTextBlock>
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

QHash<QByteArray, PlastiQMethod> PlastiQQPlainTextEdit::plastiqConstructors = {
    { "QPlainTextEdit()", { "QPlainTextEdit", "", "QPlainTextEdit*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPlainTextEdit(QWidget*)", { "QPlainTextEdit", "QWidget*", "QPlainTextEdit*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPlainTextEdit(QString)", { "QPlainTextEdit", "QString&", "QPlainTextEdit*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPlainTextEdit(QString,QWidget*)", { "QPlainTextEdit", "QString&,QWidget*", "QPlainTextEdit*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPlainTextEdit::plastiqMethods = {
    { "anchorAt(QPoint&)", { "anchorAt", "QPoint&", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundVisible()", { "backgroundVisible", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockCount()", { "blockCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canPaste()", { "canPaste", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "centerOnScroll()", { "centerOnScroll", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createStandardContextMenu()", { "createStandardContextMenu", "", "QMenu*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createStandardContextMenu(QPoint&)", { "createStandardContextMenu", "QPoint&", "QMenu*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentCharFormat()", { "currentCharFormat", "", "QTextCharFormat", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorForPosition(QPoint&)", { "cursorForPosition", "QPoint&", "QTextCursor", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorRect(QTextCursor&)", { "cursorRect", "QTextCursor&", "QRect", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorRect()", { "cursorRect", "", "QRect", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorWidth()", { "cursorWidth", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "document()", { "document", "", "QTextDocument*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentTitle()", { "documentTitle", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureCursorVisible()", { "ensureCursorVisible", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString)", { "find", "QString&", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString,enum)", { "find", "QString&,QTextDocument::FindFlags", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&)", { "find", "QRegExp&", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&,enum)", { "find", "QRegExp&,QTextDocument::FindFlags", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadOnly()", { "isReadOnly", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUndoRedoEnabled()", { "isUndoRedoEnabled", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineWrapMode()", { "lineWrapMode", "", "LineWrapMode", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadResource(int,QUrl&)", { "loadResource", "int,QUrl&", "QVariant", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumBlockCount()", { "maximumBlockCount", "", "int", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mergeCurrentCharFormat(QTextCharFormat&)", { "mergeCurrentCharFormat", "QTextCharFormat&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveCursor(enum)", { "moveCursor", "QTextCursor::MoveOperation", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveCursor(enum,enum)", { "moveCursor", "QTextCursor::MoveOperation,QTextCursor::MoveMode", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overwriteMode()", { "overwriteMode", "", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "placeholderText()", { "placeholderText", "", "QString", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "print(QPagedPaintDevice*)", { "print", "QPagedPaintDevice*", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundVisible(bool)", { "setBackgroundVisible", "bool", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCenterOnScroll(bool)", { "setCenterOnScroll", "bool", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentCharFormat(QTextCharFormat&)", { "setCurrentCharFormat", "QTextCharFormat&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursorWidth(int)", { "setCursorWidth", "int", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocument(QTextDocument*)", { "setDocument", "QTextDocument*", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocumentTitle(QString)", { "setDocumentTitle", "QString&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExtraSelections(QList<QTextEdit::ExtraSelection>&)", { "setExtraSelections", "QList<QTextEdit::ExtraSelection>&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineWrapMode(enum)", { "setLineWrapMode", "LineWrapMode", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumBlockCount(int)", { "setMaximumBlockCount", "int", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOverwriteMode(bool)", { "setOverwriteMode", "bool", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlaceholderText(QString)", { "setPlaceholderText", "QString&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadOnly(bool)", { "setReadOnly", "bool", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabChangesFocus(bool)", { "setTabChangesFocus", "bool", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabStopWidth(int)", { "setTabStopWidth", "int", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextCursor(QTextCursor&)", { "setTextCursor", "QTextCursor&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextInteractionFlags(enum)", { "setTextInteractionFlags", "Qt::TextInteractionFlags", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUndoRedoEnabled(bool)", { "setUndoRedoEnabled", "bool", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWordWrapMode(enum)", { "setWordWrapMode", "QTextOption::WrapMode", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabChangesFocus()", { "tabChangesFocus", "", "bool", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabStopWidth()", { "tabStopWidth", "", "int", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textCursor()", { "textCursor", "", "QTextCursor", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textInteractionFlags()", { "textInteractionFlags", "", "Qt::TextInteractionFlags", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPlainText()", { "toPlainText", "", "QString", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wordWrapMode()", { "wordWrapMode", "", "QTextOption::WrapMode", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockBoundingGeometry(QTextBlock&)", { "blockBoundingGeometry", "QTextBlock&", "QRectF", 54, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "blockBoundingRect(QTextBlock&)", { "blockBoundingRect", "QTextBlock&", "QRectF", 55, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "canInsertFromMimeData(const QMimeData*)", { "canInsertFromMimeData", "QMimeData*", "bool", 56, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contentOffset()", { "contentOffset", "", "QPointF", 57, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "createMimeDataFromSelection()", { "createMimeDataFromSelection", "", "QMimeData*", 58, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "firstVisibleBlock()", { "firstVisibleBlock", "", "QTextBlock", 59, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "getPaintContext()", { "getPaintContext", "", "QAbstractTextDocumentLayout::PaintContext", 60, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "insertFromMimeData(const QMimeData*)", { "insertFromMimeData", "QMimeData*", "void", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 62, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QDragEnterEvent*)", { "dragEnterEvent", "QDragEnterEvent*", "void", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QDragLeaveEvent*)", { "dragLeaveEvent", "QDragLeaveEvent*", "void", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 66, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 71, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 72, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 73, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 74, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 75, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 76, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 77, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 78, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 79, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "scrollContentsBy(int,int)", { "scrollContentsBy", "int,int", "void", 80, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 81, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 82, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "appendHtml(QString)", { "appendHtml", "QString&", "void", 83, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "appendPlainText(QString)", { "appendPlainText", "QString&", "void", 84, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "centerCursor()", { "centerCursor", "", "void", 85, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "clear()", { "clear", "", "void", 86, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "copy()", { "copy", "", "void", 87, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "cut()", { "cut", "", "void", 88, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "insertPlainText(QString)", { "insertPlainText", "QString&", "void", 89, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "paste()", { "paste", "", "void", 90, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "redo()", { "redo", "", "void", 91, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "selectAll()", { "selectAll", "", "void", 92, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPlainText(QString)", { "setPlainText", "QString&", "void", 93, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "undo()", { "undo", "", "void", 94, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "zoomIn()", { "zoomIn", "", "void", 95, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "zoomIn(int)", { "zoomIn", "int", "void", 96, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "zoomOut()", { "zoomOut", "", "void", 97, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "zoomOut(int)", { "zoomOut", "int", "void", 98, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPlainTextEdit::plastiqSignals = {
    { "blockCountChanged(int)", { "blockCountChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "copyAvailable(bool)", { "copyAvailable", "bool", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cursorPositionChanged()", { "cursorPositionChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modificationChanged(bool)", { "modificationChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "redoAvailable(bool)", { "redoAvailable", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectionChanged()", { "selectionChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "textChanged()", { "textChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "undoAvailable(bool)", { "undoAvailable", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "updateRequest(QRect&,int)", { "updateRequest", "QRect&,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQPlainTextEdit::plastiqProperties = {
    { "backgroundVisible", { "backgroundVisible", "bool", "setBackgroundVisible", "backgroundVisible" } },
    { "blockCount", { "blockCount", "int", "", "blockCount" } },
    { "centerOnScroll", { "centerOnScroll", "bool", "setCenterOnScroll", "centerOnScroll" } },
    { "cursorWidth", { "cursorWidth", "int", "setCursorWidth", "cursorWidth" } },
    { "documentTitle", { "documentTitle", "QString", "setDocumentTitle", "documentTitle" } },
    { "lineWrapMode", { "lineWrapMode", "long", "setLineWrapMode", "lineWrapMode" } },
    { "maximumBlockCount", { "maximumBlockCount", "int", "setMaximumBlockCount", "maximumBlockCount" } },
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

QHash<QByteArray, long> PlastiQQPlainTextEdit::plastiqConstants = {

    /* QPlainTextEdit::LineWrapMode */
   { "NoWrap", QPlainTextEdit::NoWrap },
   { "WidgetWidth", QPlainTextEdit::WidgetWidth },

};

QVector<PlastiQMetaObject*> PlastiQQPlainTextEdit::plastiqInherits = { &PlastiQQAbstractScrollArea::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPlainTextEdit::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQPlainTextEdit::plastiq_static_metaObject = {
    { &PlastiQQAbstractScrollArea::plastiq_static_metaObject, &plastiqInherits, "QPlainTextEdit", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPlainTextEdit::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPlainTextEditWrapper : public QPlainTextEdit {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQPlainTextEditWrapper(QWidget *parent = Q_NULLPTR)
         : QPlainTextEdit(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQPlainTextEditWrapper(const QString &text, QWidget *parent = Q_NULLPTR)
         : QPlainTextEdit(text,parent),
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
        else return QPlainTextEdit::loadResource(type,name);
    }

    QVariant PlastiQParentCall_loadResource(int type, const QUrl &name) {
        return QPlainTextEdit::loadResource(type,name);
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
        else return QPlainTextEdit::canInsertFromMimeData(source);
    }

    bool PlastiQParentCall_canInsertFromMimeData(const QMimeData *source) const {
        return QPlainTextEdit::canInsertFromMimeData(source);
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
        else return QPlainTextEdit::createMimeDataFromSelection();
    }

    QMimeData* PlastiQParentCall_createMimeDataFromSelection() const {
        return QPlainTextEdit::createMimeDataFromSelection();
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
        else return QPlainTextEdit::insertFromMimeData(source);
    }

    void PlastiQParentCall_insertFromMimeData(const QMimeData *source) {
        return QPlainTextEdit::insertFromMimeData(source);
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
        else return QPlainTextEdit::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QPlainTextEdit::changeEvent(e);
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
        else return QPlainTextEdit::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QPlainTextEdit::contextMenuEvent(event);
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
        else return QPlainTextEdit::dragEnterEvent(e);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *e) {
        return QPlainTextEdit::dragEnterEvent(e);
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
        else return QPlainTextEdit::dragLeaveEvent(e);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *e) {
        return QPlainTextEdit::dragLeaveEvent(e);
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
        else return QPlainTextEdit::dragMoveEvent(e);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *e) {
        return QPlainTextEdit::dragMoveEvent(e);
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
        else return QPlainTextEdit::dropEvent(e);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *e) {
        return QPlainTextEdit::dropEvent(e);
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
        else return QPlainTextEdit::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QPlainTextEdit::focusInEvent(e);
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
        else return QPlainTextEdit::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QPlainTextEdit::focusNextPrevChild(next);
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
        else return QPlainTextEdit::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QPlainTextEdit::focusOutEvent(e);
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
        else return QPlainTextEdit::inputMethodEvent(e);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *e) {
        return QPlainTextEdit::inputMethodEvent(e);
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
        else return QPlainTextEdit::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QPlainTextEdit::keyPressEvent(e);
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
        else return QPlainTextEdit::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QPlainTextEdit::keyReleaseEvent(e);
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
        else return QPlainTextEdit::mouseDoubleClickEvent(e);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *e) {
        return QPlainTextEdit::mouseDoubleClickEvent(e);
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
        else return QPlainTextEdit::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QPlainTextEdit::mouseMoveEvent(e);
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
        else return QPlainTextEdit::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QPlainTextEdit::mousePressEvent(e);
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
        else return QPlainTextEdit::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QPlainTextEdit::mouseReleaseEvent(e);
    }

    void paintEvent(QPaintEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPlainTextEdit::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QPlainTextEdit::paintEvent(e);
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
        else return QPlainTextEdit::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QPlainTextEdit::resizeEvent(e);
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
        else return QPlainTextEdit::scrollContentsBy(dx,dy);
    }

    void PlastiQParentCall_scrollContentsBy(int dx, int dy) {
        return QPlainTextEdit::scrollContentsBy(dx,dy);
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
        else return QPlainTextEdit::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QPlainTextEdit::wheelEvent(e);
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
        else return QPlainTextEdit::setupViewport(viewport);
    }

    void PlastiQParentCall_setupViewport(QWidget *viewport) {
        return QPlainTextEdit::setupViewport(viewport);
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
        else return QPlainTextEdit::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QPlainTextEdit::viewportEvent(event);
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
        else return QPlainTextEdit::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QPlainTextEdit::viewportSizeHint();
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
        else return QPlainTextEdit::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QPlainTextEdit::event(event);
    }

};

void PlastiQQPlainTextEdit::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPlainTextEditWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQPlainTextEditWrapper(); break;
        case 1: o = new PlastiQQPlainTextEditWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQPlainTextEditWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQPlainTextEditWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPlainTextEdit *p = new PlastiQQPlainTextEdit();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPlainTextEdit *p = new PlastiQQPlainTextEdit();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 99) {
            id -= 99;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPlainTextEdit *o = sc ? Q_NULLPTR : reinterpret_cast<QPlainTextEdit*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->anchorAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { bool _r = o->backgroundVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { int _r = o->blockCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { bool _r = o->canPaste();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->centerOnScroll();
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
            QTextCursor *_r = new QTextCursor(o->cursorForPosition((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QRect *_r = new QRect(o->cursorRect((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QRect *_r = new QRect(o->cursorRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { int _r = o->cursorWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { QTextDocument* _r = o->document();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 13: { QString _r = o->documentTitle();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: o->ensureCursorVisible();
                stack[0].type = PlastiQ::Void; break;
        case 15: { bool _r = o->find(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->find(stack[1].s_string,
                    QTextDocument::FindFlags(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    QTextDocument::FindFlags(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isReadOnly();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->isUndoRedoEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { qint64 _r = o->lineWrapMode(); // HACK for LineWrapMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 22: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_loadResource(stack[1].s_int,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp))));
                else _r = new QVariant(o->loadResource(stack[1].s_int,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { int _r = o->maximumBlockCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 24: o->mergeCurrentCharFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->moveCursor(QTextCursor::MoveOperation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->moveCursor(QTextCursor::MoveOperation(stack[1].s_int64),
                    QTextCursor::MoveMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 27: { bool _r = o->overwriteMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { QString _r = o->placeholderText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 29: o->print(reinterpret_cast<QPagedPaintDevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setBackgroundVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setCenterOnScroll(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setCurrentCharFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setCursorWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setDocument(reinterpret_cast<QTextDocument*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setDocumentTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setExtraSelections((*reinterpret_cast< QList<QTextEdit::ExtraSelection>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setLineWrapMode(QPlainTextEdit::LineWrapMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setMaximumBlockCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setOverwriteMode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setPlaceholderText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setReadOnly(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setTabChangesFocus(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setTabStopWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setTextCursor((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setTextInteractionFlags(Qt::TextInteractionFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setUndoRedoEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setWordWrapMode(QTextOption::WrapMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 48: { bool _r = o->tabChangesFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 49: { int _r = o->tabStopWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 50: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->textCursor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 51: { qint64 _r = o->textInteractionFlags(); // HACK for Qt::TextInteractionFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 52: { QString _r = o->toPlainText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 53: { qint64 _r = o->wordWrapMode(); // HACK for QTextOption::WrapMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 54: { /* COPY OBJECT */
            QRectF *_r; stack[0].type = PlastiQ::Error; } break;
        case 55: { /* COPY OBJECT */
            QRectF *_r; stack[0].type = PlastiQ::Error; } break;
        case 56: { bool _r;
                if (isWrapper) _r = ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_canInsertFromMimeData(reinterpret_cast<const QMimeData*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 57: { /* COPY OBJECT */
            QPointF *_r; stack[0].type = PlastiQ::Error; } break;
        case 58: { QMimeData* _r;
                if (isWrapper) _r = ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_createMimeDataFromSelection();
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMimeData"; } break;
        case 59: { /* COPY OBJECT */
            QTextBlock *_r; stack[0].type = PlastiQ::Error; } break;
        case 60: /* o->getPaintContext() | ret: `QAbstractTextDocumentLayout::PaintContext` */ break;
        case 61: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_insertFromMimeData(reinterpret_cast<const QMimeData*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 62: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 63: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 64: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QDragEnterEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 65: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QDragLeaveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 66: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 67: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 68: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 69: { bool _r;
                if (isWrapper) _r = ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 70: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 71: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 72: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 73: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 74: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 75: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 76: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 77: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 78: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 79: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 80: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_scrollContentsBy(stack[1].s_int,
                    stack[2].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 81: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 82: if (isWrapper) ((PlastiQQPlainTextEditWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 83: o->appendHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 84: o->appendPlainText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 85: o->centerCursor();
                stack[0].type = PlastiQ::Void; break;
        case 86: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 87: o->copy();
                stack[0].type = PlastiQ::Void; break;
        case 88: o->cut();
                stack[0].type = PlastiQ::Void; break;
        case 89: o->insertPlainText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 90: o->paste();
                stack[0].type = PlastiQ::Void; break;
        case 91: o->redo();
                stack[0].type = PlastiQ::Void; break;
        case 92: o->selectAll();
                stack[0].type = PlastiQ::Void; break;
        case 93: o->setPlainText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 94: o->undo();
                stack[0].type = PlastiQ::Void; break;
        case 95: o->zoomIn();
                stack[0].type = PlastiQ::Void; break;
        case 96: o->zoomIn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 97: o->zoomOut();
                stack[0].type = PlastiQ::Void; break;
        case 98: o->zoomOut(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPlainTextEdit *o = reinterpret_cast<QPlainTextEdit*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QPlainTextEdit::blockCountChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "blockCountChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QPlainTextEdit::copyAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "copyAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QPlainTextEdit::cursorPositionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "cursorPositionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QPlainTextEdit::modificationChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "modificationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QPlainTextEdit::redoAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "redoAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QPlainTextEdit::selectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "selectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QPlainTextEdit::textChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "textChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QPlainTextEdit::undoAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "undoAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QPlainTextEdit::updateRequest,
            [=](const QRect& arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QRect(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRect";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "updateRequest", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPlainTextEdit *o = reinterpret_cast<QPlainTextEdit*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPlainTextEdit *o = reinterpret_cast<QPlainTextEdit*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPlainTextEdit *o = reinterpret_cast<QPlainTextEdit*>(object->plastiq_data());

        if(className == "QAbstractScrollArea") {
            stack[0].s_voidp = static_cast<QAbstractScrollArea*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPlainTextEdit::~PlastiQQPlainTextEdit() {
    QPlainTextEdit* o = reinterpret_cast<QPlainTextEdit*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
