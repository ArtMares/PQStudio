#include "plastiqmethod.h"
#include "plastiqqpersistentmodelindex.h"

#include <QPersistentModelIndex> 
#include <QVariant>
#include <QAbstractItemModel>
#include <QModelIndex>

QHash<QByteArray, PlastiQMethod> PlastiQQPersistentModelIndex::plastiqConstructors = {
    { "QPersistentModelIndex(QModelIndex&)", { "QPersistentModelIndex", "QModelIndex&", "QPersistentModelIndex*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPersistentModelIndex(QPersistentModelIndex&)", { "QPersistentModelIndex", "QPersistentModelIndex&", "QPersistentModelIndex*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPersistentModelIndex(QPersistentModelIndex&&)", { "QPersistentModelIndex", "QPersistentModelIndex&&", "QPersistentModelIndex*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPersistentModelIndex::plastiqMethods = {
    { "column()", { "column", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(int)", { "data", "int", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::ItemFlags", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "const QAbstractItemModel*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parent()", { "parent", "", "QModelIndex", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row()", { "row", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sibling(int,int)", { "sibling", "int,int", "QModelIndex", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QPersistentModelIndex&)", { "swap", "QPersistentModelIndex&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPersistentModelIndex::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPersistentModelIndex::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPersistentModelIndex::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPersistentModelIndex::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPersistentModelIndex::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPersistentModelIndex::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPersistentModelIndex", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPersistentModelIndex::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPersistentModelIndex::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPersistentModelIndex *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPersistentModelIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))); break;
        case 1: o = new QPersistentModelIndex((*reinterpret_cast< QPersistentModelIndex(*) >(stack[1].s_voidp))); break;
        case 2: o = new QPersistentModelIndex((*reinterpret_cast< QPersistentModelIndex(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPersistentModelIndex *p = new PlastiQQPersistentModelIndex();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPersistentModelIndex *p = new PlastiQQPersistentModelIndex();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPersistentModelIndex *o = sc ? Q_NULLPTR : reinterpret_cast<QPersistentModelIndex*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->column();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->data());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->data(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { qint64 _r = o->flags(); // HACK for Qt::ItemFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { QAbstractItemModel* _r = const_cast<QAbstractItemModel*>(o->model());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 6: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->parent());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->row();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->sibling(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: o->swap((*reinterpret_cast< QPersistentModelIndex(*) >(stack[1].s_voidp)));
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
        QPersistentModelIndex *o = reinterpret_cast<QPersistentModelIndex*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPersistentModelIndex::~PlastiQQPersistentModelIndex() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
