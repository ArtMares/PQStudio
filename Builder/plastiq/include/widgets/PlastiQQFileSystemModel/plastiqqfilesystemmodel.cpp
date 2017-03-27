#include "plastiqmethod.h"
#include "plastiqqfilesystemmodel.h"

#include "core/PlastiQQAbstractItemModel/plastiqqabstractitemmodel.h"
#include <QFileSystemModel> 
#include <QIcon>
#include <QFileInfo>
#include <QString>
#include <QFileIconProvider>
#include <QModelIndex>
#include <QDateTime>
#include <QVariant>
#include <QStringList>
#include <QDir>
#include <QEvent>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQFileSystemModel::plastiqConstructors = {
    { "QFileSystemModel()", { "QFileSystemModel", "", "QFileSystemModel*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileSystemModel(QObject*)", { "QFileSystemModel", "QObject*", "QFileSystemModel*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileSystemModel::plastiqMethods = {
    { "fileIcon(QModelIndex&)", { "fileIcon", "QModelIndex&", "QIcon", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileInfo(QModelIndex&)", { "fileInfo", "QModelIndex&", "QFileInfo", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName(QModelIndex&)", { "fileName", "QModelIndex&", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filePath(QModelIndex&)", { "filePath", "QModelIndex&", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filter()", { "filter", "", "QDir::Filters", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconProvider()", { "iconProvider", "", "QFileIconProvider*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "index(QString)", { "index", "QString&", "QModelIndex", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "index(QString,int)", { "index", "QString&,int", "QModelIndex", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDir(QModelIndex&)", { "isDir", "QModelIndex&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadOnly()", { "isReadOnly", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastModified(QModelIndex&)", { "lastModified", "QModelIndex&", "QDateTime", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mkdir(QModelIndex&,QString)", { "mkdir", "QModelIndex&,QString&", "QModelIndex", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "myComputer()", { "myComputer", "", "QVariant", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "myComputer(int)", { "myComputer", "int", "QVariant", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nameFilterDisables()", { "nameFilterDisables", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nameFilters()", { "nameFilters", "", "QStringList", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "permissions(QModelIndex&)", { "permissions", "QModelIndex&", "QFile::Permissions", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QModelIndex&)", { "remove", "QModelIndex&", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolveSymlinks()", { "resolveSymlinks", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rmdir(QModelIndex&)", { "rmdir", "QModelIndex&", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rootDirectory()", { "rootDirectory", "", "QDir", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rootPath()", { "rootPath", "", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilter(enum)", { "setFilter", "QDir::Filters", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconProvider(QFileIconProvider*)", { "setIconProvider", "QFileIconProvider*", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNameFilterDisables(bool)", { "setNameFilterDisables", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNameFilters(QStringList&)", { "setNameFilters", "QStringList&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadOnly(bool)", { "setReadOnly", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolveSymlinks(bool)", { "setResolveSymlinks", "bool", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRootPath(QString)", { "setRootPath", "QString&", "QModelIndex", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size(QModelIndex&)", { "size", "QModelIndex&", "qint64", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type(QModelIndex&)", { "type", "QModelIndex&", "QString", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileSystemModel::plastiqSignals = {
    { "directoryLoaded(QString)", { "directoryLoaded", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fileRenamed(QString,QString,QString)", { "fileRenamed", "QString&,QString&,QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rootPathChanged(QString)", { "rootPathChanged", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQFileSystemModel::plastiqProperties = {
    { "nameFilterDisables", { "nameFilterDisables", "bool", "setNameFilterDisables", "nameFilterDisables" } },
    { "readOnly", { "readOnly", "bool", "setReadOnly", "isReadOnly" } },
    { "resolveSymlinks", { "resolveSymlinks", "bool", "setResolveSymlinks", "resolveSymlinks" } },

};

QHash<QByteArray, long> PlastiQQFileSystemModel::plastiqConstants = {

    /* QFileSystemModel::Roles */
   { "FileIconRole", QFileSystemModel::FileIconRole },
   { "FilePathRole", QFileSystemModel::FilePathRole },
   { "FileNameRole", QFileSystemModel::FileNameRole },
   { "FilePermissions", QFileSystemModel::FilePermissions },

};

QVector<PlastiQMetaObject*> PlastiQQFileSystemModel::plastiqInherits = { &PlastiQQAbstractItemModel::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFileSystemModel::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQFileSystemModel::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemModel::plastiq_static_metaObject, &plastiqInherits, "QFileSystemModel", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFileSystemModel::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFileSystemModelWrapper : public QFileSystemModel {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQFileSystemModelWrapper(QObject *parent = Q_NULLPTR)
         : QFileSystemModel(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool event(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QFileSystemModel::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QFileSystemModel::event(event);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QFileSystemModel::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QFileSystemModel::timerEvent(event);
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
        else return QFileSystemModel::buddy(index);
    }

    QModelIndex PlastiQParentCall_buddy(const QModelIndex &index) const {
        return QFileSystemModel::buddy(index);
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
        else return QFileSystemModel::canDropMimeData(data,action,row,column,parent);
    }

    bool PlastiQParentCall_canDropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent) const {
        return QFileSystemModel::canDropMimeData(data,action,row,column,parent);
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
        else return QFileSystemModel::canFetchMore(parent);
    }

    bool PlastiQParentCall_canFetchMore(const QModelIndex &parent) const {
        return QFileSystemModel::canFetchMore(parent);
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
        else return QFileSystemModel::dropMimeData(data,action,row,column,parent);
    }

    bool PlastiQParentCall_dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent) {
        return QFileSystemModel::dropMimeData(data,action,row,column,parent);
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
        else return QFileSystemModel::fetchMore(parent);
    }

    void PlastiQParentCall_fetchMore(const QModelIndex &parent) {
        return QFileSystemModel::fetchMore(parent);
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
        else return QFileSystemModel::flags(index);
    }

    Qt::ItemFlags PlastiQParentCall_flags(const QModelIndex &index) const {
        return QFileSystemModel::flags(index);
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
        else return QFileSystemModel::hasChildren(parent);
    }

    bool PlastiQParentCall_hasChildren(const QModelIndex &parent = QModelIndex()) const {
        return QFileSystemModel::hasChildren(parent);
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
        else return QFileSystemModel::headerData(section,orientation,role);
    }

    QVariant PlastiQParentCall_headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const {
        return QFileSystemModel::headerData(section,orientation,role);
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
        else return QFileSystemModel::insertColumns(column,count,parent);
    }

    bool PlastiQParentCall_insertColumns(int column, int count, const QModelIndex &parent = QModelIndex()) {
        return QFileSystemModel::insertColumns(column,count,parent);
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
        else return QFileSystemModel::insertRows(row,count,parent);
    }

    bool PlastiQParentCall_insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) {
        return QFileSystemModel::insertRows(row,count,parent);
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
        else return QFileSystemModel::mimeData(indexes);
    }

    QMimeData* PlastiQParentCall_mimeData(const QModelIndexList &indexes) const {
        return QFileSystemModel::mimeData(indexes);
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
        else return QFileSystemModel::mimeTypes();
    }

    QStringList PlastiQParentCall_mimeTypes() const {
        return QFileSystemModel::mimeTypes();
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
        else return QFileSystemModel::moveColumns(sourceParent,sourceColumn,count,destinationParent,destinationChild);
    }

    bool PlastiQParentCall_moveColumns(const QModelIndex &sourceParent, int sourceColumn, int count, const QModelIndex &destinationParent, int destinationChild) {
        return QFileSystemModel::moveColumns(sourceParent,sourceColumn,count,destinationParent,destinationChild);
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
        else return QFileSystemModel::moveRows(sourceParent,sourceRow,count,destinationParent,destinationChild);
    }

    bool PlastiQParentCall_moveRows(const QModelIndex &sourceParent, int sourceRow, int count, const QModelIndex &destinationParent, int destinationChild) {
        return QFileSystemModel::moveRows(sourceParent,sourceRow,count,destinationParent,destinationChild);
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
        else return QFileSystemModel::removeColumns(column,count,parent);
    }

    bool PlastiQParentCall_removeColumns(int column, int count, const QModelIndex &parent = QModelIndex()) {
        return QFileSystemModel::removeColumns(column,count,parent);
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
        else return QFileSystemModel::removeRows(row,count,parent);
    }

    bool PlastiQParentCall_removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) {
        return QFileSystemModel::removeRows(row,count,parent);
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
        else return QFileSystemModel::setData(index,value,role);
    }

    bool PlastiQParentCall_setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) {
        return QFileSystemModel::setData(index,value,role);
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
        else return QFileSystemModel::setHeaderData(section,orientation,value,role);
    }

    bool PlastiQParentCall_setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role = Qt::EditRole) {
        return QFileSystemModel::setHeaderData(section,orientation,value,role);
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
        else return QFileSystemModel::sibling(row,column,index);
    }

    QModelIndex PlastiQParentCall_sibling(int row, int column, const QModelIndex &index) const {
        return QFileSystemModel::sibling(row,column,index);
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
        else return QFileSystemModel::sort(column,order);
    }

    void PlastiQParentCall_sort(int column, Qt::SortOrder order = Qt::AscendingOrder) {
        return QFileSystemModel::sort(column,order);
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
        else return QFileSystemModel::span(index);
    }

    QSize PlastiQParentCall_span(const QModelIndex &index) const {
        return QFileSystemModel::span(index);
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
        else return QFileSystemModel::supportedDragActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDragActions() const {
        return QFileSystemModel::supportedDragActions();
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
        else return QFileSystemModel::supportedDropActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDropActions() const {
        return QFileSystemModel::supportedDropActions();
    }

};

void PlastiQQFileSystemModel::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFileSystemModelWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQFileSystemModelWrapper(); break;
        case 1: o = new PlastiQQFileSystemModelWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFileSystemModel *p = new PlastiQQFileSystemModel();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFileSystemModel *p = new PlastiQQFileSystemModel();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 33) {
            id -= 33;
            PlastiQQAbstractItemModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFileSystemModel *o = sc ? Q_NULLPTR : reinterpret_cast<QFileSystemModel*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->fileIcon((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QFileInfo *_r = new QFileInfo(o->fileInfo((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFileInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QString _r = o->fileName((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->filePath((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { qint64 _r = o->filter(); // HACK for QDir::Filters 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { QFileIconProvider* _r = o->iconProvider();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QFileIconProvider"; } break;
        case 6: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->index(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->index(stack[1].s_string,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { bool _r = o->isDir((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isReadOnly();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->lastModified((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->mkdir((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->myComputer());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->myComputer(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { bool _r = o->nameFilterDisables();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->nameFilters());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: /* o->permissions((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))) | ret: `QFile::Permissions` */ break;
        case 17: { bool _r = o->remove((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->resolveSymlinks();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->rmdir((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { /* COPY OBJECT */
            QDir *_r = new QDir(o->rootDirectory());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { QString _r = o->rootPath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: o->setFilter(QDir::Filters(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setIconProvider(reinterpret_cast<QFileIconProvider*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setNameFilterDisables(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setNameFilters((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setReadOnly(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setResolveSymlinks(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 28: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->setRootPath(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { long _r = o->size((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 30: { QString _r = o->type((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 31: { bool _r;
                if (isWrapper) _r = ((PlastiQQFileSystemModelWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: if (isWrapper) ((PlastiQQFileSystemModelWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQAbstractItemModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFileSystemModel *o = reinterpret_cast<QFileSystemModel*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QFileSystemModel::directoryLoaded,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "directoryLoaded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QFileSystemModel::fileRenamed,
            [=](const QString& arg0, const QString& arg1, const QString& arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                    cstack[1].s_string = const_cast<QString&>(arg1);
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                    cstack[2].s_string = const_cast<QString&>(arg2);
                    cstack[2].type = PlastiQ::String; cstack[2].name = "QString";
                PlastiQ_activate(sender, "fileRenamed", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QFileSystemModel::rootPathChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "rootPathChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFileSystemModel *o = reinterpret_cast<QFileSystemModel*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFileSystemModel *o = reinterpret_cast<QFileSystemModel*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFileSystemModel *o = reinterpret_cast<QFileSystemModel*>(object->plastiq_data());

        if(className == "QAbstractItemModel") {
            stack[0].s_voidp = static_cast<QAbstractItemModel*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFileSystemModel::~PlastiQQFileSystemModel() {
    QFileSystemModel* o = reinterpret_cast<QFileSystemModel*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
