#include "plastiqmethod.h"
#include "plastiqqcandlestickmodelmapper.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QCandlestickModelMapper> 
#include <QAbstractItemModel>
#include <QCandlestickSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickModelMapper::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickModelMapper::plastiqMethods = {
    { "model()", { "model", "", "QAbstractItemModel*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QCandlestickSeries*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeries(QCandlestickSeries*)", { "setSeries", "QCandlestickSeries*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "close()", { "close", "", "int", 5, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "firstSetSection()", { "firstSetSection", "", "int", 6, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "high()", { "high", "", "int", 7, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "lastSetSection()", { "lastSetSection", "", "int", 8, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "low()", { "low", "", "int", 9, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "open()", { "open", "", "int", 10, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setClose(int)", { "setClose", "int", "void", 11, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setFirstSetSection(int)", { "setFirstSetSection", "int", "void", 12, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setHigh(int)", { "setHigh", "int", "void", 13, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setLastSetSection(int)", { "setLastSetSection", "int", "void", 14, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setLow(int)", { "setLow", "int", "void", 15, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setOpen(int)", { "setOpen", "int", "void", 16, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setTimestamp(int)", { "setTimestamp", "int", "void", 17, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "timestamp()", { "timestamp", "", "int", 18, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickModelMapper::plastiqSignals = {
    { "modelReplaced()", { "modelReplaced", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seriesReplaced()", { "seriesReplaced", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCandlestickModelMapper::plastiqProperties = {
    { "model", { "model", "QAbstractItemModel*", "setModel", "model" } },
    { "series", { "series", "QCandlestickSeries*", "setSeries", "series" } },

};

QHash<QByteArray, long> PlastiQQCandlestickModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCandlestickModelMapper::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCandlestickModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCandlestickModelMapper::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QCandlestickModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCandlestickModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCandlestickModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCandlestickModelMapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCandlestickModelMapper *p = new PlastiQQCandlestickModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCandlestickModelMapper *p = new PlastiQQCandlestickModelMapper();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 19) {
            id -= 19;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCandlestickModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QCandlestickModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 1: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QCandlestickSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCandlestickSeries"; } break;
        case 3: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setSeries(reinterpret_cast<QCandlestickSeries*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 6: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 7: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 8: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 9: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 10: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 11: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 12: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 13: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 14: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 15: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 16: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 17: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 18: { int _r; stack[0].type = PlastiQ::Error; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCandlestickModelMapper *o = reinterpret_cast<QCandlestickModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCandlestickModelMapper::modelReplaced,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "modelReplaced", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCandlestickModelMapper::seriesReplaced,
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
        QCandlestickModelMapper *o = reinterpret_cast<QCandlestickModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCandlestickModelMapper *o = reinterpret_cast<QCandlestickModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCandlestickModelMapper *o = reinterpret_cast<QCandlestickModelMapper*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCandlestickModelMapper::~PlastiQQCandlestickModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
