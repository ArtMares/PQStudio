#include "plastiqmethod.h"
#include "plastiqqtreewidgetitem.h"

#include <QTreeWidgetItem> 
#include <QBrush>
#include <QVariant>
#include <QFont>
#include <QIcon>
#include <QDataStream>
#include <QSize>
#include <QString>
#include <QTreeWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidgetItem::plastiqConstructors = {
    { "QTreeWidgetItem()", { "QTreeWidgetItem", "", "QTreeWidgetItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(int)", { "QTreeWidgetItem", "int", "QTreeWidgetItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QStringList&)", { "QTreeWidgetItem", "QStringList&", "QTreeWidgetItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QStringList&,int)", { "QTreeWidgetItem", "QStringList&,int", "QTreeWidgetItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidget*)", { "QTreeWidgetItem", "QTreeWidget*", "QTreeWidgetItem*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidget*,int)", { "QTreeWidgetItem", "QTreeWidget*,int", "QTreeWidgetItem*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidget*,QStringList&)", { "QTreeWidgetItem", "QTreeWidget*,QStringList&", "QTreeWidgetItem*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidget*,QStringList&,int)", { "QTreeWidgetItem", "QTreeWidget*,QStringList&,int", "QTreeWidgetItem*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidget*,QTreeWidgetItem*)", { "QTreeWidgetItem", "QTreeWidget*,QTreeWidgetItem*", "QTreeWidgetItem*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidget*,QTreeWidgetItem*,int)", { "QTreeWidgetItem", "QTreeWidget*,QTreeWidgetItem*,int", "QTreeWidgetItem*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidgetItem*)", { "QTreeWidgetItem", "QTreeWidgetItem*", "QTreeWidgetItem*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidgetItem*,int)", { "QTreeWidgetItem", "QTreeWidgetItem*,int", "QTreeWidgetItem*", 11, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidgetItem*,QStringList&)", { "QTreeWidgetItem", "QTreeWidgetItem*,QStringList&", "QTreeWidgetItem*", 12, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidgetItem*,QStringList&,int)", { "QTreeWidgetItem", "QTreeWidgetItem*,QStringList&,int", "QTreeWidgetItem*", 13, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidgetItem*,QTreeWidgetItem*)", { "QTreeWidgetItem", "QTreeWidgetItem*,QTreeWidgetItem*", "QTreeWidgetItem*", 14, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidgetItem*,QTreeWidgetItem*,int)", { "QTreeWidgetItem", "QTreeWidgetItem*,QTreeWidgetItem*,int", "QTreeWidgetItem*", 15, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidgetItem(QTreeWidgetItem&)", { "QTreeWidgetItem", "QTreeWidgetItem&", "QTreeWidgetItem*", 16, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidgetItem::plastiqMethods = {
    { "addChild(QTreeWidgetItem*)", { "addChild", "QTreeWidgetItem*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addChildren(QList<QTreeWidgetItem*>&)", { "addChildren", "QList<QTreeWidgetItem*>&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "background(int)", { "background", "int", "QBrush", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkState(int)", { "checkState", "int", "Qt::CheckState", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "child(int)", { "child", "int", "QTreeWidgetItem*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childCount()", { "childCount", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childIndicatorPolicy()", { "childIndicatorPolicy", "", "QTreeWidgetItem::ChildIndicatorPolicy", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clone()", { "clone", "", "QTreeWidgetItem*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(int,int)", { "data", "int,int", "QVariant", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::ItemFlags", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font(int)", { "font", "int", "QFont", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foreground(int)", { "foreground", "int", "QBrush", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon(int)", { "icon", "int", "QIcon", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOfChild(QTreeWidgetItem*)", { "indexOfChild", "QTreeWidgetItem*", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertChild(int,QTreeWidgetItem*)", { "insertChild", "int,QTreeWidgetItem*", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertChildren(int,QList<QTreeWidgetItem*>&)", { "insertChildren", "int,QList<QTreeWidgetItem*>&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDisabled()", { "isDisabled", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isExpanded()", { "isExpanded", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFirstColumnSpanned()", { "isFirstColumnSpanned", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isHidden()", { "isHidden", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSelected()", { "isSelected", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parent()", { "parent", "", "QTreeWidgetItem*", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(QDataStream&)", { "read", "QDataStream&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeChild(QTreeWidgetItem*)", { "removeChild", "QTreeWidgetItem*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackground(int,QBrush&)", { "setBackground", "int,QBrush&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckState(int,enum)", { "setCheckState", "int,Qt::CheckState", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChildIndicatorPolicy(enum)", { "setChildIndicatorPolicy", "QTreeWidgetItem::ChildIndicatorPolicy", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(int,int,QVariant)", { "setData", "int,int,QVariant&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDisabled(bool)", { "setDisabled", "bool", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExpanded(bool)", { "setExpanded", "bool", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstColumnSpanned(bool)", { "setFirstColumnSpanned", "bool", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "Qt::ItemFlags", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(int,QFont&)", { "setFont", "int,QFont&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setForeground(int,QBrush&)", { "setForeground", "int,QBrush&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHidden(bool)", { "setHidden", "bool", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(int,QIcon&)", { "setIcon", "int,QIcon&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelected(bool)", { "setSelected", "bool", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeHint(int,QSize&)", { "setSizeHint", "int,QSize&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatusTip(int,QString)", { "setStatusTip", "int,QString&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(int,QString)", { "setText", "int,QString&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextAlignment(int,int)", { "setTextAlignment", "int,int", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(int,QString)", { "setToolTip", "int,QString&", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWhatsThis(int,QString)", { "setWhatsThis", "int,QString&", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint(int)", { "sizeHint", "int", "QSize", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortChildren(int,enum)", { "sortChildren", "int,Qt::SortOrder", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "statusTip(int)", { "statusTip", "int", "QString", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeChild(int)", { "takeChild", "int", "QTreeWidgetItem*", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(int)", { "text", "int", "QString", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textAlignment(int)", { "textAlignment", "int", "int", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip(int)", { "toolTip", "int", "QString", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "treeWidget()", { "treeWidget", "", "QTreeWidget*", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "int", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "whatsThis(int)", { "whatsThis", "int", "QString", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QDataStream&)", { "write", "QDataStream&", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "emitDataChanged()", { "emitDataChanged", "", "void", 55, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidgetItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTreeWidgetItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTreeWidgetItem::plastiqConstants = {

    /* QTreeWidgetItem::ChildIndicatorPolicy */
   { "ShowIndicator", QTreeWidgetItem::ShowIndicator },
   { "DontShowIndicator", QTreeWidgetItem::DontShowIndicator },
   { "DontShowIndicatorWhenChildless", QTreeWidgetItem::DontShowIndicatorWhenChildless },

    /* QTreeWidgetItem::ItemType */
   { "Type", QTreeWidgetItem::Type },
   { "UserType", QTreeWidgetItem::UserType },

};

QVector<PlastiQMetaObject*> PlastiQQTreeWidgetItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTreeWidgetItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQTreeWidgetItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTreeWidgetItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTreeWidgetItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTreeWidgetItemWrapper : public QTreeWidgetItem {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTreeWidgetItemWrapper(int type = Type)
         : QTreeWidgetItem(type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTreeWidgetItemWrapper(const QStringList &strings, int type = Type)
         : QTreeWidgetItem(strings,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTreeWidgetItemWrapper(QTreeWidget *parent, int type = Type)
         : QTreeWidgetItem(parent,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTreeWidgetItemWrapper(QTreeWidget *parent, const QStringList &strings, int type = Type)
         : QTreeWidgetItem(parent,strings,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTreeWidgetItemWrapper(QTreeWidget *parent, QTreeWidgetItem *preceding, int type = Type)
         : QTreeWidgetItem(parent,preceding,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTreeWidgetItemWrapper(QTreeWidgetItem *parent, int type = Type)
         : QTreeWidgetItem(parent,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTreeWidgetItemWrapper(QTreeWidgetItem *parent, const QStringList &strings, int type = Type)
         : QTreeWidgetItem(parent,strings,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTreeWidgetItemWrapper(QTreeWidgetItem *parent, QTreeWidgetItem *preceding, int type = Type)
         : QTreeWidgetItem(parent,preceding,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTreeWidgetItemWrapper(const QTreeWidgetItem &other)
         : QTreeWidgetItem(other),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    ~PlastiQQTreeWidgetItemWrapper() { PlastiQ_self_destroy(pqObjectWPtr); }

    QTreeWidgetItem* clone() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QTreeWidgetItem* clone()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QTreeWidgetItem* _r = reinterpret_cast<QTreeWidgetItem*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QTreeWidgetItem::clone();
    }

    QTreeWidgetItem* PlastiQParentCall_clone() const {
        return QTreeWidgetItem::clone();
    }

    QVariant data(int column, int role) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant data(int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = column;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = role;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QTreeWidgetItem::data(column,role);
    }

    QVariant PlastiQParentCall_data(int column, int role) const {
        return QTreeWidgetItem::data(column,role);
    }

    void setData(int column, int role, const QVariant &value) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setData(int,int,const QVariant&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = column;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = role;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QVariant");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidgetItem::setData(column,role,value);
    }

    void PlastiQParentCall_setData(int column, int role, const QVariant &value) {
        return QTreeWidgetItem::setData(column,role,value);
    }

};

void PlastiQQTreeWidgetItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTreeWidgetItemWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTreeWidgetItemWrapper(); break;
        case 1: o = new PlastiQQTreeWidgetItemWrapper(stack[1].s_int); break;
        case 2: o = new PlastiQQTreeWidgetItemWrapper((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); break;
        case 3: o = new PlastiQQTreeWidgetItemWrapper((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    stack[2].s_int); break;
        case 4: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidget*>(stack[1].s_voidp)); break;
        case 5: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidget*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 6: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))); break;
        case 7: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    stack[3].s_int); break;
        case 8: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QTreeWidgetItem*>(stack[2].s_voidp)); break;
        case 9: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QTreeWidgetItem*>(stack[2].s_voidp),
                    stack[3].s_int); break;
        case 10: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp)); break;
        case 11: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 12: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))); break;
        case 13: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    stack[3].s_int); break;
        case 14: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    reinterpret_cast<QTreeWidgetItem*>(stack[2].s_voidp)); break;
        case 15: o = new PlastiQQTreeWidgetItemWrapper(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    reinterpret_cast<QTreeWidgetItem*>(stack[2].s_voidp),
                    stack[3].s_int); break;
        case 16: o = new PlastiQQTreeWidgetItemWrapper((*reinterpret_cast< QTreeWidgetItem(*) >(stack[1].s_voidp))); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTreeWidgetItem *p = new PlastiQQTreeWidgetItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTreeWidgetItem *p = new PlastiQQTreeWidgetItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 56) {
            id -= 56;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTreeWidgetItem *o = sc ? Q_NULLPTR : reinterpret_cast<QTreeWidgetItem*>(object->plastiq_data());

        switch(id) {
        case 0: o->addChild(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addChildren((*reinterpret_cast< QList<QTreeWidgetItem*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->background(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { qint64 _r = o->checkState(stack[1].s_int); // HACK for Qt::CheckState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { QTreeWidgetItem* _r = o->child(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 5: { int _r = o->childCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { qint64 _r = o->childIndicatorPolicy(); // HACK for QTreeWidgetItem::ChildIndicatorPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { QTreeWidgetItem* _r;
                if (isWrapper) _r = ((PlastiQQTreeWidgetItemWrapper*)o)->PlastiQParentCall_clone();
                else _r = o->clone();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 8: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQTreeWidgetItemWrapper*)o)->PlastiQParentCall_data(stack[1].s_int,
                    stack[2].s_int));
                else _r = new QVariant(o->data(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { qint64 _r = o->flags(); // HACK for Qt::ItemFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->foreground(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { int _r = o->indexOfChild(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: o->insertChild(stack[1].s_int,
                    reinterpret_cast<QTreeWidgetItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->insertChildren(stack[1].s_int,
                    (*reinterpret_cast< QList<QTreeWidgetItem*>(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: { bool _r = o->isDisabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->isExpanded();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isFirstColumnSpanned();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->isHidden();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->isSelected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { QTreeWidgetItem* _r = o->parent();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 23: o->read((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->removeChild(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setBackground(stack[1].s_int,
                    (*reinterpret_cast< QBrush(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setCheckState(stack[1].s_int,
                    Qt::CheckState(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setChildIndicatorPolicy(QTreeWidgetItem::ChildIndicatorPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQTreeWidgetItemWrapper*)o)->PlastiQParentCall_setData(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_variant);
                else o->setData(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setDisabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setExpanded(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setFirstColumnSpanned(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setFlags(Qt::ItemFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setFont(stack[1].s_int,
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setForeground(stack[1].s_int,
                    (*reinterpret_cast< QBrush(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setHidden(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setIcon(stack[1].s_int,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setSelected(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setSizeHint(stack[1].s_int,
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setStatusTip(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setText(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setTextAlignment(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setToolTip(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setWhatsThis(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 44: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeHint(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: o->sortChildren(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 46: { QString _r = o->statusTip(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 47: { QTreeWidgetItem* _r = o->takeChild(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 48: { QString _r = o->text(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 49: { int _r = o->textAlignment(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 50: { QString _r = o->toolTip(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 51: { QTreeWidget* _r = o->treeWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTreeWidget"; } break;
        case 52: { int _r = o->type();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: { QString _r = o->whatsThis(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 54: o->write((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 55: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTreeWidgetItem *o = reinterpret_cast<QTreeWidgetItem*>(object->plastiq_data());
        stack[0].s_bool = o->treeWidget() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTreeWidgetItem *o = reinterpret_cast<QTreeWidgetItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTreeWidgetItem::~PlastiQQTreeWidgetItem() {
    QTreeWidgetItem* o = reinterpret_cast<QTreeWidgetItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
