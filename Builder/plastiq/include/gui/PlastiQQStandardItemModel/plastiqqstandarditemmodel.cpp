#include "plastiqmethod.h"
#include "plastiqqstandarditemmodel.h"

#include "core/PlastiQQAbstractItemModel/plastiqqabstractitemmodel.h"
#include <QStandardItemModel> 
#include <QStandardItem>
#include <QModelIndex>

QHash<QByteArray, PlastiQMethod> PlastiQQStandardItemModel::plastiqConstructors = {
    { "QStandardItemModel()", { "QStandardItemModel", "", "QStandardItemModel*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStandardItemModel(QObject*)", { "QStandardItemModel", "QObject*", "QStandardItemModel*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStandardItemModel(int,int)", { "QStandardItemModel", "int,int", "QStandardItemModel*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStandardItemModel(int,int,QObject*)", { "QStandardItemModel", "int,int,QObject*", "QStandardItemModel*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStandardItemModel::plastiqMethods = {
    { "appendColumn(QList<QStandardItem*>&)", { "appendColumn", "QList<QStandardItem*>&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "appendRow(QList<QStandardItem*>&)", { "appendRow", "QList<QStandardItem*>&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "appendRow(QStandardItem*)", { "appendRow", "QStandardItem*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalHeaderItem(int)", { "horizontalHeaderItem", "int", "QStandardItem*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexFromItem(const QStandardItem*)", { "indexFromItem", "QStandardItem*", "QModelIndex", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumn(int,QList<QStandardItem*>&)", { "insertColumn", "int,QList<QStandardItem*>&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumn(int)", { "insertColumn", "int", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumn(int,QModelIndex&)", { "insertColumn", "int,QModelIndex&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QList<QStandardItem*>&)", { "insertRow", "int,QList<QStandardItem*>&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QStandardItem*)", { "insertRow", "int,QStandardItem*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int)", { "insertRow", "int", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QModelIndex&)", { "insertRow", "int,QModelIndex&", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invisibleRootItem()", { "invisibleRootItem", "", "QStandardItem*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "item(int)", { "item", "int", "QStandardItem*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "item(int,int)", { "item", "int,int", "QStandardItem*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemFromIndex(QModelIndex&)", { "itemFromIndex", "QModelIndex&", "QStandardItem*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemPrototype()", { "itemPrototype", "", "const QStandardItem*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnCount(int)", { "setColumnCount", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalHeaderItem(int,QStandardItem*)", { "setHorizontalHeaderItem", "int,QStandardItem*", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalHeaderLabels(QStringList&)", { "setHorizontalHeaderLabels", "QStringList&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItem(int,int,QStandardItem*)", { "setItem", "int,int,QStandardItem*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItem(int,QStandardItem*)", { "setItem", "int,QStandardItem*", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemPrototype(const QStandardItem*)", { "setItemPrototype", "QStandardItem*", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemRoleNames(const QHash<int,QByteArray>&)", { "setItemRoleNames", "QHash<int,QByteArray>&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowCount(int)", { "setRowCount", "int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortRole(int)", { "setSortRole", "int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalHeaderItem(int,QStandardItem*)", { "setVerticalHeaderItem", "int,QStandardItem*", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalHeaderLabels(QStringList&)", { "setVerticalHeaderLabels", "QStringList&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortRole()", { "sortRole", "", "int", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeHorizontalHeaderItem(int)", { "takeHorizontalHeaderItem", "int", "QStandardItem*", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeItem(int)", { "takeItem", "int", "QStandardItem*", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeItem(int,int)", { "takeItem", "int,int", "QStandardItem*", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeVerticalHeaderItem(int)", { "takeVerticalHeaderItem", "int", "QStandardItem*", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalHeaderItem(int)", { "verticalHeaderItem", "int", "QStandardItem*", 34, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStandardItemModel::plastiqSignals = {
    { "itemChanged(QStandardItem*)", { "itemChanged", "QStandardItem*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQStandardItemModel::plastiqProperties = {
    { "sortRole", { "sortRole", "int", "setSortRole", "sortRole" } },

};

QHash<QByteArray, long> PlastiQQStandardItemModel::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStandardItemModel::plastiqInherits = { &PlastiQQAbstractItemModel::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStandardItemModel::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQStandardItemModel::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemModel::plastiq_static_metaObject, &plastiqInherits, "QStandardItemModel", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStandardItemModel::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStandardItemModel::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStandardItemModel *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStandardItemModel(); break;
        case 1: o = new QStandardItemModel(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QStandardItemModel(stack[1].s_int,
                    stack[2].s_int); break;
        case 3: o = new QStandardItemModel(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStandardItemModel *p = new PlastiQQStandardItemModel();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStandardItemModel *p = new PlastiQQStandardItemModel();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 35) {
            id -= 35;
            PlastiQQAbstractItemModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStandardItemModel *o = sc ? Q_NULLPTR : reinterpret_cast<QStandardItemModel*>(object->plastiq_data());

        switch(id) {
        case 0: o->appendColumn((*reinterpret_cast< QList<QStandardItem*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->appendRow((*reinterpret_cast< QList<QStandardItem*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->appendRow(reinterpret_cast<QStandardItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 4: { QStandardItem* _r = o->horizontalHeaderItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 5: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->indexFromItem(reinterpret_cast<const QStandardItem*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: o->insertColumn(stack[1].s_int,
                    (*reinterpret_cast< QList<QStandardItem*>(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: { bool _r = o->insertColumn(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->insertColumn(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: o->insertRow(stack[1].s_int,
                    (*reinterpret_cast< QList<QStandardItem*>(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->insertRow(stack[1].s_int,
                    reinterpret_cast<QStandardItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: { bool _r = o->insertRow(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->insertRow(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { QStandardItem* _r = o->invisibleRootItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 14: { QStandardItem* _r = o->item(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 15: { QStandardItem* _r = o->item(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 16: { QStandardItem* _r = o->itemFromIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 17: { QStandardItem* _r = const_cast<QStandardItem*>(o->itemPrototype());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 18: o->setColumnCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setHorizontalHeaderItem(stack[1].s_int,
                    reinterpret_cast<QStandardItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setHorizontalHeaderLabels((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setItem(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<QStandardItem*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setItem(stack[1].s_int,
                    reinterpret_cast<QStandardItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setItemPrototype(reinterpret_cast<const QStandardItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 24: /* o->setItemRoleNames(UNSUPPORTED_TYPE_const QHash<int,
                    (*reinterpret_cast< QByteArray>(*) >(stack[2].s_voidp))) | ret: `void` */ break;
        case 25: o->setRowCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setSortRole(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setVerticalHeaderItem(stack[1].s_int,
                    reinterpret_cast<QStandardItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setVerticalHeaderLabels((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: { int _r = o->sortRole();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 30: { QStandardItem* _r = o->takeHorizontalHeaderItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 31: { QStandardItem* _r = o->takeItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 32: { QStandardItem* _r = o->takeItem(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 33: { QStandardItem* _r = o->takeVerticalHeaderItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 34: { QStandardItem* _r = o->verticalHeaderItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractItemModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStandardItemModel *o = reinterpret_cast<QStandardItemModel*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QStandardItemModel::itemChanged,
            [=](QStandardItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QStandardItem";
                PlastiQ_activate(sender, "itemChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStandardItemModel *o = reinterpret_cast<QStandardItemModel*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStandardItemModel *o = reinterpret_cast<QStandardItemModel*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStandardItemModel *o = reinterpret_cast<QStandardItemModel*>(object->plastiq_data());

        if(className == "QAbstractItemModel") {
            stack[0].s_voidp = static_cast<QAbstractItemModel*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStandardItemModel::~PlastiQQStandardItemModel() {
    QStandardItemModel* o = reinterpret_cast<QStandardItemModel*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
