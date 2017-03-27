#include "plastiqmethod.h"
#include "plastiqqpainterpath.h"

#include <QPainterPath> 
#include <QRectF>
#include <QPointF>
#include <QPolygonF>

QHash<QByteArray, PlastiQMethod> PlastiQQPainterPath::plastiqConstructors = {
    { "QPainterPath()", { "QPainterPath", "", "QPainterPath*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPainterPath(QPointF&)", { "QPainterPath", "QPointF&", "QPainterPath*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPainterPath(QPainterPath&)", { "QPainterPath", "QPainterPath&", "QPainterPath*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPainterPath::plastiqMethods = {
    { "addEllipse(QRectF&)", { "addEllipse", "QRectF&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addEllipse(double,double,double,double)", { "addEllipse", "qreal,qreal,qreal,qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addEllipse(QPointF&,double,double)", { "addEllipse", "QPointF&,qreal,qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPath(QPainterPath&)", { "addPath", "QPainterPath&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPolygon(QPolygonF&)", { "addPolygon", "QPolygonF&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRect(QRectF&)", { "addRect", "QRectF&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRect(double,double,double,double)", { "addRect", "qreal,qreal,qreal,qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRegion(QRegion&)", { "addRegion", "QRegion&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRoundedRect(QRectF&,double,double)", { "addRoundedRect", "QRectF&,qreal,qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRoundedRect(QRectF&,double,double,enum)", { "addRoundedRect", "QRectF&,qreal,qreal,Qt::SizeMode", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRoundedRect(double,double,double,double,double,double)", { "addRoundedRect", "qreal,qreal,qreal,qreal,qreal,qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRoundedRect(double,double,double,double,double,double,enum)", { "addRoundedRect", "qreal,qreal,qreal,qreal,qreal,qreal,Qt::SizeMode", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addText(QPointF&,QFont&,QString)", { "addText", "QPointF&,QFont&,QString&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addText(double,double,QFont&,QString)", { "addText", "qreal,qreal,QFont&,QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "angleAtPercent(double)", { "angleAtPercent", "qreal", "qreal", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arcMoveTo(QRectF&,double)", { "arcMoveTo", "QRectF&,qreal", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arcMoveTo(double,double,double,double,double)", { "arcMoveTo", "qreal,qreal,qreal,qreal,qreal", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arcTo(QRectF&,double,double)", { "arcTo", "QRectF&,qreal,qreal", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "arcTo(double,double,double,double,double,double)", { "arcTo", "qreal,qreal,qreal,qreal,qreal,qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect()", { "boundingRect", "", "QRectF", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closeSubpath()", { "closeSubpath", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "connectPath(QPainterPath&)", { "connectPath", "QPainterPath&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QPointF&)", { "contains", "QPointF&", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRectF&)", { "contains", "QRectF&", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QPainterPath&)", { "contains", "QPainterPath&", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "controlPointRect()", { "controlPointRect", "", "QRectF", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cubicTo(QPointF&,QPointF&,QPointF&)", { "cubicTo", "QPointF&,QPointF&,QPointF&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cubicTo(double,double,double,double,double,double)", { "cubicTo", "qreal,qreal,qreal,qreal,qreal,qreal", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentPosition()", { "currentPosition", "", "QPointF", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elementAt(int)", { "elementAt", "int", "QPainterPath::Element", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elementCount()", { "elementCount", "", "int", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRule()", { "fillRule", "", "Qt::FillRule", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersected(QPainterPath&)", { "intersected", "QPainterPath&", "QPainterPath", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersects(QRectF&)", { "intersects", "QRectF&", "bool", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersects(QPainterPath&)", { "intersects", "QPainterPath&", "bool", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "qreal", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineTo(QPointF&)", { "lineTo", "QPointF&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineTo(double,double)", { "lineTo", "qreal,qreal", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTo(QPointF&)", { "moveTo", "QPointF&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTo(double,double)", { "moveTo", "qreal,qreal", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "percentAtLength(double)", { "percentAtLength", "qreal", "qreal", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointAtPercent(double)", { "pointAtPercent", "qreal", "QPointF", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quadTo(QPointF&,QPointF&)", { "quadTo", "QPointF&,QPointF&", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quadTo(double,double,double,double)", { "quadTo", "qreal,qreal,qreal,qreal", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setElementPositionAt(int,double,double)", { "setElementPositionAt", "int,qreal,qreal", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFillRule(enum)", { "setFillRule", "Qt::FillRule", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "simplified()", { "simplified", "", "QPainterPath", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "slopeAtPercent(double)", { "slopeAtPercent", "qreal", "qreal", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subtracted(QPainterPath&)", { "subtracted", "QPainterPath&", "QPainterPath", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QPainterPath&)", { "swap", "QPainterPath&", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFillPolygon(QTransform&)", { "toFillPolygon", "QTransform&", "QPolygonF", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFillPolygon()", { "toFillPolygon", "", "QPolygonF", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFillPolygon(QMatrix&)", { "toFillPolygon", "QMatrix&", "QPolygonF", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toReversed()", { "toReversed", "", "QPainterPath", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(double,double)", { "translate", "qreal,qreal", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QPointF&)", { "translate", "QPointF&", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(double,double)", { "translated", "qreal,qreal", "QPainterPath", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(QPointF&)", { "translated", "QPointF&", "QPainterPath", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "united(QPainterPath&)", { "united", "QPainterPath&", "QPainterPath", 59, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPainterPath::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPainterPath::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPainterPath::plastiqConstants = {

    /* QPainterPath::ElementType */
   { "MoveToElement", QPainterPath::MoveToElement },
   { "LineToElement", QPainterPath::LineToElement },
   { "CurveToElement", QPainterPath::CurveToElement },
   { "CurveToDataElement", QPainterPath::CurveToDataElement },

};

QVector<PlastiQMetaObject*> PlastiQQPainterPath::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPainterPath::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPainterPath::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPainterPath", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPainterPath::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPainterPath::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPainterPath *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPainterPath(); break;
        case 1: o = new QPainterPath((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))); break;
        case 2: o = new QPainterPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPainterPath *p = new PlastiQQPainterPath();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPainterPath *p = new PlastiQQPainterPath();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 60) {
            id -= 60;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPainterPath *o = sc ? Q_NULLPTR : reinterpret_cast<QPainterPath*>(object->plastiq_data());

        switch(id) {
        case 0: o->addEllipse((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addEllipse(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addEllipse((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->addPolygon((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->addRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->addRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->addRegion((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->addRoundedRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->addRoundedRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double,
                    Qt::SizeMode(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->addRoundedRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->addRoundedRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    Qt::SizeMode(stack[7].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->addText((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)),
                    stack[3].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->addText(stack[1].s_double,
                    stack[2].s_double,
                    (*reinterpret_cast< QFont(*) >(stack[3].s_voidp)),
                    stack[4].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: { double _r = o->angleAtPercent(stack[1].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 15: o->arcMoveTo((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->arcMoveTo(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->arcTo((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->arcTo(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: o->closeSubpath();
                stack[0].type = PlastiQ::Void; break;
        case 21: o->connectPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: { bool _r = o->contains((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->contains((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r = o->contains((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->controlPointRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: o->cubicTo((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->cubicTo(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 28: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->currentPosition());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: /* o->elementAt(stack[1].s_int) | ret: `QPainterPath::Element` */ break;
        case 30: { int _r = o->elementCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 31: { qint64 _r = o->fillRule(); // HACK for Qt::FillRule 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 32: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->intersected((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { bool _r = o->intersects((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 34: { bool _r = o->intersects((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 35: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 36: { double _r = o->length();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 37: o->lineTo((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->lineTo(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->moveTo((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->moveTo(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 41: { double _r = o->percentAtLength(stack[1].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 42: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->pointAtPercent(stack[1].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 43: o->quadTo((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->quadTo(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setElementPositionAt(stack[1].s_int,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setFillRule(Qt::FillRule(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 47: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->simplified());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 48: { double _r = o->slopeAtPercent(stack[1].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 49: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->subtracted((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 50: o->swap((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 51: /* UNSUPPORTED_RETURN_VALUE o->toFillPolygon((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 52: /* UNSUPPORTED_RETURN_VALUE o->toFillPolygon() | ret: `QPolygonF` */ break;
        case 53: /* UNSUPPORTED_RETURN_VALUE o->toFillPolygon((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 54: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->toReversed());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 55: o->translate(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 56: o->translate((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 57: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->translated(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->translated((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->united((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
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
        QPainterPath *o = reinterpret_cast<QPainterPath*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPainterPath::~PlastiQQPainterPath() {
    QPainterPath* o = reinterpret_cast<QPainterPath*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
