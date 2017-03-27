#include "plastiqmethod.h"
#include "plastiqqtreeview.h"

#include "widgets/PlastiQQAbstractItemView/plastiqqabstractitemview.h"
#include <QTreeView> 
#include <QHeaderView>
#include <QModelIndex>
#include <QPainter>
#include <QRect>
#include <QStyleOptionViewItem>
#include <QDragMoveEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QModelIndexList>
#include <QItemSelection>
#include <QTimerEvent>
#include <QEvent>
#include <QSize>
#include <QRegion>

QHash<QByteArray, PlastiQMethod> PlastiQQTreeView::plastiqConstructors = {
    { "QTreeView()", { "QTreeView", "", "QTreeView*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTreeView(QWidget*)", { "QTreeView", "QWidget*", "QTreeView*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTreeView::plastiqMethods = {
    { "allColumnsShowFocus()", { "allColumnsShowFocus", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoExpandDelay()", { "autoExpandDelay", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnAt(int)", { "columnAt", "int", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnViewportPosition(int)", { "columnViewportPosition", "int", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnWidth(int)", { "columnWidth", "int", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expandsOnDoubleClick()", { "expandsOnDoubleClick", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "header()", { "header", "", "QHeaderView*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indentation()", { "indentation", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexAbove(QModelIndex&)", { "indexAbove", "QModelIndex&", "QModelIndex", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexBelow(QModelIndex&)", { "indexBelow", "QModelIndex&", "QModelIndex", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAnimated()", { "isAnimated", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isColumnHidden(int)", { "isColumnHidden", "int", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isExpanded(QModelIndex&)", { "isExpanded", "QModelIndex&", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFirstColumnSpanned(int,QModelIndex&)", { "isFirstColumnSpanned", "int,QModelIndex&", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isHeaderHidden()", { "isHeaderHidden", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRowHidden(int,QModelIndex&)", { "isRowHidden", "int,QModelIndex&", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSortingEnabled()", { "isSortingEnabled", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemsExpandable()", { "itemsExpandable", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetIndentation()", { "resetIndentation", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rootIsDecorated()", { "rootIsDecorated", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAllColumnsShowFocus(bool)", { "setAllColumnsShowFocus", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAnimated(bool)", { "setAnimated", "bool", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoExpandDelay(int)", { "setAutoExpandDelay", "int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnHidden(int,bool)", { "setColumnHidden", "int,bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnWidth(int,int)", { "setColumnWidth", "int,int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExpanded(QModelIndex&,bool)", { "setExpanded", "QModelIndex&,bool", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExpandsOnDoubleClick(bool)", { "setExpandsOnDoubleClick", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFirstColumnSpanned(int,QModelIndex&,bool)", { "setFirstColumnSpanned", "int,QModelIndex&,bool", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeader(QHeaderView*)", { "setHeader", "QHeaderView*", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeaderHidden(bool)", { "setHeaderHidden", "bool", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIndentation(int)", { "setIndentation", "int", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemsExpandable(bool)", { "setItemsExpandable", "bool", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRootIsDecorated(bool)", { "setRootIsDecorated", "bool", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowHidden(int,QModelIndex&,bool)", { "setRowHidden", "int,QModelIndex&,bool", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortingEnabled(bool)", { "setSortingEnabled", "bool", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTreePosition(int)", { "setTreePosition", "int", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUniformRowHeights(bool)", { "setUniformRowHeights", "bool", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWordWrap(bool)", { "setWordWrap", "bool", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortByColumn(int,enum)", { "sortByColumn", "int,Qt::SortOrder", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "treePosition()", { "treePosition", "", "int", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "uniformRowHeights()", { "uniformRowHeights", "", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wordWrap()", { "wordWrap", "", "bool", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawBranches(QPainter*,QRect&,QModelIndex&)", { "drawBranches", "QPainter*,QRect&,QModelIndex&", "void", 42, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawRow(QPainter*,QStyleOptionViewItem&,QModelIndex&)", { "drawRow", "QPainter*,QStyleOptionViewItem&,QModelIndex&", "void", 43, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawTree(QPainter*,QRegion&)", { "drawTree", "QPainter*,QRegion&", "void", 44, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "indexRowSizeHint(QModelIndex&)", { "indexRowSizeHint", "QModelIndex&", "int", 45, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "rowHeight(QModelIndex&)", { "rowHeight", "QModelIndex&", "int", 46, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "currentChanged(QModelIndex&,QModelIndex&)", { "currentChanged", "QModelIndex&,QModelIndex&", "void", 47, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 48, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "horizontalOffset()", { "horizontalOffset", "", "int", 49, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "isIndexHidden(QModelIndex&)", { "isIndexHidden", "QModelIndex&", "bool", 50, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 51, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 52, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 53, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 54, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 55, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveCursor(CursorAction,enum)", { "moveCursor", "CursorAction,Qt::KeyboardModifiers", "QModelIndex", 56, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 57, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "rowsAboutToBeRemoved(QModelIndex&,int,int)", { "rowsAboutToBeRemoved", "QModelIndex&,int,int", "void", 58, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "rowsInserted(QModelIndex&,int,int)", { "rowsInserted", "QModelIndex&,int,int", "void", 59, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "scrollContentsBy(int,int)", { "scrollContentsBy", "int,int", "void", 60, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "selectedIndexes()", { "selectedIndexes", "", "QModelIndexList", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "selectionChanged(QItemSelection&,QItemSelection&)", { "selectionChanged", "QItemSelection&,QItemSelection&", "void", 62, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setSelection(QRect&,QItemSelectionModel::SelectionFlags)", { "setSelection", "QRect&,QItemSelectionModel::SelectionFlags", "void", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHintForColumn(int)", { "sizeHintForColumn", "int", "int", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateGeometries()", { "updateGeometries", "", "void", 66, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "verticalOffset()", { "verticalOffset", "", "int", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportEvent(QEvent*)", { "viewportEvent", "QEvent*", "bool", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportSizeHint()", { "viewportSizeHint", "", "QSize", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "visualRegionForSelection(QItemSelection&)", { "visualRegionForSelection", "QItemSelection&", "QRegion", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "collapse(QModelIndex&)", { "collapse", "QModelIndex&", "void", 71, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "collapseAll()", { "collapseAll", "", "void", 72, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "expand(QModelIndex&)", { "expand", "QModelIndex&", "void", 73, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "expandAll()", { "expandAll", "", "void", 74, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "expandToDepth(int)", { "expandToDepth", "int", "void", 75, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "hideColumn(int)", { "hideColumn", "int", "void", 76, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resizeColumnToContents(int)", { "resizeColumnToContents", "int", "void", 77, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showColumn(int)", { "showColumn", "int", "void", 78, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTreeView::plastiqSignals = {
    { "collapsed(QModelIndex&)", { "collapsed", "QModelIndex&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "expanded(QModelIndex&)", { "expanded", "QModelIndex&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTreeView::plastiqProperties = {
    { "allColumnsShowFocus", { "allColumnsShowFocus", "bool", "setAllColumnsShowFocus", "allColumnsShowFocus" } },
    { "animated", { "animated", "bool", "setAnimated", "isAnimated" } },
    { "autoExpandDelay", { "autoExpandDelay", "int", "setAutoExpandDelay", "autoExpandDelay" } },
    { "expandsOnDoubleClick", { "expandsOnDoubleClick", "bool", "setExpandsOnDoubleClick", "expandsOnDoubleClick" } },
    { "headerHidden", { "headerHidden", "bool", "setHeaderHidden", "isHeaderHidden" } },
    { "indentation", { "indentation", "int", "setIndentation", "indentation" } },
    { "itemsExpandable", { "itemsExpandable", "bool", "setItemsExpandable", "itemsExpandable" } },
    { "rootIsDecorated", { "rootIsDecorated", "bool", "setRootIsDecorated", "rootIsDecorated" } },
    { "sortingEnabled", { "sortingEnabled", "bool", "setSortingEnabled", "isSortingEnabled" } },
    { "uniformRowHeights", { "uniformRowHeights", "bool", "setUniformRowHeights", "uniformRowHeights" } },
    { "wordWrap", { "wordWrap", "bool", "setWordWrap", "wordWrap" } },

};

QHash<QByteArray, long> PlastiQQTreeView::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTreeView::plastiqInherits = { &PlastiQQAbstractItemView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTreeView::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQTreeView::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemView::plastiq_static_metaObject, &plastiqInherits, "QTreeView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTreeView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTreeViewWrapper : public QTreeView {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTreeViewWrapper(QWidget *parent = Q_NULLPTR)
         : QTreeView(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QTreeView::drawBranches(painter,rect,index);
    }

    void PlastiQParentCall_drawBranches(QPainter *painter, const QRect &rect, const QModelIndex &index) const {
        return QTreeView::drawBranches(painter,rect,index);
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
        else return QTreeView::drawRow(painter,option,index);
    }

    void PlastiQParentCall_drawRow(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        return QTreeView::drawRow(painter,option,index);
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
        else return QTreeView::currentChanged(current,previous);
    }

    void PlastiQParentCall_currentChanged(const QModelIndex &current, const QModelIndex &previous) {
        return QTreeView::currentChanged(current,previous);
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
        else return QTreeView::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QTreeView::dragMoveEvent(event);
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
        else return QTreeView::horizontalOffset();
    }

    int PlastiQParentCall_horizontalOffset() const {
        return QTreeView::horizontalOffset();
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
        else return QTreeView::isIndexHidden(index);
    }

    bool PlastiQParentCall_isIndexHidden(const QModelIndex &index) const {
        return QTreeView::isIndexHidden(index);
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
        else return QTreeView::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QTreeView::keyPressEvent(event);
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
        else return QTreeView::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QTreeView::mouseDoubleClickEvent(event);
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
        else return QTreeView::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QTreeView::mouseMoveEvent(event);
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
        else return QTreeView::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QTreeView::mousePressEvent(event);
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
        else return QTreeView::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QTreeView::mouseReleaseEvent(event);
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
        else return QTreeView::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QTreeView::paintEvent(event);
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
        else return QTreeView::rowsAboutToBeRemoved(parent,start,end);
    }

    void PlastiQParentCall_rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end) {
        return QTreeView::rowsAboutToBeRemoved(parent,start,end);
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
        else return QTreeView::rowsInserted(parent,start,end);
    }

    void PlastiQParentCall_rowsInserted(const QModelIndex &parent, int start, int end) {
        return QTreeView::rowsInserted(parent,start,end);
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
        else return QTreeView::scrollContentsBy(dx,dy);
    }

    void PlastiQParentCall_scrollContentsBy(int dx, int dy) {
        return QTreeView::scrollContentsBy(dx,dy);
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
        else return QTreeView::selectionChanged(selected,deselected);
    }

    void PlastiQParentCall_selectionChanged(const QItemSelection &selected, const QItemSelection &deselected) {
        return QTreeView::selectionChanged(selected,deselected);
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
        else return QTreeView::setSelection(rect,command);
    }

    void PlastiQParentCall_setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command) {
        return QTreeView::setSelection(rect,command);
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
        else return QTreeView::sizeHintForColumn(column);
    }

    int PlastiQParentCall_sizeHintForColumn(int column) const {
        return QTreeView::sizeHintForColumn(column);
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
        else return QTreeView::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTreeView::timerEvent(event);
    }

    void updateGeometries() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void updateGeometries()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTreeView::updateGeometries();
    }

    void PlastiQParentCall_updateGeometries() {
        return QTreeView::updateGeometries();
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
        else return QTreeView::verticalOffset();
    }

    int PlastiQParentCall_verticalOffset() const {
        return QTreeView::verticalOffset();
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
        else return QTreeView::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QTreeView::viewportEvent(event);
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
        else return QTreeView::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QTreeView::viewportSizeHint();
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
        else return QTreeView::visualRegionForSelection(selection);
    }

    QRegion PlastiQParentCall_visualRegionForSelection(const QItemSelection &selection) const {
        return QTreeView::visualRegionForSelection(selection);
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
        else return QTreeView::keyboardSearch(search);
    }

    void PlastiQParentCall_keyboardSearch(const QString &search) {
        return QTreeView::keyboardSearch(search);
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
        else return QTreeView::setModel(model);
    }

    void PlastiQParentCall_setModel(QAbstractItemModel *model) {
        return QTreeView::setModel(model);
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
        else return QTreeView::setSelectionModel(selectionModel);
    }

    void PlastiQParentCall_setSelectionModel(QItemSelectionModel *selectionModel) {
        return QTreeView::setSelectionModel(selectionModel);
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
        else return QTreeView::sizeHintForRow(row);
    }

    int PlastiQParentCall_sizeHintForRow(int row) const {
        return QTreeView::sizeHintForRow(row);
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
        else return QTreeView::edit(index,trigger,event);
    }

    bool PlastiQParentCall_edit(const QModelIndex &index, EditTrigger trigger, QEvent *event) {
        return QTreeView::edit(index,trigger,event);
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
        else return QTreeView::startDrag(supportedActions);
    }

    void PlastiQParentCall_startDrag(Qt::DropActions supportedActions) {
        return QTreeView::startDrag(supportedActions);
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
        else return QTreeView::viewOptions();
    }

    QStyleOptionViewItem PlastiQParentCall_viewOptions() const {
        return QTreeView::viewOptions();
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
        else return QTreeView::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QTreeView::dragEnterEvent(event);
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
        else return QTreeView::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QTreeView::dragLeaveEvent(event);
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
        else return QTreeView::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QTreeView::dropEvent(event);
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
        else return QTreeView::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QTreeView::event(event);
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
        else return QTreeView::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QTreeView::focusInEvent(event);
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
        else return QTreeView::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QTreeView::focusNextPrevChild(next);
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
        else return QTreeView::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QTreeView::focusOutEvent(event);
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
        else return QTreeView::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QTreeView::inputMethodEvent(event);
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
        else return QTreeView::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QTreeView::resizeEvent(event);
    }

};

void PlastiQQTreeView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTreeViewWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTreeViewWrapper(); break;
        case 1: o = new PlastiQQTreeViewWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTreeView *p = new PlastiQQTreeView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTreeView *p = new PlastiQQTreeView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 79) {
            id -= 79;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTreeView *o = sc ? Q_NULLPTR : reinterpret_cast<QTreeView*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->allColumnsShowFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r = o->autoExpandDelay();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->columnAt(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->columnViewportPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->columnWidth(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { bool _r = o->expandsOnDoubleClick();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { QHeaderView* _r = o->header();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QHeaderView"; } break;
        case 7: { int _r = o->indentation();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->indexAbove((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->indexBelow((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { bool _r = o->isAnimated();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isColumnHidden(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isExpanded((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->isFirstColumnSpanned(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isHeaderHidden();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isRowHidden(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isSortingEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->itemsExpandable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: o->resetIndentation();
                stack[0].type = PlastiQ::Void; break;
        case 19: { bool _r = o->rootIsDecorated();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: o->setAllColumnsShowFocus(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setAnimated(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setAutoExpandDelay(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setColumnHidden(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setColumnWidth(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setExpanded((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setExpandsOnDoubleClick(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setFirstColumnSpanned(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)),
                    stack[3].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setHeader(reinterpret_cast<QHeaderView*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setHeaderHidden(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setIndentation(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setItemsExpandable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setRootIsDecorated(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setRowHidden(stack[1].s_int,
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)),
                    stack[3].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setSortingEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setTreePosition(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setUniformRowHeights(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setWordWrap(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->sortByColumn(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 39: { int _r = o->treePosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 40: { bool _r = o->uniformRowHeights();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { bool _r = o->wordWrap();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_drawBranches(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 43: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_drawRow(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QStyleOptionViewItem(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[3].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 44: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 45: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 46: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 47: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_currentChanged((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 48: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 49: { int _r;
                if (isWrapper) _r = ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_horizontalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 50: { bool _r;
                if (isWrapper) _r = ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_isIndexHidden((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 51: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 52: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 53: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 54: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 55: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 56: /* o->moveCursor(UNSUPPORTED_TYPE_CursorAction,
                    Qt::KeyboardModifiers(stack[2].s_int64)) | ret: `QModelIndex` */ break;
        case 57: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 58: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_rowsAboutToBeRemoved((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 59: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_rowsInserted((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 60: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_scrollContentsBy(stack[1].s_int,
                    stack[2].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 61: /* UNSUPPORTED_RETURN_VALUE o->selectedIndexes() | ret: `QModelIndexList` */ break;
        case 62: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_selectionChanged((*reinterpret_cast< QItemSelection(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QItemSelection(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 63: /* o->setSelection((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 64: { int _r;
                if (isWrapper) _r = ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_sizeHintForColumn(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 65: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 66: if (isWrapper) ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_updateGeometries();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 67: { int _r;
                if (isWrapper) _r = ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_verticalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 68: { bool _r;
                if (isWrapper) _r = ((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_viewportEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 69: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_viewportSizeHint());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 70: { /* COPY OBJECT */
            QRegion *_r;
                if (isWrapper) _r = new QRegion(((PlastiQQTreeViewWrapper*)o)->PlastiQParentCall_visualRegionForSelection((*reinterpret_cast< QItemSelection(*) >(stack[1].s_voidp))));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 71: o->collapse((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 72: o->collapseAll();
                stack[0].type = PlastiQ::Void; break;
        case 73: o->expand((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 74: o->expandAll();
                stack[0].type = PlastiQ::Void; break;
        case 75: o->expandToDepth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 76: o->hideColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 77: o->resizeColumnToContents(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 78: o->showColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTreeView *o = reinterpret_cast<QTreeView*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTreeView::collapsed,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "collapsed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTreeView::expanded,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "expanded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTreeView *o = reinterpret_cast<QTreeView*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTreeView *o = reinterpret_cast<QTreeView*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTreeView *o = reinterpret_cast<QTreeView*>(object->plastiq_data());

        if(className == "QAbstractItemView") {
            stack[0].s_voidp = static_cast<QAbstractItemView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTreeView::~PlastiQQTreeView() {
    QTreeView* o = reinterpret_cast<QTreeView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
