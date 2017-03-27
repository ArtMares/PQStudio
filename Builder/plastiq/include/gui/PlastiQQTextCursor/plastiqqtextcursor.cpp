#include "plastiqmethod.h"
#include "plastiqqtextcursor.h"

#include <QTextCursor> 
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextBlockFormat>
#include <QTextList>
#include <QTextFrame>
#include <QTextTable>
#include <QTextDocument>
#include <QString>
#include <QTextDocumentFragment>

QHash<QByteArray, PlastiQMethod> PlastiQQTextCursor::plastiqConstructors = {
    { "QTextCursor()", { "QTextCursor", "", "QTextCursor*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextCursor(QTextDocument*)", { "QTextCursor", "QTextDocument*", "QTextCursor*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextCursor(QTextFrame*)", { "QTextCursor", "QTextFrame*", "QTextCursor*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextCursor(QTextBlock&)", { "QTextCursor", "QTextBlock&", "QTextCursor*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextCursor(QTextCursor&)", { "QTextCursor", "QTextCursor&", "QTextCursor*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextCursor::plastiqMethods = {
    { "anchor()", { "anchor", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "atBlockEnd()", { "atBlockEnd", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "atBlockStart()", { "atBlockStart", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "atEnd()", { "atEnd", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "atStart()", { "atStart", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "beginEditBlock()", { "beginEditBlock", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "block()", { "block", "", "QTextBlock", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockCharFormat()", { "blockCharFormat", "", "QTextCharFormat", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockFormat()", { "blockFormat", "", "QTextBlockFormat", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockNumber()", { "blockNumber", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "charFormat()", { "charFormat", "", "QTextCharFormat", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearSelection()", { "clearSelection", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnNumber()", { "columnNumber", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createList(QTextListFormat&)", { "createList", "QTextListFormat&", "QTextList*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createList(enum)", { "createList", "QTextListFormat::Style", "QTextList*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentFrame()", { "currentFrame", "", "QTextFrame*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentList()", { "currentList", "", "QTextList*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentTable()", { "currentTable", "", "QTextTable*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deleteChar()", { "deleteChar", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deletePreviousChar()", { "deletePreviousChar", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "document()", { "document", "", "QTextDocument*", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endEditBlock()", { "endEditBlock", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasComplexSelection()", { "hasComplexSelection", "", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasSelection()", { "hasSelection", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertBlock()", { "insertBlock", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertBlock(QTextBlockFormat&)", { "insertBlock", "QTextBlockFormat&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertBlock(QTextBlockFormat&,QTextCharFormat&)", { "insertBlock", "QTextBlockFormat&,QTextCharFormat&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertFragment(QTextDocumentFragment&)", { "insertFragment", "QTextDocumentFragment&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertFrame(QTextFrameFormat&)", { "insertFrame", "QTextFrameFormat&", "QTextFrame*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertHtml(QString)", { "insertHtml", "QString&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertImage(QTextImageFormat&)", { "insertImage", "QTextImageFormat&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertImage(QTextImageFormat&,enum)", { "insertImage", "QTextImageFormat&,QTextFrameFormat::Position", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertImage(QString)", { "insertImage", "QString&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertImage(QImage&)", { "insertImage", "QImage&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertImage(QImage&,QString)", { "insertImage", "QImage&,QString&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertList(QTextListFormat&)", { "insertList", "QTextListFormat&", "QTextList*", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertList(enum)", { "insertList", "QTextListFormat::Style", "QTextList*", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertTable(int,int,QTextTableFormat&)", { "insertTable", "int,int,QTextTableFormat&", "QTextTable*", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertTable(int,int)", { "insertTable", "int,int", "QTextTable*", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertText(QString)", { "insertText", "QString&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertText(QString,QTextCharFormat&)", { "insertText", "QString&,QTextCharFormat&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCopyOf(QTextCursor&)", { "isCopyOf", "QTextCursor&", "bool", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "joinPreviousEditBlock()", { "joinPreviousEditBlock", "", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keepPositionOnInsert()", { "keepPositionOnInsert", "", "bool", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mergeBlockCharFormat(QTextCharFormat&)", { "mergeBlockCharFormat", "QTextCharFormat&", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mergeBlockFormat(QTextBlockFormat&)", { "mergeBlockFormat", "QTextBlockFormat&", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mergeCharFormat(QTextCharFormat&)", { "mergeCharFormat", "QTextCharFormat&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "movePosition(enum)", { "movePosition", "MoveOperation", "bool", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "movePosition(enum,enum)", { "movePosition", "MoveOperation,MoveMode", "bool", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "movePosition(enum,enum,int)", { "movePosition", "MoveOperation,MoveMode,int", "bool", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "int", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "positionInBlock()", { "positionInBlock", "", "int", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeSelectedText()", { "removeSelectedText", "", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "select(enum)", { "select", "SelectionType", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedTableCells(int*,int*,int*,int*)", { "selectedTableCells", "int*,int*,int*,int*", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedText()", { "selectedText", "", "QString", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selection()", { "selection", "", "QTextDocumentFragment", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionEnd()", { "selectionEnd", "", "int", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionStart()", { "selectionStart", "", "int", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBlockCharFormat(QTextCharFormat&)", { "setBlockCharFormat", "QTextCharFormat&", "void", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBlockFormat(QTextBlockFormat&)", { "setBlockFormat", "QTextBlockFormat&", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCharFormat(QTextCharFormat&)", { "setCharFormat", "QTextCharFormat&", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKeepPositionOnInsert(bool)", { "setKeepPositionOnInsert", "bool", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(int)", { "setPosition", "int", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(int,enum)", { "setPosition", "int,MoveMode", "void", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalMovementX(int)", { "setVerticalMovementX", "int", "void", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisualNavigation(bool)", { "setVisualNavigation", "bool", "void", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QTextCursor&)", { "swap", "QTextCursor&", "void", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalMovementX()", { "verticalMovementX", "", "int", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualNavigation()", { "visualNavigation", "", "bool", 70, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextCursor::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextCursor::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextCursor::plastiqConstants = {

    /* QTextCursor::MoveMode */
   { "MoveAnchor", QTextCursor::MoveAnchor },
   { "KeepAnchor", QTextCursor::KeepAnchor },

    /* QTextCursor::MoveOperation */
   { "NoMove", QTextCursor::NoMove },
   { "Start", QTextCursor::Start },
   { "Up", QTextCursor::Up },
   { "StartOfLine", QTextCursor::StartOfLine },
   { "StartOfBlock", QTextCursor::StartOfBlock },
   { "StartOfWord", QTextCursor::StartOfWord },
   { "PreviousBlock", QTextCursor::PreviousBlock },
   { "PreviousCharacter", QTextCursor::PreviousCharacter },
   { "PreviousWord", QTextCursor::PreviousWord },
   { "Left", QTextCursor::Left },
   { "WordLeft", QTextCursor::WordLeft },
   { "End", QTextCursor::End },
   { "Down", QTextCursor::Down },
   { "EndOfLine", QTextCursor::EndOfLine },
   { "EndOfWord", QTextCursor::EndOfWord },
   { "EndOfBlock", QTextCursor::EndOfBlock },
   { "NextBlock", QTextCursor::NextBlock },
   { "NextCharacter", QTextCursor::NextCharacter },
   { "NextWord", QTextCursor::NextWord },
   { "Right", QTextCursor::Right },
   { "WordRight", QTextCursor::WordRight },
   { "NextCell", QTextCursor::NextCell },
   { "PreviousCell", QTextCursor::PreviousCell },
   { "NextRow", QTextCursor::NextRow },
   { "PreviousRow", QTextCursor::PreviousRow },

    /* QTextCursor::SelectionType */
   { "WordUnderCursor", QTextCursor::WordUnderCursor },
   { "LineUnderCursor", QTextCursor::LineUnderCursor },
   { "BlockUnderCursor", QTextCursor::BlockUnderCursor },
   { "Document", QTextCursor::Document },

};

QVector<PlastiQMetaObject*> PlastiQQTextCursor::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextCursor::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextCursor::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextCursor", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextCursor::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextCursor::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextCursor *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextCursor(); break;
        case 1: o = new QTextCursor(reinterpret_cast<QTextDocument*>(stack[1].s_voidp)); break;
        case 2: o = new QTextCursor(reinterpret_cast<QTextFrame*>(stack[1].s_voidp)); break;
        case 3: o = new QTextCursor((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp))); break;
        case 4: o = new QTextCursor((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextCursor *p = new PlastiQQTextCursor();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextCursor *p = new PlastiQQTextCursor();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 71) {
            id -= 71;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextCursor *o = sc ? Q_NULLPTR : reinterpret_cast<QTextCursor*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->anchor();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { bool _r = o->atBlockEnd();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->atBlockStart();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->atEnd();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->atStart();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: o->beginEditBlock();
                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->block());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->blockCharFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QTextBlockFormat *_r = new QTextBlockFormat(o->blockFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlockFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { int _r = o->blockNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->charFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: o->clearSelection();
                stack[0].type = PlastiQ::Void; break;
        case 12: { int _r = o->columnNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { QTextList* _r = o->createList((*reinterpret_cast< QTextListFormat(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextList"; } break;
        case 14: { QTextList* _r = o->createList(QTextListFormat::Style(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextList"; } break;
        case 15: { QTextFrame* _r = o->currentFrame();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextFrame"; } break;
        case 16: { QTextList* _r = o->currentList();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextList"; } break;
        case 17: { QTextTable* _r = o->currentTable();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextTable"; } break;
        case 18: o->deleteChar();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->deletePreviousChar();
                stack[0].type = PlastiQ::Void; break;
        case 20: { QTextDocument* _r = o->document();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 21: o->endEditBlock();
                stack[0].type = PlastiQ::Void; break;
        case 22: { bool _r = o->hasComplexSelection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->hasSelection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: o->insertBlock();
                stack[0].type = PlastiQ::Void; break;
        case 25: o->insertBlock((*reinterpret_cast< QTextBlockFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->insertBlock((*reinterpret_cast< QTextBlockFormat(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTextCharFormat(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->insertFragment((*reinterpret_cast< QTextDocumentFragment(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: { QTextFrame* _r = o->insertFrame((*reinterpret_cast< QTextFrameFormat(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextFrame"; } break;
        case 29: o->insertHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->insertImage((*reinterpret_cast< QTextImageFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->insertImage((*reinterpret_cast< QTextImageFormat(*) >(stack[1].s_voidp)),
                    QTextFrameFormat::Position(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->insertImage(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->insertImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->insertImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 35: { QTextList* _r = o->insertList((*reinterpret_cast< QTextListFormat(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextList"; } break;
        case 36: { QTextList* _r = o->insertList(QTextListFormat::Style(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextList"; } break;
        case 37: { QTextTable* _r = o->insertTable(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QTextTableFormat(*) >(stack[3].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextTable"; } break;
        case 38: { QTextTable* _r = o->insertTable(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextTable"; } break;
        case 39: o->insertText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->insertText(stack[1].s_string,
                    (*reinterpret_cast< QTextCharFormat(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 41: { bool _r = o->isCopyOf((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 43: o->joinPreviousEditBlock();
                stack[0].type = PlastiQ::Void; break;
        case 44: { bool _r = o->keepPositionOnInsert();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 45: o->mergeBlockCharFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->mergeBlockFormat((*reinterpret_cast< QTextBlockFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 47: o->mergeCharFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 48: { bool _r = o->movePosition(QTextCursor::MoveOperation(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 49: { bool _r = o->movePosition(QTextCursor::MoveOperation(stack[1].s_int64),
                    QTextCursor::MoveMode(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: { bool _r = o->movePosition(QTextCursor::MoveOperation(stack[1].s_int64),
                    QTextCursor::MoveMode(stack[2].s_int64),
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 51: { int _r = o->position();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 52: { int _r = o->positionInBlock();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: o->removeSelectedText();
                stack[0].type = PlastiQ::Void; break;
        case 54: o->select(QTextCursor::SelectionType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 55: o->selectedTableCells(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 56: { QString _r = o->selectedText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 57: { /* COPY OBJECT */
            QTextDocumentFragment *_r = new QTextDocumentFragment(o->selection());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextDocumentFragment";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: { int _r = o->selectionEnd();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 59: { int _r = o->selectionStart();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 60: o->setBlockCharFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 61: o->setBlockFormat((*reinterpret_cast< QTextBlockFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 62: o->setCharFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 63: o->setKeepPositionOnInsert(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 64: o->setPosition(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 65: o->setPosition(stack[1].s_int,
                    QTextCursor::MoveMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 66: o->setVerticalMovementX(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 67: o->setVisualNavigation(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 68: o->swap((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 69: { int _r = o->verticalMovementX();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 70: { bool _r = o->visualNavigation();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTextCursor *o = reinterpret_cast<QTextCursor*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextCursor::~PlastiQQTextCursor() {
    QTextCursor* o = reinterpret_cast<QTextCursor*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
