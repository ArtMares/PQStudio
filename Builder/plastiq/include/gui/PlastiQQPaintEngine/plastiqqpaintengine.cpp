#include "plastiqmethod.h"
#include "plastiqqpaintengine.h"

#include <QPaintEngine> 
#include <QRectF>
#include <QRect>
#include <QImage>
#include <QLineF>
#include <QLine>
#include <QPainterPath>
#include <QPointF>
#include <QPoint>
#include <QTextItem>
#include <QPixmap>
#include <QPaintDevice>
#include <QPainter>

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEngine::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEngine::plastiqMethods = {
    { "begin(QPaintDevice*)", { "begin", "QPaintDevice*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawEllipse(QRectF&)", { "drawEllipse", "QRectF&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawEllipse(QRect&)", { "drawEllipse", "QRect&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QRectF&,QImage&,QRectF&)", { "drawImage", "QRectF&,QImage&,QRectF&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QRectF&,QImage&,QRectF&,enum)", { "drawImage", "QRectF&,QImage&,QRectF&,Qt::ImageConversionFlags", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(const QLineF*,int)", { "drawLines", "QLineF*,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(const QLine*,int)", { "drawLines", "QLine*,int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPath(QPainterPath&)", { "drawPath", "QPainterPath&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(QRectF&,QPixmap&,QRectF&)", { "drawPixmap", "QRectF&,QPixmap&,QRectF&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoints(const QPointF*,int)", { "drawPoints", "QPointF*,int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoints(const QPoint*,int)", { "drawPoints", "QPoint*,int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(const QPointF*,int,enum)", { "drawPolygon", "QPointF*,int,PolygonDrawMode", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(const QPoint*,int,enum)", { "drawPolygon", "QPoint*,int,PolygonDrawMode", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRects(const QRectF*,int)", { "drawRects", "QRectF*,int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRects(const QRect*,int)", { "drawRects", "QRect*,int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTextItem(QPointF&,QTextItem&)", { "drawTextItem", "QPointF&,QTextItem&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTiledPixmap(QRectF&,QPixmap&,QPointF&)", { "drawTiledPixmap", "QRectF&,QPixmap&,QPointF&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFeature(enum)", { "hasFeature", "PaintEngineFeatures", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintDevice()", { "paintDevice", "", "QPaintDevice*", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "painter()", { "painter", "", "QPainter*", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActive(bool)", { "setActive", "bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateState(QPaintEngineState&)", { "updateState", "QPaintEngineState&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEngine::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPaintEngine::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPaintEngine::plastiqConstants = {

    /* QPaintEngine::DirtyFlag */
   { "DirtyPen", QPaintEngine::DirtyPen },
   { "DirtyBrush", QPaintEngine::DirtyBrush },
   { "DirtyBrushOrigin", QPaintEngine::DirtyBrushOrigin },
   { "DirtyFont", QPaintEngine::DirtyFont },
   { "DirtyBackground", QPaintEngine::DirtyBackground },
   { "DirtyBackgroundMode", QPaintEngine::DirtyBackgroundMode },
   { "DirtyTransform", QPaintEngine::DirtyTransform },
   { "DirtyClipRegion", QPaintEngine::DirtyClipRegion },
   { "DirtyClipPath", QPaintEngine::DirtyClipPath },
   { "DirtyHints", QPaintEngine::DirtyHints },
   { "DirtyCompositionMode", QPaintEngine::DirtyCompositionMode },
   { "DirtyClipEnabled", QPaintEngine::DirtyClipEnabled },
   { "DirtyOpacity", QPaintEngine::DirtyOpacity },
   { "AllDirty", QPaintEngine::AllDirty },

    /* QPaintEngine::PaintEngineFeature */
   { "PrimitiveTransform", QPaintEngine::PrimitiveTransform },
   { "PatternTransform", QPaintEngine::PatternTransform },
   { "PixmapTransform", QPaintEngine::PixmapTransform },
   { "PatternBrush", QPaintEngine::PatternBrush },
   { "LinearGradientFill", QPaintEngine::LinearGradientFill },
   { "RadialGradientFill", QPaintEngine::RadialGradientFill },
   { "ConicalGradientFill", QPaintEngine::ConicalGradientFill },
   { "AlphaBlend", QPaintEngine::AlphaBlend },
   { "PorterDuff", QPaintEngine::PorterDuff },
   { "PainterPaths", QPaintEngine::PainterPaths },
   { "Antialiasing", QPaintEngine::Antialiasing },
   { "BrushStroke", QPaintEngine::BrushStroke },
   { "ConstantOpacity", QPaintEngine::ConstantOpacity },
   { "MaskedBrush", QPaintEngine::MaskedBrush },
   { "PerspectiveTransform", QPaintEngine::PerspectiveTransform },
   { "BlendModes", QPaintEngine::BlendModes },
   { "ObjectBoundingModeGradients", QPaintEngine::ObjectBoundingModeGradients },
   { "RasterOpModes", QPaintEngine::RasterOpModes },
   { "PaintOutsidePaintEvent", QPaintEngine::PaintOutsidePaintEvent },
   { "AllFeatures", QPaintEngine::AllFeatures },

    /* QPaintEngine::PolygonDrawMode */
   { "OddEvenMode", QPaintEngine::OddEvenMode },
   { "WindingMode", QPaintEngine::WindingMode },
   { "ConvexMode", QPaintEngine::ConvexMode },
   { "PolylineMode", QPaintEngine::PolylineMode },

    /* QPaintEngine::Type */
   { "X11", QPaintEngine::X11 },
   { "Windows", QPaintEngine::Windows },
   { "QuickDraw", QPaintEngine::QuickDraw },
   { "CoreGraphics", QPaintEngine::CoreGraphics },
   { "MacPrinter", QPaintEngine::MacPrinter },
   { "QWindowSystem", QPaintEngine::QWindowSystem },
   { "PostScript", QPaintEngine::PostScript },
   { "OpenGL", QPaintEngine::OpenGL },
   { "Picture", QPaintEngine::Picture },
   { "SVG", QPaintEngine::SVG },
   { "Raster", QPaintEngine::Raster },
   { "Direct3D", QPaintEngine::Direct3D },
   { "Pdf", QPaintEngine::Pdf },
   { "OpenVG", QPaintEngine::OpenVG },
   { "OpenGL2", QPaintEngine::OpenGL2 },
   { "PaintBuffer", QPaintEngine::PaintBuffer },
   { "Blitter", QPaintEngine::Blitter },
   { "Direct2D", QPaintEngine::Direct2D },
   { "User", QPaintEngine::User },
   { "MaxUser", QPaintEngine::MaxUser },

};

QVector<PlastiQMetaObject*> PlastiQQPaintEngine::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPaintEngine::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPaintEngine::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPaintEngine", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPaintEngine::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPaintEngineWrapper : public QPaintEngine {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void drawEllipse(const QRectF &rect) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawEllipse(const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRectF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawEllipse(rect);
    }

    void PlastiQParentCall_drawEllipse(const QRectF &rect) {
        return QPaintEngine::drawEllipse(rect);
    }

    void drawEllipse(const QRect &rect) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawEllipse(const QRect&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QRect(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRect");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawEllipse(rect);
    }

    void PlastiQParentCall_drawEllipse(const QRect &rect) {
        return QPaintEngine::drawEllipse(rect);
    }

    void drawImage(const QRectF &rectangle, const QImage &image, const QRectF &sr, Qt::ImageConversionFlags flags = Qt::AutoColor) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawImage(const QRectF&,const QImage&,const QRectF&,Qt::ImageConversionFlags=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = new QRectF(rectangle) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRectF");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QImage(image) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QImage");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_voidp = new QRectF(sr) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QRectF");
            stack[3].type = PlastiQ::QtObject;
            stack[4].s_int64 = flags;
            stack[4].name = QByteArrayLiteral("Qt::ImageConversionFlags");
            stack[4].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawImage(rectangle,image,sr,flags);
    }

    void PlastiQParentCall_drawImage(const QRectF &rectangle, const QImage &image, const QRectF &sr, Qt::ImageConversionFlags flags = Qt::AutoColor) {
        return QPaintEngine::drawImage(rectangle,image,sr,flags);
    }

    void drawLines(const QLineF *lines, int lineCount) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawLines(const QLineF*,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QLineF*>(lines));
            stack[1].name = QByteArrayLiteral("QLineF");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = lineCount;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawLines(lines,lineCount);
    }

    void PlastiQParentCall_drawLines(const QLineF *lines, int lineCount) {
        return QPaintEngine::drawLines(lines,lineCount);
    }

    void drawLines(const QLine *lines, int lineCount) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawLines(const QLine*,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QLine*>(lines));
            stack[1].name = QByteArrayLiteral("QLine");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = lineCount;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawLines(lines,lineCount);
    }

    void PlastiQParentCall_drawLines(const QLine *lines, int lineCount) {
        return QPaintEngine::drawLines(lines,lineCount);
    }

    void drawPath(const QPainterPath &path) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawPath(const QPainterPath&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QPainterPath(path) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPainterPath");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawPath(path);
    }

    void PlastiQParentCall_drawPath(const QPainterPath &path) {
        return QPaintEngine::drawPath(path);
    }

    void drawPoints(const QPointF *points, int pointCount) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawPoints(const QPointF*,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QPointF*>(points));
            stack[1].name = QByteArrayLiteral("QPointF");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = pointCount;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawPoints(points,pointCount);
    }

    void PlastiQParentCall_drawPoints(const QPointF *points, int pointCount) {
        return QPaintEngine::drawPoints(points,pointCount);
    }

    void drawPoints(const QPoint *points, int pointCount) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawPoints(const QPoint*,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QPoint*>(points));
            stack[1].name = QByteArrayLiteral("QPoint");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = pointCount;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawPoints(points,pointCount);
    }

    void PlastiQParentCall_drawPoints(const QPoint *points, int pointCount) {
        return QPaintEngine::drawPoints(points,pointCount);
    }

    void drawPolygon(const QPointF *points, int pointCount, PolygonDrawMode mode) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawPolygon(const QPointF*,int,PolygonDrawMode)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QPointF*>(points));
            stack[1].name = QByteArrayLiteral("QPointF");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = pointCount;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_int64 = mode;
            stack[3].name = QByteArrayLiteral("PolygonDrawMode");
            stack[3].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawPolygon(points,pointCount,mode);
    }

    void PlastiQParentCall_drawPolygon(const QPointF *points, int pointCount, PolygonDrawMode mode) {
        return QPaintEngine::drawPolygon(points,pointCount,mode);
    }

    void drawPolygon(const QPoint *points, int pointCount, PolygonDrawMode mode) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawPolygon(const QPoint*,int,PolygonDrawMode)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QPoint*>(points));
            stack[1].name = QByteArrayLiteral("QPoint");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = pointCount;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_int64 = mode;
            stack[3].name = QByteArrayLiteral("PolygonDrawMode");
            stack[3].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawPolygon(points,pointCount,mode);
    }

    void PlastiQParentCall_drawPolygon(const QPoint *points, int pointCount, PolygonDrawMode mode) {
        return QPaintEngine::drawPolygon(points,pointCount,mode);
    }

    void drawRects(const QRectF *rects, int rectCount) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawRects(const QRectF*,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QRectF*>(rects));
            stack[1].name = QByteArrayLiteral("QRectF");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = rectCount;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawRects(rects,rectCount);
    }

    void PlastiQParentCall_drawRects(const QRectF *rects, int rectCount) {
        return QPaintEngine::drawRects(rects,rectCount);
    }

    void drawRects(const QRect *rects, int rectCount) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawRects(const QRect*,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QRect*>(rects));
            stack[1].name = QByteArrayLiteral("QRect");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int = rectCount;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawRects(rects,rectCount);
    }

    void PlastiQParentCall_drawRects(const QRect *rects, int rectCount) {
        return QPaintEngine::drawRects(rects,rectCount);
    }

    void drawTextItem(const QPointF &p, const QTextItem &textItem) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawTextItem(const QPointF&,const QTextItem&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QPointF(p) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPointF");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = reinterpret_cast<void*>(&const_cast<QTextItem&>(textItem));
            stack[2].name = QByteArrayLiteral("QTextItem");
            stack[2].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawTextItem(p,textItem);
    }

    void PlastiQParentCall_drawTextItem(const QPointF &p, const QTextItem &textItem) {
        return QPaintEngine::drawTextItem(p,textItem);
    }

    void drawTiledPixmap(const QRectF &rect, const QPixmap &pixmap, const QPointF &p) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawTiledPixmap(const QRectF&,const QPixmap&,const QPointF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRectF");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QPixmap(pixmap) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QPixmap");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_voidp = new QPointF(p) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QPointF");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPaintEngine::drawTiledPixmap(rect,pixmap,p);
    }

    void PlastiQParentCall_drawTiledPixmap(const QRectF &rect, const QPixmap &pixmap, const QPointF &p) {
        return QPaintEngine::drawTiledPixmap(rect,pixmap,p);
    }

};

void PlastiQQPaintEngine::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPaintEngineWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPaintEngine *p = new PlastiQQPaintEngine();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPaintEngine *p = new PlastiQQPaintEngine();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPaintEngine *o = sc ? Q_NULLPTR : reinterpret_cast<QPaintEngine*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->begin(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawEllipse((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                else o->drawEllipse((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawEllipse((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                else o->drawEllipse((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawImage((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                else o->drawImage((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawImage((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)),
                    Qt::ImageConversionFlags(stack[4].s_int64));
                else o->drawImage((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)),
                    Qt::ImageConversionFlags(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawLines(reinterpret_cast<const QLineF*>(stack[1].s_voidp),
                    stack[2].s_int);
                else o->drawLines(reinterpret_cast<const QLineF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawLines(reinterpret_cast<const QLine*>(stack[1].s_voidp),
                    stack[2].s_int);
                else o->drawLines(reinterpret_cast<const QLine*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                else o->drawPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->drawPixmap((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawPoints(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int);
                else o->drawPoints(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawPoints(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int);
                else o->drawPoints(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawPolygon(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int,
                    QPaintEngine::PolygonDrawMode(stack[3].s_int64));
                else o->drawPolygon(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int,
                    QPaintEngine::PolygonDrawMode(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawPolygon(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int,
                    QPaintEngine::PolygonDrawMode(stack[3].s_int64));
                else o->drawPolygon(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int,
                    QPaintEngine::PolygonDrawMode(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawRects(reinterpret_cast<const QRectF*>(stack[1].s_voidp),
                    stack[2].s_int);
                else o->drawRects(reinterpret_cast<const QRectF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawRects(reinterpret_cast<const QRect*>(stack[1].s_voidp),
                    stack[2].s_int);
                else o->drawRects(reinterpret_cast<const QRect*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawTextItem((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTextItem(*) >(stack[2].s_voidp)));
                else o->drawTextItem((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTextItem(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: if (isWrapper) ((PlastiQQPaintEngineWrapper*)o)->PlastiQParentCall_drawTiledPixmap((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)));
                else o->drawTiledPixmap((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: { bool _r = o->end();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->hasFeature(QPaintEngine::PaintEngineFeatures(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { QPaintDevice* _r = o->paintDevice();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPaintDevice"; } break;
        case 21: { QPainter* _r = o->painter();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPainter"; } break;
        case 22: o->setActive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: o->updateState((*reinterpret_cast< QPaintEngineState(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPaintEngine *o = reinterpret_cast<QPaintEngine*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPaintEngine::~PlastiQQPaintEngine() {
    QPaintEngine* o = reinterpret_cast<QPaintEngine*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
