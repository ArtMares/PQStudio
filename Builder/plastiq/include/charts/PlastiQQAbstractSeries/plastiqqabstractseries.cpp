#include "plastiqmethod.h"
#include "plastiqqabstractseries.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractSeries> 
#include <QChart>
#include <QString>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSeries::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSeries::plastiqMethods = {
    { "attachAxis(QAbstractAxis*)", { "attachAxis", "QAbstractAxis*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "chart()", { "chart", "", "QChart*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "detachAxis(QAbstractAxis*)", { "detachAxis", "QAbstractAxis*", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hide()", { "hide", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opacity()", { "opacity", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setName(QString)", { "setName", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpacity(double)", { "setOpacity", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUseOpenGL()", { "setUseOpenGL", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUseOpenGL(bool)", { "setUseOpenGL", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible()", { "setVisible", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "show()", { "show", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "SeriesType", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "useOpenGL()", { "useOpenGL", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractSeries::plastiqSignals = {
    { "nameChanged()", { "nameChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "opacityChanged()", { "opacityChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "useOpenGLChanged()", { "useOpenGLChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibleChanged()", { "visibleChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractSeries::plastiqProperties = {
    { "name", { "name", "QString", "setName", "name" } },
    { "opacity", { "opacity", "qreal", "setOpacity", "opacity" } },
    { "type", { "type", "long", "", "type" } },
    { "useOpenGL", { "useOpenGL", "bool", "setUseOpenGL", "useOpenGL" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },

};

QHash<QByteArray, long> PlastiQQAbstractSeries::plastiqConstants = {

    /* QAbstractSeries::SeriesType */
   { "SeriesTypeLine", QAbstractSeries::SeriesTypeLine },
   { "SeriesTypeArea", QAbstractSeries::SeriesTypeArea },
   { "SeriesTypeBar", QAbstractSeries::SeriesTypeBar },
   { "SeriesTypeStackedBar", QAbstractSeries::SeriesTypeStackedBar },
   { "SeriesTypePercentBar", QAbstractSeries::SeriesTypePercentBar },
   { "SeriesTypePie", QAbstractSeries::SeriesTypePie },
   { "SeriesTypeScatter", QAbstractSeries::SeriesTypeScatter },
   { "SeriesTypeSpline", QAbstractSeries::SeriesTypeSpline },
   { "SeriesTypeHorizontalBar", QAbstractSeries::SeriesTypeHorizontalBar },
   { "SeriesTypeHorizontalStackedBar", QAbstractSeries::SeriesTypeHorizontalStackedBar },
   { "SeriesTypeHorizontalPercentBar", QAbstractSeries::SeriesTypeHorizontalPercentBar },
   { "SeriesTypeBoxPlot", QAbstractSeries::SeriesTypeBoxPlot },
   { "SeriesTypeCandlestick", QAbstractSeries::SeriesTypeCandlestick },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractSeries::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractSeries::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractSeries *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractSeries *p = new PlastiQQAbstractSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractSeries *p = new PlastiQQAbstractSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractSeries*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->attachAxis(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QChart* _r = o->chart();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QChart"; } break;
        case 2: { bool _r = o->detachAxis(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->hide();
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { double _r = o->opacity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: o->setName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setOpacity(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setUseOpenGL();
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setUseOpenGL(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setVisible();
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->show();
                stack[0].type = PlastiQ::Void; break;
        case 14: { qint64 _r = o->type(); // HACK for SeriesType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { bool _r = o->useOpenGL();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractSeries *o = reinterpret_cast<QAbstractSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractSeries::nameChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "nameChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractSeries::opacityChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "opacityChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractSeries::useOpenGLChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "useOpenGLChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractSeries::visibleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "visibleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractSeries *o = reinterpret_cast<QAbstractSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractSeries *o = reinterpret_cast<QAbstractSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractSeries *o = reinterpret_cast<QAbstractSeries*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractSeries::~PlastiQQAbstractSeries() {
    QAbstractSeries* o = reinterpret_cast<QAbstractSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
