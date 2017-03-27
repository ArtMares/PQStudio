#include "plastiqmethod.h"
#include "plastiqqtreewidget.h"

#include "widgets/PlastiQQTreeView/plastiqqtreeview.h"
#include <QTreeWidget> 
#include <QTreeWidgetItem>
#include <QWidget>
#include <QRect>
#include <QMimeData>
#include <QModelIndex>
#include <QStringList>
#include <QDropEvent>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidget::plastiqConstructors = {
    { "QTreeWidget()", { "QTreeWidget", "", "QTreeWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeWidget(QWidget*)", { "QTreeWidget", "QWidget*", "QTreeWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidget::plastiqMethods = {
    { "addTopLevelItem(QTreeWidgetItem*)", { "addTopLevelItem", "QTreeWidgetItem*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTopLevelItems(QList<QTreeWidgetItem*>&)", { "addTopLevelItems", "QList<QTreeWidgetItem*>&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closePersistentEditor(QTreeWidgetItem*)", { "closePersistentEditor", "QTreeWidgetItem*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closePersistentEditor(QTreeWidgetItem*,int)", { "closePersistentEditor", "QTreeWidgetItem*,int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentColumn()", { "currentColumn", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentItem()", { "currentItem", "", "QTreeWidgetItem*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "editItem(QTreeWidgetItem*)", { "editItem", "QTreeWidgetItem*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "editItem(QTreeWidgetItem*,int)", { "editItem", "QTreeWidgetItem*,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "headerItem()", { "headerItem", "", "QTreeWidgetItem*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOfTopLevelItem(QTreeWidgetItem*)", { "indexOfTopLevelItem", "QTreeWidgetItem*", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertTopLevelItem(int,QTreeWidgetItem*)", { "insertTopLevelItem", "int,QTreeWidgetItem*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertTopLevelItems(int,QList<QTreeWidgetItem*>&)", { "insertTopLevelItems", "int,QList<QTreeWidgetItem*>&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invisibleRootItem()", { "invisibleRootItem", "", "QTreeWidgetItem*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFirstItemColumnSpanned(const QTreeWidgetItem*)", { "isFirstItemColumnSpanned", "QTreeWidgetItem*", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAbove(const QTreeWidgetItem*)", { "itemAbove", "QTreeWidgetItem*", "QTreeWidgetItem*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(QPoint&)", { "itemAt", "QPoint&", "QTreeWidgetItem*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int,int)", { "itemAt", "int,int", "QTreeWidgetItem*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemBelow(const QTreeWidgetItem*)", { "itemBelow", "QTreeWidgetItem*", "QTreeWidgetItem*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemWidget(QTreeWidgetItem*,int)", { "itemWidget", "QTreeWidgetItem*,int", "QWidget*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openPersistentEditor(QTreeWidgetItem*)", { "openPersistentEditor", "QTreeWidgetItem*", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openPersistentEditor(QTreeWidgetItem*,int)", { "openPersistentEditor", "QTreeWidgetItem*,int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItemWidget(QTreeWidgetItem*,int)", { "removeItemWidget", "QTreeWidgetItem*,int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnCount(int)", { "setColumnCount", "int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentItem(QTreeWidgetItem*)", { "setCurrentItem", "QTreeWidgetItem*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentItem(QTreeWidgetItem*,int)", { "setCurrentItem", "QTreeWidgetItem*,int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentItem(QTreeWidgetItem*,int,QItemSelectionModel::SelectionFlags)", { "setCurrentItem", "QTreeWidgetItem*,int,QItemSelectionModel::SelectionFlags", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstItemColumnSpanned(const QTreeWidgetItem*,bool)", { "setFirstItemColumnSpanned", "QTreeWidgetItem*,bool", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeaderItem(QTreeWidgetItem*)", { "setHeaderItem", "QTreeWidgetItem*", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeaderLabel(QString)", { "setHeaderLabel", "QString&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeaderLabels(QStringList&)", { "setHeaderLabels", "QStringList&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemWidget(QTreeWidgetItem*,int,QWidget*)", { "setItemWidget", "QTreeWidgetItem*,int,QWidget*", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortColumn()", { "sortColumn", "", "int", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortItems(int,enum)", { "sortItems", "int,Qt::SortOrder", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeTopLevelItem(int)", { "takeTopLevelItem", "int", "QTreeWidgetItem*", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topLevelItem(int)", { "topLevelItem", "int", "QTreeWidgetItem*", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topLevelItemCount()", { "topLevelItemCount", "", "int", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualItemRect(const QTreeWidgetItem*)", { "visualItemRect", "QTreeWidgetItem*", "QRect", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dropMimeData(QTreeWidgetItem*,int,const QMimeData*,enum)", { "dropMimeData", "QTreeWidgetItem*,int,QMimeData*,Qt::DropAction", "bool", 38, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "indexFromItem(const QTreeWidgetItem*)", { "indexFromItem", "QTreeWidgetItem*", "QModelIndex", 39, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "indexFromItem(const QTreeWidgetItem*,int)", { "indexFromItem", "QTreeWidgetItem*,int", "QModelIndex", 40, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "itemFromIndex(QModelIndex&)", { "itemFromIndex", "QModelIndex&", "QTreeWidgetItem*", 41, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "mimeData(const QList<QTreeWidgetItem*>)", { "mimeData", "QList<QTreeWidgetItem*>", "QMimeData*", 42, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mimeTypes()", { "mimeTypes", "", "QStringList", 43, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "supportedDropActions()", { "supportedDropActions", "", "Qt::DropActions", 44, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 45, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 46, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 47, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "collapseItem(const QTreeWidgetItem*)", { "collapseItem", "QTreeWidgetItem*", "void", 48, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "expandItem(const QTreeWidgetItem*)", { "expandItem", "QTreeWidgetItem*", "void", 49, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToItem(const QTreeWidgetItem*)", { "scrollToItem", "QTreeWidgetItem*", "void", 50, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToItem(const QTreeWidgetItem*,enum)", { "scrollToItem", "QTreeWidgetItem*,QAbstractItemView::ScrollHint", "void", 51, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTreeWidget::plastiqSignals = {
    { "currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)", { "currentItemChanged", "QTreeWidgetItem*,QTreeWidgetItem*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemActivated(QTreeWidgetItem*,int)", { "itemActivated", "QTreeWidgetItem*,int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemChanged(QTreeWidgetItem*,int)", { "itemChanged", "QTreeWidgetItem*,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemClicked(QTreeWidgetItem*,int)", { "itemClicked", "QTreeWidgetItem*,int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemCollapsed(QTreeWidgetItem*)", { "itemCollapsed", "QTreeWidgetItem*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemDoubleClicked(QTreeWidgetItem*,int)", { "itemDoubleClicked", "QTreeWidgetItem*,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemEntered(QTreeWidgetItem*,int)", { "itemEntered", "QTreeWidgetItem*,int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemExpanded(QTreeWidgetItem*)", { "itemExpanded", "QTreeWidgetItem*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemPressed(QTreeWidgetItem*,int)", { "itemPressed", "QTreeWidgetItem*,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemSelectionChanged()", { "itemSelectionChanged", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTreeWidget::plastiqProperties = {
    { "columnCount", { "columnCount", "int", "setColumnCount", "columnCount" } },
    { "topLevelItemCount", { "topLevelItemCount", "int", "", "topLevelItemCount" } },

};

QHash<QByteArray, long> PlastiQQTreeWidget::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTreeWidget::plastiqInherits = { &PlastiQQTreeView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTreeWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQTreeWidget::plastiq_static_metaObject = {
    { &PlastiQQTreeView::plastiq_static_metaObject, &plastiqInherits, "QTreeWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTreeWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTreeWidgetWrapper : public QTreeWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTreeWidgetWrapper(QWidget *parent = Q_NULLPTR)
         : QTreeWidget(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool dropMimeData(QTreeWidgetItem *parent, int index, const QMimeData *data, Qt::DropAction action) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool dropMimeData(QTreeWidgetItem*,int,const QMimeData*,Qt::DropAction)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(parent);
            stack[1].name = QByteArrayLiteral("QTreeWidgetItem");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = index;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = reinterpret_cast<void*>(const_cast<QMimeData*>(data));
            stack[3].name = QByteArrayLiteral("QMimeData");
            stack[3].type = PlastiQ::QtObjectStar;
            stack[4].s_int64 = action;
            stack[4].name = QByteArrayLiteral("Qt::DropAction");
            stack[4].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTreeWidget::dropMimeData(parent,index,data,action);
    }

    bool PlastiQParentCall_dropMimeData(QTreeWidgetItem *parent, int index, const QMimeData *data, Qt::DropAction action) {
        return QTreeWidget::dropMimeData(parent,index,data,action);
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
        else return QTreeWidget::mimeTypes();
    }

    QStringList PlastiQParentCall_mimeTypes() const {
        return QTreeWidget::mimeTypes();
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
        else return QTreeWidget::supportedDropActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDropActions() const {
        return QTreeWidget::supportedDropActions();
    }

    void dropEvent(QDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dropEvent(QDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QTreeWidget::dropEvent(event);
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
        else return QTreeWidget::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QTreeWidget::event(e);
    }

    void drawBranches(QPainter *painter, const QRect &rect, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawBranches(QPainter*,const QRect&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRect");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QModelIndex");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::drawBranches(painter,rect,index);
    }

    void PlastiQParentCall_drawBranches(QPainter *painter, const QRect &rect, const QModelIndex &index) const {
        return QTreeWidget::drawBranches(painter,rect,index);
    }

    void drawRow(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawRow(QPainter*,const QStyleOptionViewItem&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
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
        else return QTreeWidget::drawRow(painter,option,index);
    }

    void PlastiQParentCall_drawRow(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        return QTreeWidget::drawRow(painter,option,index);
    }

    void currentChanged(const QModelIndex &current, const QModelIndex &previous) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void currentChanged(const QModelIndex&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QModelIndex(current) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QModelIndex(previous) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QModelIndex");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::currentChanged(current,previous);
    }

    void PlastiQParentCall_currentChanged(const QModelIndex &current, const QModelIndex &previous) {
        return QTreeWidget::currentChanged(current,previous);
    }

    void dragMoveEvent(QDragMoveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragMoveEvent(QDragMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QTreeWidget::dragMoveEvent(event);
    }

    int horizontalOffset() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int horizontalOffset()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QTreeWidget::horizontalOffset();
    }

    int PlastiQParentCall_horizontalOffset() const {
        return QTreeWidget::horizontalOffset();
    }

    bool isIndexHidden(const QModelIndex &index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isIndexHidden(const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTreeWidget::isIndexHidden(index);
    }

    bool PlastiQParentCall_isIndexHidden(const QModelIndex &index) const {
        return QTreeWidget::isIndexHidden(index);
    }

    void keyPressEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QTreeWidget::keyPressEvent(event);
    }

    void mouseDoubleClickEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QTreeWidget::mouseDoubleClickEvent(event);
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QTreeWidget::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QTreeWidget::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QTreeWidget::mouseReleaseEvent(event);
    }

    void paintEvent(QPaintEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QTreeWidget::paintEvent(event);
    }

    void rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void rowsAboutToBeRemoved(const QModelIndex&,int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int = start;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_int = end;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::rowsAboutToBeRemoved(parent,start,end);
    }

    void PlastiQParentCall_rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end) {
        return QTreeWidget::rowsAboutToBeRemoved(parent,start,end);
    }

    void rowsInserted(const QModelIndex &parent, int start, int end) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void rowsInserted(const QModelIndex&,int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QModelIndex(parent) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int = start;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_int = end;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::rowsInserted(parent,start,end);
    }

    void PlastiQParentCall_rowsInserted(const QModelIndex &parent, int start, int end) {
        return QTreeWidget::rowsInserted(parent,start,end);
    }

    void scrollContentsBy(int dx, int dy) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void scrollContentsBy(int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = dx;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = dy;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::scrollContentsBy(dx,dy);
    }

    void PlastiQParentCall_scrollContentsBy(int dx, int dy) {
        return QTreeWidget::scrollContentsBy(dx,dy);
    }

    void selectionChanged(const QItemSelection &selected, const QItemSelection &deselected) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void selectionChanged(const QItemSelection&,const QItemSelection&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QItemSelection&>(selected));
            stack[1].name = QByteArrayLiteral("QItemSelection");
            stack[1].type = PlastiQ::QObject;
            stack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QItemSelection&>(deselected));
            stack[2].name = QByteArrayLiteral("QItemSelection");
            stack[2].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::selectionChanged(selected,deselected);
    }

    void PlastiQParentCall_selectionChanged(const QItemSelection &selected, const QItemSelection &deselected) {
        return QTreeWidget::selectionChanged(selected,deselected);
    }

    void setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setSelection(const QRect&,QItemSelectionModel::SelectionFlags)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRect");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = reinterpret_cast<void*>(&command);
            stack[2].name = QByteArrayLiteral("QItemSelectionModel::SelectionFlags");
            stack[2].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::setSelection(rect,command);
    }

    void PlastiQParentCall_setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command) {
        return QTreeWidget::setSelection(rect,command);
    }

    int sizeHintForColumn(int column) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int sizeHintForColumn(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = column;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QTreeWidget::sizeHintForColumn(column);
    }

    int PlastiQParentCall_sizeHintForColumn(int column) const {
        return QTreeWidget::sizeHintForColumn(column);
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
        else return QTreeWidget::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTreeWidget::timerEvent(event);
    }

    void updateGeometries() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateGeometries()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeWidget::updateGeometries();
    }

    void PlastiQParentCall_updateGeometries() {
        return QTreeWidget::updateGeometries();
    }

    int verticalOffset() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int verticalOffset()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QTreeWidget::verticalOffset();
    }

    int PlastiQParentCall_verticalOffset() const {
        return QTreeWidget::verticalOffset();
    }

    bool viewportEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool viewportEvent(QEvent*)");
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
        else return QTreeWidget::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QTreeWidget::viewportEvent(event);
    }

    QSize viewportSizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize viewportSizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QTreeWidget::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QTreeWidget::viewportSizeHint();
    }

    QRegion visualRegionForSelection(const QItemSelection &selection) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QRegion visualRegionForSelection(const QItemSelection&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QItemSelection&>(selection));
            stack[1].name = QByteArrayLiteral("QItemSelection");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QRegion _r = QRegion(*reinterpret_cast<QRegion*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QTreeWidget::visualRegionForSelection(selection);
    }

    QRegion PlastiQParentCall_visualRegionForSelection(const QItemSelection &selection) const {
        return QTreeWidget::visualRegionForSelection(selection);
    }

};

void PlastiQQTreeWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTreeWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTreeWidgetWrapper(); break;
        case 1: o = new PlastiQQTreeWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTreeWidget *p = new PlastiQQTreeWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTreeWidget *p = new PlastiQQTreeWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 52) {
            id -= 52;
            PlastiQQTreeView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTreeWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QTreeWidget*>(object->plastiq_data());

        switch(id) {
        case 0: o->addTopLevelItem(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addTopLevelItems((*reinterpret_cast< QList<QTreeWidgetItem*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->closePersistentEditor(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->closePersistentEditor(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->currentColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { QTreeWidgetItem* _r = o->currentItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 7: o->editItem(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->editItem(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: { QTreeWidgetItem* _r = o->headerItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 10: { int _r = o->indexOfTopLevelItem(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: o->insertTopLevelItem(stack[1].s_int,
                    reinterpret_cast<QTreeWidgetItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->insertTopLevelItems(stack[1].s_int,
                    (*reinterpret_cast< QList<QTreeWidgetItem*>(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: { QTreeWidgetItem* _r = o->invisibleRootItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 14: { bool _r = o->isFirstItemColumnSpanned(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { QTreeWidgetItem* _r = o->itemAbove(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 16: { QTreeWidgetItem* _r = o->itemAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 17: { QTreeWidgetItem* _r = o->itemAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 18: { QTreeWidgetItem* _r = o->itemBelow(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 19: { QWidget* _r = o->itemWidget(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 20: o->openPersistentEditor(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->openPersistentEditor(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->removeItemWidget(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setColumnCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setCurrentItem(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setCurrentItem(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: /* o->setCurrentItem(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 27: o->setFirstItemColumnSpanned(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setHeaderItem(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setHeaderLabel(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setHeaderLabels((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setItemWidget(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 32: { int _r = o->sortColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 33: o->sortItems(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 34: { QTreeWidgetItem* _r = o->takeTopLevelItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 35: { QTreeWidgetItem* _r = o->topLevelItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTreeWidgetItem"; } break;
        case 36: { int _r = o->topLevelItemCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 37: { /* COPY OBJECT */
            QRect *_r = new QRect(o->visualItemRect(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { bool _r;
                if (isWrapper) _r = ((PlastiQQTreeWidgetWrapper*)o)->PlastiQParentCall_dropMimeData(reinterpret_cast<QTreeWidgetItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<const QMimeData*>(stack[3].s_voidp),
                    Qt::DropAction(stack[4].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: { /* COPY OBJECT */
            QModelIndex *_r; stack[0].type = PlastiQ::Error; } break;
        case 40: { /* COPY OBJECT */
            QModelIndex *_r; stack[0].type = PlastiQ::Error; } break;
        case 41: { QTreeWidgetItem* _r; stack[0].type = PlastiQ::Error; } break;
        case 42: /* o->mimeData(UNSUPPORTED_TYPE_const QList<QTreeWidgetItem*>) | ret: `QMimeData*` */ break;
        case 43: { /* COPY OBJECT */
            QStringList *_r;
                if (isWrapper) _r = new QStringList(((PlastiQQTreeWidgetWrapper*)o)->PlastiQParentCall_mimeTypes());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQTreeWidgetWrapper*)o)->PlastiQParentCall_supportedDropActions();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 45: if (isWrapper) ((PlastiQQTreeWidgetWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 46: { bool _r;
                if (isWrapper) _r = ((PlastiQQTreeWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 48: o->collapseItem(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 49: o->expandItem(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 50: o->scrollToItem(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 51: o->scrollToItem(reinterpret_cast<const QTreeWidgetItem*>(stack[1].s_voidp),
                    QAbstractItemView::ScrollHint(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 10) {
            id -= 10;
            PlastiQQTreeView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTreeWidget *o = reinterpret_cast<QTreeWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTreeWidget::currentItemChanged,
            [=](QTreeWidgetItem* arg0, QTreeWidgetItem* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QTreeWidgetItem";
                PlastiQ_activate(sender, "currentItemChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTreeWidget::itemActivated,
            [=](QTreeWidgetItem* arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "itemActivated", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QTreeWidget::itemChanged,
            [=](QTreeWidgetItem* arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "itemChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QTreeWidget::itemClicked,
            [=](QTreeWidgetItem* arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "itemClicked", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QTreeWidget::itemCollapsed,
            [=](QTreeWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                PlastiQ_activate(sender, "itemCollapsed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QTreeWidget::itemDoubleClicked,
            [=](QTreeWidgetItem* arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "itemDoubleClicked", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QTreeWidget::itemEntered,
            [=](QTreeWidgetItem* arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "itemEntered", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QTreeWidget::itemExpanded,
            [=](QTreeWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                PlastiQ_activate(sender, "itemExpanded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QTreeWidget::itemPressed,
            [=](QTreeWidgetItem* arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTreeWidgetItem";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "itemPressed", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QTreeWidget::itemSelectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "itemSelectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTreeWidget *o = reinterpret_cast<QTreeWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTreeWidget *o = reinterpret_cast<QTreeWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTreeWidget *o = reinterpret_cast<QTreeWidget*>(object->plastiq_data());

        if(className == "QTreeView") {
            stack[0].s_voidp = static_cast<QTreeView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTreeWidget::~PlastiQQTreeWidget() {
    QTreeWidget* o = reinterpret_cast<QTreeWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
