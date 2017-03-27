#include "plastiqmethod.h"
#include "plastiqqtablewidgetselectionrange.h"

#include <QTableWidgetSelectionRange> 

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidgetSelectionRange::plastiqConstructors = {
    { "QTableWidgetSelectionRange()", { "QTableWidgetSelectionRange", "", "QTableWidgetSelectionRange*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidgetSelectionRange(int,int,int,int)", { "QTableWidgetSelectionRange", "int,int,int,int", "QTableWidgetSelectionRange*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidgetSelectionRange(QTableWidgetSelectionRange&)", { "QTableWidgetSelectionRange", "QTableWidgetSelectionRange&", "QTableWidgetSelectionRange*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidgetSelectionRange::plastiqMethods = {
    { "bottomRow()", { "bottomRow", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftColumn()", { "leftColumn", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightColumn()", { "rightColumn", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topRow()", { "topRow", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidgetSelectionRange::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTableWidgetSelectionRange::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTableWidgetSelectionRange::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTableWidgetSelectionRange::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTableWidgetSelectionRange::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTableWidgetSelectionRange::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTableWidgetSelectionRange", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTableWidgetSelectionRange::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTableWidgetSelectionRange::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTableWidgetSelectionRange *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTableWidgetSelectionRange(); break;
        case 1: o = new QTableWidgetSelectionRange(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int); break;
        case 2: o = new QTableWidgetSelectionRange((*reinterpret_cast< QTableWidgetSelectionRange(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTableWidgetSelectionRange *p = new PlastiQQTableWidgetSelectionRange();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTableWidgetSelectionRange *p = new PlastiQQTableWidgetSelectionRange();
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
        QTableWidgetSelectionRange *o = sc ? Q_NULLPTR : reinterpret_cast<QTableWidgetSelectionRange*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->bottomRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->leftColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->rightColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->topRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QTableWidgetSelectionRange *o = reinterpret_cast<QTableWidgetSelectionRange*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTableWidgetSelectionRange::~PlastiQQTableWidgetSelectionRange() {
    QTableWidgetSelectionRange* o = reinterpret_cast<QTableWidgetSelectionRange*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
