#include "plastiqmethod.h"
#include "plastiqqvboxplotmodelmapper.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QVBoxPlotModelMapper> 
#include <QAbstractItemModel>
#include <QBoxPlotSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQVBoxPlotModelMapper::plastiqConstructors = {
    { "QVBoxPlotModelMapper()", { "QVBoxPlotModelMapper", "", "QVBoxPlotModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVBoxPlotModelMapper(QObject*)", { "QVBoxPlotModelMapper", "QObject*", "QVBoxPlotModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVBoxPlotModelMapper::plastiqMethods = {
    { "firstBoxSetColumn()", { "firstBoxSetColumn", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstRow()", { "firstRow", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastBoxSetColumn()", { "lastBoxSetColumn", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QBoxPlotSeries*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstBoxSetColumn(int)", { "setFirstBoxSetColumn", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstRow(int)", { "setFirstRow", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastBoxSetColumn(int)", { "setLastBoxSetColumn", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowCount(int)", { "setRowCount", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeries(QBoxPlotSeries*)", { "setSeries", "QBoxPlotSeries*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVBoxPlotModelMapper::plastiqSignals = {
    { "firstBoxSetColumnChanged()", { "firstBoxSetColumnChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "firstRowChanged()", { "firstRowChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lastBoxSetColumnChanged()", { "lastBoxSetColumnChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modelReplaced()", { "modelReplaced", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rowCountChanged()", { "rowCountChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seriesReplaced()", { "seriesReplaced", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVBoxPlotModelMapper::plastiqProperties = {
    { "firstBoxSetColumn", { "firstBoxSetColumn", "int", "setFirstBoxSetColumn", "firstBoxSetColumn" } },
    { "firstRow", { "firstRow", "int", "setFirstRow", "firstRow" } },
    { "lastBoxSetColumn", { "lastBoxSetColumn", "int", "setLastBoxSetColumn", "lastBoxSetColumn" } },
    { "model", { "model", "QAbstractItemModel*", "setModel", "model" } },
    { "rowCount", { "rowCount", "int", "setRowCount", "rowCount" } },
    { "series", { "series", "QBoxPlotSeries*", "setSeries", "series" } },

};

QHash<QByteArray, long> PlastiQQVBoxPlotModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVBoxPlotModelMapper::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVBoxPlotModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVBoxPlotModelMapper::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QVBoxPlotModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVBoxPlotModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVBoxPlotModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVBoxPlotModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVBoxPlotModelMapper(); break;
        case 1: o = new QVBoxPlotModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVBoxPlotModelMapper *p = new PlastiQQVBoxPlotModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVBoxPlotModelMapper *p = new PlastiQQVBoxPlotModelMapper();
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
        QVBoxPlotModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QVBoxPlotModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->firstBoxSetColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->firstRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->lastBoxSetColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 4: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QBoxPlotSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QBoxPlotSeries"; } break;
        case 6: o->setFirstBoxSetColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFirstRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setLastBoxSetColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setRowCount(stack[1].s_int);
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

        QVBoxPlotModelMapper *o = reinterpret_cast<QVBoxPlotModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVBoxPlotModelMapper::firstBoxSetColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstBoxSetColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QVBoxPlotModelMapper::firstRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QVBoxPlotModelMapper::lastBoxSetColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lastBoxSetColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QVBoxPlotModelMapper::modelReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "modelReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QVBoxPlotModelMapper::rowCountChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "rowCountChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QVBoxPlotModelMapper::seriesReplaced,
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
        QVBoxPlotModelMapper *o = reinterpret_cast<QVBoxPlotModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVBoxPlotModelMapper *o = reinterpret_cast<QVBoxPlotModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVBoxPlotModelMapper *o = reinterpret_cast<QVBoxPlotModelMapper*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVBoxPlotModelMapper::~PlastiQQVBoxPlotModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
