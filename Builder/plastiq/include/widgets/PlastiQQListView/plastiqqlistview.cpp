#include "plastiqmethod.h"
#include "plastiqqlistview.h"

#include "widgets/PlastiQQAbstractItemView/plastiqqabstractitemview.h"
#include <QListView> 
#include <QSize>
#include <QRect>
#include <QModelIndex>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QModelIndexList>
#include <QItemSelection>
#include <QTimerEvent>
#include <QStyleOptionViewItem>
#include <QRegion>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQListView::plastiqConstructors = {
    { "QListView()", { "QListView", "", "QListView*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QListView(QWidget*)", { "QListView", "QWidget*", "QListView*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQListView::plastiqMethods = {
    { "batchSize()", { "batchSize", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearPropertyFlags()", { "clearPropertyFlags", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flow()", { "flow", "", "Flow", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gridSize()", { "gridSize", "", "QSize", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRowHidden(int)", { "isRowHidden", "int", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSelectionRectVisible()", { "isSelectionRectVisible", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWrapping()", { "isWrapping", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layoutMode()", { "layoutMode", "", "LayoutMode", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modelColumn()", { "modelColumn", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "movement()", { "movement", "", "Movement", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resizeMode()", { "resizeMode", "", "ResizeMode", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBatchSize(int)", { "setBatchSize", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlow(enum)", { "setFlow", "Flow", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGridSize(QSize&)", { "setGridSize", "QSize&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLayoutMode(enum)", { "setLayoutMode", "LayoutMode", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModelColumn(int)", { "setModelColumn", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMovement(enum)", { "setMovement", "Movement", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResizeMode(enum)", { "setResizeMode", "ResizeMode", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowHidden(int,bool)", { "setRowHidden", "int,bool", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionRectVisible(bool)", { "setSelectionRectVisible", "bool", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(int)", { "setSpacing", "int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUniformItemSizes(bool)", { "setUniformItemSizes", "bool", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewMode(enum)", { "setViewMode", "ViewMode", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWordWrap(bool)", { "setWordWrap", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWrapping(bool)", { "setWrapping", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spacing()", { "spacing", "", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "uniformItemSizes()", { "uniformItemSizes", "", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewMode()", { "viewMode", "", "ViewMode", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wordWrap()", { "wordWrap", "", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rectForIndex(QModelIndex&)", { "rectForIndex", "QModelIndex&", "QRect", 29, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setPositionForIndex(QPoint&,QModelIndex&)", { "setPositionForIndex", "QPoint&,QModelIndex&", "void", 30, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "currentChanged(QModelIndex&,QModelIndex&)", { "currentChanged", "QModelIndex&,QModelIndex&", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dataChanged(QModelIndex&,QModelIndex&)", { "dataChanged", "QModelIndex&,QModelIndex&", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dataChanged(QModelIndex&,QModelIndex&,QVector<int>&)", { "dataChanged", "QModelIndex&,QModelIndex&,QVector<int>&", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QDragLeaveEvent*)", { "dragLeaveEvent", "QDragLeaveEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 36, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 37, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "horizontalOffset()", { "horizontalOffset", "", "int", 38, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "isIndexHidden(QModelIndex&)", { "isIndexHidden", "QModelIndex&", "bool", 39, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 40, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 41, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveCursor(CursorAction,enum)", { "moveCursor", "CursorAction,Qt::KeyboardModifiers", "QModelIndex", 42, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 43, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 44, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "rowsAboutToBeRemoved(QModelIndex&,int,int)", { "rowsAboutToBeRemoved", "QModelIndex&,int,int", "void", 45, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "rowsInserted(QModelIndex&,int,int)", { "rowsInserted", "QModelIndex&,int,int", "void", 46, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "selectedIndexes()", { "selectedIndexes", "", "QModelIndexList", 47, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "selectionChanged(QItemSelection&,QItemSelection&)", { "selectionChanged", "QItemSelection&,QItemSelection&", "void", 48, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setSelection(QRect&,QItemSelectionModel::SelectionFlags)", { "setSelection", "QRect&,QItemSelectionModel::SelectionFlags", "void", 49, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "startDrag(enum)", { "startDrag", "Qt::DropActions", "void", 50, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 51, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateGeometries()", { "updateGeometries", "", "void", 52, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "verticalOffset()", { "verticalOffset", "", "int", 53, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewOptions()", { "viewOptions", "", "QStyleOptionViewItem", 54, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportSizeHint()", { "viewportSizeHint", "", "QSize", 55, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "visualRegionForSelection(QItemSelection&)", { "visualRegionForSelection", "QItemSelection&", "QRegion", 56, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 57, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQListView::plastiqSignals = {
    { "indexesMoved(QModelIndexList&)", { "indexesMoved", "QModelIndexList&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQListView::plastiqProperties = {
    { "batchSize", { "batchSize", "int", "setBatchSize", "batchSize" } },
    { "flow", { "flow", "long", "setFlow", "flow" } },
    { "gridSize", { "gridSize", "QSize", "setGridSize", "gridSize" } },
    { "isWrapping", { "isWrapping", "bool", "setWrapping", "isWrapping" } },
    { "layoutMode", { "layoutMode", "long", "setLayoutMode", "layoutMode" } },
    { "modelColumn", { "modelColumn", "int", "setModelColumn", "modelColumn" } },
    { "movement", { "movement", "long", "setMovement", "movement" } },
    { "resizeMode", { "resizeMode", "long", "setResizeMode", "resizeMode" } },
    { "selectionRectVisible", { "selectionRectVisible", "bool", "setSelectionRectVisible", "isSelectionRectVisible" } },
    { "spacing", { "spacing", "int", "setSpacing", "spacing" } },
    { "uniformItemSizes", { "uniformItemSizes", "bool", "setUniformItemSizes", "uniformItemSizes" } },
    { "viewMode", { "viewMode", "long", "setViewMode", "viewMode" } },
    { "wordWrap", { "wordWrap", "bool", "setWordWrap", "wordWrap" } },

};

QHash<QByteArray, long> PlastiQQListView::plastiqConstants = {

    /* QListView::Flow */
   { "LeftToRight", QListView::LeftToRight },
   { "TopToBottom", QListView::TopToBottom },

    /* QListView::LayoutMode */
   { "SinglePass", QListView::SinglePass },
   { "Batched", QListView::Batched },

    /* QListView::Movement */
   { "Static", QListView::Static },
   { "Free", QListView::Free },
   { "Snap", QListView::Snap },

    /* QListView::ResizeMode */
   { "Fixed", QListView::Fixed },
   { "Adjust", QListView::Adjust },

    /* QListView::ViewMode */
   { "ListMode", QListView::ListMode },
   { "IconMode", QListView::IconMode },

};

QVector<PlastiQMetaObject*> PlastiQQListView::plastiqInherits = { &PlastiQQAbstractItemView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQListView::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQListView::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemView::plastiq_static_metaObject, &plastiqInherits, "QListView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQListView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQListViewWrapper : public QListView {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQListViewWrapper(QWidget *parent = Q_NULLPTR)
         : QListView(parent),
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
        else return QListView::currentChanged(current,previous);
    }

    void PlastiQParentCall_currentChanged(const QModelIndex &current, const QModelIndex &previous) {
        return QListView::currentChanged(current,previous);
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
        else return QListView::dragLeaveEvent(e);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *e) {
        return QListView::dragLeaveEvent(e);
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
        else return QListView::dragMoveEvent(e);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *e) {
        return QListView::dragMoveEvent(e);
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
        else return QListView::dropEvent(e);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *e) {
        return QListView::dropEvent(e);
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
        else return QListView::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QListView::event(e);
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
        else return QListView::horizontalOffset();
    }

    int PlastiQParentCall_horizontalOffset() const {
        return QListView::horizontalOffset();
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
        else return QListView::isIndexHidden(index);
    }

    bool PlastiQParentCall_isIndexHidden(const QModelIndex &index) const {
        return QListView::isIndexHidden(index);
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
        else return QListView::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QListView::mouseMoveEvent(e);
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
        else return QListView::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QListView::mouseReleaseEvent(e);
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
        else return QListView::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QListView::paintEvent(e);
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
        else return QListView::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QListView::resizeEvent(e);
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
        else return QListView::rowsAboutToBeRemoved(parent,start,end);
    }

    void PlastiQParentCall_rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end) {
        return QListView::rowsAboutToBeRemoved(parent,start,end);
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
        else return QListView::rowsInserted(parent,start,end);
    }

    void PlastiQParentCall_rowsInserted(const QModelIndex &parent, int start, int end) {
        return QListView::rowsInserted(parent,start,end);
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
        else return QListView::selectionChanged(selected,deselected);
    }

    void PlastiQParentCall_selectionChanged(const QItemSelection &selected, const QItemSelection &deselected) {
        return QListView::selectionChanged(selected,deselected);
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
        else return QListView::setSelection(rect,command);
    }

    void PlastiQParentCall_setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command) {
        return QListView::setSelection(rect,command);
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
        else return QListView::startDrag(supportedActions);
    }

    void PlastiQParentCall_startDrag(Qt::DropActions supportedActions) {
        return QListView::startDrag(supportedActions);
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
        else return QListView::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QListView::timerEvent(e);
    }

    void updateGeometries() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateGeometries()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QListView::updateGeometries();
    }

    void PlastiQParentCall_updateGeometries() {
        return QListView::updateGeometries();
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
        else return QListView::verticalOffset();
    }

    int PlastiQParentCall_verticalOffset() const {
        return QListView::verticalOffset();
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
        else return QListView::viewOptions();
    }

    QStyleOptionViewItem PlastiQParentCall_viewOptions() const {
        return QListView::viewOptions();
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
        else return QListView::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QListView::viewportSizeHint();
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
        else return QListView::visualRegionForSelection(selection);
    }

    QRegion PlastiQParentCall_visualRegionForSelection(const QItemSelection &selection) const {
        return QListView::visualRegionForSelection(selection);
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
        else return QListView::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QListView::wheelEvent(e);
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
        else return QListView::keyboardSearch(search);
    }

    void PlastiQParentCall_keyboardSearch(const QString &search) {
        return QListView::keyboardSearch(search);
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
        else return QListView::setModel(model);
    }

    void PlastiQParentCall_setModel(QAbstractItemModel *model) {
        return QListView::setModel(model);
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
        else return QListView::setSelectionModel(selectionModel);
    }

    void PlastiQParentCall_setSelectionModel(QItemSelectionModel *selectionModel) {
        return QListView::setSelectionModel(selectionModel);
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
        else return QListView::sizeHintForColumn(column);
    }

    int PlastiQParentCall_sizeHintForColumn(int column) const {
        return QListView::sizeHintForColumn(column);
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
        else return QListView::sizeHintForRow(row);
    }

    int PlastiQParentCall_sizeHintForRow(int row) const {
        return QListView::sizeHintForRow(row);
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
        else return QListView::edit(index,trigger,event);
    }

    bool PlastiQParentCall_edit(const QModelIndex &index, EditTrigger trigger, QEvent *event) {
        return QListView::edit(index,trigger,event);
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
        else return QListView::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QListView::dragEnterEvent(event);
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
        else return QListView::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QListView::focusInEvent(event);
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
        else return QListView::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QListView::focusNextPrevChild(next);
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
        else return QListView::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QListView::focusOutEvent(event);
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
        else return QListView::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QListView::inputMethodEvent(event);
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
        else return QListView::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QListView::keyPressEvent(event);
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
        else return QListView::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QListView::mouseDoubleClickEvent(event);
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
        else return QListView::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QListView::mousePressEvent(event);
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
        else return QListView::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QListView::viewportEvent(event);
    }

};

void PlastiQQListView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQListViewWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQListViewWrapper(); break;
        case 1: o = new PlastiQQListViewWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQListView *p = new PlastiQQListView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQListView *p = new PlastiQQListView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 58) {
            id -= 58;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QListView *o = sc ? Q_NULLPTR : reinterpret_cast<QListView*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->batchSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: o->clearPropertyFlags();
                stack[0].type = PlastiQ::Void; break;
        case 2: { qint64 _r = o->flow(); // HACK for Flow 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QSize *_r = new QSize(o->gridSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->isRowHidden(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isSelectionRectVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isWrapping();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { qint64 _r = o->layoutMode(); // HACK for LayoutMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { int _r = o->modelColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { qint64 _r = o->movement(); // HACK for Movement 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { qint64 _r = o->resizeMode(); // HACK for ResizeMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: o->setBatchSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setFlow(QListView::Flow(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setGridSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setLayoutMode(QListView::LayoutMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setModelColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setMovement(QListView::Movement(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setResizeMode(QListView::ResizeMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setRowHidden(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setSelectionRectVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setUniformItemSizes(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setViewMode(QListView::ViewMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setWordWrap(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setWrapping(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: { int _r = o->spacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { bool _r = o->uniformItemSizes();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: { qint64 _r = o->viewMode(); // HACK for ViewMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 28: { bool _r = o->wordWrap();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: { /* COPY OBJECT */
            QRect *_r; stack[0].type = PlastiQ::Error; } break;
        case 30: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 31: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_currentChanged((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 33: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 34: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QDragLeaveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 36: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 37: { bool _r;
                if (isWrapper) _r = ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: { int _r;
                if (isWrapper) _r = ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_horizontalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 39: { bool _r;
                if (isWrapper) _r = ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_isIndexHidden((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 41: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 42: /* o->moveCursor(UNSUPPORTED_TYPE_CursorAction,
                    Qt::KeyboardModifiers(stack[2].s_int64)) | ret: `QModelIndex` */ break;
        case 43: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 44: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 45: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_rowsAboutToBeRemoved((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 46: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_rowsInserted((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 47: /* UNSUPPORTED_RETURN_VALUE o->selectedIndexes() | ret: `QModelIndexList` */ break;
        case 48: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_selectionChanged((*reinterpret_cast< QItemSelection(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QItemSelection(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 49: /* o->setSelection((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 50: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_startDrag(Qt::DropActions(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 51: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 52: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_updateGeometries();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 53: { int _r;
                if (isWrapper) _r = ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_verticalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: { /* COPY OBJECT */
            QStyleOptionViewItem *_r;
                if (isWrapper) _r = new QStyleOptionViewItem(((PlastiQQListViewWrapper*)o)->PlastiQParentCall_viewOptions());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStyleOptionViewItem";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 55: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQListViewWrapper*)o)->PlastiQParentCall_viewportSizeHint());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: { /* COPY OBJECT */
            QRegion *_r;
                if (isWrapper) _r = new QRegion(((PlastiQQListViewWrapper*)o)->PlastiQParentCall_visualRegionForSelection((*reinterpret_cast< QItemSelection(*) >(stack[1].s_voidp))));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 57: if (isWrapper) ((PlastiQQListViewWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QListView *o = reinterpret_cast<QListView*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QListView::indexesMoved,
            [=](const QModelIndexList& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&const_cast<QModelIndexList&>(arg0));
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QModelIndexList";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "indexesMoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QListView *o = reinterpret_cast<QListView*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QListView *o = reinterpret_cast<QListView*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QListView *o = reinterpret_cast<QListView*>(object->plastiq_data());

        if(className == "QAbstractItemView") {
            stack[0].s_voidp = static_cast<QAbstractItemView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQListView::~PlastiQQListView() {
    QListView* o = reinterpret_cast<QListView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
