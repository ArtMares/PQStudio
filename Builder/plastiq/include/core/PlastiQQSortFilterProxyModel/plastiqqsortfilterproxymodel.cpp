#include "plastiqmethod.h"
#include "plastiqqsortfilterproxymodel.h"

#include "core/PlastiQQAbstractProxyModel/plastiqqabstractproxymodel.h"
#include <QSortFilterProxyModel> 
#include <QRegExp>
#include <QModelIndex>

QHash<QByteArray, PlastiQMethod> PlastiQQSortFilterProxyModel::plastiqConstructors = {
    { "QSortFilterProxyModel()", { "QSortFilterProxyModel", "", "QSortFilterProxyModel*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSortFilterProxyModel(QObject*)", { "QSortFilterProxyModel", "QObject*", "QSortFilterProxyModel*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSortFilterProxyModel::plastiqMethods = {
    { "dynamicSortFilter()", { "dynamicSortFilter", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filterCaseSensitivity()", { "filterCaseSensitivity", "", "Qt::CaseSensitivity", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filterKeyColumn()", { "filterKeyColumn", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filterRegExp()", { "filterRegExp", "", "QRegExp", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filterRole()", { "filterRole", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSortLocaleAware()", { "isSortLocaleAware", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDynamicSortFilter(bool)", { "setDynamicSortFilter", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilterCaseSensitivity(enum)", { "setFilterCaseSensitivity", "Qt::CaseSensitivity", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilterKeyColumn(int)", { "setFilterKeyColumn", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilterRegExp(QRegExp&)", { "setFilterRegExp", "QRegExp&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilterRole(int)", { "setFilterRole", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortCaseSensitivity(enum)", { "setSortCaseSensitivity", "Qt::CaseSensitivity", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortLocaleAware(bool)", { "setSortLocaleAware", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortRole(int)", { "setSortRole", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortCaseSensitivity()", { "sortCaseSensitivity", "", "Qt::CaseSensitivity", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortColumn()", { "sortColumn", "", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortOrder()", { "sortOrder", "", "Qt::SortOrder", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortRole()", { "sortRole", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filterAcceptsColumn(int,QModelIndex&)", { "filterAcceptsColumn", "int,QModelIndex&", "bool", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "filterAcceptsRow(int,QModelIndex&)", { "filterAcceptsRow", "int,QModelIndex&", "bool", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "invalidateFilter()", { "invalidateFilter", "", "void", 20, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "lessThan(QModelIndex&,QModelIndex&)", { "lessThan", "QModelIndex&,QModelIndex&", "bool", 21, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "invalidate()", { "invalidate", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFilterFixedString(QString)", { "setFilterFixedString", "QString&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFilterRegExp(QString)", { "setFilterRegExp", "QString&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFilterWildcard(QString)", { "setFilterWildcard", "QString&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSortFilterProxyModel::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSortFilterProxyModel::plastiqProperties = {
    { "dynamicSortFilter", { "dynamicSortFilter", "bool", "setDynamicSortFilter", "dynamicSortFilter" } },
    { "filterCaseSensitivity", { "filterCaseSensitivity", "long", "setFilterCaseSensitivity", "filterCaseSensitivity" } },
    { "filterKeyColumn", { "filterKeyColumn", "int", "setFilterKeyColumn", "filterKeyColumn" } },
    { "filterRegExp", { "filterRegExp", "QRegExp", "setFilterRegExp", "filterRegExp" } },
    { "filterRole", { "filterRole", "int", "setFilterRole", "filterRole" } },
    { "isSortLocaleAware", { "isSortLocaleAware", "bool", "setSortLocaleAware", "isSortLocaleAware" } },
    { "sortCaseSensitivity", { "sortCaseSensitivity", "long", "setSortCaseSensitivity", "sortCaseSensitivity" } },
    { "sortRole", { "sortRole", "int", "setSortRole", "sortRole" } },

};

QHash<QByteArray, long> PlastiQQSortFilterProxyModel::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSortFilterProxyModel::plastiqInherits = { &PlastiQQAbstractProxyModel::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSortFilterProxyModel::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSortFilterProxyModel::plastiq_static_metaObject = {
    { &PlastiQQAbstractProxyModel::plastiq_static_metaObject, &plastiqInherits, "QSortFilterProxyModel", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSortFilterProxyModel::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSortFilterProxyModelWrapper : public QSortFilterProxyModel {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSortFilterProxyModelWrapper(QObject *parent = Q_NULLPTR)
         : QSortFilterProxyModel(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool filterAcceptsColumn(int source_column, const QModelIndex &source_parent) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool filterAcceptsColumn(int,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = source_column;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_voidp = new QModelIndex(source_parent) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QModelIndex");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QSortFilterProxyModel::filterAcceptsColumn(source_column,source_parent);
    }

    bool PlastiQParentCall_filterAcceptsColumn(int source_column, const QModelIndex &source_parent) const {
        return QSortFilterProxyModel::filterAcceptsColumn(source_column,source_parent);
    }

    bool filterAcceptsRow(int source_row, const QModelIndex &source_parent) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool filterAcceptsRow(int,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = source_row;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_voidp = new QModelIndex(source_parent) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QModelIndex");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QSortFilterProxyModel::filterAcceptsRow(source_row,source_parent);
    }

    bool PlastiQParentCall_filterAcceptsRow(int source_row, const QModelIndex &source_parent) const {
        return QSortFilterProxyModel::filterAcceptsRow(source_row,source_parent);
    }

    bool lessThan(const QModelIndex &source_left, const QModelIndex &source_right) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool lessThan(const QModelIndex&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QModelIndex(source_left) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QModelIndex(source_right) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QModelIndex");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QSortFilterProxyModel::lessThan(source_left,source_right);
    }

    bool PlastiQParentCall_lessThan(const QModelIndex &source_left, const QModelIndex &source_right) const {
        return QSortFilterProxyModel::lessThan(source_left,source_right);
    }

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
        else return QSortFilterProxyModel::setSourceModel(sourceModel);
    }

    void PlastiQParentCall_setSourceModel(QAbstractItemModel *sourceModel) {
        return QSortFilterProxyModel::setSourceModel(sourceModel);
    }

};

void PlastiQQSortFilterProxyModel::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSortFilterProxyModelWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSortFilterProxyModelWrapper(); break;
        case 1: o = new PlastiQQSortFilterProxyModelWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSortFilterProxyModel *p = new PlastiQQSortFilterProxyModel();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSortFilterProxyModel *p = new PlastiQQSortFilterProxyModel();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 26) {
            id -= 26;
            PlastiQQAbstractProxyModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSortFilterProxyModel *o = sc ? Q_NULLPTR : reinterpret_cast<QSortFilterProxyModel*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->dynamicSortFilter();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { qint64 _r = o->filterCaseSensitivity(); // HACK for Qt::CaseSensitivity 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { int _r = o->filterKeyColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QRegExp *_r = new QRegExp(o->filterRegExp());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegExp";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { int _r = o->filterRole();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { bool _r = o->isSortLocaleAware();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->setDynamicSortFilter(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFilterCaseSensitivity(Qt::CaseSensitivity(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFilterKeyColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setFilterRegExp((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setFilterRole(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setSortCaseSensitivity(Qt::CaseSensitivity(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setSortLocaleAware(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setSortRole(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: { qint64 _r = o->sortCaseSensitivity(); // HACK for Qt::CaseSensitivity 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { int _r = o->sortColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { qint64 _r = o->sortOrder(); // HACK for Qt::SortOrder 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { int _r = o->sortRole();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { bool _r;
                if (isWrapper) _r = ((PlastiQQSortFilterProxyModelWrapper*)o)->PlastiQParentCall_filterAcceptsColumn(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r;
                if (isWrapper) _r = ((PlastiQQSortFilterProxyModelWrapper*)o)->PlastiQParentCall_filterAcceptsRow(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 21: { bool _r;
                if (isWrapper) _r = ((PlastiQQSortFilterProxyModelWrapper*)o)->PlastiQParentCall_lessThan((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: o->invalidate();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setFilterFixedString(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setFilterRegExp(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setFilterWildcard(stack[1].s_string);
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
        QSortFilterProxyModel *o = reinterpret_cast<QSortFilterProxyModel*>(object->plastiq_data());

        if(className == "QAbstractProxyModel") {
            stack[0].s_voidp = static_cast<QAbstractProxyModel*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSortFilterProxyModel::~PlastiQQSortFilterProxyModel() {
    QSortFilterProxyModel* o = reinterpret_cast<QSortFilterProxyModel*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
