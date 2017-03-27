#include "plastiqmethod.h"
#include "plastiqqhboxplotmodelmapper.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QHBoxPlotModelMapper> 
#include <QAbstractItemModel>
#include <QBoxPlotSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQHBoxPlotModelMapper::plastiqConstructors = {
    { "QHBoxPlotModelMapper()", { "QHBoxPlotModelMapper", "", "QHBoxPlotModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHBoxPlotModelMapper(QObject*)", { "QHBoxPlotModelMapper", "QObject*", "QHBoxPlotModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHBoxPlotModelMapper::plastiqMethods = {
    { "columnCount()", { "columnCount", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstBoxSetRow()", { "firstBoxSetRow", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstColumn()", { "firstColumn", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastBoxSetRow()", { "lastBoxSetRow", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QBoxPlotSeries*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnCount(int)", { "setColumnCount", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstBoxSetRow(int)", { "setFirstBoxSetRow", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstColumn(int)", { "setFirstColumn", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastBoxSetRow(int)", { "setLastBoxSetRow", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeries(QBoxPlotSeries*)", { "setSeries", "QBoxPlotSeries*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHBoxPlotModelMapper::plastiqSignals = {
    { "columnCountChanged()", { "columnCountChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "firstBoxSetRowChanged()", { "firstBoxSetRowChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "firstColumnChanged()", { "firstColumnChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lastBoxSetRowChanged()", { "lastBoxSetRowChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modelReplaced()", { "modelReplaced", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seriesReplaced()", { "seriesReplaced", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQHBoxPlotModelMapper::plastiqProperties = {
    { "columnCount", { "columnCount", "int", "setColumnCount", "columnCount" } },
    { "firstBoxSetRow", { "firstBoxSetRow", "int", "setFirstBoxSetRow", "firstBoxSetRow" } },
    { "firstColumn", { "firstColumn", "int", "setFirstColumn", "firstColumn" } },
    { "lastBoxSetRow", { "lastBoxSetRow", "int", "setLastBoxSetRow", "lastBoxSetRow" } },
    { "model", { "model", "QAbstractItemModel*", "setModel", "model" } },
    { "series", { "series", "QBoxPlotSeries*", "setSeries", "series" } },

};

QHash<QByteArray, long> PlastiQQHBoxPlotModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHBoxPlotModelMapper::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHBoxPlotModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQHBoxPlotModelMapper::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QHBoxPlotModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHBoxPlotModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHBoxPlotModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHBoxPlotModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHBoxPlotModelMapper(); break;
        case 1: o = new QHBoxPlotModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHBoxPlotModelMapper *p = new PlastiQQHBoxPlotModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHBoxPlotModelMapper *p = new PlastiQQHBoxPlotModelMapper();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHBoxPlotModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QHBoxPlotModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->firstBoxSetRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->firstColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->lastBoxSetRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 5: { QBoxPlotSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QBoxPlotSeries"; } break;
        case 6: o->setColumnCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFirstBoxSetRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFirstColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setLastBoxSetRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setSeries(reinterpret_cast<QBoxPlotSeries*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QHBoxPlotModelMapper *o = reinterpret_cast<QHBoxPlotModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QHBoxPlotModelMapper::columnCountChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "columnCountChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QHBoxPlotModelMapper::firstBoxSetRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstBoxSetRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QHBoxPlotModelMapper::firstColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QHBoxPlotModelMapper::lastBoxSetRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lastBoxSetRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QHBoxPlotModelMapper::modelReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "modelReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QHBoxPlotModelMapper::seriesReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "seriesReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHBoxPlotModelMapper *o = reinterpret_cast<QHBoxPlotModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHBoxPlotModelMapper *o = reinterpret_cast<QHBoxPlotModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHBoxPlotModelMapper *o = reinterpret_cast<QHBoxPlotModelMapper*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHBoxPlotModelMapper::~PlastiQQHBoxPlotModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
