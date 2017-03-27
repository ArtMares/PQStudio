#include "plastiqmethod.h"
#include "plastiqqvbarmodelmapper.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QVBarModelMapper> 
#include <QAbstractItemModel>
#include <QAbstractBarSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQVBarModelMapper::plastiqConstructors = {
    { "QVBarModelMapper()", { "QVBarModelMapper", "", "QVBarModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVBarModelMapper(QObject*)", { "QVBarModelMapper", "QObject*", "QVBarModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVBarModelMapper::plastiqMethods = {
    { "firstBarSetColumn()", { "firstBarSetColumn", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstRow()", { "firstRow", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastBarSetColumn()", { "lastBarSetColumn", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QAbstractBarSeries*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstBarSetColumn(int)", { "setFirstBarSetColumn", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstRow(int)", { "setFirstRow", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastBarSetColumn(int)", { "setLastBarSetColumn", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowCount(int)", { "setRowCount", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeries(QAbstractBarSeries*)", { "setSeries", "QAbstractBarSeries*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVBarModelMapper::plastiqSignals = {
    { "firstBarSetColumnChanged()", { "firstBarSetColumnChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "firstRowChanged()", { "firstRowChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lastBarSetColumnChanged()", { "lastBarSetColumnChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modelReplaced()", { "modelReplaced", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rowCountChanged()", { "rowCountChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seriesReplaced()", { "seriesReplaced", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVBarModelMapper::plastiqProperties = {
    { "firstBarSetColumn", { "firstBarSetColumn", "int", "setFirstBarSetColumn", "firstBarSetColumn" } },
    { "firstRow", { "firstRow", "int", "setFirstRow", "firstRow" } },
    { "lastBarSetColumn", { "lastBarSetColumn", "int", "setLastBarSetColumn", "lastBarSetColumn" } },
    { "model", { "model", "QAbstractItemModel*", "setModel", "model" } },
    { "rowCount", { "rowCount", "int", "setRowCount", "rowCount" } },
    { "series", { "series", "QAbstractBarSeries*", "setSeries", "series" } },

};

QHash<QByteArray, long> PlastiQQVBarModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVBarModelMapper::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVBarModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVBarModelMapper::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QVBarModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVBarModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVBarModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVBarModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVBarModelMapper(); break;
        case 1: o = new QVBarModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVBarModelMapper *p = new PlastiQQVBarModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVBarModelMapper *p = new PlastiQQVBarModelMapper();
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
        QVBarModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QVBarModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->firstBarSetColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->firstRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->lastBarSetColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 4: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QAbstractBarSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractBarSeries"; } break;
        case 6: o->setFirstBarSetColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFirstRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setLastBarSetColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setRowCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setSeries(reinterpret_cast<QAbstractBarSeries*>(stack[1].s_voidp));
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

        QVBarModelMapper *o = reinterpret_cast<QVBarModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVBarModelMapper::firstBarSetColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstBarSetColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QVBarModelMapper::firstRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QVBarModelMapper::lastBarSetColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lastBarSetColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QVBarModelMapper::modelReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "modelReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QVBarModelMapper::rowCountChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "rowCountChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QVBarModelMapper::seriesReplaced,
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
        QVBarModelMapper *o = reinterpret_cast<QVBarModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVBarModelMapper *o = reinterpret_cast<QVBarModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVBarModelMapper *o = reinterpret_cast<QVBarModelMapper*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVBarModelMapper::~PlastiQQVBarModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
