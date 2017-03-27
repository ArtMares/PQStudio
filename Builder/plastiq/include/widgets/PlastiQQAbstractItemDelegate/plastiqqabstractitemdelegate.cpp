#include "plastiqmethod.h"
#include "plastiqqabstractitemdelegate.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractItemDelegate> 
#include <QWidget>
#include <QStyleOptionViewItem>
#include <QModelIndex>
#include <QEvent>
#include <QAbstractItemModel>
#include <QHelpEvent>
#include <QAbstractItemView>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemDelegate::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemDelegate::plastiqMethods = {
    { "createEditor(QWidget*,QStyleOptionViewItem&,QModelIndex&)", { "createEditor", "QWidget*,QStyleOptionViewItem&,QModelIndex&", "QWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "destroyEditor(QWidget*,QModelIndex&)", { "destroyEditor", "QWidget*,QModelIndex&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem&,QModelIndex&)", { "editorEvent", "QEvent*,QAbstractItemModel*,QStyleOptionViewItem&,QModelIndex&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "helpEvent(QHelpEvent*,QAbstractItemView*,QStyleOptionViewItem&,QModelIndex&)", { "helpEvent", "QHelpEvent*,QAbstractItemView*,QStyleOptionViewItem&,QModelIndex&", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,QStyleOptionViewItem&,QModelIndex&)", { "paint", "QPainter*,QStyleOptionViewItem&,QModelIndex&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEditorData(QWidget*,QModelIndex&)", { "setEditorData", "QWidget*,QModelIndex&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModelData(QWidget*,QAbstractItemModel*,QModelIndex&)", { "setModelData", "QWidget*,QAbstractItemModel*,QModelIndex&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint(QStyleOptionViewItem&,QModelIndex&)", { "sizeHint", "QStyleOptionViewItem&,QModelIndex&", "QSize", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateEditorGeometry(QWidget*,QStyleOptionViewItem&,QModelIndex&)", { "updateEditorGeometry", "QWidget*,QStyleOptionViewItem&,QModelIndex&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemDelegate::plastiqSignals = {
    { "closeEditor(QWidget*)", { "closeEditor", "QWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "closeEditor(QWidget*,enum)", { "closeEditor", "QWidget*,QAbstractItemDelegate::EndEditHint", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "commitData(QWidget*)", { "commitData", "QWidget*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sizeHintChanged(QModelIndex&)", { "sizeHintChanged", "QModelIndex&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractItemDelegate::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractItemDelegate::plastiqConstants = {

    /* QAbstractItemDelegate::EndEditHint */
   { "NoHint", QAbstractItemDelegate::NoHint },
   { "EditNextItem", QAbstractItemDelegate::EditNextItem },
   { "EditPreviousItem", QAbstractItemDelegate::EditPreviousItem },
   { "SubmitModelCache", QAbstractItemDelegate::SubmitModelCache },
   { "RevertModelCache", QAbstractItemDelegate::RevertModelCache },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractItemDelegate::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractItemDelegate::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractItemDelegate::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractItemDelegate", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractItemDelegate::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractItemDelegateWrapper : public QAbstractItemDelegate {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QAbstractItemDelegate::createEditor(parent,option,index);
    }

    QWidget* PlastiQParentCall_createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        return QAbstractItemDelegate::createEditor(parent,option,index);
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
        else return QAbstractItemDelegate::destroyEditor(editor,index);
    }

    void PlastiQParentCall_destroyEditor(QWidget *editor, const QModelIndex &index) const {
        return QAbstractItemDelegate::destroyEditor(editor,index);
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
        else return QAbstractItemDelegate::editorEvent(event,model,option,index);
    }

    bool PlastiQParentCall_editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index) {
        return QAbstractItemDelegate::editorEvent(event,model,option,index);
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
        else return QAbstractItemDelegate::helpEvent(event,view,option,index);
    }

    bool PlastiQParentCall_helpEvent(QHelpEvent *event, QAbstractItemView *view, const QStyleOptionViewItem &option, const QModelIndex &index) {
        return QAbstractItemDelegate::helpEvent(event,view,option,index);
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
        else return QAbstractItemDelegate::setEditorData(editor,index);
    }

    void PlastiQParentCall_setEditorData(QWidget *editor, const QModelIndex &index) const {
        return QAbstractItemDelegate::setEditorData(editor,index);
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
        else return QAbstractItemDelegate::setModelData(editor,model,index);
    }

    void PlastiQParentCall_setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
        return QAbstractItemDelegate::setModelData(editor,model,index);
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
        else return QAbstractItemDelegate::updateEditorGeometry(editor,option,index);
    }

    void PlastiQParentCall_updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        return QAbstractItemDelegate::updateEditorGeometry(editor,option,index);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractItemDelegate::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QAbstractItemDelegate::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
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
        else return QAbstractItemDelegate::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QAbstractItemDelegate::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAbstractItemDelegate::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QAbstractItemDelegate::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractItemDelegate::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QAbstractItemDelegate::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractItemDelegate::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QAbstractItemDelegate::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractItemDelegate::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QAbstractItemDelegate::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractItemDelegate::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QAbstractItemDelegate::disconnectNotify(signal);
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
        else return QAbstractItemDelegate::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QAbstractItemDelegate::timerEvent(event);
    }

};

void PlastiQQAbstractItemDelegate::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractItemDelegateWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractItemDelegate *p = new PlastiQQAbstractItemDelegate();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractItemDelegate *p = new PlastiQQAbstractItemDelegate();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractItemDelegate *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractItemDelegate*>(object->plastiq_data());

        switch(id) {
        case 0: { QWidget* _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemDelegateWrapper*)o)->PlastiQParentCall_createEditor(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else _r = o->createEditor(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 1: if (isWrapper) ((PlastiQQAbstractItemDelegateWrapper*)o)->PlastiQParentCall_destroyEditor(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else o->destroyEditor(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemDelegateWrapper*)o)->PlastiQParentCall_editorEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractItemModel*>(stack[2].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)));
                else _r = o->editorEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractItemModel*>(stack[2].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemDelegateWrapper*)o)->PlastiQParentCall_helpEvent(reinterpret_cast<QHelpEvent*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractItemView*>(stack[2].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)));
                else _r = o->helpEvent(reinterpret_cast<QHelpEvent*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractItemView*>(stack[2].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQAbstractItemDelegateWrapper*)o)->PlastiQParentCall_setEditorData(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else o->setEditorData(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQAbstractItemDelegateWrapper*)o)->PlastiQParentCall_setModelData(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractItemModel*>(stack[2].s_voidp),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else o->setModelData(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractItemModel*>(stack[2].s_voidp),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeHint((*reinterpret_cast< QStyleOptionViewItem(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: if (isWrapper) ((PlastiQQAbstractItemDelegateWrapper*)o)->PlastiQParentCall_updateEditorGeometry(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else o->updateEditorGeometry(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractItemDelegate *o = reinterpret_cast<QAbstractItemDelegate*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractItemDelegate::closeEditor,
            [=](QWidget* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QWidget";
                PlastiQ_activate(sender, "closeEditor", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractItemDelegate::closeEditor,
            [=](QWidget* arg0, QAbstractItemDelegate::EndEditHint arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QWidget";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QAbstractItemDelegate::EndEditHint";
                PlastiQ_activate(sender, "closeEditor", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractItemDelegate::commitData,
            [=](QWidget* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QWidget";
                PlastiQ_activate(sender, "commitData", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractItemDelegate::sizeHintChanged,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "sizeHintChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractItemDelegate *o = reinterpret_cast<QAbstractItemDelegate*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractItemDelegate *o = reinterpret_cast<QAbstractItemDelegate*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractItemDelegate *o = reinterpret_cast<QAbstractItemDelegate*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractItemDelegate::~PlastiQQAbstractItemDelegate() {
    QAbstractItemDelegate* o = reinterpret_cast<QAbstractItemDelegate*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
