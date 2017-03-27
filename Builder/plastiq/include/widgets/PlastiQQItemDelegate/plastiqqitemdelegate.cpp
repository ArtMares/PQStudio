#include "plastiqmethod.h"
#include "plastiqqitemdelegate.h"

#include "widgets/PlastiQQAbstractItemDelegate/plastiqqabstractitemdelegate.h"
#include <QItemDelegate> 
#include <QItemEditorFactory>
#include <QPainter>
#include <QStyleOptionViewItem>
#include <QRect>
#include <QPixmap>
#include <QString>
#include <QEvent>
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQItemDelegate::plastiqConstructors = {
    { "QItemDelegate()", { "QItemDelegate", "", "QItemDelegate*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QItemDelegate(QObject*)", { "QItemDelegate", "QObject*", "QItemDelegate*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQItemDelegate::plastiqMethods = {
    { "hasClipping()", { "hasClipping", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemEditorFactory()", { "itemEditorFactory", "", "QItemEditorFactory*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipping(bool)", { "setClipping", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemEditorFactory(QItemEditorFactory*)", { "setItemEditorFactory", "QItemEditorFactory*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawBackground(QPainter*,QStyleOptionViewItem&,QModelIndex&)", { "drawBackground", "QPainter*,QStyleOptionViewItem&,QModelIndex&", "void", 4, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "drawCheck(QPainter*,QStyleOptionViewItem&,QRect&,enum)", { "drawCheck", "QPainter*,QStyleOptionViewItem&,QRect&,Qt::CheckState", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawDecoration(QPainter*,QStyleOptionViewItem&,QRect&,QPixmap&)", { "drawDecoration", "QPainter*,QStyleOptionViewItem&,QRect&,QPixmap&", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawDisplay(QPainter*,QStyleOptionViewItem&,QRect&,QString)", { "drawDisplay", "QPainter*,QStyleOptionViewItem&,QRect&,QString&", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawFocus(QPainter*,QStyleOptionViewItem&,QRect&)", { "drawFocus", "QPainter*,QStyleOptionViewItem&,QRect&", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem&,QModelIndex&)", { "editorEvent", "QEvent*,QAbstractItemModel*,QStyleOptionViewItem&,QModelIndex&", "bool", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQItemDelegate::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQItemDelegate::plastiqProperties = {
    { "clipping", { "clipping", "bool", "setClipping", "hasClipping" } },

};

QHash<QByteArray, long> PlastiQQItemDelegate::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQItemDelegate::plastiqInherits = { &PlastiQQAbstractItemDelegate::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQItemDelegate::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQItemDelegate::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemDelegate::plastiq_static_metaObject, &plastiqInherits, "QItemDelegate", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQItemDelegate::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQItemDelegateWrapper : public QItemDelegate {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQItemDelegateWrapper(QObject *parent = Q_NULLPTR)
         : QItemDelegate(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void drawCheck(QPainter *painter, const QStyleOptionViewItem &option, const QRect &rect, Qt::CheckState state) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawCheck(QPainter*,const QStyleOptionViewItem&,const QRect&,Qt::CheckState)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QStyleOptionViewItem&>(option));
            stack[2].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[2].type = PlastiQ::QObject;
            stack[3].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QRect");
            stack[3].type = PlastiQ::QtObject;
            stack[4].s_int64 = state;
            stack[4].name = QByteArrayLiteral("Qt::CheckState");
            stack[4].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QItemDelegate::drawCheck(painter,option,rect,state);
    }

    void PlastiQParentCall_drawCheck(QPainter *painter, const QStyleOptionViewItem &option, const QRect &rect, Qt::CheckState state) const {
        return QItemDelegate::drawCheck(painter,option,rect,state);
    }

    void drawDecoration(QPainter *painter, const QStyleOptionViewItem &option, const QRect &rect, const QPixmap &pixmap) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawDecoration(QPainter*,const QStyleOptionViewItem&,const QRect&,const QPixmap&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QStyleOptionViewItem&>(option));
            stack[2].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[2].type = PlastiQ::QObject;
            stack[3].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QRect");
            stack[3].type = PlastiQ::QtObject;
            stack[4].s_voidp = new QPixmap(pixmap) /* COPY OBJECT */;
            stack[4].name = QByteArrayLiteral("QPixmap");
            stack[4].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QItemDelegate::drawDecoration(painter,option,rect,pixmap);
    }

    void PlastiQParentCall_drawDecoration(QPainter *painter, const QStyleOptionViewItem &option, const QRect &rect, const QPixmap &pixmap) const {
        return QItemDelegate::drawDecoration(painter,option,rect,pixmap);
    }

    void drawDisplay(QPainter *painter, const QStyleOptionViewItem &option, const QRect &rect, const QString &text) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawDisplay(QPainter*,const QStyleOptionViewItem&,const QRect&,const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QStyleOptionViewItem&>(option));
            stack[2].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[2].type = PlastiQ::QObject;
            stack[3].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QRect");
            stack[3].type = PlastiQ::QtObject;
            stack[4].s_string = const_cast<QString&>(text);
            stack[4].name = QByteArrayLiteral("QString");
            stack[4].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QItemDelegate::drawDisplay(painter,option,rect,text);
    }

    void PlastiQParentCall_drawDisplay(QPainter *painter, const QStyleOptionViewItem &option, const QRect &rect, const QString &text) const {
        return QItemDelegate::drawDisplay(painter,option,rect,text);
    }

    void drawFocus(QPainter *painter, const QStyleOptionViewItem &option, const QRect &rect) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawFocus(QPainter*,const QStyleOptionViewItem&,const QRect&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QStyleOptionViewItem&>(option));
            stack[2].name = QByteArrayLiteral("QStyleOptionViewItem");
            stack[2].type = PlastiQ::QObject;
            stack[3].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QRect");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QItemDelegate::drawFocus(painter,option,rect);
    }

    void PlastiQParentCall_drawFocus(QPainter *painter, const QStyleOptionViewItem &option, const QRect &rect) const {
        return QItemDelegate::drawFocus(painter,option,rect);
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
        else return QItemDelegate::editorEvent(event,model,option,index);
    }

    bool PlastiQParentCall_editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index) {
        return QItemDelegate::editorEvent(event,model,option,index);
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
        else return QItemDelegate::eventFilter(editor,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *editor, QEvent *event) {
        return QItemDelegate::eventFilter(editor,event);
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
        else return QItemDelegate::createEditor(parent,option,index);
    }

    QWidget* PlastiQParentCall_createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        return QItemDelegate::createEditor(parent,option,index);
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
        else return QItemDelegate::destroyEditor(editor,index);
    }

    void PlastiQParentCall_destroyEditor(QWidget *editor, const QModelIndex &index) const {
        return QItemDelegate::destroyEditor(editor,index);
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
        else return QItemDelegate::helpEvent(event,view,option,index);
    }

    bool PlastiQParentCall_helpEvent(QHelpEvent *event, QAbstractItemView *view, const QStyleOptionViewItem &option, const QModelIndex &index) {
        return QItemDelegate::helpEvent(event,view,option,index);
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
        else return QItemDelegate::setEditorData(editor,index);
    }

    void PlastiQParentCall_setEditorData(QWidget *editor, const QModelIndex &index) const {
        return QItemDelegate::setEditorData(editor,index);
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
        else return QItemDelegate::setModelData(editor,model,index);
    }

    void PlastiQParentCall_setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
        return QItemDelegate::setModelData(editor,model,index);
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
        else return QItemDelegate::updateEditorGeometry(editor,option,index);
    }

    void PlastiQParentCall_updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        return QItemDelegate::updateEditorGeometry(editor,option,index);
    }

};

void PlastiQQItemDelegate::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQItemDelegateWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQItemDelegateWrapper(); break;
        case 1: o = new PlastiQQItemDelegateWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQItemDelegate *p = new PlastiQQItemDelegate();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQItemDelegate *p = new PlastiQQItemDelegate();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQAbstractItemDelegate::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QItemDelegate *o = sc ? Q_NULLPTR : reinterpret_cast<QItemDelegate*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->hasClipping();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QItemEditorFactory* _r = o->itemEditorFactory();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QItemEditorFactory"; } break;
        case 2: o->setClipping(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setItemEditorFactory(reinterpret_cast<QItemEditorFactory*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQItemDelegateWrapper*)o)->PlastiQParentCall_drawCheck(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)),
                    Qt::CheckState(stack[4].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQItemDelegateWrapper*)o)->PlastiQParentCall_drawDecoration(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[4].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 7: if (isWrapper) ((PlastiQQItemDelegateWrapper*)o)->PlastiQParentCall_drawDisplay(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)),
                    stack[4].s_string);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 8: if (isWrapper) ((PlastiQQItemDelegateWrapper*)o)->PlastiQParentCall_drawFocus(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 9: { bool _r;
                if (isWrapper) _r = ((PlastiQQItemDelegateWrapper*)o)->PlastiQParentCall_editorEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractItemModel*>(stack[2].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[4].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r;
                if (isWrapper) _r = ((PlastiQQItemDelegateWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
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

        QItemDelegate *o = reinterpret_cast<QItemDelegate*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QItemDelegate *o = reinterpret_cast<QItemDelegate*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QItemDelegate *o = reinterpret_cast<QItemDelegate*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QItemDelegate *o = reinterpret_cast<QItemDelegate*>(object->plastiq_data());

        if(className == "QAbstractItemDelegate") {
            stack[0].s_voidp = static_cast<QAbstractItemDelegate*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQItemDelegate::~PlastiQQItemDelegate() {
    QItemDelegate* o = reinterpret_cast<QItemDelegate*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
