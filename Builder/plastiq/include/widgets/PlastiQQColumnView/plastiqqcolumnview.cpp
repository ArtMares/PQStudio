#include "plastiqmethod.h"
#include "plastiqqcolumnview.h"

#include "widgets/PlastiQQAbstractItemView/plastiqqabstractitemview.h"
#include <QColumnView> 
#include <QWidget>
#include <QAbstractItemView>
#include <QModelIndex>
#include <QResizeEvent>
#include <QRect>
#include <QRegion>
#include <QItemSelection>

QHash<QByteArray, PlastiQMethod> PlastiQQColumnView::plastiqConstructors = {
    { "QColumnView()", { "QColumnView", "", "QColumnView*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColumnView(QWidget*)", { "QColumnView", "QWidget*", "QColumnView*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQColumnView::plastiqMethods = {
    { "previewWidget()", { "previewWidget", "", "QWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resizeGripsVisible()", { "resizeGripsVisible", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnWidths(QList<int>&)", { "setColumnWidths", "QList<int>&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPreviewWidget(QWidget*)", { "setPreviewWidget", "QWidget*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResizeGripsVisible(bool)", { "setResizeGripsVisible", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createColumn(QModelIndex&)", { "createColumn", "QModelIndex&", "QAbstractItemView*", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "initializeColumn(QAbstractItemView*)", { "initializeColumn", "QAbstractItemView*", "void", 6, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "currentChanged(QModelIndex&,QModelIndex&)", { "currentChanged", "QModelIndex&,QModelIndex&", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "horizontalOffset()", { "horizontalOffset", "", "int", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "isIndexHidden(QModelIndex&)", { "isIndexHidden", "QModelIndex&", "bool", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveCursor(CursorAction,enum)", { "moveCursor", "CursorAction,Qt::KeyboardModifiers", "QModelIndex", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "rowsInserted(QModelIndex&,int,int)", { "rowsInserted", "QModelIndex&,int,int", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "scrollContentsBy(int,int)", { "scrollContentsBy", "int,int", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setSelection(QRect&,QItemSelectionModel::SelectionFlags)", { "setSelection", "QRect&,QItemSelectionModel::SelectionFlags", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "verticalOffset()", { "verticalOffset", "", "int", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "visualRegionForSelection(QItemSelection&)", { "visualRegionForSelection", "QItemSelection&", "QRegion", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQColumnView::plastiqSignals = {
    { "updatePreviewWidget(QModelIndex&)", { "updatePreviewWidget", "QModelIndex&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQColumnView::plastiqProperties = {
    { "resizeGripsVisible", { "resizeGripsVisible", "bool", "setResizeGripsVisible", "resizeGripsVisible" } },

};

QHash<QByteArray, long> PlastiQQColumnView::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQColumnView::plastiqInherits = { &PlastiQQAbstractItemView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQColumnView::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQColumnView::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemView::plastiq_static_metaObject, &plastiqInherits, "QColumnView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQColumnView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQColumnViewWrapper : public QColumnView {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQColumnViewWrapper(QWidget *parent = Q_NULLPTR)
         : QColumnView(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QAbstractItemView* createColumn(const QModelIndex &index) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QAbstractItemView* createColumn(const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QModelIndex(index) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QAbstractItemView* _r = reinterpret_cast<QAbstractItemView*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QColumnView::createColumn(index);
    }

    QAbstractItemView* PlastiQParentCall_createColumn(const QModelIndex &index) {
        return QColumnView::createColumn(index);
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
        else return QColumnView::currentChanged(current,previous);
    }

    void PlastiQParentCall_currentChanged(const QModelIndex &current, const QModelIndex &previous) {
        return QColumnView::currentChanged(current,previous);
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
        else return QColumnView::horizontalOffset();
    }

    int PlastiQParentCall_horizontalOffset() const {
        return QColumnView::horizontalOffset();
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
        else return QColumnView::isIndexHidden(index);
    }

    bool PlastiQParentCall_isIndexHidden(const QModelIndex &index) const {
        return QColumnView::isIndexHidden(index);
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
        else return QColumnView::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QColumnView::resizeEvent(event);
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
        else return QColumnView::rowsInserted(parent,start,end);
    }

    void PlastiQParentCall_rowsInserted(const QModelIndex &parent, int start, int end) {
        return QColumnView::rowsInserted(parent,start,end);
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
        else return QColumnView::scrollContentsBy(dx,dy);
    }

    void PlastiQParentCall_scrollContentsBy(int dx, int dy) {
        return QColumnView::scrollContentsBy(dx,dy);
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
        else return QColumnView::setSelection(rect,command);
    }

    void PlastiQParentCall_setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command) {
        return QColumnView::setSelection(rect,command);
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
        else return QColumnView::verticalOffset();
    }

    int PlastiQParentCall_verticalOffset() const {
        return QColumnView::verticalOffset();
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
        else return QColumnView::visualRegionForSelection(selection);
    }

    QRegion PlastiQParentCall_visualRegionForSelection(const QItemSelection &selection) const {
        return QColumnView::visualRegionForSelection(selection);
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
        else return QColumnView::keyboardSearch(search);
    }

    void PlastiQParentCall_keyboardSearch(const QString &search) {
        return QColumnView::keyboardSearch(search);
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
        else return QColumnView::setModel(model);
    }

    void PlastiQParentCall_setModel(QAbstractItemModel *model) {
        return QColumnView::setModel(model);
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
        else return QColumnView::setSelectionModel(selectionModel);
    }

    void PlastiQParentCall_setSelectionModel(QItemSelectionModel *selectionModel) {
        return QColumnView::setSelectionModel(selectionModel);
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
        else return QColumnView::sizeHintForColumn(column);
    }

    int PlastiQParentCall_sizeHintForColumn(int column) const {
        return QColumnView::sizeHintForColumn(column);
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
        else return QColumnView::sizeHintForRow(row);
    }

    int PlastiQParentCall_sizeHintForRow(int row) const {
        return QColumnView::sizeHintForRow(row);
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
        else return QColumnView::edit(index,trigger,event);
    }

    bool PlastiQParentCall_edit(const QModelIndex &index, EditTrigger trigger, QEvent *event) {
        return QColumnView::edit(index,trigger,event);
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
        else return QColumnView::startDrag(supportedActions);
    }

    void PlastiQParentCall_startDrag(Qt::DropActions supportedActions) {
        return QColumnView::startDrag(supportedActions);
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
        else return QColumnView::viewOptions();
    }

    QStyleOptionViewItem PlastiQParentCall_viewOptions() const {
        return QColumnView::viewOptions();
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
        else return QColumnView::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QColumnView::dragEnterEvent(event);
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
        else return QColumnView::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QColumnView::dragLeaveEvent(event);
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
        else return QColumnView::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QColumnView::dragMoveEvent(event);
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
        else return QColumnView::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QColumnView::dropEvent(event);
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
        else return QColumnView::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QColumnView::event(event);
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
        else return QColumnView::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QColumnView::focusInEvent(event);
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
        else return QColumnView::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QColumnView::focusNextPrevChild(next);
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
        else return QColumnView::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QColumnView::focusOutEvent(event);
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
        else return QColumnView::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QColumnView::inputMethodEvent(event);
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
        else return QColumnView::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QColumnView::keyPressEvent(event);
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
        else return QColumnView::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QColumnView::mouseDoubleClickEvent(event);
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
        else return QColumnView::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QColumnView::mouseMoveEvent(event);
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
        else return QColumnView::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QColumnView::mousePressEvent(event);
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
        else return QColumnView::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QColumnView::mouseReleaseEvent(event);
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
        else return QColumnView::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QColumnView::timerEvent(event);
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
        else return QColumnView::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QColumnView::viewportEvent(event);
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
        else return QColumnView::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QColumnView::viewportSizeHint();
    }

};

void PlastiQQColumnView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQColumnViewWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQColumnViewWrapper(); break;
        case 1: o = new PlastiQQColumnViewWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQColumnView *p = new PlastiQQColumnView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQColumnView *p = new PlastiQQColumnView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QColumnView *o = sc ? Q_NULLPTR : reinterpret_cast<QColumnView*>(object->plastiq_data());

        switch(id) {
        case 0: { QWidget* _r = o->previewWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 1: { bool _r = o->resizeGripsVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->setColumnWidths((*reinterpret_cast< QList<int>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setPreviewWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setResizeGripsVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 5: { QAbstractItemView* _r;
                if (isWrapper) _r = ((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_createColumn((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemView"; } break;
        case 6: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 7: if (isWrapper) ((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_currentChanged((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 8: { int _r;
                if (isWrapper) _r = ((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_horizontalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { bool _r;
                if (isWrapper) _r = ((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_isIndexHidden((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: /* o->moveCursor(UNSUPPORTED_TYPE_CursorAction,
                    Qt::KeyboardModifiers(stack[2].s_int64)) | ret: `QModelIndex` */ break;
        case 11: if (isWrapper) ((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 12: if (isWrapper) ((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_rowsInserted((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 13: if (isWrapper) ((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_scrollContentsBy(stack[1].s_int,
                    stack[2].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 14: /* o->setSelection((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 15: { int _r;
                if (isWrapper) _r = ((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_verticalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { /* COPY OBJECT */
            QRegion *_r;
                if (isWrapper) _r = new QRegion(((PlastiQQColumnViewWrapper*)o)->PlastiQParentCall_visualRegionForSelection((*reinterpret_cast< QItemSelection(*) >(stack[1].s_voidp))));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QColumnView *o = reinterpret_cast<QColumnView*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QColumnView::updatePreviewWidget,
            [=](const QModelIndex& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QModelIndex(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QModelIndex";
                PlastiQ_activate(sender, "updatePreviewWidget", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QColumnView *o = reinterpret_cast<QColumnView*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QColumnView *o = reinterpret_cast<QColumnView*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QColumnView *o = reinterpret_cast<QColumnView*>(object->plastiq_data());

        if(className == "QAbstractItemView") {
            stack[0].s_voidp = static_cast<QAbstractItemView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQColumnView::~PlastiQQColumnView() {
    QColumnView* o = reinterpret_cast<QColumnView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
