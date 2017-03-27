#include "plastiqmethod.h"
#include "plastiqqlistwidgetitem.h"

#include <QListWidgetItem> 
#include <QBrush>
#include <QVariant>
#include <QFont>
#include <QIcon>
#include <QListWidget>
#include <QDataStream>
#include <QSize>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQListWidgetItem::plastiqConstructors = {
    { "QListWidgetItem()", { "QListWidgetItem", "", "QListWidgetItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QListWidget*)", { "QListWidgetItem", "QListWidget*", "QListWidgetItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QListWidget*,int)", { "QListWidgetItem", "QListWidget*,int", "QListWidgetItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QString)", { "QListWidgetItem", "QString&", "QListWidgetItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QString,QListWidget*)", { "QListWidgetItem", "QString&,QListWidget*", "QListWidgetItem*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QString,QListWidget*,int)", { "QListWidgetItem", "QString&,QListWidget*,int", "QListWidgetItem*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QIcon&,QString)", { "QListWidgetItem", "QIcon&,QString&", "QListWidgetItem*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QIcon&,QString,QListWidget*)", { "QListWidgetItem", "QIcon&,QString&,QListWidget*", "QListWidgetItem*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QIcon&,QString,QListWidget*,int)", { "QListWidgetItem", "QIcon&,QString&,QListWidget*,int", "QListWidgetItem*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidgetItem(QListWidgetItem&)", { "QListWidgetItem", "QListWidgetItem&", "QListWidgetItem*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQListWidgetItem::plastiqMethods = {
    { "background()", { "background", "", "QBrush", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkState()", { "checkState", "", "Qt::CheckState", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clone()", { "clone", "", "QListWidgetItem*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(int)", { "data", "int", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::ItemFlags", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foreground()", { "foreground", "", "QBrush", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isHidden()", { "isHidden", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSelected()", { "isSelected", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "listWidget()", { "listWidget", "", "QListWidget*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(QDataStream&)", { "read", "QDataStream&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackground(QBrush&)", { "setBackground", "QBrush&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckState(enum)", { "setCheckState", "Qt::CheckState", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(int,QVariant)", { "setData", "int,QVariant&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "Qt::ItemFlags", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setForeground(QBrush&)", { "setForeground", "QBrush&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHidden(bool)", { "setHidden", "bool", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelected(bool)", { "setSelected", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeHint(QSize&)", { "setSizeHint", "QSize&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatusTip(QString)", { "setStatusTip", "QString&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextAlignment(int)", { "setTextAlignment", "int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWhatsThis(QString)", { "setWhatsThis", "QString&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint()", { "sizeHint", "", "QSize", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "statusTip()", { "statusTip", "", "QString", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textAlignment()", { "textAlignment", "", "int", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "int", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "whatsThis()", { "whatsThis", "", "QString", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QDataStream&)", { "write", "QDataStream&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQListWidgetItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQListWidgetItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQListWidgetItem::plastiqConstants = {

    /* QListWidgetItem::ItemType */
   { "Type", QListWidgetItem::Type },
   { "UserType", QListWidgetItem::UserType },

};

QVector<PlastiQMetaObject*> PlastiQQListWidgetItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQListWidgetItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQListWidgetItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QListWidgetItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQListWidgetItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQListWidgetItemWrapper : public QListWidgetItem {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQListWidgetItemWrapper(QListWidget *parent = Q_NULLPTR, int type = Type)
         : QListWidgetItem(parent,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQListWidgetItemWrapper(const QString &text, QListWidget *parent = Q_NULLPTR, int type = Type)
         : QListWidgetItem(text,parent,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQListWidgetItemWrapper(const QIcon &icon, const QString &text, QListWidget *parent = Q_NULLPTR, int type = Type)
         : QListWidgetItem(icon,text,parent,type),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQListWidgetItemWrapper(const QListWidgetItem &other)
         : QListWidgetItem(other),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    ~PlastiQQListWidgetItemWrapper() { PlastiQ_self_destroy(pqObjectWPtr); }

    QListWidgetItem* clone() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QListWidgetItem* clone()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QListWidgetItem* _r = reinterpret_cast<QListWidgetItem*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QListWidgetItem::clone();
    }

    QListWidgetItem* PlastiQParentCall_clone() const {
        return QListWidgetItem::clone();
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
        else return QListWidgetItem::data(role);
    }

    QVariant PlastiQParentCall_data(int role) const {
        return QListWidgetItem::data(role);
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
        else return QListWidgetItem::setData(role,value);
    }

    void PlastiQParentCall_setData(int role, const QVariant &value) {
        return QListWidgetItem::setData(role,value);
    }

};

void PlastiQQListWidgetItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQListWidgetItemWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQListWidgetItemWrapper(); break;
        case 1: o = new PlastiQQListWidgetItemWrapper(reinterpret_cast<QListWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQListWidgetItemWrapper(reinterpret_cast<QListWidget*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 3: o = new PlastiQQListWidgetItemWrapper(stack[1].s_string); break;
        case 4: o = new PlastiQQListWidgetItemWrapper(stack[1].s_string,
                    reinterpret_cast<QListWidget*>(stack[2].s_voidp)); break;
        case 5: o = new PlastiQQListWidgetItemWrapper(stack[1].s_string,
                    reinterpret_cast<QListWidget*>(stack[2].s_voidp),
                    stack[3].s_int); break;
        case 6: o = new PlastiQQListWidgetItemWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 7: o = new PlastiQQListWidgetItemWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QListWidget*>(stack[3].s_voidp)); break;
        case 8: o = new PlastiQQListWidgetItemWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QListWidget*>(stack[3].s_voidp),
                    stack[4].s_int); break;
        case 9: o = new PlastiQQListWidgetItemWrapper((*reinterpret_cast< QListWidgetItem(*) >(stack[1].s_voidp))); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQListWidgetItem *p = new PlastiQQListWidgetItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQListWidgetItem *p = new PlastiQQListWidgetItem();
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
        QListWidgetItem *o = sc ? Q_NULLPTR : reinterpret_cast<QListWidgetItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->background());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->checkState(); // HACK for Qt::CheckState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QListWidgetItem* _r;
                if (isWrapper) _r = ((PlastiQQListWidgetItemWrapper*)o)->PlastiQParentCall_clone();
                else _r = o->clone();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QListWidgetItem"; } break;
        case 3: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQListWidgetItemWrapper*)o)->PlastiQParentCall_data(stack[1].s_int));
                else _r = new QVariant(o->data(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->flags(); // HACK for Qt::ItemFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->foreground());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { bool _r = o->isHidden();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isSelected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { QListWidget* _r = o->listWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QListWidget"; } break;
        case 11: o->read((*reinterpret_cast< QDataStream(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setBackground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setCheckState(Qt::CheckState(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQListWidgetItemWrapper*)o)->PlastiQParentCall_setData(stack[1].s_int,
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
        case 18: o->setHidden(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setSelected(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setSizeHint((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setStatusTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setTextAlignment(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setWhatsThis(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 27: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeHint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { QString _r = o->statusTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
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
        QListWidgetItem *o = reinterpret_cast<QListWidgetItem*>(object->plastiq_data());
        stack[0].s_bool = o->listWidget() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QListWidgetItem *o = reinterpret_cast<QListWidgetItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQListWidgetItem::~PlastiQQListWidgetItem() {
    QListWidgetItem* o = reinterpret_cast<QListWidgetItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
