#include "plastiqmethod.h"
#include "plastiqqhpiemodelmapper.h"

#include <QHPieModelMapper> 
#include <QAbstractItemModel>
#include <QPieSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQHPieModelMapper::plastiqConstructors = {
    { "QHPieModelMapper()", { "QHPieModelMapper", "", "QHPieModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHPieModelMapper(QObject*)", { "QHPieModelMapper", "QObject*", "QHPieModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHPieModelMapper::plastiqMethods = {
    { "columnCount()", { "columnCount", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstColumn()", { "firstColumn", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsRow()", { "labelsRow", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QPieSeries*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnCount(int)", { "setColumnCount", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstColumn(int)", { "setFirstColumn", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsRow(int)", { "setLabelsRow", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeries(QPieSeries*)", { "setSeries", "QPieSeries*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValuesRow(int)", { "setValuesRow", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valuesRow()", { "valuesRow", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHPieModelMapper::plastiqSignals = {
    { "columnCountChanged()", { "columnCountChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "firstColumnChanged()", { "firstColumnChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsRowChanged()", { "labelsRowChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modelReplaced()", { "modelReplaced", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seriesReplaced()", { "seriesReplaced", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valuesRowChanged()", { "valuesRowChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQHPieModelMapper::plastiqProperties = {
    { "columnCount", { "columnCount", "int", "setColumnCount", "columnCount" } },
    { "firstColumn", { "firstColumn", "int", "setFirstColumn", "firstColumn" } },
    { "labelsRow", { "labelsRow", "int", "setLabelsRow", "labelsRow" } },
    { "model", { "model", "QAbstractItemModel*", "setModel", "model" } },
    { "series", { "series", "QPieSeries*", "setSeries", "series" } },
    { "valuesRow", { "valuesRow", "int", "setValuesRow", "valuesRow" } },

};

QHash<QByteArray, long> PlastiQQHPieModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHPieModelMapper::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQHPieModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQHPieModelMapper::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QHPieModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHPieModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHPieModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHPieModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHPieModelMapper(); break;
        case 1: o = new QHPieModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHPieModelMapper *p = new PlastiQQHPieModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHPieModelMapper *p = new PlastiQQHPieModelMapper();
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
        QHPieModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QHPieModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->firstColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->labelsRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 4: { QPieSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPieSeries"; } break;
        case 5: o->setColumnCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setFirstColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setLabelsRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setSeries(reinterpret_cast<QPieSeries*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setValuesRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: { int _r = o->valuesRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        QHPieModelMapper *o = reinterpret_cast<QHPieModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QHPieModelMapper::columnCountChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "columnCountChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QHPieModelMapper::firstColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QHPieModelMapper::labelsRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelsRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QHPieModelMapper::modelReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "modelReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QHPieModelMapper::seriesReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "seriesReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QHPieModelMapper::valuesRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "valuesRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHPieModelMapper *o = reinterpret_cast<QHPieModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHPieModelMapper *o = reinterpret_cast<QHPieModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHPieModelMapper *o = reinterpret_cast<QHPieModelMapper*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQHPieModelMapper::~PlastiQQHPieModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
