#include "plastiqmethod.h"
#include "plastiqqhcandlestickmodelmapper.h"

#include "charts/PlastiQQCandlestickModelMapper/plastiqqcandlestickmodelmapper.h"
#include <QHCandlestickModelMapper> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQHCandlestickModelMapper::plastiqConstructors = {
    { "QHCandlestickModelMapper()", { "QHCandlestickModelMapper", "", "QHCandlestickModelMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHCandlestickModelMapper(QObject*)", { "QHCandlestickModelMapper", "QObject*", "QHCandlestickModelMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHCandlestickModelMapper::plastiqMethods = {
    { "closeColumn()", { "closeColumn", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstSetRow()", { "firstSetRow", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "highColumn()", { "highColumn", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastSetRow()", { "lastSetRow", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lowColumn()", { "lowColumn", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openColumn()", { "openColumn", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCloseColumn(int)", { "setCloseColumn", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstSetRow(int)", { "setFirstSetRow", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHighColumn(int)", { "setHighColumn", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastSetRow(int)", { "setLastSetRow", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLowColumn(int)", { "setLowColumn", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpenColumn(int)", { "setOpenColumn", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimestampColumn(int)", { "setTimestampColumn", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timestampColumn()", { "timestampColumn", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHCandlestickModelMapper::plastiqSignals = {
    { "closeColumnChanged()", { "closeColumnChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "firstSetRowChanged()", { "firstSetRowChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highColumnChanged()", { "highColumnChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lastSetRowChanged()", { "lastSetRowChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lowColumnChanged()", { "lowColumnChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "openColumnChanged()", { "openColumnChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "timestampColumnChanged()", { "timestampColumnChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQHCandlestickModelMapper::plastiqProperties = {
    { "closeColumn", { "closeColumn", "int", "setCloseColumn", "closeColumn" } },
    { "firstSetRow", { "firstSetRow", "int", "setFirstSetRow", "firstSetRow" } },
    { "highColumn", { "highColumn", "int", "setHighColumn", "highColumn" } },
    { "lastSetRow", { "lastSetRow", "int", "setLastSetRow", "lastSetRow" } },
    { "lowColumn", { "lowColumn", "int", "setLowColumn", "lowColumn" } },
    { "openColumn", { "openColumn", "int", "setOpenColumn", "openColumn" } },
    { "timestampColumn", { "timestampColumn", "int", "setTimestampColumn", "timestampColumn" } },

};

QHash<QByteArray, long> PlastiQQHCandlestickModelMapper::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHCandlestickModelMapper::plastiqInherits = { &PlastiQQCandlestickModelMapper::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHCandlestickModelMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQHCandlestickModelMapper::plastiq_static_metaObject = {
    { &PlastiQQCandlestickModelMapper::plastiq_static_metaObject, &plastiqInherits, "QHCandlestickModelMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHCandlestickModelMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHCandlestickModelMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHCandlestickModelMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHCandlestickModelMapper(); break;
        case 1: o = new QHCandlestickModelMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHCandlestickModelMapper *p = new PlastiQQHCandlestickModelMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHCandlestickModelMapper *p = new PlastiQQHCandlestickModelMapper();
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
        QHCandlestickModelMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QHCandlestickModelMapper*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->closeColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->firstSetRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->highColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->lastSetRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->lowColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->openColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->setCloseColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFirstSetRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setHighColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setLastSetRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setLowColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setOpenColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setTimestampColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: { int _r = o->timestampColumn();
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

        QHCandlestickModelMapper *o = reinterpret_cast<QHCandlestickModelMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QHCandlestickModelMapper::closeColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "closeColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QHCandlestickModelMapper::firstSetRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "firstSetRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QHCandlestickModelMapper::highColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "highColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QHCandlestickModelMapper::lastSetRowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lastSetRowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QHCandlestickModelMapper::lowColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lowColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QHCandlestickModelMapper::openColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "openColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QHCandlestickModelMapper::timestampColumnChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "timestampColumnChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHCandlestickModelMapper *o = reinterpret_cast<QHCandlestickModelMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHCandlestickModelMapper *o = reinterpret_cast<QHCandlestickModelMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHCandlestickModelMapper *o = reinterpret_cast<QHCandlestickModelMapper*>(object->plastiq_data());

        if(className == "QCandlestickModelMapper") {
            stack[0].s_voidp = static_cast<QCandlestickModelMapper*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHCandlestickModelMapper::~PlastiQQHCandlestickModelMapper() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
