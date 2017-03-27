#include "plastiqmethod.h"
#include "plastiqqhxymodelmapper.h"

#include <QHXYModelMapper> 
#include <QAbstractItemModel>
#include <QXYSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQHXYModelMapper::plastiqConstructors = {
    { "QHXYModelMapper()", { "QHXYModelMapper", "", "QHXYModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHXYModelMapper(QObject*)", { "QHXYModelMapper", "QObject*", "QHXYModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHXYModelMapper::plastiqMethods = {
    { "columnCount()", { "columnCount", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstColumn()", { "firstColumn", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QXYSeries*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnCount(int)", { "setColumnCount", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstColumn(int)", { "setFirstColumn", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeries(QXYSeries*)", { "setSeries", "QXYSeries*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setXRow(int)", { "setXRow", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setYRow(int)", { "setYRow", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xRow()", { "xRow", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yRow()", { "yRow", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHXYModelMapper::plastiqSignals = {
    { "columnCountChanged()", { "columnCountChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "firstColumnChanged()", { "firstColumnChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "modelReplaced()", { "modelReplaced", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seriesReplaced()", { "seriesReplaced", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "xRowChanged()", { "xRowChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "yRowChanged()", { "yRowChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQHXYModelMapper::plastiqProperties = {
    { "columnCount", { "columnCount", "int", "setColumnCount", "columnCount" } },
    { "firstColumn", { "firstColumn", "int", "setFirstColumn", "firstColumn" } },
    { "model", { "model", "QAbstractItemModel*", "setModel", "model" } },
    { "series", { "series", "QXYSeries*", "setSeries", "series" } },
    { "xRow", { "xRow", "int", "setXRow", "xRow" } },
    { "yRow", { "yRow", "int", "setYRow", "yRow" } },

};

QHash<QByteArray, long> PlastiQQHXYModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHXYModelMapper::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQHXYModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQHXYModelMapper::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QHXYModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHXYModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHXYModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHXYModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHXYModelMapper(); break;
        case 1: o = new QHXYModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHXYModelMapper *p = new PlastiQQHXYModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHXYModelMapper *p = new PlastiQQHXYModelMapper();
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
        QHXYModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QHXYModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->firstColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 3: { QXYSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QXYSeries"; } break;
        case 4: o->setColumnCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setFirstColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setSeries(reinterpret_cast<QXYSeries*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setXRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setYRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: { int _r = o->xRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { int _r = o->yRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        QHXYModelMapper *o = reinterpret_cast<QHXYModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QHXYModelMapper::columnCountChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "columnCountChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QHXYModelMapper::firstColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QHXYModelMapper::modelReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "modelReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QHXYModelMapper::seriesReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "seriesReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QHXYModelMapper::xRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "xRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QHXYModelMapper::yRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "yRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHXYModelMapper *o = reinterpret_cast<QHXYModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHXYModelMapper *o = reinterpret_cast<QHXYModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHXYModelMapper *o = reinterpret_cast<QHXYModelMapper*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQHXYModelMapper::~PlastiQQHXYModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
