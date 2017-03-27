#include "plastiqmethod.h"
#include "plastiqqtextline.h"

#include <QTextLine> 
#include <QRectF>
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQTextLine::plastiqConstructors = {
    { "QTextLine()", { "QTextLine", "", "QTextLine*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextLine::plastiqMethods = {
    { "ascent()", { "ascent", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorToX(int*)", { "cursorToX", "int*", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorToX(int*,enum)", { "cursorToX", "int*,Edge", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorToX(int)", { "cursorToX", "int", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorToX(int,enum)", { "cursorToX", "int,Edge", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "descent()", { "descent", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "draw(QPainter*,QPointF&)", { "draw", "QPainter*,QPointF&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "draw(QPainter*,QPointF&,const QTextLayout::FormatRange*)", { "draw", "QPainter*,QPointF&,QTextLayout::FormatRange*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalAdvance()", { "horizontalAdvance", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leading()", { "leading", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leadingIncluded()", { "leadingIncluded", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineNumber()", { "lineNumber", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "naturalTextRect()", { "naturalTextRect", "", "QRectF", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "naturalTextWidth()", { "naturalTextWidth", "", "qreal", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "QPointF", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rect()", { "rect", "", "QRectF", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeadingIncluded(bool)", { "setLeadingIncluded", "bool", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineWidth(double)", { "setLineWidth", "qreal", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNumColumns(int)", { "setNumColumns", "int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNumColumns(int,double)", { "setNumColumns", "int,qreal", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(QPointF&)", { "setPosition", "QPointF&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textLength()", { "textLength", "", "int", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textStart()", { "textStart", "", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "qreal", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "qreal", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xToCursor(double)", { "xToCursor", "qreal", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xToCursor(double,enum)", { "xToCursor", "qreal,CursorPosition", "int", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "qreal", 29, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextLine::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextLine::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextLine::plastiqConstants = {

    /* QTextLine::CursorPosition */
   { "CursorBetweenCharacters", QTextLine::CursorBetweenCharacters },
   { "CursorOnCharacter", QTextLine::CursorOnCharacter },

    /* QTextLine::Edge */
   { "Leading", QTextLine::Leading },
   { "Trailing", QTextLine::Trailing },

};

QVector<PlastiQMetaObject*> PlastiQQTextLine::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextLine::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextLine::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextLine", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextLine::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextLine::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextLine *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextLine(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextLine *p = new PlastiQQTextLine();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextLine *p = new PlastiQQTextLine();
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
        QTextLine *o = sc ? Q_NULLPTR : reinterpret_cast<QTextLine*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->ascent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->cursorToX(reinterpret_cast<int*>(stack[1].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->cursorToX(reinterpret_cast<int*>(stack[1].s_voidp),
                    QTextLine::Edge(stack[2].s_int64));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->cursorToX(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->cursorToX(stack[1].s_int,
                    QTextLine::Edge(stack[2].s_int64));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { double _r = o->descent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: o->draw(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->draw(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    reinterpret_cast<const QTextLayout::FormatRange*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: { double _r = o->height();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { double _r = o->horizontalAdvance();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { double _r = o->leading();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { bool _r = o->leadingIncluded();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { int _r = o->lineNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->naturalTextRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { double _r = o->naturalTextWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->position());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: o->setLeadingIncluded(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setLineWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setNumColumns(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setNumColumns(stack[1].s_int,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setPosition((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: { int _r = o->textLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 24: { int _r = o->textStart();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { double _r = o->width();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 26: { double _r = o->x();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 27: { int _r = o->xToCursor(stack[1].s_double);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: { int _r = o->xToCursor(stack[1].s_double,
                    QTextLine::CursorPosition(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 29: { double _r = o->y();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QTextLine *o = reinterpret_cast<QTextLine*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextLine::~PlastiQQTextLine() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
