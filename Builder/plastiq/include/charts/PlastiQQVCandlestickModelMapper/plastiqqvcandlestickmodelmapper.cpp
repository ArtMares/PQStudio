#include "plastiqmethod.h"
#include "plastiqqvcandlestickmodelmapper.h"

#include "charts/PlastiQQCandlestickModelMapper/plastiqqcandlestickmodelmapper.h"
#include <QVCandlestickModelMapper> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQVCandlestickModelMapper::plastiqConstructors = {
    { "QVCandlestickModelMapper()", { "QVCandlestickModelMapper", "", "QVCandlestickModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVCandlestickModelMapper(QObject*)", { "QVCandlestickModelMapper", "QObject*", "QVCandlestickModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVCandlestickModelMapper::plastiqMethods = {
    { "closeRow()", { "closeRow", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstSetColumn()", { "firstSetColumn", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "highRow()", { "highRow", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastSetColumn()", { "lastSetColumn", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lowRow()", { "lowRow", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openRow()", { "openRow", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCloseRow(int)", { "setCloseRow", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstSetColumn(int)", { "setFirstSetColumn", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHighRow(int)", { "setHighRow", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastSetColumn(int)", { "setLastSetColumn", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLowRow(int)", { "setLowRow", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpenRow(int)", { "setOpenRow", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimestampRow(int)", { "setTimestampRow", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timestampRow()", { "timestampRow", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVCandlestickModelMapper::plastiqSignals = {
    { "closeRowChanged()", { "closeRowChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "firstSetColumnChanged()", { "firstSetColumnChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highRowChanged()", { "highRowChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lastSetColumnChanged()", { "lastSetColumnChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lowRowChanged()", { "lowRowChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "openRowChanged()", { "openRowChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "timestampRowChanged()", { "timestampRowChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVCandlestickModelMapper::plastiqProperties = {
    { "closeRow", { "closeRow", "int", "setCloseRow", "closeRow" } },
    { "firstSetColumn", { "firstSetColumn", "int", "setFirstSetColumn", "firstSetColumn" } },
    { "highRow", { "highRow", "int", "setHighRow", "highRow" } },
    { "lastSetColumn", { "lastSetColumn", "int", "setLastSetColumn", "lastSetColumn" } },
    { "lowRow", { "lowRow", "int", "setLowRow", "lowRow" } },
    { "openRow", { "openRow", "int", "setOpenRow", "openRow" } },
    { "timestampRow", { "timestampRow", "int", "setTimestampRow", "timestampRow" } },

};

QHash<QByteArray, long> PlastiQQVCandlestickModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVCandlestickModelMapper::plastiqInherits = { &PlastiQQCandlestickModelMapper::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVCandlestickModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVCandlestickModelMapper::plastiq_static_metaObject = {
    { &PlastiQQCandlestickModelMapper::plastiq_static_metaObject, &plastiqInherits, "QVCandlestickModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVCandlestickModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVCandlestickModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVCandlestickModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVCandlestickModelMapper(); break;
        case 1: o = new QVCandlestickModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVCandlestickModelMapper *p = new PlastiQQVCandlestickModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVCandlestickModelMapper *p = new PlastiQQVCandlestickModelMapper();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQCandlestickModelMapper::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVCandlestickModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QVCandlestickModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->closeRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->firstSetColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->highRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->lastSetColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->lowRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->openRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->setCloseRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFirstSetColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setHighRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setLastSetColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setLowRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setOpenRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setTimestampRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: { int _r = o->timestampRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQCandlestickModelMapper::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QVCandlestickModelMapper *o = reinterpret_cast<QVCandlestickModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVCandlestickModelMapper::closeRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "closeRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QVCandlestickModelMapper::firstSetColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstSetColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QVCandlestickModelMapper::highRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "highRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QVCandlestickModelMapper::lastSetColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lastSetColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QVCandlestickModelMapper::lowRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lowRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QVCandlestickModelMapper::openRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "openRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QVCandlestickModelMapper::timestampRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "timestampRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVCandlestickModelMapper *o = reinterpret_cast<QVCandlestickModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVCandlestickModelMapper *o = reinterpret_cast<QVCandlestickModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVCandlestickModelMapper *o = reinterpret_cast<QVCandlestickModelMapper*>(object->plastiq_data());

        if(className == "QCandlestickModelMapper") {
            stack[0].s_voidp = static_cast<QCandlestickModelMapper*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVCandlestickModelMapper::~PlastiQQVCandlestickModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
