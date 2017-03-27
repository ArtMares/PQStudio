#include "plastiqmethod.h"
#include "plastiqqpaintenginestate.h"

#include <QPaintEngineState> 
#include <QBrush>
#include <QPointF>
#include <QPainterPath>
#include <QRegion>
#include <QFont>
#include <QPainter>
#include <QPen>
#include <QTransform>

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEngineState::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEngineState::plastiqMethods = {
    { "backgroundBrush()", { "backgroundBrush", "", "QBrush", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundMode()", { "backgroundMode", "", "Qt::BGMode", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brushNeedsResolving()", { "brushNeedsResolving", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brushOrigin()", { "brushOrigin", "", "QPointF", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clipOperation()", { "clipOperation", "", "Qt::ClipOperation", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clipPath()", { "clipPath", "", "QPainterPath", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clipRegion()", { "clipRegion", "", "QRegion", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compositionMode()", { "compositionMode", "", "QPainter::CompositionMode", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isClipEnabled()", { "isClipEnabled", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opacity()", { "opacity", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "painter()", { "painter", "", "QPainter*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "penNeedsResolving()", { "penNeedsResolving", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "renderHints()", { "renderHints", "", "QPainter::RenderHints", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QPaintEngine::DirtyFlags", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transform()", { "transform", "", "QTransform", 17, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEngineState::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPaintEngineState::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPaintEngineState::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPaintEngineState::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPaintEngineState::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPaintEngineState::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPaintEngineState", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPaintEngineState::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPaintEngineState::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPaintEngineState *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPaintEngineState *p = new PlastiQQPaintEngineState();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPaintEngineState *p = new PlastiQQPaintEngineState();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPaintEngineState *o = sc ? Q_NULLPTR : reinterpret_cast<QPaintEngineState*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->backgroundBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->backgroundMode(); // HACK for Qt::BGMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { bool _r = o->brushNeedsResolving();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->brushOrigin());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { qint64 _r = o->clipOperation(); // HACK for Qt::ClipOperation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->clipPath());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->clipRegion());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { qint64 _r = o->compositionMode(); // HACK for QPainter::CompositionMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { bool _r = o->isClipEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { double _r = o->opacity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { QPainter* _r = o->painter();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPainter"; } break;
        case 13: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { bool _r = o->penNeedsResolving();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { qint64 _r = o->renderHints(); // HACK for QPainter::RenderHints 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { qint64 _r = o->state(); // HACK for QPaintEngine::DirtyFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->transform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
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
        QPaintEngineState *o = reinterpret_cast<QPaintEngineState*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPaintEngineState::~PlastiQQPaintEngineState() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
