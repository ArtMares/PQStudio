#include "plastiqmethod.h"
#include "plastiqqtextlayout.h"

#include <QTextLayout> 
#include <QRectF>
#include <QTextLine>
#include <QFont>
#include <QPointF>
#include <QString>
#include <QTextOption>

QHash<QByteArray, PlastiQMethod> PlastiQQTextLayout::plastiqConstructors = {
    { "QTextLayout()", { "QTextLayout", "", "QTextLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextLayout(QString)", { "QTextLayout", "QString&", "QTextLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextLayout(QString,QFont&)", { "QTextLayout", "QString&,QFont&", "QTextLayout*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextLayout(QString,QFont&,QPaintDevice*)", { "QTextLayout", "QString&,QFont&,QPaintDevice*", "QTextLayout*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextLayout::plastiqMethods = {
    { "beginLayout()", { "beginLayout", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect()", { "boundingRect", "", "QRectF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cacheEnabled()", { "cacheEnabled", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearFormats()", { "clearFormats", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearLayout()", { "clearLayout", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createLine()", { "createLine", "", "QTextLine", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorMoveStyle()", { "cursorMoveStyle", "", "Qt::CursorMoveStyle", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawCursor(QPainter*,QPointF&,int,int)", { "drawCursor", "QPainter*,QPointF&,int,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawCursor(QPainter*,QPointF&,int)", { "drawCursor", "QPainter*,QPointF&,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endLayout()", { "endLayout", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValidCursorPosition(int)", { "isValidCursorPosition", "int", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftCursorPosition(int)", { "leftCursorPosition", "int", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineAt(int)", { "lineAt", "int", "QTextLine", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineCount()", { "lineCount", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineForTextPosition(int)", { "lineForTextPosition", "int", "QTextLine", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumWidth()", { "maximumWidth", "", "qreal", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumWidth()", { "minimumWidth", "", "qreal", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextCursorPosition(int)", { "nextCursorPosition", "int", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextCursorPosition(int,enum)", { "nextCursorPosition", "int,CursorMode", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "QPointF", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preeditAreaPosition()", { "preeditAreaPosition", "", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preeditAreaText()", { "preeditAreaText", "", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "previousCursorPosition(int)", { "previousCursorPosition", "int", "int", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "previousCursorPosition(int,enum)", { "previousCursorPosition", "int,CursorMode", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightCursorPosition(int)", { "rightCursorPosition", "int", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCacheEnabled(bool)", { "setCacheEnabled", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursorMoveStyle(enum)", { "setCursorMoveStyle", "Qt::CursorMoveStyle", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(QPointF&)", { "setPosition", "QPointF&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPreeditArea(int,QString)", { "setPreeditArea", "int,QString&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextOption(QTextOption&)", { "setTextOption", "QTextOption&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textOption()", { "textOption", "", "const QTextOption&", 34, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextLayout::plastiqConstants = {

    /* QTextLayout::CursorMode */
   { "SkipCharacters", QTextLayout::SkipCharacters },
   { "SkipWords", QTextLayout::SkipWords },

};

QVector<PlastiQMetaObject*> PlastiQQTextLayout::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextLayout::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextLayout::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextLayout(); break;
        case 1: o = new QTextLayout(stack[1].s_string); break;
        case 2: o = new QTextLayout(stack[1].s_string,
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp))); break;
        case 3: o = new QTextLayout(stack[1].s_string,
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QPaintDevice*>(stack[3].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextLayout *p = new PlastiQQTextLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextLayout *p = new PlastiQQTextLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 35) {
            id -= 35;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QTextLayout*>(object->plastiq_data());

        switch(id) {
        case 0: o->beginLayout();
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->cacheEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->clearFormats();
                stack[0].type = PlastiQ::Void; break;
        case 4: o->clearLayout();
                stack[0].type = PlastiQ::Void; break;
        case 5: { /* COPY OBJECT */
            QTextLine *_r = new QTextLine(o->createLine());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextLine";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { qint64 _r = o->cursorMoveStyle(); // HACK for Qt::CursorMoveStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: o->drawCursor(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->drawCursor(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->endLayout();
                stack[0].type = PlastiQ::Void; break;
        case 10: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { bool _r = o->isValidCursorPosition(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { int _r = o->leftCursorPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { /* COPY OBJECT */
            QTextLine *_r = new QTextLine(o->lineAt(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextLine";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { int _r = o->lineCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { /* COPY OBJECT */
            QTextLine *_r = new QTextLine(o->lineForTextPosition(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextLine";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { double _r = o->maximumWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 17: { double _r = o->minimumWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 18: { int _r = o->nextCursorPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { int _r = o->nextCursorPosition(stack[1].s_int,
                    QTextLayout::CursorMode(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->position());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { int _r = o->preeditAreaPosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { QString _r = o->preeditAreaText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: { int _r = o->previousCursorPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 24: { int _r = o->previousCursorPosition(stack[1].s_int,
                    QTextLayout::CursorMode(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { int _r = o->rightCursorPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: o->setCacheEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setCursorMoveStyle(Qt::CursorMoveStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setPosition((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setPreeditArea(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setTextOption((*reinterpret_cast< QTextOption(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 34: { /* COPY OBJECT */
            QTextOption *_r = new QTextOption(o->textOption());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextOption";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QTextLayout *o = reinterpret_cast<QTextLayout*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextLayout::~PlastiQQTextLayout() {
    QTextLayout* o = reinterpret_cast<QTextLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
