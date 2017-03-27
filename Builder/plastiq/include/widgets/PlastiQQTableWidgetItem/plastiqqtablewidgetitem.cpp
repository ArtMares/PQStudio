#include "plastiqmethod.h"
#include "plastiqqtablewidgetitem.h"

#include <QTableWidgetItem> 
#include <QBrush>
#include <QVariant>
#include <QFont>
#include <QIcon>
#include <QDataStream>
#include <QSize>
#include <QString>
#include <QTableWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidgetItem::plastiqConstructors = {
    { "QTableWidgetItem()", { "QTableWidgetItem", "", "QTableWidgetItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidgetItem(int)", { "QTableWidgetItem", "int", "QTableWidgetItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidgetItem(QString)", { "QTableWidgetItem", "QString&", "QTableWidgetItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidgetItem(QString,int)", { "QTableWidgetItem", "QString&,int", "QTableWidgetItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidgetItem(QIcon&,QString)", { "QTableWidgetItem", "QIcon&,QString&", "QTableWidgetItem*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidgetItem(QIcon&,QString,int)", { "QTableWidgetItem", "QIcon&,QString&,int", "QTableWidgetItem*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidgetItem(QTableWidgetItem&)", { "QTableWidgetItem", "QTableWidgetItem&", "QTableWidgetItem*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidgetItem::plastiqMethods = {
    { "background()", { "background", "", "QBrush", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkState()", { "checkState", "", "Qt::CheckState", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clone()", { "clone", "", "QTableWidgetItem*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "column()", { "column", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(int)", { "data", "int", "QVariant", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::ItemFlags", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foreground()", { "foreground", "", "QBrush", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSelected()", { "isSelected", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(QDataStream&)", { "read", "QDataStream&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row()", { "row", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackground(QBrush&)", { "setBackground", "QBrush&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckState(enum)", { "setCheckState", "Qt::CheckState", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(int,QVariant)", { "setData", "int,QVariant&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "Qt::ItemFlags", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setForeground(QBrush&)", { "setForeground", "QBrush&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelected(bool)", { "setSelected", "bool", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeHint(QSize&)", { "setSizeHint", "QSize&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatusTip(QString)", { "setStatusTip", "QString&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextAlignment(int)", { "setTextAlignment", "int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWhatsThis(QString)", { "setWhatsThis", "QString&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint()", { "sizeHint", "", "QSize", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "statusTip()", { "statusTip", "", "QString", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tableWidget()", { "tableWidget", "", "QTableWidget*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textAlignment()", { "textAlignment", "", "int", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "int", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "whatsThis()", { "whatsThis", "", "QString", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QDataStream&)", { "write", "QDataStream&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidgetItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTableWidgetItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTableWidgetItem::plastiqConstants = {

    /* QTableWidgetItem::ItemType */
   { "Type", QTableWidgetItem::Type },
   { "UserType", QTableWidgetItem::UserType },

};

QVector<PlastiQMetaObject*> PlastiQQTableWidgetItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTableWidgetItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQTableWidgetItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTableWidgetItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTableWidgetItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTableWidgetItemWrapper : public QTableWidgetItem {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTableWidgetItemWrapper(int type = Type)
         : QTableWidgetItem(type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTableWidgetItemWrapper(const QString &text, int type = Type)
         : QTableWidgetItem(text,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTableWidgetItemWrapper(const QIcon &icon, const QString &text, int type = Type)
         : QTableWidgetItem(icon,text,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTableWidgetItemWrapper(const QTableWidgetItem &other)
         : QTableWidgetItem(other),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    ~PlastiQQTableWidgetItemWrapper() { PlastiQ_self_destroy(pqObjectWPtr); }

    QTableWidgetItem* clone() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QTableWidgetItem* clone()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QTableWidgetItem* _r = reinterpret_cast<QTableWidgetItem*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QTableWidgetItem::clone();
    }

    QTableWidgetItem* PlastiQParentCall_clone() const {
        return QTableWidgetItem::clone();
    }

    QVariant data(int role) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant data(int)");
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
        else return QTableWidgetItem::data(role);
    }

    QVariant PlastiQParentCall_data(int role) const {
        return QTableWidgetItem::data(role);
    }

    void setData(int role, const QVariant &value) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setData(int,const QVariant&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = role;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QVariant");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableWidgetItem::setData(role,value);
    }

    void PlastiQParentCall_setData(int role, const QVariant &value) {
        return QTableWidgetItem::setData(role,value);
    }

};

void PlastiQQTableWidgetItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTableWidgetItemWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTableWidgetItemWrapper(); break;
        case 1: o = new PlastiQQTableWidgetItemWrapper(stack[1].s_int); break;
        case 2: o = new PlastiQQTableWidgetItemWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQTableWidgetItemWrapper(stack[1].s_string,
                    stack[2].s_int); break;
        case 4: o = new PlastiQQTableWidgetItemWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 5: o = new PlastiQQTableWidgetItemWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_int); break;
        case 6: o = new PlastiQQTableWidgetItemWrapper((*reinterpret_cast< QTableWidgetItem(*) >(stack[1].s_voidp))); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTableWidgetItem *p = new PlastiQQTableWidgetItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTableWidgetItem *p = new PlastiQQTableWidgetItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 35) {
            id -= 35;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTableWidgetItem *o = sc ? Q_NULLPTR : reinterpret_cast<QTableWidgetItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->background());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->checkState(); // HACK for Qt::CheckState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QTableWidgetItem* _r;
                if (isWrapper) _r = ((PlastiQQTableWidgetItemWrapper*)o)->PlastiQParentCall_clone();
                else _r = o->clone();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 3: { int _r = o->column();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQTableWidgetItemWrapper*)o)->PlastiQParentCall_data(stack[1].s_int));
                else _r = new QVariant(o->data(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { qint64 _r = o->flags(); // HACK for Qt::ItemFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->foreground());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { bool _r = o->isSelected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->read((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: { int _r = o->row();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: o->setBackground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setCheckState(Qt::CheckState(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQTableWidgetItemWrapper*)o)->PlastiQParentCall_setData(stack[1].s_int,
                    stack[2].s_variant);
                else o->setData(stack[1].s_int,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setFlags(Qt::ItemFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setForeground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setSelected(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setSizeHint((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setStatusTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setTextAlignment(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setWhatsThis(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 26: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeHint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { QString _r = o->statusTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 28: { QTableWidget* _r = o->tableWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTableWidget"; } break;
        case 29: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 30: { int _r = o->textAlignment();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 31: { QString _r = o->toolTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 32: { int _r = o->type();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 33: { QString _r = o->whatsThis();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 34: o->write((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTableWidgetItem *o = reinterpret_cast<QTableWidgetItem*>(object->plastiq_data());
        stack[0].s_bool = o->tableWidget() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTableWidgetItem *o = reinterpret_cast<QTableWidgetItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTableWidgetItem::~PlastiQQTableWidgetItem() {
    QTableWidgetItem* o = reinterpret_cast<QTableWidgetItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
