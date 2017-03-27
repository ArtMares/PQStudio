#include "plastiqmethod.h"
#include "plastiqqvxymodelmapper.h"

#include <QVXYModelMapper> 
#include <QAbstractItemModel>
#include <QXYSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQVXYModelMapper::plastiqConstructors = {
    { "QVXYModelMapper()", { "QVXYModelMapper", "", "QVXYModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVXYModelMapper(QObject*)", { "QVXYModelMapper", "QObject*", "QVXYModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVXYModelMapper::plastiqMethods = {
    { "firstRow()", { "firstRow", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QXYSeries*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstRow(int)", { "setFirstRow", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowCount(int)", { "setRowCount", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeries(QXYSeries*)", { "setSeries", "QXYSeries*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setXColumn(int)", { "setXColumn", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setYColumn(int)", { "setYColumn", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xColumn()", { "xColumn", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yColumn()", { "yColumn", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVXYModelMapper::plastiqSignals = {
    { "firstRowChanged()", { "firstRowChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modelReplaced()", { "modelReplaced", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rowCountChanged()", { "rowCountChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seriesReplaced()", { "seriesReplaced", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "xColumnChanged()", { "xColumnChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "yColumnChanged()", { "yColumnChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVXYModelMapper::plastiqProperties = {
    { "firstRow", { "firstRow", "int", "setFirstRow", "firstRow" } },
    { "model", { "model", "QAbstractItemModel*", "setModel", "model" } },
    { "rowCount", { "rowCount", "int", "setRowCount", "rowCount" } },
    { "series", { "series", "QXYSeries*", "setSeries", "series" } },
    { "xColumn", { "xColumn", "int", "setXColumn", "xColumn" } },
    { "yColumn", { "yColumn", "int", "setYColumn", "yColumn" } },

};

QHash<QByteArray, long> PlastiQQVXYModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVXYModelMapper::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVXYModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVXYModelMapper::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVXYModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVXYModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVXYModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVXYModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVXYModelMapper(); break;
        case 1: o = new QVXYModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVXYModelMapper *p = new PlastiQQVXYModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVXYModelMapper *p = new PlastiQQVXYModelMapper();
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
        QVXYModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QVXYModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->firstRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 2: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { QXYSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QXYSeries"; } break;
        case 4: o->setFirstRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setRowCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setSeries(reinterpret_cast<QXYSeries*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setXColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setYColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: { int _r = o->xColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { int _r = o->yColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        QVXYModelMapper *o = reinterpret_cast<QVXYModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVXYModelMapper::firstRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QVXYModelMapper::modelReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "modelReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QVXYModelMapper::rowCountChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "rowCountChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QVXYModelMapper::seriesReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "seriesReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QVXYModelMapper::xColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "xColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QVXYModelMapper::yColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "yColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVXYModelMapper *o = reinterpret_cast<QVXYModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVXYModelMapper *o = reinterpret_cast<QVXYModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVXYModelMapper *o = reinterpret_cast<QVXYModelMapper*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVXYModelMapper::~PlastiQQVXYModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
