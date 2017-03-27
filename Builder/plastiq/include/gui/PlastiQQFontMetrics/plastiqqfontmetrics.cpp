#include "plastiqmethod.h"
#include "plastiqqfontmetrics.h"

#include <QFontMetrics> 
#include <QRect>
#include <QString>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQFontMetrics::plastiqConstructors = {
    { "QFontMetrics(QFont&)", { "QFontMetrics", "QFont&", "QFontMetrics*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontMetrics(QFont&,QPaintDevice*)", { "QFontMetrics", "QFont&,QPaintDevice*", "QFontMetrics*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontMetrics(QFontMetrics&)", { "QFontMetrics", "QFontMetrics&", "QFontMetrics*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontMetrics::plastiqMethods = {
    { "ascent()", { "ascent", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "averageCharWidth()", { "averageCharWidth", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QChar)", { "boundingRect", "QChar", "QRect", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QString)", { "boundingRect", "QString&", "QRect", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRect&,int,QString)", { "boundingRect", "QRect&,int,QString&", "QRect", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRect&,int,QString,int)", { "boundingRect", "QRect&,int,QString&,int", "QRect", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRect&,int,QString,int,int*)", { "boundingRect", "QRect&,int,QString&,int,int*", "QRect", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(int,int,int,int,int,QString)", { "boundingRect", "int,int,int,int,int,QString&", "QRect", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(int,int,int,int,int,QString,int)", { "boundingRect", "int,int,int,int,int,QString&,int", "QRect", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(int,int,int,int,int,QString,int,int*)", { "boundingRect", "int,int,int,int,int,QString&,int,int*", "QRect", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capHeight()", { "capHeight", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "descent()", { "descent", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elidedText(QString,enum,int)", { "elidedText", "QString&,Qt::TextElideMode,int", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elidedText(QString,enum,int,int)", { "elidedText", "QString&,Qt::TextElideMode,int,int", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inFont(QChar)", { "inFont", "QChar", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inFontUcs4(long)", { "inFontUcs4", "uint", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leading()", { "leading", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftBearing(QChar)", { "leftBearing", "QChar", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineSpacing()", { "lineSpacing", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineWidth()", { "lineWidth", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxWidth()", { "maxWidth", "", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minLeftBearing()", { "minLeftBearing", "", "int", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minRightBearing()", { "minRightBearing", "", "int", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overlinePos()", { "overlinePos", "", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightBearing(QChar)", { "rightBearing", "QChar", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size(int,QString)", { "size", "int,QString&", "QSize", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size(int,QString,int)", { "size", "int,QString&,int", "QSize", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size(int,QString,int,int*)", { "size", "int,QString&,int,int*", "QSize", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "strikeOutPos()", { "strikeOutPos", "", "int", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QFontMetrics&)", { "swap", "QFontMetrics&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tightBoundingRect(QString)", { "tightBoundingRect", "QString&", "QRect", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "underlinePos()", { "underlinePos", "", "int", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width(QString)", { "width", "QString&", "int", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width(QString,int)", { "width", "QString&,int", "int", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width(QChar)", { "width", "QChar", "int", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xHeight()", { "xHeight", "", "int", 36, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontMetrics::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFontMetrics::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFontMetrics::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFontMetrics::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQFontMetrics::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFontMetrics::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QFontMetrics", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFontMetrics::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFontMetrics::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFontMetrics *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFontMetrics((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); break;
        case 1: o = new QFontMetrics((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QPaintDevice*>(stack[2].s_voidp)); break;
        case 2: o = new QFontMetrics((*reinterpret_cast< QFontMetrics(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFontMetrics *p = new PlastiQQFontMetrics();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFontMetrics *p = new PlastiQQFontMetrics();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 37) {
            id -= 37;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFontMetrics *o = sc ? Q_NULLPTR : reinterpret_cast<QFontMetrics*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->ascent();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->averageCharWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_int,
                    reinterpret_cast<int*>(stack[5].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_string,
                    stack[7].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_string,
                    stack[7].s_int,
                    reinterpret_cast<int*>(stack[8].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { int _r = o->capHeight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { int _r = o->descent();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { QString _r = o->elidedText(stack[1].s_string,
                    Qt::TextElideMode(stack[2].s_int64),
                    stack[3].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { QString _r = o->elidedText(stack[1].s_string,
                    Qt::TextElideMode(stack[2].s_int64),
                    stack[3].s_int,
                    stack[4].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { bool _r = o->inFont((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->inFontUcs4(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { int _r = o->leading();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { int _r = o->leftBearing((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { int _r = o->lineSpacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { int _r = o->lineWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { int _r = o->maxWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { int _r = o->minLeftBearing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 23: { int _r = o->minRightBearing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 24: { int _r = o->overlinePos();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { int _r = o->rightBearing((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size(stack[1].s_int,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size(stack[1].s_int,
                    stack[2].s_string,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size(stack[1].s_int,
                    stack[2].s_string,
                    stack[3].s_int,
                    reinterpret_cast<int*>(stack[4].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { int _r = o->strikeOutPos();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 30: o->swap((*reinterpret_cast< QFontMetrics(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: { /* COPY OBJECT */
            QRect *_r = new QRect(o->tightBoundingRect(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { int _r = o->underlinePos();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 33: { int _r = o->width(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 34: { int _r = o->width(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 35: { int _r = o->width((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 36: { int _r = o->xHeight();
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
        QFontMetrics *o = reinterpret_cast<QFontMetrics*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQFontMetrics::~PlastiQQFontMetrics() {
    QFontMetrics* o = reinterpret_cast<QFontMetrics*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
