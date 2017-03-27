#include "plastiqmethod.h"
#include "plastiqqheaderview.h"

#include "widgets/PlastiQQAbstractItemView/plastiqqabstractitemview.h"
#include <QHeaderView> 
#include <QByteArray>
#include <QPainter>
#include <QRect>
#include <QSize>
#include <QModelIndex>
#include <QEvent>
#include <QMouseEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQHeaderView::plastiqConstructors = {
    { "QHeaderView(enum)", { "QHeaderView", "Qt::Orientation", "QHeaderView*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHeaderView(enum,QWidget*)", { "QHeaderView", "Qt::Orientation,QWidget*", "QHeaderView*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHeaderView::plastiqMethods = {
    { "cascadingSectionResizes()", { "cascadingSectionResizes", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultAlignment()", { "defaultAlignment", "", "Qt::Alignment", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultSectionSize()", { "defaultSectionSize", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hiddenSectionCount()", { "hiddenSectionCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hideSection(int)", { "hideSection", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "highlightSections()", { "highlightSections", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSectionHidden(int)", { "isSectionHidden", "int", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSortIndicatorShown()", { "isSortIndicatorShown", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalIndex(int)", { "logicalIndex", "int", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalIndexAt(int)", { "logicalIndexAt", "int", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalIndexAt(int,int)", { "logicalIndexAt", "int,int", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalIndexAt(QPoint&)", { "logicalIndexAt", "QPoint&", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumSectionSize()", { "maximumSectionSize", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumSectionSize()", { "minimumSectionSize", "", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveSection(int,int)", { "moveSection", "int,int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "offset()", { "offset", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetDefaultSectionSize()", { "resetDefaultSectionSize", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resizeContentsPrecision()", { "resizeContentsPrecision", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resizeSection(int,int)", { "resizeSection", "int,int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resizeSections(enum)", { "resizeSections", "QHeaderView::ResizeMode", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restoreState(QByteArray)", { "restoreState", "QByteArray&", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saveState()", { "saveState", "", "QByteArray", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionPosition(int)", { "sectionPosition", "int", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionResizeMode(int)", { "sectionResizeMode", "int", "ResizeMode", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionSize(int)", { "sectionSize", "int", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionSizeHint(int)", { "sectionSizeHint", "int", "int", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionViewportPosition(int)", { "sectionViewportPosition", "int", "int", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionsClickable()", { "sectionsClickable", "", "bool", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionsHidden()", { "sectionsHidden", "", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionsMovable()", { "sectionsMovable", "", "bool", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sectionsMoved()", { "sectionsMoved", "", "bool", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCascadingSectionResizes(bool)", { "setCascadingSectionResizes", "bool", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultAlignment(enum)", { "setDefaultAlignment", "Qt::Alignment", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultSectionSize(int)", { "setDefaultSectionSize", "int", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHighlightSections(bool)", { "setHighlightSections", "bool", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumSectionSize(int)", { "setMaximumSectionSize", "int", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumSectionSize(int)", { "setMinimumSectionSize", "int", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResizeContentsPrecision(int)", { "setResizeContentsPrecision", "int", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSectionHidden(int,bool)", { "setSectionHidden", "int,bool", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSectionResizeMode(enum)", { "setSectionResizeMode", "ResizeMode", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSectionResizeMode(int,enum)", { "setSectionResizeMode", "int,ResizeMode", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSectionsClickable(bool)", { "setSectionsClickable", "bool", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSectionsMovable(bool)", { "setSectionsMovable", "bool", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortIndicator(int,enum)", { "setSortIndicator", "int,Qt::SortOrder", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSortIndicatorShown(bool)", { "setSortIndicatorShown", "bool", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStretchLastSection(bool)", { "setStretchLastSection", "bool", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showSection(int)", { "showSection", "int", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortIndicatorOrder()", { "sortIndicatorOrder", "", "Qt::SortOrder", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortIndicatorSection()", { "sortIndicatorSection", "", "int", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stretchLastSection()", { "stretchLastSection", "", "bool", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stretchSectionCount()", { "stretchSectionCount", "", "int", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swapSections(int,int)", { "swapSections", "int,int", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualIndex(int)", { "visualIndex", "int", "int", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "visualIndexAt(int)", { "visualIndexAt", "int", "int", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionHeader*)", { "initStyleOption", "QStyleOptionHeader*", "void", 57, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "paintSection(QPainter*,QRect&,int)", { "paintSection", "QPainter*,QRect&,int", "void", 58, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sectionSizeFromContents(int)", { "sectionSizeFromContents", "int", "QSize", 59, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "currentChanged(QModelIndex&,QModelIndex&)", { "currentChanged", "QModelIndex&,QModelIndex&", "void", 60, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "horizontalOffset()", { "horizontalOffset", "", "int", 62, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 66, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setSelection(QRect&,QItemSelectionModel::SelectionFlags)", { "setSelection", "QRect&,QItemSelectionModel::SelectionFlags", "void", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "verticalOffset()", { "verticalOffset", "", "int", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportEvent(QEvent*)", { "viewportEvent", "QEvent*", "bool", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "headerDataChanged(enum,int,int)", { "headerDataChanged", "Qt::Orientation,int,int", "void", 71, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOffset(int)", { "setOffset", "int", "void", 72, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOffsetToLastSection()", { "setOffsetToLastSection", "", "void", 73, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOffsetToSectionPosition(int)", { "setOffsetToSectionPosition", "int", "void", 74, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHeaderView::plastiqSignals = {
    { "geometriesChanged()", { "geometriesChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sectionClicked(int)", { "sectionClicked", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sectionCountChanged(int,int)", { "sectionCountChanged", "int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sectionDoubleClicked(int)", { "sectionDoubleClicked", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sectionEntered(int)", { "sectionEntered", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sectionHandleDoubleClicked(int)", { "sectionHandleDoubleClicked", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sectionMoved(int,int,int)", { "sectionMoved", "int,int,int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sectionPressed(int)", { "sectionPressed", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sectionResized(int,int,int)", { "sectionResized", "int,int,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sortIndicatorChanged(int,enum)", { "sortIndicatorChanged", "int,Qt::SortOrder", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQHeaderView::plastiqProperties = {
    { "cascadingSectionResizes", { "cascadingSectionResizes", "bool", "setCascadingSectionResizes", "cascadingSectionResizes" } },
    { "defaultAlignment", { "defaultAlignment", "long", "setDefaultAlignment", "defaultAlignment" } },
    { "defaultSectionSize", { "defaultSectionSize", "int", "setDefaultSectionSize", "defaultSectionSize" } },
    { "highlightSections", { "highlightSections", "bool", "setHighlightSections", "highlightSections" } },
    { "maximumSectionSize", { "maximumSectionSize", "int", "setMaximumSectionSize", "maximumSectionSize" } },
    { "minimumSectionSize", { "minimumSectionSize", "int", "setMinimumSectionSize", "minimumSectionSize" } },
    { "showSortIndicator", { "showSortIndicator", "bool", "setSortIndicatorShown", "isSortIndicatorShown" } },
    { "stretchLastSection", { "stretchLastSection", "bool", "setStretchLastSection", "stretchLastSection" } },

};

QHash<QByteArray, long> PlastiQQHeaderView::plastiqConstants = {

    /* QHeaderView::ResizeMode */
   { "Interactive", QHeaderView::Interactive },
   { "Stretch", QHeaderView::Stretch },
   { "Fixed", QHeaderView::Fixed },
   { "ResizeToContents", QHeaderView::ResizeToContents },
   { "Custom", QHeaderView::Custom },

};

QVector<PlastiQMetaObject*> PlastiQQHeaderView::plastiqInherits = { &PlastiQQAbstractItemView::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHeaderView::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQHeaderView::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemView::plastiq_static_metaObject, &plastiqInherits, "QHeaderView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHeaderView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQHeaderViewWrapper : public QHeaderView {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQHeaderViewWrapper(Qt::Orientation orientation, QWidget *parent = Q_NULLPTR)
         : QHeaderView(orientation,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintSection(QPainter*,const QRect&,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRect");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_int = logicalIndex;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QHeaderView::paintSection(painter,rect,logicalIndex);
    }

    void PlastiQParentCall_paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const {
        return QHeaderView::paintSection(painter,rect,logicalIndex);
    }

    QSize sectionSizeFromContents(int logicalIndex) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize sectionSizeFromContents(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = logicalIndex;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QHeaderView::sectionSizeFromContents(logicalIndex);
    }

    QSize PlastiQParentCall_sectionSizeFromContents(int logicalIndex) const {
        return QHeaderView::sectionSizeFromContents(logicalIndex);
    }

    void currentChanged(const QModelIndex &current, const QModelIndex &old) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void currentChanged(const QModelIndex&,const QModelIndex&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QModelIndex(current) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QModelIndex");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QModelIndex(old) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QModelIndex");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QHeaderView::currentChanged(current,old);
    }

    void PlastiQParentCall_currentChanged(const QModelIndex &current, const QModelIndex &old) {
        return QHeaderView::currentChanged(current,old);
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
        else return QHeaderView::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QHeaderView::event(e);
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
        else return QHeaderView::horizontalOffset();
    }

    int PlastiQParentCall_horizontalOffset() const {
        return QHeaderView::horizontalOffset();
    }

    void mouseDoubleClickEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QHeaderView::mouseDoubleClickEvent(e);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *e) {
        return QHeaderView::mouseDoubleClickEvent(e);
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
        else return QHeaderView::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QHeaderView::mouseMoveEvent(e);
    }

    void mousePressEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QHeaderView::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QHeaderView::mousePressEvent(e);
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
        else return QHeaderView::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QHeaderView::mouseReleaseEvent(e);
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
        else return QHeaderView::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QHeaderView::paintEvent(e);
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
        else return QHeaderView::setSelection(rect,flags);
    }

    void PlastiQParentCall_setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags flags) {
        return QHeaderView::setSelection(rect,flags);
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
        else return QHeaderView::verticalOffset();
    }

    int PlastiQParentCall_verticalOffset() const {
        return QHeaderView::verticalOffset();
    }

    bool viewportEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool viewportEvent(QEvent*)");
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
        else return QHeaderView::viewportEvent(e);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *e) {
        return QHeaderView::viewportEvent(e);
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
        else return QHeaderView::keyboardSearch(search);
    }

    void PlastiQParentCall_keyboardSearch(const QString &search) {
        return QHeaderView::keyboardSearch(search);
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
        else return QHeaderView::setModel(model);
    }

    void PlastiQParentCall_setModel(QAbstractItemModel *model) {
        return QHeaderView::setModel(model);
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
        else return QHeaderView::setSelectionModel(selectionModel);
    }

    void PlastiQParentCall_setSelectionModel(QItemSelectionModel *selectionModel) {
        return QHeaderView::setSelectionModel(selectionModel);
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
        else return QHeaderView::sizeHintForColumn(column);
    }

    int PlastiQParentCall_sizeHintForColumn(int column) const {
        return QHeaderView::sizeHintForColumn(column);
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
        else return QHeaderView::sizeHintForRow(row);
    }

    int PlastiQParentCall_sizeHintForRow(int row) const {
        return QHeaderView::sizeHintForRow(row);
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
        else return QHeaderView::edit(index,trigger,event);
    }

    bool PlastiQParentCall_edit(const QModelIndex &index, EditTrigger trigger, QEvent *event) {
        return QHeaderView::edit(index,trigger,event);
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
        else return QHeaderView::startDrag(supportedActions);
    }

    void PlastiQParentCall_startDrag(Qt::DropActions supportedActions) {
        return QHeaderView::startDrag(supportedActions);
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
        else return QHeaderView::viewOptions();
    }

    QStyleOptionViewItem PlastiQParentCall_viewOptions() const {
        return QHeaderView::viewOptions();
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
        else return QHeaderView::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QHeaderView::dragEnterEvent(event);
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
        else return QHeaderView::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QHeaderView::dragLeaveEvent(event);
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
        else return QHeaderView::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QHeaderView::dragMoveEvent(event);
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
        else return QHeaderView::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QHeaderView::dropEvent(event);
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
        else return QHeaderView::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QHeaderView::focusInEvent(event);
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
        else return QHeaderView::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QHeaderView::focusNextPrevChild(next);
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
        else return QHeaderView::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QHeaderView::focusOutEvent(event);
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
        else return QHeaderView::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QHeaderView::inputMethodEvent(event);
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
        else return QHeaderView::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QHeaderView::keyPressEvent(event);
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
        else return QHeaderView::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QHeaderView::resizeEvent(event);
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
        else return QHeaderView::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QHeaderView::timerEvent(event);
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
        else return QHeaderView::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QHeaderView::viewportSizeHint();
    }

};

void PlastiQQHeaderView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQHeaderViewWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQHeaderViewWrapper(Qt::Orientation(stack[1].s_int64)); break;
        case 1: o = new PlastiQQHeaderViewWrapper(Qt::Orientation(stack[1].s_int64),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQHeaderView *p = new PlastiQQHeaderView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHeaderView *p = new PlastiQQHeaderView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 75) {
            id -= 75;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHeaderView *o = sc ? Q_NULLPTR : reinterpret_cast<QHeaderView*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->cascadingSectionResizes();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { qint64 _r = o->defaultAlignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { int _r = o->defaultSectionSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->hiddenSectionCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: o->hideSection(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r = o->highlightSections();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isSectionHidden(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isSortIndicatorShown();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { int _r = o->length();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { int _r = o->logicalIndex(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { int _r = o->logicalIndexAt(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->logicalIndexAt(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->logicalIndexAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->maximumSectionSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { int _r = o->minimumSectionSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: o->moveSection(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: { int _r = o->offset();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: o->resetDefaultSectionSize();
                stack[0].type = PlastiQ::Void; break;
        case 20: { int _r = o->resizeContentsPrecision();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: o->resizeSection(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->resizeSections(QHeaderView::ResizeMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: { bool _r = o->restoreState(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { QByteArray _r = o->saveState();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 25: { int _r = o->sectionPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { qint64 _r = o->sectionResizeMode(stack[1].s_int); // HACK for ResizeMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 27: { int _r = o->sectionSize(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: { int _r = o->sectionSizeHint(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 29: { int _r = o->sectionViewportPosition(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 30: { bool _r = o->sectionsClickable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 31: { bool _r = o->sectionsHidden();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { bool _r = o->sectionsMovable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: { bool _r = o->sectionsMoved();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 34: o->setCascadingSectionResizes(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setDefaultAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setDefaultSectionSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setHighlightSections(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setMaximumSectionSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setMinimumSectionSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setResizeContentsPrecision(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setSectionHidden(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setSectionResizeMode(QHeaderView::ResizeMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setSectionResizeMode(stack[1].s_int,
                    QHeaderView::ResizeMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setSectionsClickable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setSectionsMovable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setSortIndicator(stack[1].s_int,
                    Qt::SortOrder(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setSortIndicatorShown(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setStretchLastSection(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->showSection(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 50: { qint64 _r = o->sortIndicatorOrder(); // HACK for Qt::SortOrder 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 51: { int _r = o->sortIndicatorSection();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 52: { bool _r = o->stretchLastSection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 53: { int _r = o->stretchSectionCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: o->swapSections(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 55: { int _r = o->visualIndex(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 56: { int _r = o->visualIndexAt(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 57: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 58: if (isWrapper) ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_paintSection(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 59: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_sectionSizeFromContents(stack[1].s_int));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 60: if (isWrapper) ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_currentChanged((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QModelIndex(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 61: { bool _r;
                if (isWrapper) _r = ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 62: { int _r;
                if (isWrapper) _r = ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_horizontalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 63: if (isWrapper) ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 64: if (isWrapper) ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 65: if (isWrapper) ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 66: if (isWrapper) ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 67: if (isWrapper) ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 68: /* o->setSelection((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_QItemSelectionModel::SelectionFlags) | ret: `void` */ break;
        case 69: { int _r;
                if (isWrapper) _r = ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_verticalOffset();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 70: { bool _r;
                if (isWrapper) _r = ((PlastiQQHeaderViewWrapper*)o)->PlastiQParentCall_viewportEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 71: o->headerDataChanged(Qt::Orientation(stack[1].s_int64),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 72: o->setOffset(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 73: o->setOffsetToLastSection();
                stack[0].type = PlastiQ::Void; break;
        case 74: o->setOffsetToSectionPosition(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 10) {
            id -= 10;
            PlastiQQAbstractItemView::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QHeaderView *o = reinterpret_cast<QHeaderView*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QHeaderView::geometriesChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "geometriesChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QHeaderView::sectionClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "sectionClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QHeaderView::sectionCountChanged,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "sectionCountChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QHeaderView::sectionDoubleClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "sectionDoubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QHeaderView::sectionEntered,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "sectionEntered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QHeaderView::sectionHandleDoubleClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "sectionHandleDoubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QHeaderView::sectionMoved,
            [=](int arg0, int arg1, int arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                    cstack[2].s_int = arg2;
                    cstack[2].type = PlastiQ::Int; cstack[2].name = "int";
                PlastiQ_activate(sender, "sectionMoved", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QHeaderView::sectionPressed,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "sectionPressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QHeaderView::sectionResized,
            [=](int arg0, int arg1, int arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                    cstack[2].s_int = arg2;
                    cstack[2].type = PlastiQ::Int; cstack[2].name = "int";
                PlastiQ_activate(sender, "sectionResized", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QHeaderView::sortIndicatorChanged,
            [=](int arg0, Qt::SortOrder arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "Qt::SortOrder";
                PlastiQ_activate(sender, "sortIndicatorChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHeaderView *o = reinterpret_cast<QHeaderView*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHeaderView *o = reinterpret_cast<QHeaderView*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHeaderView *o = reinterpret_cast<QHeaderView*>(object->plastiq_data());

        if(className == "QAbstractItemView") {
            stack[0].s_voidp = static_cast<QAbstractItemView*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHeaderView::~PlastiQQHeaderView() {
    QHeaderView* o = reinterpret_cast<QHeaderView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
