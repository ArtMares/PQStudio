#include "plastiqmethod.h"
#include "plastiqqabstractitemmodel.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractItemModel> 
#include <QModelIndex>
#include <QMimeData>
#include <QVariant>
#include <QModelIndexList>
#include <QStringList>
#include <QSize>
#include <QVector>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemModel::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemModel::plastiqMethods = {
    { "buddy(QModelIndex&)", { "buddy", "QModelIndex&", "QModelIndex", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canDropMimeData(const QMimeData*,enum,int,int,QModelIndex&)", { "canDropMimeData", "QMimeData*,Qt::DropAction,int,int,QModelIndex&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canFetchMore(QModelIndex&)", { "canFetchMore", "QModelIndex&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount(QModelIndex&)", { "columnCount", "QModelIndex&", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(QModelIndex&)", { "data", "QModelIndex&", "QVariant", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(QModelIndex&,int)", { "data", "QModelIndex&,int", "QVariant", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dropMimeData(const QMimeData*,enum,int,int,QModelIndex&)", { "dropMimeData", "QMimeData*,Qt::DropAction,int,int,QModelIndex&", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fetchMore(QModelIndex&)", { "fetchMore", "QModelIndex&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags(QModelIndex&)", { "flags", "QModelIndex&", "Qt::ItemFlags", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasChildren()", { "hasChildren", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasChildren(QModelIndex&)", { "hasChildren", "QModelIndex&", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasIndex(int,int)", { "hasIndex", "int,int", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasIndex(int,int,QModelIndex&)", { "hasIndex", "int,int,QModelIndex&", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "headerData(int,enum)", { "headerData", "int,Qt::Orientation", "QVariant", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "headerData(int,enum,int)", { "headerData", "int,Qt::Orientation,int", "QVariant", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "index(int,int)", { "index", "int,int", "QModelIndex", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "index(int,int,QModelIndex&)", { "index", "int,int,QModelIndex&", "QModelIndex", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumn(int)", { "insertColumn", "int", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumn(int,QModelIndex&)", { "insertColumn", "int,QModelIndex&", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumns(int,int)", { "insertColumns", "int,int", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumns(int,int,QModelIndex&)", { "insertColumns", "int,int,QModelIndex&", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int)", { "insertRow", "int", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QModelIndex&)", { "insertRow", "int,QModelIndex&", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRows(int,int)", { "insertRows", "int,int", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRows(int,int,QModelIndex&)", { "insertRows", "int,int,QModelIndex&", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QModelIndex&,int,QVariant)", { "match", "QModelIndex&,int,QVariant&", "QModelIndexList", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QModelIndex&,int,QVariant,int)", { "match", "QModelIndex&,int,QVariant&,int", "QModelIndexList", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QModelIndex&,int,QVariant,int,enum)", { "match", "QModelIndex&,int,QVariant&,int,Qt::MatchFlags", "QModelIndexList", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeData(QModelIndexList&)", { "mimeData", "QModelIndexList&", "QMimeData*", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeTypes()", { "mimeTypes", "", "QStringList", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveColumn(QModelIndex&,int,QModelIndex&,int)", { "moveColumn", "QModelIndex&,int,QModelIndex&,int", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveColumns(QModelIndex&,int,int,QModelIndex&,int)", { "moveColumns", "QModelIndex&,int,int,QModelIndex&,int", "bool", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveRow(QModelIndex&,int,QModelIndex&,int)", { "moveRow", "QModelIndex&,int,QModelIndex&,int", "bool", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveRows(QModelIndex&,int,int,QModelIndex&,int)", { "moveRows", "QModelIndex&,int,int,QModelIndex&,int", "bool", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parent(QModelIndex&)", { "parent", "QModelIndex&", "QModelIndex", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeColumn(int)", { "removeColumn", "int", "bool", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeColumn(int,QModelIndex&)", { "removeColumn", "int,QModelIndex&", "bool", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeColumns(int,int)", { "removeColumns", "int,int", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeColumns(int,int,QModelIndex&)", { "removeColumns", "int,int,QModelIndex&", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRow(int)", { "removeRow", "int", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRow(int,QModelIndex&)", { "removeRow", "int,QModelIndex&", "bool", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRows(int,int)", { "removeRows", "int,int", "bool", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRows(int,int,QModelIndex&)", { "removeRows", "int,int,QModelIndex&", "bool", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount(QModelIndex&)", { "rowCount", "QModelIndex&", "int", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(QModelIndex&,QVariant)", { "setData", "QModelIndex&,QVariant&", "bool", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(QModelIndex&,QVariant,int)", { "setData", "QModelIndex&,QVariant&,int", "bool", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeaderData(int,enum,QVariant)", { "setHeaderData", "int,Qt::Orientation,QVariant&", "bool", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeaderData(int,enum,QVariant,int)", { "setHeaderData", "int,Qt::Orientation,QVariant&,int", "bool", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemData(QModelIndex&,const QMap<int,QVariant>&)", { "setItemData", "QModelIndex&,QMap<int,QVariant>&", "bool", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sibling(int,int,QModelIndex&)", { "sibling", "int,int,QModelIndex&", "QModelIndex", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sort(int)", { "sort", "int", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sort(int,enum)", { "sort", "int,Qt::SortOrder", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "span(QModelIndex&)", { "span", "QModelIndex&", "QSize", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedDragActions()", { "supportedDragActions", "", "Qt::DropActions", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedDropActions()", { "supportedDropActions", "", "Qt::DropActions", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "beginInsertColumns(QModelIndex&,int,int)", { "beginInsertColumns", "QModelIndex&,int,int", "void", 57, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "beginInsertRows(QModelIndex&,int,int)", { "beginInsertRows", "QModelIndex&,int,int", "void", 58, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "beginMoveColumns(QModelIndex&,int,int,QModelIndex&,int)", { "beginMoveColumns", "QModelIndex&,int,int,QModelIndex&,int", "bool", 59, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "beginMoveRows(QModelIndex&,int,int,QModelIndex&,int)", { "beginMoveRows", "QModelIndex&,int,int,QModelIndex&,int", "bool", 60, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "beginRemoveColumns(QModelIndex&,int,int)", { "beginRemoveColumns", "QModelIndex&,int,int", "void", 61, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "beginRemoveRows(QModelIndex&,int,int)", { "beginRemoveRows", "QModelIndex&,int,int", "void", 62, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "beginResetModel()", { "beginResetModel", "", "void", 63, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "changePersistentIndex(QModelIndex&,QModelIndex&)", { "changePersistentIndex", "QModelIndex&,QModelIndex&", "void", 64, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "changePersistentIndexList(QModelIndexList&,QModelIndexList&)", { "changePersistentIndexList", "QModelIndexList&,QModelIndexList&", "void", 65, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "createIndex(int,int)", { "createIndex", "int,int", "QModelIndex", 66, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "createIndex(int,int,void*)", { "createIndex", "int,int,void*", "QModelIndex", 67, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "createIndex(int,int,quintptr)", { "createIndex", "int,int,quintptr", "QModelIndex", 68, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "endInsertColumns()", { "endInsertColumns", "", "void", 69, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "endInsertRows()", { "endInsertRows", "", "void", 70, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "endMoveColumns()", { "endMoveColumns", "", "void", 71, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "endMoveRows()", { "endMoveRows", "", "void", 72, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "endRemoveColumns()", { "endRemoveColumns", "", "void", 73, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "endRemoveRows()", { "endRemoveRows", "", "void", 74, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "endResetModel()", { "endResetModel", "", "void", 75, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "persistentIndexList()", { "persistentIndexList", "", "QModelIndexList", 76, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "revert()", { "revert", "", "void", 77, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "submit()", { "submit", "", "bool", 78, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemModel::plastiqSignals = {
    { "dataChanged(QModelIndex&,QModelIndex&)", { "dataChanged", "QModelIndex&,QModelIndex&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "dataChanged(QModelIndex&,QModelIndex&,QVector<int>&)", { "dataChanged", "QModelIndex&,QModelIndex&,QVector<int>&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "headerDataChanged(enum,int,int)", { "headerDataChanged", "Qt::Orientation,int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractItemModel::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractItemModel::plastiqConstants = {

    /* QAbstractItemModel::LayoutChangeHint */
   { "NoLayoutChangeHint", QAbstractItemModel::NoLayoutChangeHint },
   { "VerticalSortHint", QAbstractItemModel::VerticalSortHint },
   { "HorizontalSortHint", QAbstractItemModel::HorizontalSortHint },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractItemModel::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractItemModel::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractItemModel::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractItemModel", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractItemModel::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractItemModelWrapper : public QAbstractItemModel {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QModelIndex buddy(const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QModelIndex buddy(const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QModelIndex _r = QModelIndex(*reinterpret_cast<QModelIndex*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::buddy(index);
    }

    QModelIndex PlastiQParentCall_buddy(const QModelIndex &index) const {
        return QAbstractItemModel::buddy(index);
    }

    bool canDropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool canDropMimeData(const QMimeData*,Qt::DropAction,int,int,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[6];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QMimeData*>(data));
            stack[1].name = QByteArrayLiteral("QMimeData");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int64 = action;
            stack[2].name = QByteArrayLiteral("Qt::DropAction");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_int = row;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            stack[4].s_int = column;
            stack[4].name = QByteArrayLiteral("int");
            stack[4].type = PlastiQ::Int;
            stack[5].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[5].name = QByteArrayLiteral("QModelIndex");
            stack[5].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::canDropMimeData(data,action,row,column,parent);
    }

    bool PlastiQParentCall_canDropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent) const {
        return QAbstractItemModel::canDropMimeData(data,action,row,column,parent);
    }

    bool canFetchMore(const QModelIndex &parent) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool canFetchMore(const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::canFetchMore(parent);
    }

    bool PlastiQParentCall_canFetchMore(const QModelIndex &parent) const {
        return QAbstractItemModel::canFetchMore(parent);
    }

    bool dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool dropMimeData(const QMimeData*,Qt::DropAction,int,int,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[6];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QMimeData*>(data));
            stack[1].name = QByteArrayLiteral("QMimeData");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int64 = action;
            stack[2].name = QByteArrayLiteral("Qt::DropAction");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_int = row;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            stack[4].s_int = column;
            stack[4].name = QByteArrayLiteral("int");
            stack[4].type = PlastiQ::Int;
            stack[5].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[5].name = QByteArrayLiteral("QModelIndex");
            stack[5].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::dropMimeData(data,action,row,column,parent);
    }

    bool PlastiQParentCall_dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent) {
        return QAbstractItemModel::dropMimeData(data,action,row,column,parent);
    }

    void fetchMore(const QModelIndex &parent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void fetchMore(const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractItemModel::fetchMore(parent);
    }

    void PlastiQParentCall_fetchMore(const QModelIndex &parent) {
        return QAbstractItemModel::fetchMore(parent);
    }

    Qt::ItemFlags flags(const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("Qt::ItemFlags flags(const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            Qt::ItemFlags _r = Qt::ItemFlags(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::flags(index);
    }

    Qt::ItemFlags PlastiQParentCall_flags(const QModelIndex &index) const {
        return QAbstractItemModel::flags(index);
    }

    bool hasChildren(const QModelIndex &parent = QModelIndex()) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hasChildren(const QModelIndex&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::hasChildren(parent);
    }

    bool PlastiQParentCall_hasChildren(const QModelIndex &parent = QModelIndex()) const {
        return QAbstractItemModel::hasChildren(parent);
    }

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant headerData(int,Qt::Orientation,int=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = section;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int64 = orientation;
            stack[2].name = QByteArrayLiteral("Qt::Orientation");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_int = role;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::headerData(section,orientation,role);
    }

    QVariant PlastiQParentCall_headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const {
        return QAbstractItemModel::headerData(section,orientation,role);
    }

    bool insertColumns(int column, int count, const QModelIndex &parent = QModelIndex()) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool insertColumns(int,int,const QModelIndex&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = column;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = count;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::insertColumns(column,count,parent);
    }

    bool PlastiQParentCall_insertColumns(int column, int count, const QModelIndex &parent = QModelIndex()) {
        return QAbstractItemModel::insertColumns(column,count,parent);
    }

    bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool insertRows(int,int,const QModelIndex&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = row;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = count;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::insertRows(row,count,parent);
    }

    bool PlastiQParentCall_insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) {
        return QAbstractItemModel::insertRows(row,count,parent);
    }

    QMimeData* mimeData(const QModelIndexList &indexes) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QMimeData* mimeData(const QModelIndexList&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QModelIndexList&>(indexes));
            stack[1].name = QByteArrayLiteral("QModelIndexList");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMimeData* _r = reinterpret_cast<QMimeData*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::mimeData(indexes);
    }

    QMimeData* PlastiQParentCall_mimeData(const QModelIndexList &indexes) const {
        return QAbstractItemModel::mimeData(indexes);
    }

    QStringList mimeTypes() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QStringList mimeTypes()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QStringList _r = QStringList(*reinterpret_cast<QStringList*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::mimeTypes();
    }

    QStringList PlastiQParentCall_mimeTypes() const {
        return QAbstractItemModel::mimeTypes();
    }

    bool moveColumns(const QModelIndex &sourceParent, int sourceColumn, int count, const QModelIndex &destinationParent, int destinationChild) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool moveColumns(const QModelIndex&,int,int,const QModelIndex&,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[6];
            stack[1].s_voidp = new QModelIndex(sourceParent) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int = sourceColumn;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_int = count;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            stack[4].s_voidp = new QModelIndex(destinationParent) /* COPY OBJECT */;
            stack[4].name = QByteArrayLiteral("QModelIndex");
            stack[4].type = PlastiQ::QtObject;
            stack[5].s_int = destinationChild;
            stack[5].name = QByteArrayLiteral("int");
            stack[5].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::moveColumns(sourceParent,sourceColumn,count,destinationParent,destinationChild);
    }

    bool PlastiQParentCall_moveColumns(const QModelIndex &sourceParent, int sourceColumn, int count, const QModelIndex &destinationParent, int destinationChild) {
        return QAbstractItemModel::moveColumns(sourceParent,sourceColumn,count,destinationParent,destinationChild);
    }

    bool moveRows(const QModelIndex &sourceParent, int sourceRow, int count, const QModelIndex &destinationParent, int destinationChild) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool moveRows(const QModelIndex&,int,int,const QModelIndex&,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[6];
            stack[1].s_voidp = new QModelIndex(sourceParent) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int = sourceRow;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_int = count;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            stack[4].s_voidp = new QModelIndex(destinationParent) /* COPY OBJECT */;
            stack[4].name = QByteArrayLiteral("QModelIndex");
            stack[4].type = PlastiQ::QtObject;
            stack[5].s_int = destinationChild;
            stack[5].name = QByteArrayLiteral("int");
            stack[5].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::moveRows(sourceParent,sourceRow,count,destinationParent,destinationChild);
    }

    bool PlastiQParentCall_moveRows(const QModelIndex &sourceParent, int sourceRow, int count, const QModelIndex &destinationParent, int destinationChild) {
        return QAbstractItemModel::moveRows(sourceParent,sourceRow,count,destinationParent,destinationChild);
    }

    bool removeColumns(int column, int count, const QModelIndex &parent = QModelIndex()) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool removeColumns(int,int,const QModelIndex&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = column;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = count;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::removeColumns(column,count,parent);
    }

    bool PlastiQParentCall_removeColumns(int column, int count, const QModelIndex &parent = QModelIndex()) {
        return QAbstractItemModel::removeColumns(column,count,parent);
    }

    bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool removeRows(int,int,const QModelIndex&=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = row;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = count;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::removeRows(row,count,parent);
    }

    bool PlastiQParentCall_removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) {
        return QAbstractItemModel::removeRows(row,count,parent);
    }

    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool setData(const QModelIndex&,const QVariant&,int=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QVariant");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_int = role;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::setData(index,value,role);
    }

    bool PlastiQParentCall_setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) {
        return QAbstractItemModel::setData(index,value,role);
    }

    bool setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role = Qt::EditRole) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool setHeaderData(int,Qt::Orientation,const QVariant&,int=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_int = section;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int64 = orientation;
            stack[2].name = QByteArrayLiteral("Qt::Orientation");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QVariant");
            stack[3].type = PlastiQ::QtObject;
            stack[4].s_int = role;
            stack[4].name = QByteArrayLiteral("int");
            stack[4].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::setHeaderData(section,orientation,value,role);
    }

    bool PlastiQParentCall_setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role = Qt::EditRole) {
        return QAbstractItemModel::setHeaderData(section,orientation,value,role);
    }

    QModelIndex sibling(int row, int column, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QModelIndex sibling(int,int,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = row;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = column;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QModelIndex _r = QModelIndex(*reinterpret_cast<QModelIndex*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::sibling(row,column,index);
    }

    QModelIndex PlastiQParentCall_sibling(int row, int column, const QModelIndex &index) const {
        return QAbstractItemModel::sibling(row,column,index);
    }

    void sort(int column, Qt::SortOrder order = Qt::AscendingOrder) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void sort(int,Qt::SortOrder=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = column;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int64 = order;
            stack[2].name = QByteArrayLiteral("Qt::SortOrder");
            stack[2].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractItemModel::sort(column,order);
    }

    void PlastiQParentCall_sort(int column, Qt::SortOrder order = Qt::AscendingOrder) {
        return QAbstractItemModel::sort(column,order);
    }

    QSize span(const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize span(const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::span(index);
    }

    QSize PlastiQParentCall_span(const QModelIndex &index) const {
        return QAbstractItemModel::span(index);
    }

    Qt::DropActions supportedDragActions() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("Qt::DropActions supportedDragActions()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            Qt::DropActions _r = Qt::DropActions(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::supportedDragActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDragActions() const {
        return QAbstractItemModel::supportedDragActions();
    }

    Qt::DropActions supportedDropActions() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("Qt::DropActions supportedDropActions()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            Qt::DropActions _r = Qt::DropActions(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QAbstractItemModel::supportedDropActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDropActions() const {
        return QAbstractItemModel::supportedDropActions();
    }

};

void PlastiQQAbstractItemModel::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractItemModelWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractItemModel *p = new PlastiQQAbstractItemModel();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractItemModel *p = new PlastiQQAbstractItemModel();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 79) {
            id -= 79;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractItemModel *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractItemModel*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QModelIndex *_r;
                if (isWrapper) _r = new QModelIndex(((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_buddy((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
                else _r = new QModelIndex(o->buddy((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_canDropMimeData(reinterpret_cast<const QMimeData*>(stack[1].s_voidp),
                    Qt::DropAction(stack[2].s_int64),
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[5].s_voidp)));
                else _r = o->canDropMimeData(reinterpret_cast<const QMimeData*>(stack[1].s_voidp),
                    Qt::DropAction(stack[2].s_int64),
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[5].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_canFetchMore((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else _r = o->canFetchMore((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->columnCount((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->data((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->data((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_dropMimeData(reinterpret_cast<const QMimeData*>(stack[1].s_voidp),
                    Qt::DropAction(stack[2].s_int64),
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[5].s_voidp)));
                else _r = o->dropMimeData(reinterpret_cast<const QMimeData*>(stack[1].s_voidp),
                    Qt::DropAction(stack[2].s_int64),
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[5].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: if (isWrapper) ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_fetchMore((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else o->fetchMore((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_flags((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else _r = o->flags((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))); // HACK for Qt::ItemFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_hasChildren();
                else _r = o->hasChildren();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_hasChildren((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else _r = o->hasChildren((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->hasIndex(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->hasIndex(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_headerData(stack[1].s_int,
                    Qt::Orientation(stack[2].s_int64)));
                else _r = new QVariant(o->headerData(stack[1].s_int,
                    Qt::Orientation(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_headerData(stack[1].s_int,
                    Qt::Orientation(stack[2].s_int64),
                    stack[3].s_int));
                else _r = new QVariant(o->headerData(stack[1].s_int,
                    Qt::Orientation(stack[2].s_int64),
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->index(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->index(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { bool _r = o->insertColumn(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->insertColumn(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_insertColumns(stack[1].s_int,
                    stack[2].s_int);
                else _r = o->insertColumns(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_insertColumns(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else _r = o->insertColumns(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = o->insertRow(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->insertRow(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_insertRows(stack[1].s_int,
                    stack[2].s_int);
                else _r = o->insertRows(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_insertRows(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else _r = o->insertRows(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: /* UNSUPPORTED_RETURN_VALUE o->match((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_variant) | ret: `QModelIndexList` */ break;
        case 27: /* UNSUPPORTED_RETURN_VALUE o->match((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_variant,
                    stack[4].s_int) | ret: `QModelIndexList` */ break;
        case 28: /* UNSUPPORTED_RETURN_VALUE o->match((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_variant,
                    stack[4].s_int,
                    Qt::MatchFlags(stack[5].s_int64)) | ret: `QModelIndexList` */ break;
        case 29: { QMimeData* _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_mimeData((*reinterpret_cast< QModelIndexList(*) >(stack[1].s_voidp)));
                else _r = o->mimeData((*reinterpret_cast< QModelIndexList(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMimeData"; } break;
        case 30: { /* COPY OBJECT */
            QStringList *_r;
                if (isWrapper) _r = new QStringList(((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_mimeTypes());
                else _r = new QStringList(o->mimeTypes());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { bool _r = o->moveColumn((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)),
                    stack[4].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_moveColumns((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)),
                    stack[5].s_int);
                else _r = o->moveColumns((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)),
                    stack[5].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: { bool _r = o->moveRow((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)),
                    stack[4].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 34: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_moveRows((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)),
                    stack[5].s_int);
                else _r = o->moveRows((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)),
                    stack[5].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 35: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->parent((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: { bool _r = o->removeColumn(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 37: { bool _r = o->removeColumn(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_removeColumns(stack[1].s_int,
                    stack[2].s_int);
                else _r = o->removeColumns(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_removeColumns(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else _r = o->removeColumns(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { bool _r = o->removeRow(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { bool _r = o->removeRow(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_removeRows(stack[1].s_int,
                    stack[2].s_int);
                else _r = o->removeRows(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 43: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_removeRows(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else _r = o->removeRows(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 44: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 45: { int _r = o->rowCount((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 46: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_setData((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_variant);
                else _r = o->setData((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_variant);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_setData((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_variant,
                    stack[3].s_int);
                else _r = o->setData((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_variant,
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_setHeaderData(stack[1].s_int,
                    Qt::Orientation(stack[2].s_int64),
                    stack[3].s_variant);
                else _r = o->setHeaderData(stack[1].s_int,
                    Qt::Orientation(stack[2].s_int64),
                    stack[3].s_variant);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 49: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_setHeaderData(stack[1].s_int,
                    Qt::Orientation(stack[2].s_int64),
                    stack[3].s_variant,
                    stack[4].s_int);
                else _r = o->setHeaderData(stack[1].s_int,
                    Qt::Orientation(stack[2].s_int64),
                    stack[3].s_variant,
                    stack[4].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: /* o->setItemData((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_const QMap<int,
                    (*reinterpret_cast< QVariant>(*) >(stack[3].s_voidp))) | ret: `bool` */ break;
        case 51: { /* COPY OBJECT */
            QModelIndex *_r;
                if (isWrapper) _r = new QModelIndex(((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_sibling(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp))));
                else _r = new QModelIndex(o->sibling(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 52: if (isWrapper) ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_sort(stack[1].s_int);
                else o->sort(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 53: if (isWrapper) ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_sort(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                else o->sort(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 54: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_span((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
                else _r = new QSize(o->span((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 55: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_supportedDragActions();
                else _r = o->supportedDragActions(); // HACK for Qt::DropActions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 56: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemModelWrapper*)o)->PlastiQParentCall_supportedDropActions();
                else _r = o->supportedDropActions(); // HACK for Qt::DropActions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 57: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 58: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 59: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 60: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 61: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 62: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 63: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 64: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 65: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 66: { /* COPY OBJECT */
            QModelIndex *_r; stack[0].type = PlastiQ::Error; } break;
        case 67: { /* COPY OBJECT */
            QModelIndex *_r; stack[0].type = PlastiQ::Error; } break;
        case 68: /* o->createIndex(stack[1].s_int,
                    stack[2].s_int,
                    UNSUPPORTED_TYPE_quintptr) | ret: `QModelIndex` */ break;
        case 69: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 70: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 71: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 72: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 73: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 74: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 75: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 76: /* UNSUPPORTED_RETURN_VALUE o->persistentIndexList() | ret: `QModelIndexList` */ break;
        case 77: o->revert();
                stack[0].type = PlastiQ::Void; break;
        case 78: { bool _r = o->submit();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractItemModel *o = reinterpret_cast<QAbstractItemModel*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractItemModel::dataChanged,
            [=](const QModelIndex& arg0, const QModelIndex& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                    cstack[1].s_voidp = new QModelIndex(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QModelIndex";
                PlastiQ_activate(sender, "dataChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractItemModel::dataChanged,
            [=](const QModelIndex& arg0, const QModelIndex& arg1, const QVector<int>& arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                    cstack[1].s_voidp = new QModelIndex(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QModelIndex";
                    cstack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QVector<int>&>(arg2));
                    cstack[2].type = PlastiQ::QObject; cstack[2].name = "QVector<int>";
                    cstack[2].isRef = true;
                PlastiQ_activate(sender, "dataChanged", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractItemModel::headerDataChanged,
            [=](Qt::Orientation arg0, int arg1, int arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::Orientation";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                    cstack[2].s_int = arg2;
                    cstack[2].type = PlastiQ::Int; cstack[2].name = "int";
                PlastiQ_activate(sender, "headerDataChanged", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractItemModel *o = reinterpret_cast<QAbstractItemModel*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractItemModel *o = reinterpret_cast<QAbstractItemModel*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractItemModel *o = reinterpret_cast<QAbstractItemModel*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractItemModel::~PlastiQQAbstractItemModel() {
    QAbstractItemModel* o = reinterpret_cast<QAbstractItemModel*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
