#include "plastiqmethod.h"
#include "plastiqqabstractitemview.h"

#include "widgets/PlastiQQAbstractScrollArea/plastiqqabstractscrollarea.h"
#include <QAbstractItemView> 
#include <QModelIndex>
#include <QSize>
#include <QWidget>
#include <QAbstractItemDelegate>
#include <QString>
#include <QAbstractItemModel>
#include <QItemSelectionModel>
#include <QRect>
#include <QPoint>
#include <QEvent>
#include <QModelIndexList>
#include <QStyleOptionViewItem>
#include <QRegion>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QFocusEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QResizeEvent>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemView::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemView::plastiqMethods = {
    { "alternatingRowColors()", { "alternatingRowColors", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoScrollMargin()", { "autoScrollMargin", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closePersistentEditor(QModelIndex&)", { "closePersistentEditor", "QModelIndex&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "QModelIndex", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultDropAction()", { "defaultDropAction", "", "Qt::DropAction", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dragDropMode()", { "dragDropMode", "", "DragDropMode", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dragDropOverwriteMode()", { "dragDropOverwriteMode", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dragEnabled()", { "dragEnabled", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "editTriggers()", { "editTriggers", "", "EditTriggers", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasAutoScroll()", { "hasAutoScroll", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalScrollMode()", { "horizontalScrollMode", "", "ScrollMode", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconSize()", { "iconSize", "", "QSize", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexAt(QPoint&)", { "indexAt", "QPoint&", "QModelIndex", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexWidget(QModelIndex&)", { "indexWidget", "QModelIndex&", "QWidget*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemDelegate()", { "itemDelegate", "", "QAbstractItemDelegate*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemDelegate(QModelIndex&)", { "itemDelegate", "QModelIndex&", "QAbstractItemDelegate*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemDelegateForColumn(int)", { "itemDelegateForColumn", "int", "QAbstractItemDelegate*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemDelegateForRow(int)", { "itemDelegateForRow", "int", "QAbstractItemDelegate*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyboardSearch(QString)", { "keyboardSearch", "QString&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openPersistentEditor(QModelIndex&)", { "openPersistentEditor", "QModelIndex&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetHorizontalScrollMode()", { "resetHorizontalScrollMode", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetVerticalScrollMode()", { "resetVerticalScrollMode", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rootIndex()", { "rootIndex", "", "QModelIndex", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scrollTo(QModelIndex&)", { "scrollTo", "QModelIndex&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scrollTo(QModelIndex&,enum)", { "scrollTo", "QModelIndex&,ScrollHint", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionBehavior()", { "selectionBehavior", "", "QAbstractItemView::SelectionBehavior", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionMode()", { "selectionMode", "", "QAbstractItemView::SelectionMode", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionModel()", { "selectionModel", "", "QItemSelectionModel*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlternatingRowColors(bool)", { "setAlternatingRowColors", "bool", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoScroll(bool)", { "setAutoScroll", "bool", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoScrollMargin(int)", { "setAutoScrollMargin", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultDropAction(enum)", { "setDefaultDropAction", "Qt::DropAction", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDragDropMode(enum)", { "setDragDropMode", "DragDropMode", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDragDropOverwriteMode(bool)", { "setDragDropOverwriteMode", "bool", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDragEnabled(bool)", { "setDragEnabled", "bool", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDropIndicatorShown(bool)", { "setDropIndicatorShown", "bool", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEditTriggers(enum)", { "setEditTriggers", "EditTriggers", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalScrollMode(enum)", { "setHorizontalScrollMode", "ScrollMode", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconSize(QSize&)", { "setIconSize", "QSize&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIndexWidget(QModelIndex&,QWidget*)", { "setIndexWidget", "QModelIndex&,QWidget*", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemDelegate(QAbstractItemDelegate*)", { "setItemDelegate", "QAbstractItemDelegate*", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemDelegateForColumn(int,QAbstractItemDelegate*)", { "setItemDelegateForColumn", "int,QAbstractItemDelegate*", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemDelegateForRow(int,QAbstractItemDelegate*)", { "setItemDelegateForRow", "int,QAbstractItemDelegate*", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionBehavior(enum)", { "setSelectionBehavior", "QAbstractItemView::SelectionBehavior", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionMode(enum)", { "setSelectionMode", "QAbstractItemView::SelectionMode", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionModel(QItemSelectionModel*)", { "setSelectionModel", "QItemSelectionModel*", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabKeyNavigation(bool)", { "setTabKeyNavigation", "bool", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextElideMode(enum)", { "setTextElideMode", "Qt::TextElideMode", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalScrollMode(enum)", { "setVerticalScrollMode", "ScrollMode", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showDropIndicator()", { "showDropIndicator", "", "bool", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHintForColumn(int)", { "sizeHintForColumn", "int", "int", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHintForIndex(QModelIndex&)", { "sizeHintForIndex", "QModelIndex&", "QSize", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHintForRow(int)", { "sizeHintForRow", "int", "int", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabKeyNavigation()", { "tabKeyNavigation", "", "bool", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textElideMode()", { "textElideMode", "", "Qt::TextElideMode", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalScrollMode()", { "verticalScrollMode", "", "ScrollMode", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualRect(QModelIndex&)", { "visualRect", "QModelIndex&", "QRect", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dirtyRegionOffset()", { "dirtyRegionOffset", "", "QPoint", 59, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "dropIndicatorPosition()", { "dropIndicatorPosition", "", "DropIndicatorPosition", 60, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "edit(QModelIndex&,enum,QEvent*)", { "edit", "QModelIndex&,EditTrigger,QEvent*", "bool", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "executeDelayedItemsLayout()", { "executeDelayedItemsLayout", "", "void", 62, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "horizontalOffset()", { "horizontalOffset", "", "int", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "isIndexHidden(QModelIndex&)", { "isIndexHidden", "QModelIndex&", "bool", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveCursor(CursorAction,enum)", { "moveCursor", "CursorAction,Qt::KeyboardModifiers", "QModelIndex", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "scheduleDelayedItemsLayout()", { "scheduleDelayedItemsLayout", "", "void", 66, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "scrollDirtyRegion(int,int)", { "scrollDirtyRegion", "int,int", "void", 67, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "selectedIndexes()", { "selectedIndexes", "", "QModelIndexList", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "selectionCommand(QModelIndex&)", { "selectionCommand", "QModelIndex&", "QItemSelectionModel::SelectionFlags", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "selectionCommand(QModelIndex&,const QEvent*)", { "selectionCommand", "QModelIndex&,QEvent*", "QItemSelectionModel::SelectionFlags", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setDirtyRegion(QRegion&)", { "setDirtyRegion", "QRegion&", "void", 71, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setSelection(QRect&,QItemSelectionModel::SelectionFlags)", { "setSelection", "QRect&,QItemSelectionModel::SelectionFlags", "void", 72, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setState(State)", { "setState", "State", "void", 73, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "startDrag(enum)", { "startDrag", "Qt::DropActions", "void", 74, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 75, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "verticalOffset()", { "verticalOffset", "", "int", 76, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewOptions()", { "viewOptions", "", "QStyleOptionViewItem", 77, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "visualRegionForSelection(QItemSelection&)", { "visualRegionForSelection", "QItemSelection&", "QRegion", 78, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QDragEnterEvent*)", { "dragEnterEvent", "QDragEnterEvent*", "void", 79, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QDragLeaveEvent*)", { "dragLeaveEvent", "QDragLeaveEvent*", "void", 80, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 81, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 82, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 83, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 84, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 85, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 86, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 87, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 88, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 89, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 90, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 91, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 92, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 93, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 94, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportEvent(QEvent*)", { "viewportEvent", "QEvent*", "bool", 95, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportSizeHint()", { "viewportSizeHint", "", "QSize", 96, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clearSelection()", { "clearSelection", "", "void", 97, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "edit(QModelIndex&)", { "edit", "QModelIndex&", "void", 98, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "reset()", { "reset", "", "void", 99, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToBottom()", { "scrollToBottom", "", "void", 100, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollToTop()", { "scrollToTop", "", "void", 101, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "selectAll()", { "selectAll", "", "void", 102, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentIndex(QModelIndex&)", { "setCurrentIndex", "QModelIndex&", "void", 103, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setRootIndex(QModelIndex&)", { "setRootIndex", "QModelIndex&", "void", 104, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "update(QModelIndex&)", { "update", "QModelIndex&", "void", 105, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractItemView::plastiqSignals = {
    { "activated(QModelIndex&)", { "activated", "QModelIndex&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(QModelIndex&)", { "clicked", "QModelIndex&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked(QModelIndex&)", { "doubleClicked", "QModelIndex&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "entered(QModelIndex&)", { "entered", "QModelIndex&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "iconSizeChanged(QSize&)", { "iconSizeChanged", "QSize&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed(QModelIndex&)", { "pressed", "QModelIndex&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "viewportEntered()", { "viewportEntered", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractItemView::plastiqProperties = {
    { "alternatingRowColors", { "alternatingRowColors", "bool", "setAlternatingRowColors", "alternatingRowColors" } },
    { "autoScroll", { "autoScroll", "bool", "setAutoScroll", "hasAutoScroll" } },
    { "autoScrollMargin", { "autoScrollMargin", "int", "setAutoScrollMargin", "autoScrollMargin" } },
    { "defaultDropAction", { "defaultDropAction", "long", "setDefaultDropAction", "defaultDropAction" } },
    { "dragDropMode", { "dragDropMode", "long", "setDragDropMode", "dragDropMode" } },
    { "dragDropOverwriteMode", { "dragDropOverwriteMode", "bool", "setDragDropOverwriteMode", "dragDropOverwriteMode" } },
    { "dragEnabled", { "dragEnabled", "bool", "setDragEnabled", "dragEnabled" } },
    { "editTriggers", { "editTriggers", "long", "setEditTriggers", "editTriggers" } },
    { "horizontalScrollMode", { "horizontalScrollMode", "long", "setHorizontalScrollMode", "horizontalScrollMode" } },
    { "iconSize", { "iconSize", "QSize", "setIconSize", "iconSize" } },
    { "selectionBehavior", { "selectionBehavior", "long", "setSelectionBehavior", "selectionBehavior" } },
    { "selectionMode", { "selectionMode", "long", "setSelectionMode", "selectionMode" } },
    { "showDropIndicator", { "showDropIndicator", "bool", "setDropIndicatorShown", "showDropIndicator" } },
    { "tabKeyNavigation", { "tabKeyNavigation", "bool", "setTabKeyNavigation", "tabKeyNavigation" } },
    { "textElideMode", { "textElideMode", "long", "setTextElideMode", "textElideMode" } },
    { "verticalScrollMode", { "verticalScrollMode", "long", "setVerticalScrollMode", "verticalScrollMode" } },

};

QHash<QByteArray, long> PlastiQQAbstractItemView::plastiqConstants = {

    /* QAbstractItemView::DragDropMode */
   { "NoDragDrop", QAbstractItemView::NoDragDrop },
   { "DragOnly", QAbstractItemView::DragOnly },
   { "DropOnly", QAbstractItemView::DropOnly },
   { "DragDrop", QAbstractItemView::DragDrop },
   { "InternalMove", QAbstractItemView::InternalMove },

    /* QAbstractItemView::EditTrigger */
   { "NoEditTriggers", QAbstractItemView::NoEditTriggers },
   { "CurrentChanged", QAbstractItemView::CurrentChanged },
   { "DoubleClicked", QAbstractItemView::DoubleClicked },
   { "SelectedClicked", QAbstractItemView::SelectedClicked },
   { "EditKeyPressed", QAbstractItemView::EditKeyPressed },
   { "AnyKeyPressed", QAbstractItemView::AnyKeyPressed },
   { "AllEditTriggers", QAbstractItemView::AllEditTriggers },

    /* QAbstractItemView::ScrollHint */
   { "EnsureVisible", QAbstractItemView::EnsureVisible },
   { "PositionAtTop", QAbstractItemView::PositionAtTop },
   { "PositionAtBottom", QAbstractItemView::PositionAtBottom },
   { "PositionAtCenter", QAbstractItemView::PositionAtCenter },

    /* QAbstractItemView::ScrollMode */
   { "ScrollPerItem", QAbstractItemView::ScrollPerItem },
   { "ScrollPerPixel", QAbstractItemView::ScrollPerPixel },

    /* QAbstractItemView::SelectionBehavior */
   { "SelectItems", QAbstractItemView::SelectItems },
   { "SelectRows", QAbstractItemView::SelectRows },
   { "SelectColumns", QAbstractItemView::SelectColumns },

    /* QAbstractItemView::SelectionMode */
   { "NoSelection", QAbstractItemView::NoSelection },
   { "SingleSelection", QAbstractItemView::SingleSelection },
   { "MultiSelection", QAbstractItemView::MultiSelection },
   { "ExtendedSelection", QAbstractItemView::ExtendedSelection },
   { "ContiguousSelection", QAbstractItemView::ContiguousSelection },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractItemView::plastiqInherits = { &PlastiQQAbstractScrollArea::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractItemView::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQAbstractItemView::plastiq_static_metaObject = {
    { &PlastiQQAbstractScrollArea::plastiq_static_metaObject, &plastiqInherits, "QAbstractItemView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractItemView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractItemViewWrapper : public QAbstractItemView {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QAbstractItemView::keyboardSearch(search);
    }

    void PlastiQParentCall_keyboardSearch(const QString &search) {
        return QAbstractItemView::keyboardSearch(search);
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
        else return QAbstractItemView::setModel(model);
    }

    void PlastiQParentCall_setModel(QAbstractItemModel *model) {
        return QAbstractItemView::setModel(model);
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
        else return QAbstractItemView::setSelectionModel(selectionModel);
    }

    void PlastiQParentCall_setSelectionModel(QItemSelectionModel *selectionModel) {
        return QAbstractItemView::setSelectionModel(selectionModel);
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
        else return QAbstractItemView::sizeHintForColumn(column);
    }

    int PlastiQParentCall_sizeHintForColumn(int column) const {
        return QAbstractItemView::sizeHintForColumn(column);
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
        else return QAbstractItemView::sizeHintForRow(row);
    }

    int PlastiQParentCall_sizeHintForRow(int row) const {
        return QAbstractItemView::sizeHintForRow(row);
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
        else return QAbstractItemView::edit(index,trigger,event);
    }

    bool PlastiQParentCall_edit(const QModelIndex &index, EditTrigger trigger, QEvent *event) {
        return QAbstractItemView::edit(index,trigger,event);
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
        else return QAbstractItemView::startDrag(supportedActions);
    }

    void PlastiQParentCall_startDrag(Qt::DropActions supportedActions) {
        return QAbstractItemView::startDrag(supportedActions);
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
        else return QAbstractItemView::viewOptions();
    }

    QStyleOptionViewItem PlastiQParentCall_viewOptions() const {
        return QAbstractItemView::viewOptions();
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
        else return QAbstractItemView::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QAbstractItemView::dragEnterEvent(event);
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
        else return QAbstractItemView::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QAbstractItemView::dragLeaveEvent(event);
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
        else return QAbstractItemView::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QAbstractItemView::dragMoveEvent(event);
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
        else return QAbstractItemView::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QAbstractItemView::dropEvent(event);
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
        else return QAbstractItemView::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QAbstractItemView::event(event);
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
        else return QAbstractItemView::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QAbstractItemView::focusInEvent(event);
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
        else return QAbstractItemView::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QAbstractItemView::focusNextPrevChild(next);
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
        else return QAbstractItemView::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QAbstractItemView::focusOutEvent(event);
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
        else return QAbstractItemView::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QAbstractItemView::inputMethodEvent(event);
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
        else return QAbstractItemView::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QAbstractItemView::keyPressEvent(event);
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
        else return QAbstractItemView::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QAbstractItemView::mouseDoubleClickEvent(event);
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
        else return QAbstractItemView::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QAbstractItemView::mouseMoveEvent(event);
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
        else return QAbstractItemView::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QAbstractItemView::mousePressEvent(event);
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
        else return QAbstractItemView::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QAbstractItemView::mouseReleaseEvent(event);
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
        else return QAbstractItemView::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QAbstractItemView::resizeEvent(event);
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
        else return QAbstractItemView::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QAbstractItemView::timerEvent(event);
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
        else return QAbstractItemView::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QAbstractItemView::viewportEvent(event);
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
        else return QAbstractItemView::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QAbstractItemView::viewportSizeHint();
    }

};

void PlastiQQAbstractItemView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractItemViewWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractItemView *p = new PlastiQQAbstractItemView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractItemView *p = new PlastiQQAbstractItemView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 106) {
            id -= 106;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractItemView *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractItemView*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->alternatingRowColors();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r = o->autoScrollMargin();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: o->closePersistentEditor((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->currentIndex());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->defaultDropAction(); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { qint64 _r = o->dragDropMode(); // HACK for DragDropMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { bool _r = o->dragDropOverwriteMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->dragEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { qint64 _r = o->editTriggers(); // HACK for EditTriggers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { bool _r = o->hasAutoScroll();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { qint64 _r = o->horizontalScrollMode(); // HACK for ScrollMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { /* COPY OBJECT */
            QSize *_r = new QSize(o->iconSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->indexAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { QWidget* _r = o->indexWidget((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 14: { QAbstractItemDelegate* _r = o->itemDelegate();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemDelegate"; } break;
        case 15: { QAbstractItemDelegate* _r = o->itemDelegate((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemDelegate"; } break;
        case 16: { QAbstractItemDelegate* _r = o->itemDelegateForColumn(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemDelegate"; } break;
        case 17: { QAbstractItemDelegate* _r = o->itemDelegateForRow(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemDelegate"; } break;
        case 18: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_keyboardSearch(stack[1].s_string);
                else o->keyboardSearch(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 19: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 20: o->openPersistentEditor((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->resetHorizontalScrollMode();
                stack[0].type = PlastiQ::Void; break;
        case 22: o->resetVerticalScrollMode();
                stack[0].type = PlastiQ::Void; break;
        case 23: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->rootIndex());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: o->scrollTo((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->scrollTo((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    QAbstractItemView::ScrollHint(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: { qint64 _r = o->selectionBehavior(); // HACK for QAbstractItemView::SelectionBehavior 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 27: { qint64 _r = o->selectionMode(); // HACK for QAbstractItemView::SelectionMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 28: { QItemSelectionModel* _r = o->selectionModel();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QItemSelectionModel"; } break;
        case 29: o->setAlternatingRowColors(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setAutoScroll(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setAutoScrollMargin(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setDefaultDropAction(Qt::DropAction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setDragDropMode(QAbstractItemView::DragDropMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setDragDropOverwriteMode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setDragEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setDropIndicatorShown(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setEditTriggers(QAbstractItemView::EditTriggers(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setHorizontalScrollMode(QAbstractItemView::ScrollMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setIconSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setIndexWidget((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setItemDelegate(reinterpret_cast<QAbstractItemDelegate*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setItemDelegateForColumn(stack[1].s_int,
                    reinterpret_cast<QAbstractItemDelegate*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setItemDelegateForRow(stack[1].s_int,
                    reinterpret_cast<QAbstractItemDelegate*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 44: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                else o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setSelectionBehavior(QAbstractItemView::SelectionBehavior(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setSelectionMode(QAbstractItemView::SelectionMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 47: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_setSelectionModel(reinterpret_cast<QItemSelectionModel*>(stack[1].s_voidp));
                else o->setSelectionModel(reinterpret_cast<QItemSelectionModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setTabKeyNavigation(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setTextElideMode(Qt::TextElideMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setVerticalScrollMode(QAbstractItemView::ScrollMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 51: { bool _r = o->showDropIndicator();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 52: { int _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_sizeHintForColumn(stack[1].s_int);
                else _r = o->sizeHintForColumn(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeHintForIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 54: { int _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_sizeHintForRow(stack[1].s_int);
                else _r = o->sizeHintForRow(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 55: { bool _r = o->tabKeyNavigation();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 56: { qint64 _r = o->textElideMode(); // HACK for Qt::TextElideMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 57: { qint64 _r = o->verticalScrollMode(); // HACK for ScrollMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 58: { /* COPY OBJECT */
            QRect *_r = new QRect(o->visualRect((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { /* COPY OBJECT */
            QPoint *_r; stack[0].type = PlastiQ::Error; } break;
        case 60: /* UNSUPPORTED_RETURN_VALUE o->dropIndicatorPosition() | ret: `DropIndicatorPosition` */ break;
        case 61: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_edit((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    QAbstractItemView::EditTrigger(stack[2].s_int64),
                    reinterpret_cast<QEvent*>(stack[3].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 62: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 63: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 64: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 65: /* o->moveCursor(UNSUPPORTED_TYPE_CursorAction,
                    Qt::KeyboardModifiers(stack[2].s_int64)) | ret: `QModelIndex` */ break;
        case 66: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 67: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 68: /* UNSUPPORTED_RETURN_VALUE o->selectedIndexes() | ret: `QModelIndexList` */ break;
        case 69: /* o->selectionCommand((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp))) | ret: `QItemSelectionModel::SelectionFlags` */ break;
        case 70: /* o->selectionCommand((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const QEvent*>(stack[2].s_voidp)) | ret: `QItemSelectionModel::SelectionFlags` */ break;
        case 71: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 72: /* o->setSelection((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 73: /* o->setState(UNSUPPORTED_TYPE_State) | ret: `void` */ break;
        case 74: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_startDrag(Qt::DropActions(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 75: /* UNSUPPORTED_RETURN_VALUE o->state() | ret: `State` */ break;
        case 76: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 77: { /* COPY OBJECT */
            QStyleOptionViewItem *_r;
                if (isWrapper) _r = new QStyleOptionViewItem(((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_viewOptions());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStyleOptionViewItem";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 78: { /* COPY OBJECT */
            QRegion *_r; stack[0].type = PlastiQ::Error; } break;
        case 79: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QDragEnterEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 80: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QDragLeaveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 81: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 82: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 83: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 84: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 85: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 86: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 87: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 88: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 89: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 90: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 91: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 92: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 93: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 94: if (isWrapper) ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 95: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_viewportEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 96: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQAbstractItemViewWrapper*)o)->PlastiQParentCall_viewportSizeHint());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 97: o->clearSelection();
                stack[0].type = PlastiQ::Void; break;
        case 98: o->edit((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 99: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 100: o->scrollToBottom();
                stack[0].type = PlastiQ::Void; break;
        case 101: o->scrollToTop();
                stack[0].type = PlastiQ::Void; break;
        case 102: o->selectAll();
                stack[0].type = PlastiQ::Void; break;
        case 103: o->setCurrentIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 104: o->setRootIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 105: o->update((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractItemView *o = reinterpret_cast<QAbstractItemView*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractItemView::activated,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "activated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractItemView::clicked,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractItemView::doubleClicked,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractItemView::entered,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "entered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAbstractItemView::iconSizeChanged,
            [=](const QSize& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSize(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSize";
                PlastiQ_activate(sender, "iconSizeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QAbstractItemView::pressed,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QAbstractItemView::viewportEntered,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "viewportEntered", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractItemView *o = reinterpret_cast<QAbstractItemView*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractItemView *o = reinterpret_cast<QAbstractItemView*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractItemView *o = reinterpret_cast<QAbstractItemView*>(object->plastiq_data());

        if(className == "QAbstractScrollArea") {
            stack[0].s_voidp = static_cast<QAbstractScrollArea*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractItemView::~PlastiQQAbstractItemView() {
    QAbstractItemView* o = reinterpret_cast<QAbstractItemView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
