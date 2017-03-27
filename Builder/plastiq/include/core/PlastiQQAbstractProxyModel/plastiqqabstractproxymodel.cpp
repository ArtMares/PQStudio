#include "plastiqmethod.h"
#include "plastiqqabstractproxymodel.h"

#include "core/PlastiQQAbstractItemModel/plastiqqabstractitemmodel.h"
#include <QAbstractProxyModel> 
#include <QModelIndex>
#include <QItemSelection>
#include <QAbstractItemModel>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractProxyModel::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractProxyModel::plastiqMethods = {
    { "mapFromSource(QModelIndex&)", { "mapFromSource", "QModelIndex&", "QModelIndex", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapSelectionFromSource(QItemSelection&)", { "mapSelectionFromSource", "QItemSelection&", "QItemSelection", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapSelectionToSource(QItemSelection&)", { "mapSelectionToSource", "QItemSelection&", "QItemSelection", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToSource(QModelIndex&)", { "mapToSource", "QModelIndex&", "QModelIndex", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSourceModel(QAbstractItemModel*)", { "setSourceModel", "QAbstractItemModel*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sourceModel()", { "sourceModel", "", "QAbstractItemModel*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractProxyModel::plastiqSignals = {
    { "sourceModelChanged()", { "sourceModelChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractProxyModel::plastiqProperties = {
    { "sourceModel", { "sourceModel", "QAbstractItemModel*", "setSourceModel", "sourceModel" } },

};

QHash<QByteArray, long> PlastiQQAbstractProxyModel::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractProxyModel::plastiqInherits = { &PlastiQQAbstractItemModel::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractProxyModel::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractProxyModel::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemModel::plastiq_static_metaObject, &plastiqInherits, "QAbstractProxyModel", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractProxyModel::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractProxyModelWrapper : public QAbstractProxyModel {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void setSourceModel(QAbstractItemModel *sourceModel) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setSourceModel(QAbstractItemModel*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(sourceModel);
            stack[1].name = QByteArrayLiteral("QAbstractItemModel");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractProxyModel::setSourceModel(sourceModel);
    }

    void PlastiQParentCall_setSourceModel(QAbstractItemModel *sourceModel) {
        return QAbstractProxyModel::setSourceModel(sourceModel);
    }

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
        else return QAbstractProxyModel::buddy(index);
    }

    QModelIndex PlastiQParentCall_buddy(const QModelIndex &index) const {
        return QAbstractProxyModel::buddy(index);
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
        else return QAbstractProxyModel::canDropMimeData(data,action,row,column,parent);
    }

    bool PlastiQParentCall_canDropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent) const {
        return QAbstractProxyModel::canDropMimeData(data,action,row,column,parent);
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
        else return QAbstractProxyModel::canFetchMore(parent);
    }

    bool PlastiQParentCall_canFetchMore(const QModelIndex &parent) const {
        return QAbstractProxyModel::canFetchMore(parent);
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
        else return QAbstractProxyModel::dropMimeData(data,action,row,column,parent);
    }

    bool PlastiQParentCall_dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent) {
        return QAbstractProxyModel::dropMimeData(data,action,row,column,parent);
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
        else return QAbstractProxyModel::fetchMore(parent);
    }

    void PlastiQParentCall_fetchMore(const QModelIndex &parent) {
        return QAbstractProxyModel::fetchMore(parent);
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
        else return QAbstractProxyModel::flags(index);
    }

    Qt::ItemFlags PlastiQParentCall_flags(const QModelIndex &index) const {
        return QAbstractProxyModel::flags(index);
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
        else return QAbstractProxyModel::hasChildren(parent);
    }

    bool PlastiQParentCall_hasChildren(const QModelIndex &parent = QModelIndex()) const {
        return QAbstractProxyModel::hasChildren(parent);
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
        else return QAbstractProxyModel::headerData(section,orientation,role);
    }

    QVariant PlastiQParentCall_headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const {
        return QAbstractProxyModel::headerData(section,orientation,role);
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
        else return QAbstractProxyModel::insertColumns(column,count,parent);
    }

    bool PlastiQParentCall_insertColumns(int column, int count, const QModelIndex &parent = QModelIndex()) {
        return QAbstractProxyModel::insertColumns(column,count,parent);
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
        else return QAbstractProxyModel::insertRows(row,count,parent);
    }

    bool PlastiQParentCall_insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) {
        return QAbstractProxyModel::insertRows(row,count,parent);
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
        else return QAbstractProxyModel::mimeData(indexes);
    }

    QMimeData* PlastiQParentCall_mimeData(const QModelIndexList &indexes) const {
        return QAbstractProxyModel::mimeData(indexes);
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
        else return QAbstractProxyModel::mimeTypes();
    }

    QStringList PlastiQParentCall_mimeTypes() const {
        return QAbstractProxyModel::mimeTypes();
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
        else return QAbstractProxyModel::moveColumns(sourceParent,sourceColumn,count,destinationParent,destinationChild);
    }

    bool PlastiQParentCall_moveColumns(const QModelIndex &sourceParent, int sourceColumn, int count, const QModelIndex &destinationParent, int destinationChild) {
        return QAbstractProxyModel::moveColumns(sourceParent,sourceColumn,count,destinationParent,destinationChild);
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
        else return QAbstractProxyModel::moveRows(sourceParent,sourceRow,count,destinationParent,destinationChild);
    }

    bool PlastiQParentCall_moveRows(const QModelIndex &sourceParent, int sourceRow, int count, const QModelIndex &destinationParent, int destinationChild) {
        return QAbstractProxyModel::moveRows(sourceParent,sourceRow,count,destinationParent,destinationChild);
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
        else return QAbstractProxyModel::removeColumns(column,count,parent);
    }

    bool PlastiQParentCall_removeColumns(int column, int count, const QModelIndex &parent = QModelIndex()) {
        return QAbstractProxyModel::removeColumns(column,count,parent);
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
        else return QAbstractProxyModel::removeRows(row,count,parent);
    }

    bool PlastiQParentCall_removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) {
        return QAbstractProxyModel::removeRows(row,count,parent);
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
        else return QAbstractProxyModel::setData(index,value,role);
    }

    bool PlastiQParentCall_setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) {
        return QAbstractProxyModel::setData(index,value,role);
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
        else return QAbstractProxyModel::setHeaderData(section,orientation,value,role);
    }

    bool PlastiQParentCall_setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role = Qt::EditRole) {
        return QAbstractProxyModel::setHeaderData(section,orientation,value,role);
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
        else return QAbstractProxyModel::sibling(row,column,index);
    }

    QModelIndex PlastiQParentCall_sibling(int row, int column, const QModelIndex &index) const {
        return QAbstractProxyModel::sibling(row,column,index);
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
        else return QAbstractProxyModel::sort(column,order);
    }

    void PlastiQParentCall_sort(int column, Qt::SortOrder order = Qt::AscendingOrder) {
        return QAbstractProxyModel::sort(column,order);
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
        else return QAbstractProxyModel::span(index);
    }

    QSize PlastiQParentCall_span(const QModelIndex &index) const {
        return QAbstractProxyModel::span(index);
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
        else return QAbstractProxyModel::supportedDragActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDragActions() const {
        return QAbstractProxyModel::supportedDragActions();
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
        else return QAbstractProxyModel::supportedDropActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDropActions() const {
        return QAbstractProxyModel::supportedDropActions();
    }

};

void PlastiQQAbstractProxyModel::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractProxyModelWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractProxyModel *p = new PlastiQQAbstractProxyModel();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractProxyModel *p = new PlastiQQAbstractProxyModel();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQAbstractItemModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractProxyModel *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractProxyModel*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->mapFromSource((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->mapSelectionFromSource((*reinterpret_cast< QItemSelection(*) >(stack[1].s_voidp))) | ret: `QItemSelection` */ break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->mapSelectionToSource((*reinterpret_cast< QItemSelection(*) >(stack[1].s_voidp))) | ret: `QItemSelection` */ break;
        case 3: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->mapToSource((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: if (isWrapper) ((PlastiQQAbstractProxyModelWrapper*)o)->PlastiQParentCall_setSourceModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                else o->setSourceModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: { QAbstractItemModel* _r = o->sourceModel();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractItemModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractProxyModel *o = reinterpret_cast<QAbstractProxyModel*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractProxyModel::sourceModelChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "sourceModelChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractProxyModel *o = reinterpret_cast<QAbstractProxyModel*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractProxyModel *o = reinterpret_cast<QAbstractProxyModel*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractProxyModel *o = reinterpret_cast<QAbstractProxyModel*>(object->plastiq_data());

        if(className == "QAbstractItemModel") {
            stack[0].s_voidp = static_cast<QAbstractItemModel*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractProxyModel::~PlastiQQAbstractProxyModel() {
    QAbstractProxyModel* o = reinterpret_cast<QAbstractProxyModel*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
