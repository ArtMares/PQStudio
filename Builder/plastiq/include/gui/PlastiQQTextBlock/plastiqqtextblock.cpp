#include "plastiqmethod.h"
#include "plastiqqtextblock.h"

#include <QTextBlock> 
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QTextLayout>
#include <QString>
#include <QTextList>
#include <QTextBlockUserData>

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlock::plastiqConstructors = {
    { "QTextBlock(QTextBlock&)", { "QTextBlock", "QTextBlock&", "QTextBlock*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlock::plastiqMethods = {
    { "begin()", { "begin", "", "iterator", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockFormat()", { "blockFormat", "", "QTextBlockFormat", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockFormatIndex()", { "blockFormatIndex", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blockNumber()", { "blockNumber", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "charFormat()", { "charFormat", "", "QTextCharFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "charFormatIndex()", { "charFormatIndex", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearLayout()", { "clearLayout", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(int)", { "contains", "int", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "document()", { "document", "", "const QTextDocument*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "iterator", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstLineNumber()", { "firstLineNumber", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layout()", { "layout", "", "QTextLayout*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineCount()", { "lineCount", "", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "next()", { "next", "", "QTextBlock", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "previous()", { "previous", "", "QTextBlock", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "revision()", { "revision", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineCount(int)", { "setLineCount", "int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRevision(int)", { "setRevision", "int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUserData(QTextBlockUserData*)", { "setUserData", "QTextBlockUserData*", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUserState(int)", { "setUserState", "int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textDirection()", { "textDirection", "", "Qt::LayoutDirection", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textList()", { "textList", "", "QTextList*", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "userData()", { "userData", "", "QTextBlockUserData*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "userState()", { "userState", "", "int", 29, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlock::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextBlock::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextBlock::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextBlock::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextBlock::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextBlock::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextBlock", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextBlock::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextBlock::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextBlock *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextBlock((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextBlock *p = new PlastiQQTextBlock();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextBlock *p = new PlastiQQTextBlock();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 30) {
            id -= 30;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextBlock *o = sc ? Q_NULLPTR : reinterpret_cast<QTextBlock*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->begin() | ret: `iterator` (INTERNAL CLASS) */ break;
        case 1: { /* COPY OBJECT */
            QTextBlockFormat *_r = new QTextBlockFormat(o->blockFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlockFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->blockFormatIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->blockNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->charFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { int _r = o->charFormatIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->clearLayout();
                stack[0].type = PlastiQ::Void; break;
        case 7: { bool _r = o->contains(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { QTextDocument* _r = const_cast<QTextDocument*>(o->document());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 9: /* o->end() | ret: `iterator` (INTERNAL CLASS) */ break;
        case 10: { int _r = o->firstLineNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { QTextLayout* _r = o->layout();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextLayout"; } break;
        case 14: { int _r = o->length();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { int _r = o->lineCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->next());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { int _r = o->position();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { /* COPY OBJECT */
            QTextBlock *_r = new QTextBlock(o->previous());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlock";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { int _r = o->revision();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: o->setLineCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setRevision(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setUserData(reinterpret_cast<QTextBlockUserData*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setUserState(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 26: { qint64 _r = o->textDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 27: { QTextList* _r = o->textList();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextList"; } break;
        case 28: { QTextBlockUserData* _r = o->userData();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTextBlockUserData"; } break;
        case 29: { int _r = o->userState();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QTextBlock *o = reinterpret_cast<QTextBlock*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextBlock::~PlastiQQTextBlock() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
