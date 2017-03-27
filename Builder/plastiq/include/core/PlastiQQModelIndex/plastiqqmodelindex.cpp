#include "plastiqmethod.h"
#include "plastiqqmodelindex.h"

#include <QModelIndex> 
#include <QVariant>
#include <QAbstractItemModel>

QHash<QByteArray, PlastiQMethod> PlastiQQModelIndex::plastiqConstructors = {
    { "QModelIndex()", { "QModelIndex", "", "QModelIndex*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQModelIndex::plastiqMethods = {
    { "column()", { "column", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(int)", { "data", "int", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::ItemFlags", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "internalId()", { "internalId", "", "quintptr", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "internalPointer()", { "internalPointer", "", "void*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "const QAbstractItemModel*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parent()", { "parent", "", "QModelIndex", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row()", { "row", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sibling(int,int)", { "sibling", "int,int", "QModelIndex", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQModelIndex::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQModelIndex::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQModelIndex::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQModelIndex::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQModelIndex::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQModelIndex::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QModelIndex", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQModelIndex::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQModelIndex::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QModelIndex *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QModelIndex(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQModelIndex *p = new PlastiQQModelIndex();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQModelIndex *p = new PlastiQQModelIndex();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QModelIndex *o = sc ? Q_NULLPTR : reinterpret_cast<QModelIndex*>(object->plastiq_data());

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
        case 4: /* UNSUPPORTED_RETURN_VALUE o->internalId() | ret: `quintptr` */ break;
        case 5: { void* _r = o->internalPointer();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "void"; } break;
        case 6: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { QAbstractItemModel* _r = const_cast<QAbstractItemModel*>(o->model());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 8: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->parent());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { int _r = o->row();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->sibling(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QModelIndex *o = reinterpret_cast<QModelIndex*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQModelIndex::~PlastiQQModelIndex() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
