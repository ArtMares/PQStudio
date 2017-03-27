#include "plastiqmethod.h"
#include "plastiqqstyleditemdelegate.h"

#include "widgets/PlastiQQAbstractItemDelegate/plastiqqabstractitemdelegate.h"
#include <QStyledItemDelegate> 
#include <QString>
#include <QVariant>
#include <QLocale>
#include <QItemEditorFactory>
#include <QStyleOptionViewItem>
#include <QModelIndex>
#include <QEvent>
#include <QAbstractItemModel>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQStyledItemDelegate::plastiqConstructors = {
    { "QStyledItemDelegate()", { "QStyledItemDelegate", "", "QStyledItemDelegate*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyledItemDelegate(QObject*)", { "QStyledItemDelegate", "QObject*", "QStyledItemDelegate*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyledItemDelegate::plastiqMethods = {
    { "displayText(QVariant,QLocale&)", { "displayText", "QVariant&,QLocale&", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemEditorFactory()", { "itemEditorFactory", "", "QItemEditorFactory*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemEditorFactory(QItemEditorFactory*)", { "setItemEditorFactory", "QItemEditorFactory*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionViewItem*,QModelIndex&)", { "initStyleOption", "QStyleOptionViewItem*,QModelIndex&", "void", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem&,QModelIndex&)", { "editorEvent", "QEvent*,QAbstractItemModel*,QStyleOptionViewItem&,QModelIndex&", "bool", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyledItemDelegate::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyledItemDelegate::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyledItemDelegate::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStyledItemDelegate::plastiqInherits = { &PlastiQQAbstractItemDelegate::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyledItemDelegate::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQStyledItemDelegate::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemDelegate::plastiq_static_metaObject, &plastiqInherits, "QStyledItemDelegate", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyledItemDelegate::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQStyledItemDelegateWrapper : public QStyledItemDelegate {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQStyledItemDelegateWrapper(QObject *parent = Q_NULLPTR)
         : QStyledItemDelegate(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QString displayText(const QVariant &value, const QLocale &locale) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString displayText(const QVariant&,const QLocale&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QVariant");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QLocale(locale) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QLocale");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QStyledItemDelegate::displayText(value,locale);
    }

    QString PlastiQParentCall_displayText(const QVariant &value, const QLocale &locale) const {
        return QStyledItemDelegate::displayText(value,locale);
    }

    void initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void initStyleOption(QStyleOptionViewItem*,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(option);
            stack[1].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QModelIndex");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyledItemDelegate::initStyleOption(option,index);
    }

    void PlastiQParentCall_initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const {
        return QStyledItemDelegate::initStyleOption(option,index);
    }

    bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool editorEvent(QEvent*,QAbstractItemModel*,const QStyleOptionViewItem&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(model);
            stack[2].name = QByteArrayLiteral("QAbstractItemModel");
            stack[2].type = PlastiQ::QtObjectStar;
            stack[3].s_voidp = reinterpret_cast<void*>(&const_cast<QStyleOptionViewItem&>(option));
            stack[3].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[3].type = PlastiQ::QObject;
            stack[4].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[4].name = QByteArrayLiteral("QModelIndex");
            stack[4].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QStyledItemDelegate::editorEvent(event,model,option,index);
    }

    bool PlastiQParentCall_editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index) {
        return QStyledItemDelegate::editorEvent(event,model,option,index);
    }

    bool eventFilter(QObject *editor, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(editor);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QStyledItemDelegate::eventFilter(editor,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *editor, QEvent *event) {
        return QStyledItemDelegate::eventFilter(editor,event);
    }

    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QWidget* createEditor(QWidget*,const QStyleOptionViewItem&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(parent);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QStyleOptionViewItem&>(option));
            stack[2].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[2].type = PlastiQ::QObject;
            stack[3].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QWidget* _r = reinterpret_cast<QWidget*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QStyledItemDelegate::createEditor(parent,option,index);
    }

    QWidget* PlastiQParentCall_createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        return QStyledItemDelegate::createEditor(parent,option,index);
    }

    void destroyEditor(QWidget *editor, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void destroyEditor(QWidget*,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(editor);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QModelIndex");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyledItemDelegate::destroyEditor(editor,index);
    }

    void PlastiQParentCall_destroyEditor(QWidget *editor, const QModelIndex &index) const {
        return QStyledItemDelegate::destroyEditor(editor,index);
    }

    bool helpEvent(QHelpEvent *event, QAbstractItemView *view, const QStyleOptionViewItem &option, const QModelIndex &index) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool helpEvent(QHelpEvent*,QAbstractItemView*,const QStyleOptionViewItem&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QHelpEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(view);
            stack[2].name = QByteArrayLiteral("QAbstractItemView");
            stack[2].type = PlastiQ::QtObjectStar;
            stack[3].s_voidp = reinterpret_cast<void*>(&const_cast<QStyleOptionViewItem&>(option));
            stack[3].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[3].type = PlastiQ::QObject;
            stack[4].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[4].name = QByteArrayLiteral("QModelIndex");
            stack[4].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QStyledItemDelegate::helpEvent(event,view,option,index);
    }

    bool PlastiQParentCall_helpEvent(QHelpEvent *event, QAbstractItemView *view, const QStyleOptionViewItem &option, const QModelIndex &index) {
        return QStyledItemDelegate::helpEvent(event,view,option,index);
    }

    void setEditorData(QWidget *editor, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setEditorData(QWidget*,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(editor);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QModelIndex");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyledItemDelegate::setEditorData(editor,index);
    }

    void PlastiQParentCall_setEditorData(QWidget *editor, const QModelIndex &index) const {
        return QStyledItemDelegate::setEditorData(editor,index);
    }

    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setModelData(QWidget*,QAbstractItemModel*,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(editor);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(model);
            stack[2].name = QByteArrayLiteral("QAbstractItemModel");
            stack[2].type = PlastiQ::QtObjectStar;
            stack[3].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyledItemDelegate::setModelData(editor,model,index);
    }

    void PlastiQParentCall_setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
        return QStyledItemDelegate::setModelData(editor,model,index);
    }

    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateEditorGeometry(QWidget*,const QStyleOptionViewItem&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(editor);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QStyleOptionViewItem&>(option));
            stack[2].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[2].type = PlastiQ::QObject;
            stack[3].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyledItemDelegate::updateEditorGeometry(editor,option,index);
    }

    void PlastiQParentCall_updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        return QStyledItemDelegate::updateEditorGeometry(editor,option,index);
    }

};

void PlastiQQStyledItemDelegate::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQStyledItemDelegateWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQStyledItemDelegateWrapper(); break;
        case 1: o = new PlastiQQStyledItemDelegateWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQStyledItemDelegate *p = new PlastiQQStyledItemDelegate();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyledItemDelegate *p = new PlastiQQStyledItemDelegate();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQAbstractItemDelegate::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyledItemDelegate *o = sc ? Q_NULLPTR : reinterpret_cast<QStyledItemDelegate*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r;
                if (isWrapper) _r = ((PlastiQQStyledItemDelegateWrapper*)o)->PlastiQParentCall_displayText(stack[1].s_variant,
                    (*reinterpret_cast< QLocale(*) >(stack[2].s_voidp)));
                else _r = o->displayText(stack[1].s_variant,
                    (*reinterpret_cast< QLocale(*) >(stack[2].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QItemEditorFactory* _r = o->itemEditorFactory();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QItemEditorFactory"; } break;
        case 2: o->setItemEditorFactory(reinterpret_cast<QItemEditorFactory*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: if (isWrapper) ((PlastiQQStyledItemDelegateWrapper*)o)->PlastiQParentCall_initStyleOption(reinterpret_cast<QStyleOptionViewItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQStyledItemDelegateWrapper*)o)->PlastiQParentCall_editorEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractItemModel*>(stack[2].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r;
                if (isWrapper) _r = ((PlastiQQStyledItemDelegateWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractItemDelegate::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStyledItemDelegate *o = reinterpret_cast<QStyledItemDelegate*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStyledItemDelegate *o = reinterpret_cast<QStyledItemDelegate*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStyledItemDelegate *o = reinterpret_cast<QStyledItemDelegate*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStyledItemDelegate *o = reinterpret_cast<QStyledItemDelegate*>(object->plastiq_data());

        if(className == "QAbstractItemDelegate") {
            stack[0].s_voidp = static_cast<QAbstractItemDelegate*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyledItemDelegate::~PlastiQQStyledItemDelegate() {
    QStyledItemDelegate* o = reinterpret_cast<QStyledItemDelegate*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
