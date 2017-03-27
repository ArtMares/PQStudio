#include "plastiqmethod.h"
#include "plastiqqpainterpathstroker.h"

#include <QPainterPathStroker> 
#include <QPainterPath>

QHash<QByteArray, PlastiQMethod> PlastiQQPainterPathStroker::plastiqConstructors = {
    { "QPainterPathStroker()", { "QPainterPathStroker", "", "QPainterPathStroker*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPainterPathStroker(QPen&)", { "QPainterPathStroker", "QPen&", "QPainterPathStroker*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPainterPathStroker::plastiqMethods = {
    { "capStyle()", { "capStyle", "", "Qt::PenCapStyle", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createStroke(QPainterPath&)", { "createStroke", "QPainterPath&", "QPainterPath", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "curveThreshold()", { "curveThreshold", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dashOffset()", { "dashOffset", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "joinStyle()", { "joinStyle", "", "Qt::PenJoinStyle", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "miterLimit()", { "miterLimit", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCapStyle(enum)", { "setCapStyle", "Qt::PenCapStyle", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurveThreshold(double)", { "setCurveThreshold", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDashOffset(double)", { "setDashOffset", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDashPattern(enum)", { "setDashPattern", "Qt::PenStyle", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDashPattern(QVector<qreal>&)", { "setDashPattern", "QVector<qreal>&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setJoinStyle(enum)", { "setJoinStyle", "Qt::PenJoinStyle", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMiterLimit(double)", { "setMiterLimit", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(double)", { "setWidth", "qreal", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "qreal", 14, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPainterPathStroker::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPainterPathStroker::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPainterPathStroker::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPainterPathStroker::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPainterPathStroker::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPainterPathStroker::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPainterPathStroker", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPainterPathStroker::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPainterPathStroker::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPainterPathStroker *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPainterPathStroker(); break;
        case 1: o = new QPainterPathStroker((*reinterpret_cast< QPen(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPainterPathStroker *p = new PlastiQQPainterPathStroker();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPainterPathStroker *p = new PlastiQQPainterPathStroker();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPainterPathStroker *o = sc ? Q_NULLPTR : reinterpret_cast<QPainterPathStroker*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->capStyle(); // HACK for Qt::PenCapStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->createStroke((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { double _r = o->curveThreshold();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->dashOffset();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { qint64 _r = o->joinStyle(); // HACK for Qt::PenJoinStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { double _r = o->miterLimit();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: o->setCapStyle(Qt::PenCapStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setCurveThreshold(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setDashOffset(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setDashPattern(Qt::PenStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setDashPattern((*reinterpret_cast< QVector<qreal>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setJoinStyle(Qt::PenJoinStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setMiterLimit(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 14: { double _r = o->width();
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
        QPainterPathStroker *o = reinterpret_cast<QPainterPathStroker*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPainterPathStroker::~PlastiQQPainterPathStroker() {
    QPainterPathStroker* o = reinterpret_cast<QPainterPathStroker*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
