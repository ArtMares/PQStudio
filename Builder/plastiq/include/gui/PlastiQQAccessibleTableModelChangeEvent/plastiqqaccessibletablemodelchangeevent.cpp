#include "plastiqmethod.h"
#include "plastiqqaccessibletablemodelchangeevent.h"

#include "gui/PlastiQQAccessibleEvent/plastiqqaccessibleevent.h"
#include <QAccessibleTableModelChangeEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTableModelChangeEvent::plastiqConstructors = {
    { "QAccessibleTableModelChangeEvent(QObject*,enum)", { "QAccessibleTableModelChangeEvent", "QObject*,ModelChangeType", "QAccessibleTableModelChangeEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleTableModelChangeEvent(QAccessibleInterface*,enum)", { "QAccessibleTableModelChangeEvent", "QAccessibleInterface*,ModelChangeType", "QAccessibleTableModelChangeEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTableModelChangeEvent::plastiqMethods = {
    { "firstColumn()", { "firstColumn", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstRow()", { "firstRow", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastColumn()", { "lastColumn", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastRow()", { "lastRow", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modelChangeType()", { "modelChangeType", "", "ModelChangeType", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstColumn(int)", { "setFirstColumn", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstRow(int)", { "setFirstRow", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastColumn(int)", { "setLastColumn", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastRow(int)", { "setLastRow", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModelChangeType(enum)", { "setModelChangeType", "ModelChangeType", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTableModelChangeEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleTableModelChangeEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleTableModelChangeEvent::plastiqConstants = {

    /* QAccessibleTableModelChangeEvent::ModelChangeType */
   { "ModelReset", QAccessibleTableModelChangeEvent::ModelReset },
   { "DataChanged", QAccessibleTableModelChangeEvent::DataChanged },
   { "RowsInserted", QAccessibleTableModelChangeEvent::RowsInserted },
   { "ColumnsInserted", QAccessibleTableModelChangeEvent::ColumnsInserted },
   { "RowsRemoved", QAccessibleTableModelChangeEvent::RowsRemoved },
   { "ColumnsRemoved", QAccessibleTableModelChangeEvent::ColumnsRemoved },

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleTableModelChangeEvent::plastiqInherits = { &PlastiQQAccessibleEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleTableModelChangeEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleTableModelChangeEvent::plastiq_static_metaObject = {
    { &PlastiQQAccessibleEvent::plastiq_static_metaObject, &plastiqInherits, "QAccessibleTableModelChangeEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleTableModelChangeEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleTableModelChangeEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleTableModelChangeEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleTableModelChangeEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QAccessibleTableModelChangeEvent::ModelChangeType(stack[2].s_int64)); break;
        case 1: o = new QAccessibleTableModelChangeEvent(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    QAccessibleTableModelChangeEvent::ModelChangeType(stack[2].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleTableModelChangeEvent *p = new PlastiQQAccessibleTableModelChangeEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleTableModelChangeEvent *p = new PlastiQQAccessibleTableModelChangeEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            PlastiQQAccessibleEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleTableModelChangeEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleTableModelChangeEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->firstColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->firstRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->lastColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->lastRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { qint64 _r = o->modelChangeType(); // HACK for ModelChangeType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: o->setFirstColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setFirstRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setLastColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setLastRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setModelChangeType(QAccessibleTableModelChangeEvent::ModelChangeType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAccessibleTableModelChangeEvent *o = reinterpret_cast<QAccessibleTableModelChangeEvent*>(object->plastiq_data());

        if(className == "QAccessibleEvent") {
            stack[0].s_voidp = static_cast<QAccessibleEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleTableModelChangeEvent::~PlastiQQAccessibleTableModelChangeEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
