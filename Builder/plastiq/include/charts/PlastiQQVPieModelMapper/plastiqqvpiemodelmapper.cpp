#include "plastiqmethod.h"
#include "plastiqqvpiemodelmapper.h"

#include <QVPieModelMapper> 
#include <QAbstractItemModel>
#include <QPieSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQVPieModelMapper::plastiqConstructors = {
    { "QVPieModelMapper()", { "QVPieModelMapper", "", "QVPieModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVPieModelMapper(QObject*)", { "QVPieModelMapper", "QObject*", "QVPieModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVPieModelMapper::plastiqMethods = {
    { "firstRow()", { "firstRow", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsColumn()", { "labelsColumn", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QPieSeries*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstRow(int)", { "setFirstRow", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsColumn(int)", { "setLabelsColumn", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowCount(int)", { "setRowCount", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeries(QPieSeries*)", { "setSeries", "QPieSeries*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValuesColumn(int)", { "setValuesColumn", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valuesColumn()", { "valuesColumn", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVPieModelMapper::plastiqSignals = {
    { "firstRowChanged()", { "firstRowChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsColumnChanged()", { "labelsColumnChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modelReplaced()", { "modelReplaced", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rowCountChanged()", { "rowCountChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seriesReplaced()", { "seriesReplaced", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valuesColumnChanged()", { "valuesColumnChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVPieModelMapper::plastiqProperties = {
    { "firstRow", { "firstRow", "int", "setFirstRow", "firstRow" } },
    { "labelsColumn", { "labelsColumn", "int", "setLabelsColumn", "labelsColumn" } },
    { "model", { "model", "QAbstractItemModel*", "setModel", "model" } },
    { "rowCount", { "rowCount", "int", "setRowCount", "rowCount" } },
    { "series", { "series", "QPieSeries*", "setSeries", "series" } },
    { "valuesColumn", { "valuesColumn", "int", "setValuesColumn", "valuesColumn" } },

};

QHash<QByteArray, long> PlastiQQVPieModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVPieModelMapper::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVPieModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVPieModelMapper::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVPieModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVPieModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVPieModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVPieModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVPieModelMapper(); break;
        case 1: o = new QVPieModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVPieModelMapper *p = new PlastiQQVPieModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVPieModelMapper *p = new PlastiQQVPieModelMapper();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVPieModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QVPieModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->firstRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->labelsColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 3: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QPieSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPieSeries"; } break;
        case 5: o->setFirstRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setLabelsColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setRowCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setSeries(reinterpret_cast<QPieSeries*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setValuesColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: { int _r = o->valuesColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        QVPieModelMapper *o = reinterpret_cast<QVPieModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVPieModelMapper::firstRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QVPieModelMapper::labelsColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelsColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QVPieModelMapper::modelReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "modelReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QVPieModelMapper::rowCountChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "rowCountChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QVPieModelMapper::seriesReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "seriesReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QVPieModelMapper::valuesColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "valuesColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVPieModelMapper *o = reinterpret_cast<QVPieModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVPieModelMapper *o = reinterpret_cast<QVPieModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVPieModelMapper *o = reinterpret_cast<QVPieModelMapper*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVPieModelMapper::~PlastiQQVPieModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
