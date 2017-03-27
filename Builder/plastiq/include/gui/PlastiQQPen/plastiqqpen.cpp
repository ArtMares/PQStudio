#include "plastiqmethod.h"
#include "plastiqqpen.h"

#include <QPen> 
#include <QBrush>
#include <QColor>

QHash<QByteArray, PlastiQMethod> PlastiQQPen::plastiqConstructors = {
    { "QPen()", { "QPen", "", "QPen*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPen(enum)", { "QPen", "Qt::PenStyle", "QPen*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPen(QColor&)", { "QPen", "QColor&", "QPen*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPen(QBrush&,double)", { "QPen", "QBrush&,qreal", "QPen*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPen(QBrush&,double,enum)", { "QPen", "QBrush&,qreal,Qt::PenStyle", "QPen*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPen(QBrush&,double,enum,enum)", { "QPen", "QBrush&,qreal,Qt::PenStyle,Qt::PenCapStyle", "QPen*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPen(QBrush&,double,enum,enum,enum)", { "QPen", "QBrush&,qreal,Qt::PenStyle,Qt::PenCapStyle,Qt::PenJoinStyle", "QPen*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPen(QPen&)", { "QPen", "QPen&", "QPen*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPen(QPen&&)", { "QPen", "QPen&&", "QPen*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPen::plastiqMethods = {
    { "brush()", { "brush", "", "QBrush", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capStyle()", { "capStyle", "", "Qt::PenCapStyle", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color()", { "color", "", "QColor", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dashOffset()", { "dashOffset", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCosmetic()", { "isCosmetic", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSolid()", { "isSolid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "joinStyle()", { "joinStyle", "", "Qt::PenJoinStyle", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "miterLimit()", { "miterLimit", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCapStyle(enum)", { "setCapStyle", "Qt::PenCapStyle", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(QColor&)", { "setColor", "QColor&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCosmetic(bool)", { "setCosmetic", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDashOffset(double)", { "setDashOffset", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDashPattern(QVector<qreal>&)", { "setDashPattern", "QVector<qreal>&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setJoinStyle(enum)", { "setJoinStyle", "Qt::PenJoinStyle", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMiterLimit(double)", { "setMiterLimit", "qreal", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyle(enum)", { "setStyle", "Qt::PenStyle", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(int)", { "setWidth", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidthF(double)", { "setWidthF", "qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "Qt::PenStyle", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QPen&)", { "swap", "QPen&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widthF()", { "widthF", "", "qreal", 22, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPen::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPen::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPen::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPen::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPen::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPen::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPen", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPen::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPen::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPen *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPen(); break;
        case 1: o = new QPen(Qt::PenStyle(stack[1].s_int64)); break;
        case 2: o = new QPen((*reinterpret_cast< QColor(*) >(stack[1].s_voidp))); break;
        case 3: o = new QPen((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)),
                    stack[2].s_double); break;
        case 4: o = new QPen((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    Qt::PenStyle(stack[3].s_int64)); break;
        case 5: o = new QPen((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    Qt::PenStyle(stack[3].s_int64),
                    Qt::PenCapStyle(stack[4].s_int64)); break;
        case 6: o = new QPen((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    Qt::PenStyle(stack[3].s_int64),
                    Qt::PenCapStyle(stack[4].s_int64),
                    Qt::PenJoinStyle(stack[5].s_int64)); break;
        case 7: o = new QPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp))); break;
        case 8: o = new QPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPen *p = new PlastiQQPen();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPen *p = new PlastiQQPen();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 23) {
            id -= 23;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPen *o = sc ? Q_NULLPTR : reinterpret_cast<QPen*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->capStyle(); // HACK for Qt::PenCapStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { double _r = o->dashOffset();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { bool _r = o->isCosmetic();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isSolid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { qint64 _r = o->joinStyle(); // HACK for Qt::PenJoinStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { double _r = o->miterLimit();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setCapStyle(Qt::PenCapStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setCosmetic(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setDashOffset(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setDashPattern((*reinterpret_cast< QVector<qreal>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setJoinStyle(Qt::PenJoinStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setMiterLimit(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setStyle(Qt::PenStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setWidthF(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: { qint64 _r = o->style(); // HACK for Qt::PenStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: o->swap((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: { int _r = o->width();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { double _r = o->widthF();
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
        QPen *o = reinterpret_cast<QPen*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPen::~PlastiQQPen() {
    QPen* o = reinterpret_cast<QPen*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
