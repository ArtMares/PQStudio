#include "plastiqmethod.h"
#include "plastiqqscatterseries.h"

#include "charts/PlastiQQXYSeries/plastiqqxyseries.h"
#include <QScatterSeries> 
#include <QColor>
#include <QBrush>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQScatterSeries::plastiqConstructors = {
    { "QScatterSeries()", { "QScatterSeries", "", "QScatterSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QScatterSeries(QObject*)", { "QScatterSeries", "QObject*", "QScatterSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScatterSeries::plastiqMethods = {
    { "borderColor()", { "borderColor", "", "QColor", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "markerShape()", { "markerShape", "", "MarkerShape", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "markerSize()", { "markerSize", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBorderColor(QColor&)", { "setBorderColor", "QColor&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMarkerShape(enum)", { "setMarkerShape", "MarkerShape", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMarkerSize(double)", { "setMarkerSize", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScatterSeries::plastiqSignals = {
    { "borderColorChanged(QColor)", { "borderColorChanged", "QColor", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "colorChanged(QColor)", { "colorChanged", "QColor", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "markerShapeChanged(enum)", { "markerShapeChanged", "MarkerShape", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "markerSizeChanged(double)", { "markerSizeChanged", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQScatterSeries::plastiqProperties = {
    { "borderColor", { "borderColor", "QColor", "setBorderColor", "borderColor" } },
    { "brush", { "brush", "QBrush", "setBrush", "brush" } },
    { "color", { "color", "QColor", "setColor", "color" } },
    { "markerShape", { "markerShape", "long", "setMarkerShape", "markerShape" } },
    { "markerSize", { "markerSize", "qreal", "setMarkerSize", "markerSize" } },

};

QHash<QByteArray, long> PlastiQQScatterSeries::plastiqConstants = {

    /* QScatterSeries::MarkerShape */
   { "MarkerShapeCircle", QScatterSeries::MarkerShapeCircle },
   { "MarkerShapeRectangle", QScatterSeries::MarkerShapeRectangle },

};

QVector<PlastiQMetaObject*> PlastiQQScatterSeries::plastiqInherits = { &PlastiQQXYSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQScatterSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQScatterSeries::plastiq_static_metaObject = {
    { &PlastiQQXYSeries::plastiq_static_metaObject, &plastiqInherits, "QScatterSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQScatterSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQScatterSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QScatterSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QScatterSeries(); break;
        case 1: o = new QScatterSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQScatterSeries *p = new PlastiQQScatterSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQScatterSeries *p = new PlastiQQScatterSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQXYSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QScatterSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QScatterSeries*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QColor *_r = new QColor(o->borderColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->markerShape(); // HACK for MarkerShape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { double _r = o->markerSize();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: o->setBorderColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setMarkerShape(QScatterSeries::MarkerShape(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setMarkerSize(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQXYSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QScatterSeries *o = reinterpret_cast<QScatterSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QScatterSeries::borderColorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "borderColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QScatterSeries::colorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "colorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QScatterSeries::markerShapeChanged,
            [=](QScatterSeries::MarkerShape arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "MarkerShape";
                PlastiQ_activate(sender, "markerShapeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QScatterSeries::markerSizeChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "markerSizeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QScatterSeries *o = reinterpret_cast<QScatterSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QScatterSeries *o = reinterpret_cast<QScatterSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QScatterSeries *o = reinterpret_cast<QScatterSeries*>(object->plastiq_data());

        if(className == "QXYSeries") {
            stack[0].s_voidp = static_cast<QXYSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQScatterSeries::~PlastiQQScatterSeries() {
    QScatterSeries* o = reinterpret_cast<QScatterSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
