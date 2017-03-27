#include "plastiqmethod.h"
#include "plastiqqfontmetricsf.h"

#include <QFontMetricsF> 
#include <QRectF>
#include <QString>
#include <QSizeF>

QHash<QByteArray, PlastiQMethod> PlastiQQFontMetricsF::plastiqConstructors = {
    { "QFontMetricsF(QFont&)", { "QFontMetricsF", "QFont&", "QFontMetricsF*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontMetricsF(QFont&,QPaintDevice*)", { "QFontMetricsF", "QFont&,QPaintDevice*", "QFontMetricsF*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontMetricsF(QFontMetrics&)", { "QFontMetricsF", "QFontMetrics&", "QFontMetricsF*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontMetricsF(QFontMetricsF&)", { "QFontMetricsF", "QFontMetricsF&", "QFontMetricsF*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontMetricsF::plastiqMethods = {
    { "ascent()", { "ascent", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "averageCharWidth()", { "averageCharWidth", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QString)", { "boundingRect", "QString&", "QRectF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QChar)", { "boundingRect", "QChar", "QRectF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRectF&,int,QString)", { "boundingRect", "QRectF&,int,QString&", "QRectF", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRectF&,int,QString,int)", { "boundingRect", "QRectF&,int,QString&,int", "QRectF", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRectF&,int,QString,int,int*)", { "boundingRect", "QRectF&,int,QString&,int,int*", "QRectF", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capHeight()", { "capHeight", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "descent()", { "descent", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elidedText(QString,enum,double)", { "elidedText", "QString&,Qt::TextElideMode,qreal", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elidedText(QString,enum,double,int)", { "elidedText", "QString&,Qt::TextElideMode,qreal,int", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inFont(QChar)", { "inFont", "QChar", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inFontUcs4(long)", { "inFontUcs4", "uint", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leading()", { "leading", "", "qreal", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftBearing(QChar)", { "leftBearing", "QChar", "qreal", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineSpacing()", { "lineSpacing", "", "qreal", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineWidth()", { "lineWidth", "", "qreal", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxWidth()", { "maxWidth", "", "qreal", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minLeftBearing()", { "minLeftBearing", "", "qreal", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minRightBearing()", { "minRightBearing", "", "qreal", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overlinePos()", { "overlinePos", "", "qreal", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightBearing(QChar)", { "rightBearing", "QChar", "qreal", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size(int,QString)", { "size", "int,QString&", "QSizeF", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size(int,QString,int)", { "size", "int,QString&,int", "QSizeF", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size(int,QString,int,int*)", { "size", "int,QString&,int,int*", "QSizeF", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "strikeOutPos()", { "strikeOutPos", "", "qreal", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QFontMetricsF&)", { "swap", "QFontMetricsF&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tightBoundingRect(QString)", { "tightBoundingRect", "QString&", "QRectF", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "underlinePos()", { "underlinePos", "", "qreal", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width(QString)", { "width", "QString&", "qreal", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width(QChar)", { "width", "QChar", "qreal", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xHeight()", { "xHeight", "", "qreal", 32, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontMetricsF::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFontMetricsF::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFontMetricsF::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFontMetricsF::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQFontMetricsF::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFontMetricsF::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QFontMetricsF", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFontMetricsF::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFontMetricsF::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFontMetricsF *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFontMetricsF((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); break;
        case 1: o = new QFontMetricsF((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QPaintDevice*>(stack[2].s_voidp)); break;
        case 2: o = new QFontMetricsF((*reinterpret_cast< QFontMetrics(*) >(stack[1].s_voidp))); break;
        case 3: o = new QFontMetricsF((*reinterpret_cast< QFontMetricsF(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFontMetricsF *p = new PlastiQQFontMetricsF();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFontMetricsF *p = new PlastiQQFontMetricsF();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 33) {
            id -= 33;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFontMetricsF *o = sc ? Q_NULLPTR : reinterpret_cast<QFontMetricsF*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->ascent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->averageCharWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect((*reinterpret_cast< QChar(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_int,
                    reinterpret_cast<int*>(stack[5].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { double _r = o->capHeight();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { double _r = o->descent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { QString _r = o->elidedText(stack[1].s_string,
                    Qt::TextElideMode(stack[2].s_int64),
                    stack[3].s_double);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { QString _r = o->elidedText(stack[1].s_string,
                    Qt::TextElideMode(stack[2].s_int64),
                    stack[3].s_double,
                    stack[4].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { double _r = o->height();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { bool _r = o->inFont((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->inFontUcs4(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { double _r = o->leading();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 15: { double _r = o->leftBearing((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { double _r = o->lineSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 17: { double _r = o->lineWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 18: { double _r = o->maxWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 19: { double _r = o->minLeftBearing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 20: { double _r = o->minRightBearing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 21: { double _r = o->overlinePos();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 22: { double _r = o->rightBearing((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 23: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->size(stack[1].s_int,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->size(stack[1].s_int,
                    stack[2].s_string,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->size(stack[1].s_int,
                    stack[2].s_string,
                    stack[3].s_int,
                    reinterpret_cast<int*>(stack[4].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { double _r = o->strikeOutPos();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 27: o->swap((*reinterpret_cast< QFontMetricsF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->tightBoundingRect(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { double _r = o->underlinePos();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 30: { double _r = o->width(stack[1].s_string);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 31: { double _r = o->width((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 32: { double _r = o->xHeight();
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
        QFontMetricsF *o = reinterpret_cast<QFontMetricsF*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQFontMetricsF::~PlastiQQFontMetricsF() {
    QFontMetricsF* o = reinterpret_cast<QFontMetricsF*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
