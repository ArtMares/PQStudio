#include "plastiqmethod.h"
#include "plastiqqtextdocument.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QTextDocument> 
#include <QUrl>
#include <QTextBlock>
#include <QChar>
#include <QFont>
#include <QString>
#include <QTextOption>
#include <QAbstractTextDocumentLayout>
#include <QTextCursor>
#include <QTextObject>
#include <QSizeF>
#include <QVariant>
#include <QTextFrame>
#include <QTextFormat>

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocument::plastiqConstructors = {
    { "QTextDocument()", { "QTextDocument", "", "QTextDocument*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocument(QObject*)", { "QTextDocument", "QObject*", "QTextDocument*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocument(QString)", { "QTextDocument", "QString&", "QTextDocument*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDocument(QString,QObject*)", { "QTextDocument", "QString&,QObject*", "QTextDocument*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocument::plastiqMethods = {
    { "addResource(int,QUrl&,QVariant)", { "addResource", "int,QUrl&,QVariant&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "adjustSize()", { "adjustSize", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableRedoSteps()", { "availableRedoSteps", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableUndoSteps()", { "availableUndoSteps", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "baseUrl()", { "baseUrl", "", "QUrl", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "begin()", { "begin", "", "QTextBlock", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockCount()", { "blockCount", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "characterAt(int)", { "characterAt", "int", "QChar", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "characterCount()", { "characterCount", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearUndoRedoStacks()", { "clearUndoRedoStacks", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearUndoRedoStacks(enum)", { "clearUndoRedoStacks", "Stacks", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clone()", { "clone", "", "QTextDocument*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clone(QObject*)", { "clone", "QObject*", "QTextDocument*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultCursorMoveStyle()", { "defaultCursorMoveStyle", "", "Qt::CursorMoveStyle", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultFont()", { "defaultFont", "", "QFont", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultStyleSheet()", { "defaultStyleSheet", "", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultTextOption()", { "defaultTextOption", "", "QTextOption", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentLayout()", { "documentLayout", "", "QAbstractTextDocumentLayout*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentMargin()", { "documentMargin", "", "qreal", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawContents(QPainter*)", { "drawContents", "QPainter*", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawContents(QPainter*,QRectF&)", { "drawContents", "QPainter*,QRectF&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "QTextBlock", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString,QTextCursor&)", { "find", "QString&,QTextCursor&", "QTextCursor", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString,QTextCursor&,enum)", { "find", "QString&,QTextCursor&,FindFlags", "QTextCursor", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString)", { "find", "QString&", "QTextCursor", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString,int)", { "find", "QString&,int", "QTextCursor", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QString,int,enum)", { "find", "QString&,int,FindFlags", "QTextCursor", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&)", { "find", "QRegExp&", "QTextCursor", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&,int)", { "find", "QRegExp&,int", "QTextCursor", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&,int,enum)", { "find", "QRegExp&,int,FindFlags", "QTextCursor", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&,QTextCursor&)", { "find", "QRegExp&,QTextCursor&", "QTextCursor", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegExp&,QTextCursor&,enum)", { "find", "QRegExp&,QTextCursor&,FindFlags", "QTextCursor", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegularExpression&)", { "find", "QRegularExpression&", "QTextCursor", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegularExpression&,int)", { "find", "QRegularExpression&,int", "QTextCursor", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegularExpression&,int,enum)", { "find", "QRegularExpression&,int,FindFlags", "QTextCursor", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegularExpression&,QTextCursor&)", { "find", "QRegularExpression&,QTextCursor&", "QTextCursor", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "find(QRegularExpression&,QTextCursor&,enum)", { "find", "QRegularExpression&,QTextCursor&,FindFlags", "QTextCursor", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findBlock(int)", { "findBlock", "int", "QTextBlock", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findBlockByLineNumber(int)", { "findBlockByLineNumber", "int", "QTextBlock", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findBlockByNumber(int)", { "findBlockByNumber", "int", "QTextBlock", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstBlock()", { "firstBlock", "", "QTextBlock", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "idealWidth()", { "idealWidth", "", "qreal", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indentWidth()", { "indentWidth", "", "qreal", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isModified()", { "isModified", "", "bool", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRedoAvailable()", { "isRedoAvailable", "", "bool", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUndoAvailable()", { "isUndoAvailable", "", "bool", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUndoRedoEnabled()", { "isUndoRedoEnabled", "", "bool", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastBlock()", { "lastBlock", "", "QTextBlock", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineCount()", { "lineCount", "", "int", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "markContentsDirty(int,int)", { "markContentsDirty", "int,int", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumBlockCount()", { "maximumBlockCount", "", "int", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaInformation(enum)", { "metaInformation", "MetaInformation", "QString", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "object(int)", { "object", "int", "QTextObject*", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "objectForFormat(QTextFormat&)", { "objectForFormat", "QTextFormat&", "QTextObject*", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageCount()", { "pageCount", "", "int", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageSize()", { "pageSize", "", "QSizeF", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "print(QPagedPaintDevice*)", { "print", "QPagedPaintDevice*", "void", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redo(QTextCursor*)", { "redo", "QTextCursor*", "void", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resource(int,QUrl&)", { "resource", "int,QUrl&", "QVariant", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "revision()", { "revision", "", "int", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rootFrame()", { "rootFrame", "", "QTextFrame*", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBaseUrl(QUrl&)", { "setBaseUrl", "QUrl&", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultCursorMoveStyle(enum)", { "setDefaultCursorMoveStyle", "Qt::CursorMoveStyle", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultFont(QFont&)", { "setDefaultFont", "QFont&", "void", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultStyleSheet(QString)", { "setDefaultStyleSheet", "QString&", "void", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultTextOption(QTextOption&)", { "setDefaultTextOption", "QTextOption&", "void", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocumentLayout(QAbstractTextDocumentLayout*)", { "setDocumentLayout", "QAbstractTextDocumentLayout*", "void", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocumentMargin(double)", { "setDocumentMargin", "qreal", "void", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHtml(QString)", { "setHtml", "QString&", "void", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIndentWidth(double)", { "setIndentWidth", "qreal", "void", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumBlockCount(int)", { "setMaximumBlockCount", "int", "void", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMetaInformation(enum,QString)", { "setMetaInformation", "MetaInformation,QString&", "void", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageSize(QSizeF&)", { "setPageSize", "QSizeF&", "void", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlainText(QString)", { "setPlainText", "QString&", "void", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextWidth(double)", { "setTextWidth", "qreal", "void", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUndoRedoEnabled(bool)", { "setUndoRedoEnabled", "bool", "void", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUseDesignMetrics(bool)", { "setUseDesignMetrics", "bool", "void", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSizeF", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textWidth()", { "textWidth", "", "qreal", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHtml()", { "toHtml", "", "QString", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHtml(QByteArray)", { "toHtml", "QByteArray&", "QString", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPlainText()", { "toPlainText", "", "QString", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "undo(QTextCursor*)", { "undo", "QTextCursor*", "void", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "useDesignMetrics()", { "useDesignMetrics", "", "bool", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createObject(QTextFormat&)", { "createObject", "QTextFormat&", "QTextObject*", 86, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "loadResource(int,QUrl&)", { "loadResource", "int,QUrl&", "QVariant", 87, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "redo()", { "redo", "", "void", 88, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setModified()", { "setModified", "", "void", 89, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setModified(bool)", { "setModified", "bool", "void", 90, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "undo()", { "undo", "", "void", 91, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextDocument::plastiqSignals = {
    { "baseUrlChanged(QUrl&)", { "baseUrlChanged", "QUrl&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "blockCountChanged(int)", { "blockCountChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "contentsChange(int,int,int)", { "contentsChange", "int,int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "contentsChanged()", { "contentsChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cursorPositionChanged(QTextCursor&)", { "cursorPositionChanged", "QTextCursor&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "documentLayoutChanged()", { "documentLayoutChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modificationChanged(bool)", { "modificationChanged", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "redoAvailable(bool)", { "redoAvailable", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "undoAvailable(bool)", { "undoAvailable", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "undoCommandAdded()", { "undoCommandAdded", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextDocument::plastiqProperties = {
    { "baseUrl", { "baseUrl", "QUrl", "setBaseUrl", "baseUrl" } },
    { "blockCount", { "blockCount", "int", "", "blockCount" } },
    { "defaultFont", { "defaultFont", "QFont", "setDefaultFont", "defaultFont" } },
    { "defaultStyleSheet", { "defaultStyleSheet", "QString", "setDefaultStyleSheet", "defaultStyleSheet" } },
    { "defaultTextOption", { "defaultTextOption", "QTextOption", "setDefaultTextOption", "defaultTextOption" } },
    { "documentMargin", { "documentMargin", "qreal", "setDocumentMargin", "documentMargin" } },
    { "indentWidth", { "indentWidth", "qreal", "setIndentWidth", "indentWidth" } },
    { "maximumBlockCount", { "maximumBlockCount", "int", "setMaximumBlockCount", "maximumBlockCount" } },
    { "modified", { "modified", "bool", "setModified", "isModified" } },
    { "pageSize", { "pageSize", "QSizeF", "setPageSize", "pageSize" } },
    { "size", { "size", "QSizeF", "", "size" } },
    { "textWidth", { "textWidth", "qreal", "setTextWidth", "textWidth" } },
    { "undoRedoEnabled", { "undoRedoEnabled", "bool", "setUndoRedoEnabled", "isUndoRedoEnabled" } },
    { "useDesignMetrics", { "useDesignMetrics", "bool", "setUseDesignMetrics", "useDesignMetrics" } },

};

QHash<QByteArray, long> PlastiQQTextDocument::plastiqConstants = {

    /* QTextDocument::FindFlag */
   { "FindBackward", QTextDocument::FindBackward },
   { "FindCaseSensitively", QTextDocument::FindCaseSensitively },
   { "FindWholeWords", QTextDocument::FindWholeWords },

    /* QTextDocument::MetaInformation */
   { "DocumentTitle", QTextDocument::DocumentTitle },
   { "DocumentUrl", QTextDocument::DocumentUrl },

    /* QTextDocument::ResourceType */
   { "HtmlResource", QTextDocument::HtmlResource },
   { "ImageResource", QTextDocument::ImageResource },
   { "StyleSheetResource", QTextDocument::StyleSheetResource },
   { "UserResource", QTextDocument::UserResource },

    /* QTextDocument::Stacks */
   { "UndoStack", QTextDocument::UndoStack },
   { "RedoStack", QTextDocument::RedoStack },
   { "UndoAndRedoStacks", QTextDocument::UndoAndRedoStacks },

};

QVector<PlastiQMetaObject*> PlastiQQTextDocument::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextDocument::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQTextDocument::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QTextDocument", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextDocument::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTextDocumentWrapper : public QTextDocument {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTextDocumentWrapper(QObject *parent = Q_NULLPTR)
         : QTextDocument(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTextDocumentWrapper(const QString &text, QObject *parent = Q_NULLPTR)
         : QTextDocument(text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void clear() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void clear()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextDocument::clear();
    }

    void PlastiQParentCall_clear() {
        return QTextDocument::clear();
    }

    QTextObject* createObject(const QTextFormat &format) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QTextObject* createObject(const QTextFormat&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QTextFormat(format) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QTextFormat");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QTextObject* _r = reinterpret_cast<QTextObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QTextDocument::createObject(format);
    }

    QTextObject* PlastiQParentCall_createObject(const QTextFormat &format) {
        return QTextDocument::createObject(format);
    }

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
        else return QTextDocument::loadResource(type,name);
    }

    QVariant PlastiQParentCall_loadResource(int type, const QUrl &name) {
        return QTextDocument::loadResource(type,name);
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
        else return QTextDocument::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QTextDocument::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTextDocument::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QTextDocument::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QTextDocument::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QTextDocument::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextDocument::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QTextDocument::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextDocument::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QTextDocument::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextDocument::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QTextDocument::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTextDocument::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QTextDocument::disconnectNotify(signal);
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
        else return QTextDocument::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTextDocument::timerEvent(event);
    }

};

void PlastiQQTextDocument::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTextDocumentWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTextDocumentWrapper(); break;
        case 1: o = new PlastiQQTextDocumentWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQTextDocumentWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQTextDocumentWrapper(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTextDocument *p = new PlastiQQTextDocument();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextDocument *p = new PlastiQQTextDocument();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 92) {
            id -= 92;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextDocument *o = sc ? Q_NULLPTR : reinterpret_cast<QTextDocument*>(object->plastiq_data());

        switch(id) {
        case 0: o->addResource(stack[1].s_int,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp)),
                    stack[3].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->adjustSize();
                stack[0].type = PlastiQ::Void; break;
        case 2: { int _r = o->availableRedoSteps();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->availableUndoSteps();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->baseUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->begin());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { int _r = o->blockCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { /* COPY OBJECT */
            QChar *_r = new QChar(o->characterAt(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { int _r = o->characterCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: if (isWrapper) ((PlastiQQTextDocumentWrapper*)o)->PlastiQParentCall_clear();
                else o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 10: o->clearUndoRedoStacks();
                stack[0].type = PlastiQ::Void; break;
        case 11: o->clearUndoRedoStacks(QTextDocument::Stacks(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: { QTextDocument* _r = o->clone();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 13: { QTextDocument* _r = o->clone(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 14: { qint64 _r = o->defaultCursorMoveStyle(); // HACK for Qt::CursorMoveStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { /* COPY OBJECT */
            QFont *_r = new QFont(o->defaultFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { QString _r = o->defaultStyleSheet();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 17: { /* COPY OBJECT */
            QTextOption *_r = new QTextOption(o->defaultTextOption());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextOption";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { QAbstractTextDocumentLayout* _r = o->documentLayout();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractTextDocumentLayout"; } break;
        case 19: { double _r = o->documentMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 20: o->drawContents(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->drawContents(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->end());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find(stack[1].s_string,
                    (*reinterpret_cast< QTextCursor(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find(stack[1].s_string,
                    (*reinterpret_cast< QTextCursor(*) >(stack[2].s_voidp)),
                    QTextDocument::FindFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find(stack[1].s_string,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find(stack[1].s_string,
                    stack[2].s_int,
                    QTextDocument::FindFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    QTextDocument::FindFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTextCursor(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTextCursor(*) >(stack[2].s_voidp)),
                    QTextDocument::FindFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    QTextDocument::FindFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTextCursor(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 37: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->find((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTextCursor(*) >(stack[2].s_voidp)),
                    QTextDocument::FindFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->findBlock(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->findBlockByLineNumber(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->findBlockByNumber(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 41: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->firstBlock());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: { double _r = o->idealWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 43: { double _r = o->indentWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 44: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 45: { bool _r = o->isModified();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 46: { bool _r = o->isRedoAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: { bool _r = o->isUndoAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: { bool _r = o->isUndoRedoEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 49: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->lastBlock());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 50: { int _r = o->lineCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 51: o->markContentsDirty(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 52: { int _r = o->maximumBlockCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: { QString _r = o->metaInformation(QTextDocument::MetaInformation(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 54: { QTextObject* _r = o->object(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextObject"; } break;
        case 55: { QTextObject* _r = o->objectForFormat((*reinterpret_cast< QTextFormat(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextObject"; } break;
        case 56: { int _r = o->pageCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 57: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->pageSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: o->print(reinterpret_cast<QPagedPaintDevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 59: o->redo(reinterpret_cast<QTextCursor*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 60: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->resource(stack[1].s_int,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 61: { int _r = o->revision();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 62: { QTextFrame* _r = o->rootFrame();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextFrame"; } break;
        case 63: o->setBaseUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 64: o->setDefaultCursorMoveStyle(Qt::CursorMoveStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 65: o->setDefaultFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 66: o->setDefaultStyleSheet(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 67: o->setDefaultTextOption((*reinterpret_cast< QTextOption(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 68: o->setDocumentLayout(reinterpret_cast<QAbstractTextDocumentLayout*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 69: o->setDocumentMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 70: o->setHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 71: o->setIndentWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 72: o->setMaximumBlockCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 73: o->setMetaInformation(QTextDocument::MetaInformation(stack[1].s_int64),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 74: o->setPageSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 75: o->setPlainText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 76: o->setTextWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 77: o->setUndoRedoEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 78: o->setUseDesignMetrics(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 79: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 80: { double _r = o->textWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 81: { QString _r = o->toHtml();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 82: { QString _r = o->toHtml(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 83: { QString _r = o->toPlainText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 84: o->undo(reinterpret_cast<QTextCursor*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 85: { bool _r = o->useDesignMetrics();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 86: { QTextObject* _r;
                if (isWrapper) _r = ((PlastiQQTextDocumentWrapper*)o)->PlastiQParentCall_createObject((*reinterpret_cast< QTextFormat(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextObject"; } break;
        case 87: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQTextDocumentWrapper*)o)->PlastiQParentCall_loadResource(stack[1].s_int,
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp))));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 88: o->redo();
                stack[0].type = PlastiQ::Void; break;
        case 89: o->setModified();
                stack[0].type = PlastiQ::Void; break;
        case 90: o->setModified(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 91: o->undo();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 10) {
            id -= 10;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTextDocument *o = reinterpret_cast<QTextDocument*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTextDocument::baseUrlChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "baseUrlChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTextDocument::blockCountChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "blockCountChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QTextDocument::*)(int,int,int)>(&QTextDocument::contentsChange),
            [=](int arg0, int arg1, int arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                    cstack[2].s_int = arg2;
                    cstack[2].type = PlastiQ::Int; cstack[2].name = "int";
                PlastiQ_activate(sender, "contentsChange", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QTextDocument::contentsChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "contentsChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QTextDocument::cursorPositionChanged,
            [=](const QTextCursor& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QTextCursor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QTextCursor";
                PlastiQ_activate(sender, "cursorPositionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QTextDocument::documentLayoutChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "documentLayoutChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QTextDocument::modificationChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "modificationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QTextDocument::redoAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "redoAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QTextDocument::undoAvailable,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "undoAvailable", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QTextDocument::undoCommandAdded,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "undoCommandAdded", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTextDocument *o = reinterpret_cast<QTextDocument*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTextDocument *o = reinterpret_cast<QTextDocument*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTextDocument *o = reinterpret_cast<QTextDocument*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextDocument::~PlastiQQTextDocument() {
    QTextDocument* o = reinterpret_cast<QTextDocument*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
