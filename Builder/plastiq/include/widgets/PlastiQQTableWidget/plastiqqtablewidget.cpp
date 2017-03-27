#include "plastiqmethod.h"
#include "plastiqqtablewidget.h"

#include "widgets/PlastiQQTableView/plastiqqtableview.h"
#include <QTableWidget> 
#include <QWidget>
#include <QTableWidgetItem>
#include <QRect>
#include <QMimeData>
#include <QModelIndex>
#include <QStringList>
#include <QDropEvent>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidget::plastiqConstructors = {
    { "QTableWidget()", { "QTableWidget", "", "QTableWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidget(QWidget*)", { "QTableWidget", "QWidget*", "QTableWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidget(int,int)", { "QTableWidget", "int,int", "QTableWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableWidget(int,int,QWidget*)", { "QTableWidget", "int,int,QWidget*", "QTableWidget*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidget::plastiqMethods = {
    { "cellWidget(int,int)", { "cellWidget", "int,int", "QWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closePersistentEditor(QTableWidgetItem*)", { "closePersistentEditor", "QTableWidgetItem*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "column(const QTableWidgetItem*)", { "column", "QTableWidgetItem*", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentColumn()", { "currentColumn", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentItem()", { "currentItem", "", "QTableWidgetItem*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentRow()", { "currentRow", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "editItem(QTableWidgetItem*)", { "editItem", "QTableWidgetItem*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalHeaderItem(int)", { "horizontalHeaderItem", "int", "QTableWidgetItem*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "item(int,int)", { "item", "int,int", "QTableWidgetItem*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(QPoint&)", { "itemAt", "QPoint&", "QTableWidgetItem*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int,int)", { "itemAt", "int,int", "QTableWidgetItem*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemPrototype()", { "itemPrototype", "", "const QTableWidgetItem*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openPersistentEditor(QTableWidgetItem*)", { "openPersistentEditor", "QTableWidgetItem*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeCellWidget(int,int)", { "removeCellWidget", "int,int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row(const QTableWidgetItem*)", { "row", "QTableWidgetItem*", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCellWidget(int,int,QWidget*)", { "setCellWidget", "int,int,QWidget*", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnCount(int)", { "setColumnCount", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentCell(int,int)", { "setCurrentCell", "int,int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentCell(int,int,QItemSelectionModel::SelectionFlags)", { "setCurrentCell", "int,int,QItemSelectionModel::SelectionFlags", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentItem(QTableWidgetItem*)", { "setCurrentItem", "QTableWidgetItem*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentItem(QTableWidgetItem*,QItemSelectionModel::SelectionFlags)", { "setCurrentItem", "QTableWidgetItem*,QItemSelectionModel::SelectionFlags", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalHeaderItem(int,QTableWidgetItem*)", { "setHorizontalHeaderItem", "int,QTableWidgetItem*", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalHeaderLabels(QStringList&)", { "setHorizontalHeaderLabels", "QStringList&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItem(int,int,QTableWidgetItem*)", { "setItem", "int,int,QTableWidgetItem*", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemPrototype(const QTableWidgetItem*)", { "setItemPrototype", "QTableWidgetItem*", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRangeSelected(QTableWidgetSelectionRange&,bool)", { "setRangeSelected", "QTableWidgetSelectionRange&,bool", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowCount(int)", { "setRowCount", "int", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalHeaderItem(int,QTableWidgetItem*)", { "setVerticalHeaderItem", "int,QTableWidgetItem*", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalHeaderLabels(QStringList&)", { "setVerticalHeaderLabels", "QStringList&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortItems(int)", { "sortItems", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortItems(int,enum)", { "sortItems", "int,Qt::SortOrder", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeHorizontalHeaderItem(int)", { "takeHorizontalHeaderItem", "int", "QTableWidgetItem*", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeItem(int,int)", { "takeItem", "int,int", "QTableWidgetItem*", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeVerticalHeaderItem(int)", { "takeVerticalHeaderItem", "int", "QTableWidgetItem*", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalHeaderItem(int)", { "verticalHeaderItem", "int", "QTableWidgetItem*", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualColumn(int)", { "visualColumn", "int", "int", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualItemRect(const QTableWidgetItem*)", { "visualItemRect", "QTableWidgetItem*", "QRect", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualRow(int)", { "visualRow", "int", "int", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dropMimeData(int,int,const QMimeData*,enum)", { "dropMimeData", "int,int,QMimeData*,Qt::DropAction", "bool", 40, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "indexFromItem(QTableWidgetItem*)", { "indexFromItem", "QTableWidgetItem*", "QModelIndex", 41, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "itemFromIndex(QModelIndex&)", { "itemFromIndex", "QModelIndex&", "QTableWidgetItem*", 42, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "mimeData(const QList<QTableWidgetItem*>)", { "mimeData", "QList<QTableWidgetItem*>", "QMimeData*", 43, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mimeTypes()", { "mimeTypes", "", "QStringList", 44, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "supportedDropActions()", { "supportedDropActions", "", "Qt::DropActions", 45, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 46, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 47, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 48, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "clearContents()", { "clearContents", "", "void", 49, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "insertColumn(int)", { "insertColumn", "int", "void", 50, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "insertRow(int)", { "insertRow", "int", "void", 51, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "removeColumn(int)", { "removeColumn", "int", "void", 52, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "removeRow(int)", { "removeRow", "int", "void", 53, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToItem(const QTableWidgetItem*)", { "scrollToItem", "QTableWidgetItem*", "void", 54, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToItem(const QTableWidgetItem*,enum)", { "scrollToItem", "QTableWidgetItem*,QAbstractItemView::ScrollHint", "void", 55, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTableWidget::plastiqSignals = {
    { "cellActivated(int,int)", { "cellActivated", "int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cellChanged(int,int)", { "cellChanged", "int,int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cellClicked(int,int)", { "cellClicked", "int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cellDoubleClicked(int,int)", { "cellDoubleClicked", "int,int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cellEntered(int,int)", { "cellEntered", "int,int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cellPressed(int,int)", { "cellPressed", "int,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentCellChanged(int,int,int,int)", { "currentCellChanged", "int,int,int,int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)", { "currentItemChanged", "QTableWidgetItem*,QTableWidgetItem*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemActivated(QTableWidgetItem*)", { "itemActivated", "QTableWidgetItem*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemChanged(QTableWidgetItem*)", { "itemChanged", "QTableWidgetItem*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemClicked(QTableWidgetItem*)", { "itemClicked", "QTableWidgetItem*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemDoubleClicked(QTableWidgetItem*)", { "itemDoubleClicked", "QTableWidgetItem*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemEntered(QTableWidgetItem*)", { "itemEntered", "QTableWidgetItem*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemPressed(QTableWidgetItem*)", { "itemPressed", "QTableWidgetItem*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "itemSelectionChanged()", { "itemSelectionChanged", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTableWidget::plastiqProperties = {
    { "columnCount", { "columnCount", "int", "setColumnCount", "columnCount" } },
    { "rowCount", { "rowCount", "int", "setRowCount", "rowCount" } },

};

QHash<QByteArray, long> PlastiQQTableWidget::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTableWidget::plastiqInherits = { &PlastiQQTableView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTableWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQTableWidget::plastiq_static_metaObject = {
    { &PlastiQQTableView::plastiq_static_metaObject, &plastiqInherits, "QTableWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTableWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTableWidgetWrapper : public QTableWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTableWidgetWrapper(QWidget *parent = Q_NULLPTR)
         : QTableWidget(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQTableWidgetWrapper(int rows, int columns, QWidget *parent = Q_NULLPTR)
         : QTableWidget(rows,columns,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool dropMimeData(int row, int column, const QMimeData *data, Qt::DropAction action) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool dropMimeData(int,int,const QMimeData*,Qt::DropAction)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_int = row;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = column;
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
        else return QTableWidget::dropMimeData(row,column,data,action);
    }

    bool PlastiQParentCall_dropMimeData(int row, int column, const QMimeData *data, Qt::DropAction action) {
        return QTableWidget::dropMimeData(row,column,data,action);
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
        else return QTableWidget::mimeTypes();
    }

    QStringList PlastiQParentCall_mimeTypes() const {
        return QTableWidget::mimeTypes();
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
        else return QTableWidget::supportedDropActions();
    }

    Qt::DropActions PlastiQParentCall_supportedDropActions() const {
        return QTableWidget::supportedDropActions();
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
        else return QTableWidget::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QTableWidget::dropEvent(event);
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
        else return QTableWidget::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QTableWidget::event(e);
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
        else return QTableWidget::currentChanged(current,previous);
    }

    void PlastiQParentCall_currentChanged(const QModelIndex &current, const QModelIndex &previous) {
        return QTableWidget::currentChanged(current,previous);
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
        else return QTableWidget::horizontalOffset();
    }

    int PlastiQParentCall_horizontalOffset() const {
        return QTableWidget::horizontalOffset();
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
        else return QTableWidget::isIndexHidden(index);
    }

    bool PlastiQParentCall_isIndexHidden(const QModelIndex &index) const {
        return QTableWidget::isIndexHidden(index);
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
        else return QTableWidget::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QTableWidget::paintEvent(event);
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
        else return QTableWidget::selectionChanged(selected,deselected);
    }

    void PlastiQParentCall_selectionChanged(const QItemSelection &selected, const QItemSelection &deselected) {
        return QTableWidget::selectionChanged(selected,deselected);
    }

    void setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags flags) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setSelection(const QRect&,QItemSelectionModel::SelectionFlags)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRect");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = reinterpret_cast<void*>(&flags);
            stack[2].name = QByteArrayLiteral("QItemSelectionModel::SelectionFlags");
            stack[2].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableWidget::setSelection(rect,flags);
    }

    void PlastiQParentCall_setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags flags) {
        return QTableWidget::setSelection(rect,flags);
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
        else return QTableWidget::sizeHintForColumn(column);
    }

    int PlastiQParentCall_sizeHintForColumn(int column) const {
        return QTableWidget::sizeHintForColumn(column);
    }

    int sizeHintForRow(int row) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int sizeHintForRow(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = row;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QTableWidget::sizeHintForRow(row);
    }

    int PlastiQParentCall_sizeHintForRow(int row) const {
        return QTableWidget::sizeHintForRow(row);
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
        else return QTableWidget::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTableWidget::timerEvent(event);
    }

    void updateGeometries() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateGeometries()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableWidget::updateGeometries();
    }

    void PlastiQParentCall_updateGeometries() {
        return QTableWidget::updateGeometries();
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
        else return QTableWidget::verticalOffset();
    }

    int PlastiQParentCall_verticalOffset() const {
        return QTableWidget::verticalOffset();
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
        else return QTableWidget::viewOptions();
    }

    QStyleOptionViewItem PlastiQParentCall_viewOptions() const {
        return QTableWidget::viewOptions();
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
        else return QTableWidget::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QTableWidget::viewportSizeHint();
    }

};

void PlastiQQTableWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTableWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTableWidgetWrapper(); break;
        case 1: o = new PlastiQQTableWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQTableWidgetWrapper(stack[1].s_int,
                    stack[2].s_int); break;
        case 3: o = new PlastiQQTableWidgetWrapper(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTableWidget *p = new PlastiQQTableWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTableWidget *p = new PlastiQQTableWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 56) {
            id -= 56;
            PlastiQQTableView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTableWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QTableWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { QWidget* _r = o->cellWidget(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 1: o->closePersistentEditor(reinterpret_cast<QTableWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { int _r = o->column(reinterpret_cast<const QTableWidgetItem*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->columnCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->currentColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QTableWidgetItem* _r = o->currentItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 6: { int _r = o->currentRow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: o->editItem(reinterpret_cast<QTableWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: { QTableWidgetItem* _r = o->horizontalHeaderItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 9: { QTableWidgetItem* _r = o->item(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 10: { QTableWidgetItem* _r = o->itemAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 11: { QTableWidgetItem* _r = o->itemAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 12: { QTableWidgetItem* _r = const_cast<QTableWidgetItem*>(o->itemPrototype());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 13: o->openPersistentEditor(reinterpret_cast<QTableWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->removeCellWidget(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: { int _r = o->row(reinterpret_cast<const QTableWidgetItem*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: o->setCellWidget(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setColumnCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setCurrentCell(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: /* o->setCurrentCell(stack[1].s_int,
                    stack[2].s_int,
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 21: o->setCurrentItem(reinterpret_cast<QTableWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: /* o->setCurrentItem(reinterpret_cast<QTableWidgetItem*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 23: o->setHorizontalHeaderItem(stack[1].s_int,
                    reinterpret_cast<QTableWidgetItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setHorizontalHeaderLabels((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setItem(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<QTableWidgetItem*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setItemPrototype(reinterpret_cast<const QTableWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setRangeSelected((*reinterpret_cast< QTableWidgetSelectionRange(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setRowCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setVerticalHeaderItem(stack[1].s_int,
                    reinterpret_cast<QTableWidgetItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setVerticalHeaderLabels((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->sortItems(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->sortItems(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 33: { QTableWidgetItem* _r = o->takeHorizontalHeaderItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 34: { QTableWidgetItem* _r = o->takeItem(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 35: { QTableWidgetItem* _r = o->takeVerticalHeaderItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 36: { QTableWidgetItem* _r = o->verticalHeaderItem(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTableWidgetItem"; } break;
        case 37: { int _r = o->visualColumn(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 38: { /* COPY OBJECT */
            QRect *_r = new QRect(o->visualItemRect(reinterpret_cast<const QTableWidgetItem*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { int _r = o->visualRow(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 40: { bool _r;
                if (isWrapper) _r = ((PlastiQQTableWidgetWrapper*)o)->PlastiQParentCall_dropMimeData(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<const QMimeData*>(stack[3].s_voidp),
                    Qt::DropAction(stack[4].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { /* COPY OBJECT */
            QModelIndex *_r; stack[0].type = PlastiQ::Error; } break;
        case 42: { QTableWidgetItem* _r; stack[0].type = PlastiQ::Error; } break;
        case 43: /* o->mimeData(UNSUPPORTED_TYPE_const QList<QTableWidgetItem*>) | ret: `QMimeData*` */ break;
        case 44: { /* COPY OBJECT */
            QStringList *_r;
                if (isWrapper) _r = new QStringList(((PlastiQQTableWidgetWrapper*)o)->PlastiQParentCall_mimeTypes());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQTableWidgetWrapper*)o)->PlastiQParentCall_supportedDropActions();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 46: if (isWrapper) ((PlastiQQTableWidgetWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 47: { bool _r;
                if (isWrapper) _r = ((PlastiQQTableWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 49: o->clearContents();
                stack[0].type = PlastiQ::Void; break;
        case 50: o->insertColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 51: o->insertRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 52: o->removeColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 53: o->removeRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 54: o->scrollToItem(reinterpret_cast<const QTableWidgetItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 55: o->scrollToItem(reinterpret_cast<const QTableWidgetItem*>(stack[1].s_voidp),
                    QAbstractItemView::ScrollHint(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 15) {
            id -= 15;
            PlastiQQTableView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTableWidget *o = reinterpret_cast<QTableWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTableWidget::cellActivated,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "cellActivated", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTableWidget::cellChanged,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "cellChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QTableWidget::cellClicked,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "cellClicked", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QTableWidget::cellDoubleClicked,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "cellDoubleClicked", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QTableWidget::cellEntered,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "cellEntered", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QTableWidget::cellPressed,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "cellPressed", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QTableWidget::currentCellChanged,
            [=](int arg0, int arg1, int arg2, int arg3) {
                PMOGStack cstack = new PMOGStackItem[4];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                    cstack[2].s_int = arg2;
                    cstack[2].type = PlastiQ::Int; cstack[2].name = "int";
                    cstack[3].s_int = arg3;
                    cstack[3].type = PlastiQ::Int; cstack[3].name = "int";
                PlastiQ_activate(sender, "currentCellChanged", receiver, slot.constData(), 4, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QTableWidget::currentItemChanged,
            [=](QTableWidgetItem* arg0, QTableWidgetItem* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTableWidgetItem";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QTableWidgetItem";
                PlastiQ_activate(sender, "currentItemChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QTableWidget::itemActivated,
            [=](QTableWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTableWidgetItem";
                PlastiQ_activate(sender, "itemActivated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QTableWidget::itemChanged,
            [=](QTableWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTableWidgetItem";
                PlastiQ_activate(sender, "itemChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QTableWidget::itemClicked,
            [=](QTableWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTableWidgetItem";
                PlastiQ_activate(sender, "itemClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QTableWidget::itemDoubleClicked,
            [=](QTableWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTableWidgetItem";
                PlastiQ_activate(sender, "itemDoubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QTableWidget::itemEntered,
            [=](QTableWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTableWidgetItem";
                PlastiQ_activate(sender, "itemEntered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QTableWidget::itemPressed,
            [=](QTableWidgetItem* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QTableWidgetItem";
                PlastiQ_activate(sender, "itemPressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QTableWidget::itemSelectionChanged,
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
        QTableWidget *o = reinterpret_cast<QTableWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTableWidget *o = reinterpret_cast<QTableWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTableWidget *o = reinterpret_cast<QTableWidget*>(object->plastiq_data());

        if(className == "QTableView") {
            stack[0].s_voidp = static_cast<QTableView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTableWidget::~PlastiQQTableWidget() {
    QTableWidget* o = reinterpret_cast<QTableWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
