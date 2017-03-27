#include "plastiqmethod.h"
#include "plastiqqstandarditem.h"

#include <QStandardItem> 
#include <QString>
#include <QBrush>
#include <QVariant>
#include <QFont>
#include <QIcon>
#include <QModelIndex>
#include <QStandardItemModel>
#include <QDataStream>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQStandardItem::plastiqConstructors = {
    { "QStandardItem()", { "QStandardItem", "", "QStandardItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStandardItem(QString)", { "QStandardItem", "QString&", "QStandardItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStandardItem(QIcon&,QString)", { "QStandardItem", "QIcon&,QString&", "QStandardItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStandardItem(int)", { "QStandardItem", "int", "QStandardItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStandardItem(int,int)", { "QStandardItem", "int,int", "QStandardItem*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStandardItem::plastiqMethods = {
    { "accessibleDescription()", { "accessibleDescription", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "accessibleText()", { "accessibleText", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "appendColumn(QList<QStandardItem*>&)", { "appendColumn", "QList<QStandardItem*>&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "appendRow(QList<QStandardItem*>&)", { "appendRow", "QList<QStandardItem*>&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "appendRow(QStandardItem*)", { "appendRow", "QStandardItem*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "appendRows(QList<QStandardItem*>&)", { "appendRows", "QList<QStandardItem*>&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "background()", { "background", "", "QBrush", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkState()", { "checkState", "", "Qt::CheckState", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "child(int)", { "child", "int", "QStandardItem*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "child(int,int)", { "child", "int,int", "QStandardItem*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clone()", { "clone", "", "QStandardItem*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "column()", { "column", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "QVariant", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(int)", { "data", "int", "QVariant", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::ItemFlags", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foreground()", { "foreground", "", "QBrush", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasChildren()", { "hasChildren", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "index()", { "index", "", "QModelIndex", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumn(int,QList<QStandardItem*>&)", { "insertColumn", "int,QList<QStandardItem*>&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumns(int,int)", { "insertColumns", "int,int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QList<QStandardItem*>&)", { "insertRow", "int,QList<QStandardItem*>&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QStandardItem*)", { "insertRow", "int,QStandardItem*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRows(int,QList<QStandardItem*>&)", { "insertRows", "int,QList<QStandardItem*>&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRows(int,int)", { "insertRows", "int,int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAutoTristate()", { "isAutoTristate", "", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCheckable()", { "isCheckable", "", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDragEnabled()", { "isDragEnabled", "", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDropEnabled()", { "isDropEnabled", "", "bool", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEditable()", { "isEditable", "", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSelectable()", { "isSelectable", "", "bool", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUserTristate()", { "isUserTristate", "", "bool", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QStandardItemModel*", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parent()", { "parent", "", "QStandardItem*", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(QDataStream&)", { "read", "QDataStream&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeColumn(int)", { "removeColumn", "int", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeColumns(int,int)", { "removeColumns", "int,int", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRow(int)", { "removeRow", "int", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRows(int,int)", { "removeRows", "int,int", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row()", { "row", "", "int", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccessibleDescription(QString)", { "setAccessibleDescription", "QString&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccessibleText(QString)", { "setAccessibleText", "QString&", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoTristate(bool)", { "setAutoTristate", "bool", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackground(QBrush&)", { "setBackground", "QBrush&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckState(enum)", { "setCheckState", "Qt::CheckState", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckable(bool)", { "setCheckable", "bool", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChild(int,int,QStandardItem*)", { "setChild", "int,int,QStandardItem*", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChild(int,QStandardItem*)", { "setChild", "int,QStandardItem*", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnCount(int)", { "setColumnCount", "int", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(QVariant)", { "setData", "QVariant&", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(QVariant,int)", { "setData", "QVariant&,int", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDragEnabled(bool)", { "setDragEnabled", "bool", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDropEnabled(bool)", { "setDropEnabled", "bool", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEditable(bool)", { "setEditable", "bool", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "Qt::ItemFlags", "void", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setForeground(QBrush&)", { "setForeground", "QBrush&", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowCount(int)", { "setRowCount", "int", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectable(bool)", { "setSelectable", "bool", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeHint(QSize&)", { "setSizeHint", "QSize&", "void", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatusTip(QString)", { "setStatusTip", "QString&", "void", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextAlignment(enum)", { "setTextAlignment", "Qt::Alignment", "void", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUserTristate(bool)", { "setUserTristate", "bool", "void", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWhatsThis(QString)", { "setWhatsThis", "QString&", "void", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint()", { "sizeHint", "", "QSize", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortChildren(int)", { "sortChildren", "int", "void", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortChildren(int,enum)", { "sortChildren", "int,Qt::SortOrder", "void", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "statusTip()", { "statusTip", "", "QString", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeChild(int)", { "takeChild", "int", "QStandardItem*", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeChild(int,int)", { "takeChild", "int,int", "QStandardItem*", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textAlignment()", { "textAlignment", "", "Qt::Alignment", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "int", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "whatsThis()", { "whatsThis", "", "QString", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QDataStream&)", { "write", "QDataStream&", "void", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "emitDataChanged()", { "emitDataChanged", "", "void", 84, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStandardItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStandardItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStandardItem::plastiqConstants = {

    /* QStandardItem::ItemType */
   { "Type", QStandardItem::Type },
   { "UserType", QStandardItem::UserType },

};

QVector<PlastiQMetaObject*> PlastiQQStandardItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStandardItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQStandardItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStandardItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStandardItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQStandardItemWrapper : public QStandardItem {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQStandardItemWrapper()
         : QStandardItem(),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQStandardItemWrapper(const QString &text)
         : QStandardItem(text),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQStandardItemWrapper(const QIcon &icon, const QString &text)
         : QStandardItem(icon,text),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQStandardItemWrapper(int rows, int columns = 1)
         : QStandardItem(rows,columns),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    ~PlastiQQStandardItemWrapper() { PlastiQ_self_destroy(pqObjectWPtr); }

    QStandardItem* clone() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QStandardItem* clone()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QStandardItem* _r = reinterpret_cast<QStandardItem*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QStandardItem::clone();
    }

    QStandardItem* PlastiQParentCall_clone() const {
        return QStandardItem::clone();
    }

    QVariant data(int role = Qt::UserRole + 1) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant data(int=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = role;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QStandardItem::data(role);
    }

    QVariant PlastiQParentCall_data(int role = Qt::UserRole + 1) const {
        return QStandardItem::data(role);
    }

    void setData(const QVariant &value, int role = Qt::UserRole + 1) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setData(const QVariant&,int=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QVariant");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int = role;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStandardItem::setData(value,role);
    }

    void PlastiQParentCall_setData(const QVariant &value, int role = Qt::UserRole + 1) {
        return QStandardItem::setData(value,role);
    }

    int type() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int type()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QStandardItem::type();
    }

    int PlastiQParentCall_type() const {
        return QStandardItem::type();
    }

};

void PlastiQQStandardItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQStandardItemWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQStandardItemWrapper(); break;
        case 1: o = new PlastiQQStandardItemWrapper(stack[1].s_string); break;
        case 2: o = new PlastiQQStandardItemWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 3: o = new PlastiQQStandardItemWrapper(stack[1].s_int); break;
        case 4: o = new PlastiQQStandardItemWrapper(stack[1].s_int,
                    stack[2].s_int); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQStandardItem *p = new PlastiQQStandardItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStandardItem *p = new PlastiQQStandardItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 85) {
            id -= 85;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStandardItem *o = sc ? Q_NULLPTR : reinterpret_cast<QStandardItem*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->accessibleDescription();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->accessibleText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: o->appendColumn((*reinterpret_cast< QList<QStandardItem*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->appendRow((*reinterpret_cast< QList<QStandardItem*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->appendRow(reinterpret_cast<QStandardItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->appendRows((*reinterpret_cast< QList<QStandardItem*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->background());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { qint64 _r = o->checkState(); // HACK for Qt::CheckState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { QStandardItem* _r = o->child(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 9: { QStandardItem* _r = o->child(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 10: { QStandardItem* _r;
                if (isWrapper) _r = ((PlastiQQStandardItemWrapper*)o)->PlastiQParentCall_clone();
                else _r = o->clone();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 11: { int _r = o->column();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQStandardItemWrapper*)o)->PlastiQParentCall_data());
                else _r = new QVariant(o->data());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQStandardItemWrapper*)o)->PlastiQParentCall_data(stack[1].s_int));
                else _r = new QVariant(o->data(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { qint64 _r = o->flags(); // HACK for Qt::ItemFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->foreground());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { bool _r = o->hasChildren();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->index());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: o->insertColumn(stack[1].s_int,
                    (*reinterpret_cast< QList<QStandardItem*>(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->insertColumns(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->insertRow(stack[1].s_int,
                    (*reinterpret_cast< QList<QStandardItem*>(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->insertRow(stack[1].s_int,
                    reinterpret_cast<QStandardItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->insertRows(stack[1].s_int,
                    (*reinterpret_cast< QList<QStandardItem*>(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->insertRows(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 27: { bool _r = o->isAutoTristate();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { bool _r = o->isCheckable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: { bool _r = o->isDragEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: { bool _r = o->isDropEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 31: { bool _r = o->isEditable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: { bool _r = o->isSelectable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 34: { bool _r = o->isUserTristate();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 35: { QStandardItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStandardItemModel"; } break;
        case 36: { QStandardItem* _r = o->parent();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 37: o->read((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->removeColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->removeColumns(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->removeRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->removeRows(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 42: { int _r = o->row();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 43: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 44: o->setAccessibleDescription(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setAccessibleText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setAutoTristate(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setBackground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setCheckState(Qt::CheckState(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setCheckable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setChild(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<QStandardItem*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setChild(stack[1].s_int,
                    reinterpret_cast<QStandardItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 52: o->setColumnCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 53: if (isWrapper) ((PlastiQQStandardItemWrapper*)o)->PlastiQParentCall_setData(stack[1].s_variant);
                else o->setData(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 54: if (isWrapper) ((PlastiQQStandardItemWrapper*)o)->PlastiQParentCall_setData(stack[1].s_variant,
                    stack[2].s_int);
                else o->setData(stack[1].s_variant,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 55: o->setDragEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 56: o->setDropEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 57: o->setEditable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 58: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 59: o->setFlags(Qt::ItemFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 60: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 61: o->setForeground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 62: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 63: o->setRowCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 64: o->setSelectable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 65: o->setSizeHint((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 66: o->setStatusTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 67: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 68: o->setTextAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 69: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 70: o->setUserTristate(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 71: o->setWhatsThis(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 72: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeHint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 73: o->sortChildren(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 74: o->sortChildren(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 75: { QString _r = o->statusTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 76: { QStandardItem* _r = o->takeChild(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 77: { QStandardItem* _r = o->takeChild(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QStandardItem"; } break;
        case 78: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 79: { qint64 _r = o->textAlignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 80: { QString _r = o->toolTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 81: { int _r;
                if (isWrapper) _r = ((PlastiQQStandardItemWrapper*)o)->PlastiQParentCall_type();
                else _r = o->type();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 82: { QString _r = o->whatsThis();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 83: o->write((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 84: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStandardItem *o = reinterpret_cast<QStandardItem*>(object->plastiq_data());
        stack[0].s_bool = o->model() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStandardItem *o = reinterpret_cast<QStandardItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStandardItem::~PlastiQQStandardItem() {
    QStandardItem* o = reinterpret_cast<QStandardItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
