#include "plastiqmethod.h"
#include "plastiqqlistwidget.h"

#include "widgets/PlastiQQListView/plastiqqlistview.h"
#include <QListWidget> 
#include <QListWidgetItem>
#include <QWidget>
#include <QRect>
#include <QMimeData>
#include <QModelIndex>
#include <QStringList>
#include <QEvent>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQListWidget::plastiqConstructors = {
    { "QListWidget()", { "QListWidget", "", "QListWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListWidget(QWidget*)", { "QListWidget", "QWidget*", "QListWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQListWidget::plastiqMethods = {
    { "addItem(QString)", { "addItem", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QListWidgetItem*)", { "addItem", "QListWidgetItem*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItems(QStringList&)", { "addItems", "QStringList&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closePersistentEditor(QListWidgetItem*)", { "closePersistentEditor", "QListWidgetItem*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentItem()", { "currentItem", "", "QListWidgetItem*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentRow()", { "currentRow", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "editItem(QListWidgetItem*)", { "editItem", "QListWidgetItem*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QListWidgetItem*)", { "insertItem", "int,QListWidgetItem*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QString)", { "insertItem", "int,QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItems(int,QStringList&)", { "insertItems", "int,QStringList&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSortingEnabled()", { "isSortingEnabled", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "item(int)", { "item", "int", "QListWidgetItem*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(QPoint&)", { "itemAt", "QPoint&", "QListWidgetItem*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int,int)", { "itemAt", "int,int", "QListWidgetItem*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemWidget(QListWidgetItem*)", { "itemWidget", "QListWidgetItem*", "QWidget*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openPersistentEditor(QListWidgetItem*)", { "openPersistentEditor", "QListWidgetItem*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItemWidget(QListWidgetItem*)", { "removeItemWidget", "QListWidgetItem*", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row(const QListWidgetItem*)", { "row", "QListWidgetItem*", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentItem(QListWidgetItem*)", { "setCurrentItem", "QListWidgetItem*", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentItem(QListWidgetItem*,QItemSelectionModel::SelectionFlags)", { "setCurrentItem", "QListWidgetItem*,QItemSelectionModel::SelectionFlags", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentRow(int)", { "setCurrentRow", "int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentRow(int,QItemSelectionModel::SelectionFlags)", { "setCurrentRow", "int,QItemSelectionModel::SelectionFlags", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemWidget(QListWidgetItem*,QWidget*)", { "setItemWidget", "QListWidgetItem*,QWidget*", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortingEnabled(bool)", { "setSortingEnabled", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortItems()", { "sortItems", "", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortItems(enum)", { "sortItems", "Qt::SortOrder", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeItem(int)", { "takeItem", "int", "QListWidgetItem*", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualItemRect(const QListWidgetItem*)", { "visualItemRect", "QListWidgetItem*", "QRect", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dropMimeData(int,const QMimeData*,enum)", { "dropMimeData", "int,QMimeData*,Qt::DropAction", "bool", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "indexFromItem(QListWidgetItem*)", { "indexFromItem", "QListWidgetItem*", "QModelIndex", 30, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "itemFromIndex(QModelIndex&)", { "itemFromIndex", "QModelIndex&", "QListWidgetItem*", 31, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "mimeData(const QList<QListWidgetItem*>)", { "mimeData", "QList<QListWidgetItem*>", "QMimeData*", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mimeTypes()", { "mimeTypes", "", "QStringList", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "supportedDropActions()", { "supportedDropActions", "", "Qt::DropActions", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToItem(const QListWidgetItem*)", { "scrollToItem", "QListWidgetItem*", "void", 37, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToItem(const QListWidgetItem*,enum)", { "scrollToItem", "QListWidgetItem*,QAbstractItemView::ScrollHint", "void", 38, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQListWidget::plastiqSignals = {
    { "currentItemChanged(QListWidgetItem*,QListWidgetItem*)", { "currentItemChanged", "QListWidgetItem*,QListWidgetItem*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentRowChanged(int)", { "currentRowChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentTextChanged(QString)", { "currentTextChanged", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemActivated(QListWidgetItem*)", { "itemActivated", "QListWidgetItem*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemChanged(QListWidgetItem*)", { "itemChanged", "QListWidgetItem*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemClicked(QListWidgetItem*)", { "itemClicked", "QListWidgetItem*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemDoubleClicked(QListWidgetItem*)", { "itemDoubleClicked", "QListWidgetItem*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemEntered(QListWidgetItem*)", { "itemEntered", "QListWidgetItem*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemPressed(QListWidgetItem*)", { "itemPressed", "QListWidgetItem*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemSelectionChanged()", { "itemSelectionChanged", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQListWidget::plastiqProperties = {
    { "count", { "count", "int", "", "count" } },
    { "currentRow", { "currentRow", "int", "setCurrentRow", "currentRow" } },
    { "sortingEnabled", { "sortingEnabled", "bool", "setSortingEnabled", "isSortingEnabled" } },

};

QHash<QByteArray, long> PlastiQQListWidget::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQListWidget::plastiqInherits = { &PlastiQQListView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQListWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQListWidget::plastiq_static_metaObject = {
    { &PlastiQQListView::plastiq_static_metaObject, &plastiqInherits, "QListWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQListWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQListWidgetWrapper : public QListWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQListWidgetWrapper(QWidget *parent = Q_NULLPTR)
         : QListWidget(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool dropMimeData(int index, const QMimeData *data, Qt::DropAction action) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool dropMimeData(int,const QMimeData*,Qt::DropAction)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = index;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_voidp = reinterpret_cast<void*>(const_cast<QMimeData*>(data));
            stack[2].name = QByteArrayLiteral("QMimeData");
            stack[2].type = PlastiQ::QtObjectStar;
            stack[3].s_int64 = action;
            stack[3].name = QByteArrayLiteral("Qt::DropAction");
            stack[3].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QListWidget::dropMimeData(index,data,action);
    }

    bool PlastiQParentCall_dropMimeData(int index, const QMimeData *data, Qt::DropAction action) {
        return QListWidget::dropMimeData(index,data,action);
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
        else return QListWidget::mimeTypes();
    }

    QStringList PlastiQParentCall_mimeTypes() const {
        return QListWidget::mimeTypes();
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
        else return QListWidget::supportedDropActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDropActions() const {
        return QListWidget::supportedDropActions();
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
        else return QListWidget::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QListWidget::event(e);
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
        else return QListWidget::currentChanged(current,previous);
    }

    void PlastiQParentCall_currentChanged(const QModelIndex &current, const QModelIndex &previous) {
        return QListWidget::currentChanged(current,previous);
    }

    void dragLeaveEvent(QDragLeaveEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragLeaveEvent(QDragLeaveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDragLeaveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::dragLeaveEvent(e);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *e) {
        return QListWidget::dragLeaveEvent(e);
    }

    void dragMoveEvent(QDragMoveEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragMoveEvent(QDragMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDragMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::dragMoveEvent(e);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *e) {
        return QListWidget::dragMoveEvent(e);
    }

    void dropEvent(QDropEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dropEvent(QDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::dropEvent(e);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *e) {
        return QListWidget::dropEvent(e);
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
        else return QListWidget::horizontalOffset();
    }

    int PlastiQParentCall_horizontalOffset() const {
        return QListWidget::horizontalOffset();
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
        else return QListWidget::isIndexHidden(index);
    }

    bool PlastiQParentCall_isIndexHidden(const QModelIndex &index) const {
        return QListWidget::isIndexHidden(index);
    }

    void mouseMoveEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QListWidget::mouseMoveEvent(e);
    }

    void mouseReleaseEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QListWidget::mouseReleaseEvent(e);
    }

    void paintEvent(QPaintEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QListWidget::paintEvent(e);
    }

    void resizeEvent(QResizeEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QListWidget::resizeEvent(e);
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
        else return QListWidget::rowsAboutToBeRemoved(parent,start,end);
    }

    void PlastiQParentCall_rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end) {
        return QListWidget::rowsAboutToBeRemoved(parent,start,end);
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
        else return QListWidget::rowsInserted(parent,start,end);
    }

    void PlastiQParentCall_rowsInserted(const QModelIndex &parent, int start, int end) {
        return QListWidget::rowsInserted(parent,start,end);
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
        else return QListWidget::selectionChanged(selected,deselected);
    }

    void PlastiQParentCall_selectionChanged(const QItemSelection &selected, const QItemSelection &deselected) {
        return QListWidget::selectionChanged(selected,deselected);
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
        else return QListWidget::setSelection(rect,command);
    }

    void PlastiQParentCall_setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command) {
        return QListWidget::setSelection(rect,command);
    }

    void startDrag(Qt::DropActions supportedActions) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void startDrag(Qt::DropActions)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = supportedActions;
            stack[1].name = QByteArrayLiteral("Qt::DropActions");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::startDrag(supportedActions);
    }

    void PlastiQParentCall_startDrag(Qt::DropActions supportedActions) {
        return QListWidget::startDrag(supportedActions);
    }

    void timerEvent(QTimerEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QListWidget::timerEvent(e);
    }

    void updateGeometries() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateGeometries()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::updateGeometries();
    }

    void PlastiQParentCall_updateGeometries() {
        return QListWidget::updateGeometries();
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
        else return QListWidget::verticalOffset();
    }

    int PlastiQParentCall_verticalOffset() const {
        return QListWidget::verticalOffset();
    }

    QStyleOptionViewItem viewOptions() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QStyleOptionViewItem viewOptions()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QStyleOptionViewItem _r = QStyleOptionViewItem(*reinterpret_cast<QStyleOptionViewItem*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QListWidget::viewOptions();
    }

    QStyleOptionViewItem PlastiQParentCall_viewOptions() const {
        return QListWidget::viewOptions();
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
        else return QListWidget::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QListWidget::viewportSizeHint();
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
        else return QListWidget::visualRegionForSelection(selection);
    }

    QRegion PlastiQParentCall_visualRegionForSelection(const QItemSelection &selection) const {
        return QListWidget::visualRegionForSelection(selection);
    }

    void wheelEvent(QWheelEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListWidget::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QListWidget::wheelEvent(e);
    }

};

void PlastiQQListWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQListWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQListWidgetWrapper(); break;
        case 1: o = new PlastiQQListWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQListWidget *p = new PlastiQQListWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQListWidget *p = new PlastiQQListWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 39) {
            id -= 39;
            PlastiQQListView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QListWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QListWidget*>(object->plastiq_data());

        switch(id) {
        case 0: o->addItem(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addItem(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addItems((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->closePersistentEditor(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QListWidgetItem* _r = o->currentItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QListWidgetItem"; } break;
        case 6: { int _r = o->currentRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: o->editItem(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->insertItem(stack[1].s_int,
                    reinterpret_cast<QListWidgetItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->insertItem(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->insertItems(stack[1].s_int,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: { bool _r = o->isSortingEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { QListWidgetItem* _r = o->item(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QListWidgetItem"; } break;
        case 13: { QListWidgetItem* _r = o->itemAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QListWidgetItem"; } break;
        case 14: { QListWidgetItem* _r = o->itemAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QListWidgetItem"; } break;
        case 15: { QWidget* _r = o->itemWidget(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 16: o->openPersistentEditor(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->removeItemWidget(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 18: { int _r = o->row(reinterpret_cast<const QListWidgetItem*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: o->setCurrentItem(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 20: /* o->setCurrentItem(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 21: o->setCurrentRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: /* o->setCurrentRow(stack[1].s_int,
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 23: o->setItemWidget(reinterpret_cast<QListWidgetItem*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setSortingEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->sortItems();
                stack[0].type = PlastiQ::Void; break;
        case 26: o->sortItems(Qt::SortOrder(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 27: { QListWidgetItem* _r = o->takeItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QListWidgetItem"; } break;
        case 28: { /* COPY OBJECT */
            QRect *_r = new QRect(o->visualItemRect(reinterpret_cast<const QListWidgetItem*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { bool _r;
                if (isWrapper) _r = ((PlastiQQListWidgetWrapper*)o)->PlastiQParentCall_dropMimeData(stack[1].s_int,
                    reinterpret_cast<const QMimeData*>(stack[2].s_voidp),
                    Qt::DropAction(stack[3].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: { /* COPY OBJECT */
            QModelIndex *_r; stack[0].type = PlastiQ::Error; } break;
        case 31: { QListWidgetItem* _r; stack[0].type = PlastiQ::Error; } break;
        case 32: /* o->mimeData(UNSUPPORTED_TYPE_const QList<QListWidgetItem*>) | ret: `QMimeData*` */ break;
        case 33: { /* COPY OBJECT */
            QStringList *_r;
                if (isWrapper) _r = new QStringList(((PlastiQQListWidgetWrapper*)o)->PlastiQParentCall_mimeTypes());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQListWidgetWrapper*)o)->PlastiQParentCall_supportedDropActions();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 35: { bool _r;
                if (isWrapper) _r = ((PlastiQQListWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 36: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 37: o->scrollToItem(reinterpret_cast<const QListWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->scrollToItem(reinterpret_cast<const QListWidgetItem*>(stack[1].s_voidp),
                    QAbstractItemView::ScrollHint(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 10) {
            id -= 10;
            PlastiQQListView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QListWidget *o = reinterpret_cast<QListWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QListWidget::currentItemChanged,
            [=](QListWidgetItem* arg0, QListWidgetItem* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QListWidgetItem";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QListWidgetItem";
                PlastiQ_activate(sender, "currentItemChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QListWidget::currentRowChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentRowChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QListWidget::currentTextChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "currentTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QListWidget::itemActivated,
            [=](QListWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QListWidgetItem";
                PlastiQ_activate(sender, "itemActivated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QListWidget::itemChanged,
            [=](QListWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QListWidgetItem";
                PlastiQ_activate(sender, "itemChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QListWidget::itemClicked,
            [=](QListWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QListWidgetItem";
                PlastiQ_activate(sender, "itemClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QListWidget::itemDoubleClicked,
            [=](QListWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QListWidgetItem";
                PlastiQ_activate(sender, "itemDoubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QListWidget::itemEntered,
            [=](QListWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QListWidgetItem";
                PlastiQ_activate(sender, "itemEntered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QListWidget::itemPressed,
            [=](QListWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QListWidgetItem";
                PlastiQ_activate(sender, "itemPressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QListWidget::itemSelectionChanged,
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
        QListWidget *o = reinterpret_cast<QListWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QListWidget *o = reinterpret_cast<QListWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QListWidget *o = reinterpret_cast<QListWidget*>(object->plastiq_data());

        if(className == "QListView") {
            stack[0].s_voidp = static_cast<QListView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQListWidget::~PlastiQQListWidget() {
    QListWidget* o = reinterpret_cast<QListWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
