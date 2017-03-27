#include "plastiqmethod.h"
#include "plastiqqtableview.h"

#include "widgets/PlastiQQAbstractItemView/plastiqqabstractitemview.h"
#include <QTableView> 
#include <QHeaderView>
#include <QModelIndex>
#include <QPaintEvent>
#include <QModelIndexList>
#include <QItemSelection>
#include <QRect>
#include <QTimerEvent>
#include <QStyleOptionViewItem>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQTableView::plastiqConstructors = {
    { "QTableView()", { "QTableView", "", "QTableView*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTableView(QWidget*)", { "QTableView", "QWidget*", "QTableView*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTableView::plastiqMethods = {
    { "clearSpans()", { "clearSpans", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnAt(int)", { "columnAt", "int", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnSpan(int,int)", { "columnSpan", "int,int", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnViewportPosition(int)", { "columnViewportPosition", "int", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnWidth(int)", { "columnWidth", "int", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gridStyle()", { "gridStyle", "", "Qt::PenStyle", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalHeader()", { "horizontalHeader", "", "QHeaderView*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isColumnHidden(int)", { "isColumnHidden", "int", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCornerButtonEnabled()", { "isCornerButtonEnabled", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRowHidden(int)", { "isRowHidden", "int", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSortingEnabled()", { "isSortingEnabled", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowAt(int)", { "rowAt", "int", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowHeight(int)", { "rowHeight", "int", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowSpan(int,int)", { "rowSpan", "int,int", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowViewportPosition(int)", { "rowViewportPosition", "int", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnHidden(int,bool)", { "setColumnHidden", "int,bool", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnWidth(int,int)", { "setColumnWidth", "int,int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCornerButtonEnabled(bool)", { "setCornerButtonEnabled", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGridStyle(enum)", { "setGridStyle", "Qt::PenStyle", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalHeader(QHeaderView*)", { "setHorizontalHeader", "QHeaderView*", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowHeight(int,int)", { "setRowHeight", "int,int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowHidden(int,bool)", { "setRowHidden", "int,bool", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortingEnabled(bool)", { "setSortingEnabled", "bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpan(int,int,int,int)", { "setSpan", "int,int,int,int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalHeader(QHeaderView*)", { "setVerticalHeader", "QHeaderView*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWordWrap(bool)", { "setWordWrap", "bool", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showGrid()", { "showGrid", "", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortByColumn(int,enum)", { "sortByColumn", "int,Qt::SortOrder", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalHeader()", { "verticalHeader", "", "QHeaderView*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wordWrap()", { "wordWrap", "", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentChanged(QModelIndex&,QModelIndex&)", { "currentChanged", "QModelIndex&,QModelIndex&", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "horizontalOffset()", { "horizontalOffset", "", "int", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "isIndexHidden(QModelIndex&)", { "isIndexHidden", "QModelIndex&", "bool", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveCursor(CursorAction,enum)", { "moveCursor", "CursorAction,Qt::KeyboardModifiers", "QModelIndex", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "selectedIndexes()", { "selectedIndexes", "", "QModelIndexList", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "selectionChanged(QItemSelection&,QItemSelection&)", { "selectionChanged", "QItemSelection&,QItemSelection&", "void", 36, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setSelection(QRect&,QItemSelectionModel::SelectionFlags)", { "setSelection", "QRect&,QItemSelectionModel::SelectionFlags", "void", 37, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHintForColumn(int)", { "sizeHintForColumn", "int", "int", 38, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHintForRow(int)", { "sizeHintForRow", "int", "int", 39, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 40, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateGeometries()", { "updateGeometries", "", "void", 41, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "verticalOffset()", { "verticalOffset", "", "int", 42, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewOptions()", { "viewOptions", "", "QStyleOptionViewItem", 43, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportSizeHint()", { "viewportSizeHint", "", "QSize", 44, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideColumn(int)", { "hideColumn", "int", "void", 45, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "hideRow(int)", { "hideRow", "int", "void", 46, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resizeColumnToContents(int)", { "resizeColumnToContents", "int", "void", 47, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resizeColumnsToContents()", { "resizeColumnsToContents", "", "void", 48, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resizeRowToContents(int)", { "resizeRowToContents", "int", "void", 49, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resizeRowsToContents()", { "resizeRowsToContents", "", "void", 50, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "selectColumn(int)", { "selectColumn", "int", "void", 51, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "selectRow(int)", { "selectRow", "int", "void", 52, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setShowGrid(bool)", { "setShowGrid", "bool", "void", 53, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showColumn(int)", { "showColumn", "int", "void", 54, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showRow(int)", { "showRow", "int", "void", 55, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTableView::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTableView::plastiqProperties = {
    { "cornerButtonEnabled", { "cornerButtonEnabled", "bool", "setCornerButtonEnabled", "isCornerButtonEnabled" } },
    { "gridStyle", { "gridStyle", "long", "setGridStyle", "gridStyle" } },
    { "showGrid", { "showGrid", "bool", "setShowGrid", "showGrid" } },
    { "sortingEnabled", { "sortingEnabled", "bool", "setSortingEnabled", "isSortingEnabled" } },
    { "wordWrap", { "wordWrap", "bool", "setWordWrap", "wordWrap" } },

};

QHash<QByteArray, long> PlastiQQTableView::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTableView::plastiqInherits = { &PlastiQQAbstractItemView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTableView::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQTableView::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemView::plastiq_static_metaObject, &plastiqInherits, "QTableView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTableView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTableViewWrapper : public QTableView {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTableViewWrapper(QWidget *parent = Q_NULLPTR)
         : QTableView(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QTableView::currentChanged(current,previous);
    }

    void PlastiQParentCall_currentChanged(const QModelIndex &current, const QModelIndex &previous) {
        return QTableView::currentChanged(current,previous);
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
        else return QTableView::horizontalOffset();
    }

    int PlastiQParentCall_horizontalOffset() const {
        return QTableView::horizontalOffset();
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
        else return QTableView::isIndexHidden(index);
    }

    bool PlastiQParentCall_isIndexHidden(const QModelIndex &index) const {
        return QTableView::isIndexHidden(index);
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
        else return QTableView::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QTableView::paintEvent(event);
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
        else return QTableView::selectionChanged(selected,deselected);
    }

    void PlastiQParentCall_selectionChanged(const QItemSelection &selected, const QItemSelection &deselected) {
        return QTableView::selectionChanged(selected,deselected);
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
        else return QTableView::setSelection(rect,flags);
    }

    void PlastiQParentCall_setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags flags) {
        return QTableView::setSelection(rect,flags);
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
        else return QTableView::sizeHintForColumn(column);
    }

    int PlastiQParentCall_sizeHintForColumn(int column) const {
        return QTableView::sizeHintForColumn(column);
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
        else return QTableView::sizeHintForRow(row);
    }

    int PlastiQParentCall_sizeHintForRow(int row) const {
        return QTableView::sizeHintForRow(row);
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
        else return QTableView::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTableView::timerEvent(event);
    }

    void updateGeometries() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateGeometries()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::updateGeometries();
    }

    void PlastiQParentCall_updateGeometries() {
        return QTableView::updateGeometries();
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
        else return QTableView::verticalOffset();
    }

    int PlastiQParentCall_verticalOffset() const {
        return QTableView::verticalOffset();
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
        else return QTableView::viewOptions();
    }

    QStyleOptionViewItem PlastiQParentCall_viewOptions() const {
        return QTableView::viewOptions();
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
        else return QTableView::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QTableView::viewportSizeHint();
    }

    void keyboardSearch(const QString &search) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyboardSearch(const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_string = const_cast<QString&>(search);
            stack[1].name = QByteArrayLiteral("QString");
            stack[1].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::keyboardSearch(search);
    }

    void PlastiQParentCall_keyboardSearch(const QString &search) {
        return QTableView::keyboardSearch(search);
    }

    void setModel(QAbstractItemModel *model) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setModel(QAbstractItemModel*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(model);
            stack[1].name = QByteArrayLiteral("QAbstractItemModel");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::setModel(model);
    }

    void PlastiQParentCall_setModel(QAbstractItemModel *model) {
        return QTableView::setModel(model);
    }

    void setSelectionModel(QItemSelectionModel *selectionModel) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setSelectionModel(QItemSelectionModel*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(selectionModel);
            stack[1].name = QByteArrayLiteral("QItemSelectionModel");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::setSelectionModel(selectionModel);
    }

    void PlastiQParentCall_setSelectionModel(QItemSelectionModel *selectionModel) {
        return QTableView::setSelectionModel(selectionModel);
    }

    bool edit(const QModelIndex &index, EditTrigger trigger, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool edit(const QModelIndex&,EditTrigger,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int64 = trigger;
            stack[2].name = QByteArrayLiteral("EditTrigger");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_voidp = reinterpret_cast<void*>(event);
            stack[3].name = QByteArrayLiteral("QEvent");
            stack[3].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTableView::edit(index,trigger,event);
    }

    bool PlastiQParentCall_edit(const QModelIndex &index, EditTrigger trigger, QEvent *event) {
        return QTableView::edit(index,trigger,event);
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
        else return QTableView::startDrag(supportedActions);
    }

    void PlastiQParentCall_startDrag(Qt::DropActions supportedActions) {
        return QTableView::startDrag(supportedActions);
    }

    void dragEnterEvent(QDragEnterEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragEnterEvent(QDragEnterEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragEnterEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QTableView::dragEnterEvent(event);
    }

    void dragLeaveEvent(QDragLeaveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragLeaveEvent(QDragLeaveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragLeaveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QTableView::dragLeaveEvent(event);
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
        else return QTableView::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QTableView::dragMoveEvent(event);
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
        else return QTableView::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QTableView::dropEvent(event);
    }

    bool event(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
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
        else return QTableView::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QTableView::event(event);
    }

    void focusInEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QTableView::focusInEvent(event);
    }

    bool focusNextPrevChild(bool next) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool focusNextPrevChild(bool)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_bool = next;
            stack[1].name = QByteArrayLiteral("bool");
            stack[1].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTableView::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QTableView::focusNextPrevChild(next);
    }

    void focusOutEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QTableView::focusOutEvent(event);
    }

    void inputMethodEvent(QInputMethodEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void inputMethodEvent(QInputMethodEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QInputMethodEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QTableView::inputMethodEvent(event);
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
        else return QTableView::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QTableView::keyPressEvent(event);
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
        else return QTableView::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QTableView::mouseDoubleClickEvent(event);
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
        else return QTableView::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QTableView::mouseMoveEvent(event);
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
        else return QTableView::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QTableView::mousePressEvent(event);
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
        else return QTableView::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QTableView::mouseReleaseEvent(event);
    }

    void resizeEvent(QResizeEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTableView::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QTableView::resizeEvent(event);
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
        else return QTableView::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QTableView::viewportEvent(event);
    }

};

void PlastiQQTableView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTableViewWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTableViewWrapper(); break;
        case 1: o = new PlastiQQTableViewWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTableView *p = new PlastiQQTableView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTableView *p = new PlastiQQTableView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 56) {
            id -= 56;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTableView *o = sc ? Q_NULLPTR : reinterpret_cast<QTableView*>(object->plastiq_data());

        switch(id) {
        case 0: o->clearSpans();
                stack[0].type = PlastiQ::Void; break;
        case 1: { int _r = o->columnAt(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->columnSpan(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->columnViewportPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->columnWidth(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { qint64 _r = o->gridStyle(); // HACK for Qt::PenStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { QHeaderView* _r = o->horizontalHeader();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QHeaderView"; } break;
        case 7: { bool _r = o->isColumnHidden(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isCornerButtonEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isRowHidden(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isSortingEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { int _r = o->rowAt(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->rowHeight(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->rowSpan(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->rowViewportPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: o->setColumnHidden(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setColumnWidth(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setCornerButtonEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setGridStyle(Qt::PenStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setHorizontalHeader(reinterpret_cast<QHeaderView*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setRowHeight(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setRowHidden(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setSortingEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setSpan(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setVerticalHeader(reinterpret_cast<QHeaderView*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setWordWrap(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 26: { bool _r = o->showGrid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: o->sortByColumn(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: { QHeaderView* _r = o->verticalHeader();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QHeaderView"; } break;
        case 29: { bool _r = o->wordWrap();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: if (isWrapper) ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_currentChanged((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: { int _r;
                if (isWrapper) _r = ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_horizontalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 32: { bool _r;
                if (isWrapper) _r = ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_isIndexHidden((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: /* o->moveCursor(UNSUPPORTED_TYPE_CursorAction,
                    Qt::KeyboardModifiers(stack[2].s_int64)) | ret: `QModelIndex` */ break;
        case 34: if (isWrapper) ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: /* UNSUPPORTED_RETURN_VALUE o->selectedIndexes() | ret: `QModelIndexList` */ break;
        case 36: if (isWrapper) ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_selectionChanged((*reinterpret_cast< QItemSelection(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QItemSelection(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 37: /* o->setSelection((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 38: { int _r;
                if (isWrapper) _r = ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_sizeHintForColumn(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 39: { int _r;
                if (isWrapper) _r = ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_sizeHintForRow(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 40: if (isWrapper) ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 41: if (isWrapper) ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_updateGeometries();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 42: { int _r;
                if (isWrapper) _r = ((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_verticalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 43: { /* COPY OBJECT */
            QStyleOptionViewItem *_r;
                if (isWrapper) _r = new QStyleOptionViewItem(((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_viewOptions());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStyleOptionViewItem";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQTableViewWrapper*)o)->PlastiQParentCall_viewportSizeHint());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: o->hideColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->hideRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->resizeColumnToContents(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 48: o->resizeColumnsToContents();
                stack[0].type = PlastiQ::Void; break;
        case 49: o->resizeRowToContents(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 50: o->resizeRowsToContents();
                stack[0].type = PlastiQ::Void; break;
        case 51: o->selectColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 52: o->selectRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 53: o->setShowGrid(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 54: o->showColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 55: o->showRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTableView *o = reinterpret_cast<QTableView*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTableView *o = reinterpret_cast<QTableView*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTableView *o = reinterpret_cast<QTableView*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTableView *o = reinterpret_cast<QTableView*>(object->plastiq_data());

        if(className == "QAbstractItemView") {
            stack[0].s_voidp = static_cast<QAbstractItemView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTableView::~PlastiQQTableView() {
    QTableView* o = reinterpret_cast<QTableView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
