#include "plastiqmethod.h"
#include "plastiqqaccessibletablecellinterface.h"

#include <QAccessibleTableCellInterface> 
#include <QAccessibleInterface>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTableCellInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTableCellInterface::plastiqMethods = {
    { "columnExtent()", { "columnExtent", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnIndex()", { "columnIndex", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSelected()", { "isSelected", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowExtent()", { "rowExtent", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowIndex()", { "rowIndex", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "table()", { "table", "", "QAccessibleInterface*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTableCellInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleTableCellInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleTableCellInterface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleTableCellInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAccessibleTableCellInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessibleTableCellInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAccessibleTableCellInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleTableCellInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleTableCellInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleTableCellInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleTableCellInterface *p = new PlastiQQAccessibleTableCellInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleTableCellInterface *p = new PlastiQQAccessibleTableCellInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleTableCellInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleTableCellInterface*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->columnExtent();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->columnIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { bool _r = o->isSelected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->rowExtent();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->rowIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QAccessibleInterface* _r = o->table();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleInterface"; } break;

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
        QAccessibleTableCellInterface *o = reinterpret_cast<QAccessibleTableCellInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAccessibleTableCellInterface::~PlastiQQAccessibleTableCellInterface() {
    QAccessibleTableCellInterface* o = reinterpret_cast<QAccessibleTableCellInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
