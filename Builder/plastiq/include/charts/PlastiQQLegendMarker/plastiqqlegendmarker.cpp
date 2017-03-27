#include "plastiqmethod.h"
#include "plastiqqlegendmarker.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QLegendMarker> 
#include <QBrush>
#include <QFont>
#include <QString>
#include <QPen>
#include <QAbstractSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQLegendMarker::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQLegendMarker::plastiqMethods = {
    { "brush()", { "brush", "", "QBrush", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "label()", { "label", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelBrush()", { "labelBrush", "", "QBrush", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QAbstractSeries*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabel(QString)", { "setLabel", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelBrush(QBrush&)", { "setLabelBrush", "QBrush&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "LegendMarkerType", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLegendMarker::plastiqSignals = {
    { "brushChanged()", { "brushChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked()", { "clicked", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fontChanged()", { "fontChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(bool)", { "hovered", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelBrushChanged()", { "labelBrushChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelChanged()", { "labelChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "penChanged()", { "penChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibleChanged()", { "visibleChanged", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQLegendMarker::plastiqProperties = {
    { "brush", { "brush", "QBrush", "setBrush", "brush" } },
    { "font", { "font", "QFont", "setFont", "font" } },
    { "label", { "label", "QString", "setLabel", "label" } },
    { "labelBrush", { "labelBrush", "QBrush", "setLabelBrush", "labelBrush" } },
    { "pen", { "pen", "QPen", "setPen", "pen" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },

};

QHash<QByteArray, long> PlastiQQLegendMarker::plastiqConstants = {

    /* QLegendMarker::LegendMarkerType */
   { "LegendMarkerTypeArea", QLegendMarker::LegendMarkerTypeArea },
   { "LegendMarkerTypeBar", QLegendMarker::LegendMarkerTypeBar },
   { "LegendMarkerTypePie", QLegendMarker::LegendMarkerTypePie },
   { "LegendMarkerTypeXY", QLegendMarker::LegendMarkerTypeXY },
   { "LegendMarkerTypeBoxPlot", QLegendMarker::LegendMarkerTypeBoxPlot },
   { "LegendMarkerTypeCandlestick", QLegendMarker::LegendMarkerTypeCandlestick },

};

QVector<PlastiQMetaObject*> PlastiQQLegendMarker::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLegendMarker::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQLegendMarker::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QLegendMarker", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLegendMarker::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLegendMarker::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLegendMarker *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLegendMarker *p = new PlastiQQLegendMarker();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLegendMarker *p = new PlastiQQLegendMarker();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLegendMarker *o = sc ? Q_NULLPTR : reinterpret_cast<QLegendMarker*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { QString _r = o->label();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->labelBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { QAbstractSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractSeries"; } break;
        case 7: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setLabel(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setLabelBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: { qint64 _r = o->type(); // HACK for LegendMarkerType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 8) {
            id -= 8;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLegendMarker *o = reinterpret_cast<QLegendMarker*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QLegendMarker::brushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "brushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QLegendMarker::clicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QLegendMarker::fontChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "fontChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QLegendMarker::hovered,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QLegendMarker::labelBrushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelBrushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QLegendMarker::labelChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QLegendMarker::penChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "penChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QLegendMarker::visibleChanged,
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
        QLegendMarker *o = reinterpret_cast<QLegendMarker*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLegendMarker *o = reinterpret_cast<QLegendMarker*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLegendMarker *o = reinterpret_cast<QLegendMarker*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLegendMarker::~PlastiQQLegendMarker() {
    QLegendMarker* o = reinterpret_cast<QLegendMarker*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
