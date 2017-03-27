#include "plastiqmethod.h"
#include "plastiqqgraphicsview.h"

#include "widgets/PlastiQQAbstractScrollArea/plastiqqabstractscrollarea.h"
#include <QGraphicsView> 
#include <QBrush>
#include <QGraphicsItem>
#include <QPoint>
#include <QPolygon>
#include <QPainterPath>
#include <QPointF>
#include <QPolygonF>
#include <QMatrix>
#include <QRect>
#include <QGraphicsScene>
#include <QRectF>
#include <QTransform>
#include <QPainter>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsView::plastiqConstructors = {
    { "QGraphicsView()", { "QGraphicsView", "", "QGraphicsView*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsView(QWidget*)", { "QGraphicsView", "QWidget*", "QGraphicsView*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsView(QGraphicsScene*)", { "QGraphicsView", "QGraphicsScene*", "QGraphicsView*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsView(QGraphicsScene*,QWidget*)", { "QGraphicsView", "QGraphicsScene*,QWidget*", "QGraphicsView*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsView::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundBrush()", { "backgroundBrush", "", "QBrush", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cacheMode()", { "cacheMode", "", "CacheMode", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "centerOn(QPointF&)", { "centerOn", "QPointF&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "centerOn(double,double)", { "centerOn", "qreal,qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "centerOn(const QGraphicsItem*)", { "centerOn", "QGraphicsItem*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dragMode()", { "dragMode", "", "DragMode", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(QRectF&)", { "ensureVisible", "QRectF&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(QRectF&,int)", { "ensureVisible", "QRectF&,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(QRectF&,int,int)", { "ensureVisible", "QRectF&,int,int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(double,double,double,double)", { "ensureVisible", "qreal,qreal,qreal,qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(double,double,double,double,int)", { "ensureVisible", "qreal,qreal,qreal,qreal,int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(double,double,double,double,int,int)", { "ensureVisible", "qreal,qreal,qreal,qreal,int,int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(const QGraphicsItem*)", { "ensureVisible", "QGraphicsItem*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(const QGraphicsItem*,int)", { "ensureVisible", "QGraphicsItem*,int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(const QGraphicsItem*,int,int)", { "ensureVisible", "QGraphicsItem*,int,int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fitInView(QRectF&)", { "fitInView", "QRectF&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fitInView(QRectF&,enum)", { "fitInView", "QRectF&,Qt::AspectRatioMode", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fitInView(double,double,double,double)", { "fitInView", "qreal,qreal,qreal,qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fitInView(double,double,double,double,enum)", { "fitInView", "qreal,qreal,qreal,qreal,Qt::AspectRatioMode", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fitInView(const QGraphicsItem*)", { "fitInView", "QGraphicsItem*", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fitInView(const QGraphicsItem*,enum)", { "fitInView", "QGraphicsItem*,Qt::AspectRatioMode", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foregroundBrush()", { "foregroundBrush", "", "QBrush", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isInteractive()", { "isInteractive", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTransformed()", { "isTransformed", "", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(QPoint&)", { "itemAt", "QPoint&", "QGraphicsItem*", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int,int)", { "itemAt", "int,int", "QGraphicsItem*", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(QPointF&)", { "mapFromScene", "QPointF&", "QPoint", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(QRectF&)", { "mapFromScene", "QRectF&", "QPolygon", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(QPolygonF&)", { "mapFromScene", "QPolygonF&", "QPolygon", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(QPainterPath&)", { "mapFromScene", "QPainterPath&", "QPainterPath", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(double,double)", { "mapFromScene", "qreal,qreal", "QPoint", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(double,double,double,double)", { "mapFromScene", "qreal,qreal,qreal,qreal", "QPolygon", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(QPoint&)", { "mapToScene", "QPoint&", "QPointF", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(QRect&)", { "mapToScene", "QRect&", "QPolygonF", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(QPolygon&)", { "mapToScene", "QPolygon&", "QPolygonF", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(QPainterPath&)", { "mapToScene", "QPainterPath&", "QPainterPath", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(int,int)", { "mapToScene", "int,int", "QPointF", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(int,int,int,int)", { "mapToScene", "int,int,int,int", "QPolygonF", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matrix()", { "matrix", "", "QMatrix", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "optimizationFlags()", { "optimizationFlags", "", "OptimizationFlags", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*)", { "render", "QPainter*", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QRectF&)", { "render", "QPainter*,QRectF&", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QRectF&,QRect&)", { "render", "QPainter*,QRectF&,QRect&", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QRectF&,QRect&,enum)", { "render", "QPainter*,QRectF&,QRect&,Qt::AspectRatioMode", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "renderHints()", { "renderHints", "", "QPainter::RenderHints", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetCachedContent()", { "resetCachedContent", "", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetMatrix()", { "resetMatrix", "", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetTransform()", { "resetTransform", "", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resizeAnchor()", { "resizeAnchor", "", "ViewportAnchor", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotate(double)", { "rotate", "qreal", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rubberBandRect()", { "rubberBandRect", "", "QRect", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rubberBandSelectionMode()", { "rubberBandSelectionMode", "", "Qt::ItemSelectionMode", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(double,double)", { "scale", "qreal,qreal", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scene()", { "scene", "", "QGraphicsScene*", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sceneRect()", { "sceneRect", "", "QRectF", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundBrush(QBrush&)", { "setBackgroundBrush", "QBrush&", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCacheMode(enum)", { "setCacheMode", "CacheMode", "void", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDragMode(enum)", { "setDragMode", "DragMode", "void", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setForegroundBrush(QBrush&)", { "setForegroundBrush", "QBrush&", "void", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInteractive(bool)", { "setInteractive", "bool", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMatrix(QMatrix&)", { "setMatrix", "QMatrix&", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMatrix(QMatrix&,bool)", { "setMatrix", "QMatrix&,bool", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptimizationFlag(enum)", { "setOptimizationFlag", "OptimizationFlag", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptimizationFlag(enum,bool)", { "setOptimizationFlag", "OptimizationFlag,bool", "void", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptimizationFlags(enum)", { "setOptimizationFlags", "OptimizationFlags", "void", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRenderHint(enum)", { "setRenderHint", "QPainter::RenderHint", "void", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRenderHint(enum,bool)", { "setRenderHint", "QPainter::RenderHint,bool", "void", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRenderHints(enum)", { "setRenderHints", "QPainter::RenderHints", "void", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResizeAnchor(enum)", { "setResizeAnchor", "ViewportAnchor", "void", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRubberBandSelectionMode(enum)", { "setRubberBandSelectionMode", "Qt::ItemSelectionMode", "void", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScene(QGraphicsScene*)", { "setScene", "QGraphicsScene*", "void", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSceneRect(QRectF&)", { "setSceneRect", "QRectF&", "void", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSceneRect(double,double,double,double)", { "setSceneRect", "qreal,qreal,qreal,qreal", "void", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransform(QTransform&)", { "setTransform", "QTransform&", "void", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransform(QTransform&,bool)", { "setTransform", "QTransform&,bool", "void", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransformationAnchor(enum)", { "setTransformationAnchor", "ViewportAnchor", "void", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewportUpdateMode(enum)", { "setViewportUpdateMode", "ViewportUpdateMode", "void", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shear(double,double)", { "shear", "qreal,qreal", "void", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transform()", { "transform", "", "QTransform", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformationAnchor()", { "transformationAnchor", "", "ViewportAnchor", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(double,double)", { "translate", "qreal,qreal", "void", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewportTransform()", { "viewportTransform", "", "QTransform", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewportUpdateMode()", { "viewportUpdateMode", "", "ViewportUpdateMode", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawBackground(QPainter*,QRectF&)", { "drawBackground", "QPainter*,QRectF&", "void", 85, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawForeground(QPainter*,QRectF&)", { "drawForeground", "QPainter*,QRectF&", "void", 86, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 87, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QDragEnterEvent*)", { "dragEnterEvent", "QDragEnterEvent*", "void", 88, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QDragLeaveEvent*)", { "dragLeaveEvent", "QDragLeaveEvent*", "void", 89, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QDragMoveEvent*)", { "dragMoveEvent", "QDragMoveEvent*", "void", 90, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QDropEvent*)", { "dropEvent", "QDropEvent*", "void", 91, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 92, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 93, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 94, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 95, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 96, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 97, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 98, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 99, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 100, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 101, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 102, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 103, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 104, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "scrollContentsBy(int,int)", { "scrollContentsBy", "int,int", "void", 105, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 106, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "viewportEvent(QEvent*)", { "viewportEvent", "QEvent*", "bool", 107, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 108, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "invalidateScene()", { "invalidateScene", "", "void", 109, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "invalidateScene(QRectF&)", { "invalidateScene", "QRectF&", "void", 110, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "invalidateScene(QRectF&,enum)", { "invalidateScene", "QRectF&,QGraphicsScene::SceneLayers", "void", 111, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "updateScene(QList<QRectF>&)", { "updateScene", "QList<QRectF>&", "void", 112, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "updateSceneRect(QRectF&)", { "updateSceneRect", "QRectF&", "void", 113, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsView::plastiqSignals = {
    { "rubberBandChanged(QRect,QPointF,QPointF)", { "rubberBandChanged", "QRect,QPointF,QPointF", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsView::plastiqProperties = {
    { "alignment", { "alignment", "long", "setAlignment", "alignment" } },
    { "backgroundBrush", { "backgroundBrush", "QBrush", "setBackgroundBrush", "backgroundBrush" } },
    { "cacheMode", { "cacheMode", "long", "setCacheMode", "cacheMode" } },
    { "dragMode", { "dragMode", "long", "setDragMode", "dragMode" } },
    { "foregroundBrush", { "foregroundBrush", "QBrush", "setForegroundBrush", "foregroundBrush" } },
    { "interactive", { "interactive", "bool", "setInteractive", "isInteractive" } },
    { "optimizationFlags", { "optimizationFlags", "long", "setOptimizationFlags", "optimizationFlags" } },
    { "renderHints", { "renderHints", "long", "setRenderHints", "renderHints" } },
    { "resizeAnchor", { "resizeAnchor", "long", "setResizeAnchor", "resizeAnchor" } },
    { "rubberBandSelectionMode", { "rubberBandSelectionMode", "long", "setRubberBandSelectionMode", "rubberBandSelectionMode" } },
    { "sceneRect", { "sceneRect", "QRectF", "setSceneRect", "sceneRect" } },
    { "transformationAnchor", { "transformationAnchor", "long", "setTransformationAnchor", "transformationAnchor" } },
    { "viewportUpdateMode", { "viewportUpdateMode", "long", "setViewportUpdateMode", "viewportUpdateMode" } },

};

QHash<QByteArray, long> PlastiQQGraphicsView::plastiqConstants = {

    /* QGraphicsView::CacheModeFlag */
   { "CacheNone", QGraphicsView::CacheNone },
   { "CacheBackground", QGraphicsView::CacheBackground },

    /* QGraphicsView::DragMode */
   { "NoDrag", QGraphicsView::NoDrag },
   { "ScrollHandDrag", QGraphicsView::ScrollHandDrag },
   { "RubberBandDrag", QGraphicsView::RubberBandDrag },

    /* QGraphicsView::OptimizationFlag */
   { "DontClipPainter", QGraphicsView::DontClipPainter },
   { "DontSavePainterState", QGraphicsView::DontSavePainterState },
   { "DontAdjustForAntialiasing", QGraphicsView::DontAdjustForAntialiasing },
   { "IndirectPainting", QGraphicsView::IndirectPainting },

    /* QGraphicsView::ViewportAnchor */
   { "NoAnchor", QGraphicsView::NoAnchor },
   { "AnchorViewCenter", QGraphicsView::AnchorViewCenter },
   { "AnchorUnderMouse", QGraphicsView::AnchorUnderMouse },

    /* QGraphicsView::ViewportUpdateMode */
   { "FullViewportUpdate", QGraphicsView::FullViewportUpdate },
   { "MinimalViewportUpdate", QGraphicsView::MinimalViewportUpdate },
   { "SmartViewportUpdate", QGraphicsView::SmartViewportUpdate },
   { "NoViewportUpdate", QGraphicsView::NoViewportUpdate },
   { "BoundingRectViewportUpdate", QGraphicsView::BoundingRectViewportUpdate },

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsView::plastiqInherits = { &PlastiQQAbstractScrollArea::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsView::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQGraphicsView::plastiq_static_metaObject = {
    { &PlastiQQAbstractScrollArea::plastiq_static_metaObject, &plastiqInherits, "QGraphicsView", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsView::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsViewWrapper : public QGraphicsView {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsViewWrapper(QWidget *parent = Q_NULLPTR)
         : QGraphicsView(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQGraphicsViewWrapper(QGraphicsScene *scene, QWidget *parent = Q_NULLPTR)
         : QGraphicsView(scene,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void drawBackground(QPainter *painter, const QRectF &rect) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawBackground(QPainter*,const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRectF");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsView::drawBackground(painter,rect);
    }

    void PlastiQParentCall_drawBackground(QPainter *painter, const QRectF &rect) {
        return QGraphicsView::drawBackground(painter,rect);
    }

    void drawForeground(QPainter *painter, const QRectF &rect) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawForeground(QPainter*,const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRectF");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsView::drawForeground(painter,rect);
    }

    void PlastiQParentCall_drawForeground(QPainter *painter, const QRectF &rect) {
        return QGraphicsView::drawForeground(painter,rect);
    }

    void contextMenuEvent(QContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsView::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QGraphicsView::contextMenuEvent(event);
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
        else return QGraphicsView::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QGraphicsView::dragEnterEvent(event);
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
        else return QGraphicsView::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QGraphicsView::dragLeaveEvent(event);
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
        else return QGraphicsView::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QGraphicsView::dragMoveEvent(event);
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
        else return QGraphicsView::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QGraphicsView::dropEvent(event);
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
        else return QGraphicsView::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QGraphicsView::event(event);
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
        else return QGraphicsView::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QGraphicsView::focusInEvent(event);
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
        else return QGraphicsView::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QGraphicsView::focusNextPrevChild(next);
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
        else return QGraphicsView::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QGraphicsView::focusOutEvent(event);
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
        else return QGraphicsView::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QGraphicsView::inputMethodEvent(event);
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
        else return QGraphicsView::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QGraphicsView::keyPressEvent(event);
    }

    void keyReleaseEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsView::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QGraphicsView::keyReleaseEvent(event);
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
        else return QGraphicsView::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QGraphicsView::mouseDoubleClickEvent(event);
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
        else return QGraphicsView::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QGraphicsView::mouseMoveEvent(event);
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
        else return QGraphicsView::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QGraphicsView::mousePressEvent(event);
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
        else return QGraphicsView::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QGraphicsView::mouseReleaseEvent(event);
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
        else return QGraphicsView::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QGraphicsView::paintEvent(event);
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
        else return QGraphicsView::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QGraphicsView::resizeEvent(event);
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
        else return QGraphicsView::scrollContentsBy(dx,dy);
    }

    void PlastiQParentCall_scrollContentsBy(int dx, int dy) {
        return QGraphicsView::scrollContentsBy(dx,dy);
    }

    void showEvent(QShowEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsView::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QGraphicsView::showEvent(event);
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
        else return QGraphicsView::viewportEvent(event);
    }

    bool PlastiQParentCall_viewportEvent(QEvent *event) {
        return QGraphicsView::viewportEvent(event);
    }

    void wheelEvent(QWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsView::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QGraphicsView::wheelEvent(event);
    }

    void setupViewport(QWidget *viewport) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setupViewport(QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(viewport);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsView::setupViewport(viewport);
    }

    void PlastiQParentCall_setupViewport(QWidget *viewport) {
        return QGraphicsView::setupViewport(viewport);
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
        else return QGraphicsView::viewportSizeHint();
    }

    QSize PlastiQParentCall_viewportSizeHint() const {
        return QGraphicsView::viewportSizeHint();
    }

};

void PlastiQQGraphicsView::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsViewWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsViewWrapper(); break;
        case 1: o = new PlastiQQGraphicsViewWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQGraphicsViewWrapper(reinterpret_cast<QGraphicsScene*>(stack[1].s_voidp)); break;
        case 3: o = new PlastiQQGraphicsViewWrapper(reinterpret_cast<QGraphicsScene*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsView *p = new PlastiQQGraphicsView();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsView *p = new PlastiQQGraphicsView();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 114) {
            id -= 114;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsView *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsView*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->backgroundBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->cacheMode(); // HACK for CacheMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: o->centerOn((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->centerOn(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->centerOn(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 6: { qint64 _r = o->dragMode(); // HACK for DragMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: o->ensureVisible((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->ensureVisible((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->ensureVisible((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->ensureVisible(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->ensureVisible(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->ensureVisible(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_int,
                    stack[6].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->ensureVisible(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->ensureVisible(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->ensureVisible(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->fitInView((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->fitInView((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->fitInView(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->fitInView(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    Qt::AspectRatioMode(stack[5].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->fitInView(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->fitInView(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    Qt::AspectRatioMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->foregroundBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { bool _r = o->isInteractive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r = o->isTransformed();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { QGraphicsItem* _r = o->itemAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 26: { QGraphicsItem* _r = o->itemAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 27: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapFromScene((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: /* UNSUPPORTED_RETURN_VALUE o->mapFromScene((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))) | ret: `QPolygon` */ break;
        case 29: /* UNSUPPORTED_RETURN_VALUE o->mapFromScene((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp))) | ret: `QPolygon` */ break;
        case 30: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->mapFromScene((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->mapFromScene(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: /* UNSUPPORTED_RETURN_VALUE o->mapFromScene(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double) | ret: `QPolygon` */ break;
        case 33: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToScene((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: /* UNSUPPORTED_RETURN_VALUE o->mapToScene((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 35: /* UNSUPPORTED_RETURN_VALUE o->mapToScene((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 36: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->mapToScene((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 37: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToScene(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: /* UNSUPPORTED_RETURN_VALUE o->mapToScene(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int) | ret: `QPolygonF` */ break;
        case 39: /* UNSUPPORTED_RETURN_VALUE o->matrix() | ret: `QMatrix` */ break;
        case 40: { qint64 _r = o->optimizationFlags(); // HACK for OptimizationFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 41: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)),
                    Qt::AspectRatioMode(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 45: { qint64 _r = o->renderHints(); // HACK for QPainter::RenderHints 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 46: o->resetCachedContent();
                stack[0].type = PlastiQ::Void; break;
        case 47: o->resetMatrix();
                stack[0].type = PlastiQ::Void; break;
        case 48: o->resetTransform();
                stack[0].type = PlastiQ::Void; break;
        case 49: { qint64 _r = o->resizeAnchor(); // HACK for ViewportAnchor 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 50: o->rotate(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 51: { /* COPY OBJECT */
            QRect *_r = new QRect(o->rubberBandRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 52: { qint64 _r = o->rubberBandSelectionMode(); // HACK for Qt::ItemSelectionMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 53: o->scale(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 54: { QGraphicsScene* _r = o->scene();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsScene"; } break;
        case 55: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->sceneRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 57: o->setBackgroundBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 58: o->setCacheMode(QGraphicsView::CacheMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 59: o->setDragMode(QGraphicsView::DragMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 60: o->setForegroundBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 61: o->setInteractive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 62: o->setMatrix((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 63: o->setMatrix((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 64: o->setOptimizationFlag(QGraphicsView::OptimizationFlag(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 65: o->setOptimizationFlag(QGraphicsView::OptimizationFlag(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 66: o->setOptimizationFlags(QGraphicsView::OptimizationFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 67: o->setRenderHint(QPainter::RenderHint(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 68: o->setRenderHint(QPainter::RenderHint(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 69: o->setRenderHints(QPainter::RenderHints(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 70: o->setResizeAnchor(QGraphicsView::ViewportAnchor(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 71: o->setRubberBandSelectionMode(Qt::ItemSelectionMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 72: o->setScene(reinterpret_cast<QGraphicsScene*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 73: o->setSceneRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 74: o->setSceneRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 75: o->setTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 76: o->setTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 77: o->setTransformationAnchor(QGraphicsView::ViewportAnchor(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 78: o->setViewportUpdateMode(QGraphicsView::ViewportUpdateMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 79: o->shear(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 80: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->transform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 81: { qint64 _r = o->transformationAnchor(); // HACK for ViewportAnchor 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 82: o->translate(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 83: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->viewportTransform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 84: { qint64 _r = o->viewportUpdateMode(); // HACK for ViewportUpdateMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 85: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_drawBackground(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 86: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_drawForeground(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 87: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 88: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QDragEnterEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 89: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QDragLeaveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 90: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QDragMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 91: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 92: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 93: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 94: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 95: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 96: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 97: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 98: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 99: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 100: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 101: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 102: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 103: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 104: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 105: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_scrollContentsBy(stack[1].s_int,
                    stack[2].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 106: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 107: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_viewportEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 108: if (isWrapper) ((PlastiQQGraphicsViewWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 109: o->invalidateScene();
                stack[0].type = PlastiQ::Void; break;
        case 110: o->invalidateScene((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 111: o->invalidateScene((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    QGraphicsScene::SceneLayers(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 112: o->updateScene((*reinterpret_cast< QList<QRectF>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 113: o->updateSceneRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractScrollArea::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGraphicsView *o = reinterpret_cast<QGraphicsView*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QGraphicsView::rubberBandChanged,
            [=](QRect arg0, QPointF arg1, QPointF arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_voidp = new QRect(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRect";
                    cstack[1].s_voidp = new QPointF(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QPointF";
                    cstack[2].s_voidp = new QPointF(arg2) /* COPY OBJECT */;
                    cstack[2].type = PlastiQ::QtObject; cstack[2].name = "QPointF";
                PlastiQ_activate(sender, "rubberBandChanged", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsView *o = reinterpret_cast<QGraphicsView*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsView *o = reinterpret_cast<QGraphicsView*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsView *o = reinterpret_cast<QGraphicsView*>(object->plastiq_data());

        if(className == "QAbstractScrollArea") {
            stack[0].s_voidp = static_cast<QAbstractScrollArea*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsView::~PlastiQQGraphicsView() {
    QGraphicsView* o = reinterpret_cast<QGraphicsView*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
