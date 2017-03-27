#include "plastiqmethod.h"
#include "plastiqqpaintdevice.h"

#include <QPaintDevice> 
#include <QPaintEngine>

QHash<QByteArray, PlastiQMethod> PlastiQQPaintDevice::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintDevice::plastiqMethods = {
    { "colorCount()", { "colorCount", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "depth()", { "depth", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "devicePixelRatio()", { "devicePixelRatio", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "devicePixelRatioF()", { "devicePixelRatioF", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "heightMM()", { "heightMM", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalDpiX()", { "logicalDpiX", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalDpiY()", { "logicalDpiY", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintEngine()", { "paintEngine", "", "QPaintEngine*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintingActive()", { "paintingActive", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "physicalDpiX()", { "physicalDpiX", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "physicalDpiY()", { "physicalDpiY", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widthMM()", { "widthMM", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metric(enum)", { "metric", "PaintDeviceMetric", "int", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintDevice::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPaintDevice::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPaintDevice::plastiqConstants = {

    /* QPaintDevice::PaintDeviceMetric */
   { "PdmWidth", QPaintDevice::PdmWidth },
   { "PdmHeight", QPaintDevice::PdmHeight },
   { "PdmWidthMM", QPaintDevice::PdmWidthMM },
   { "PdmHeightMM", QPaintDevice::PdmHeightMM },
   { "PdmNumColors", QPaintDevice::PdmNumColors },
   { "PdmDepth", QPaintDevice::PdmDepth },
   { "PdmDpiX", QPaintDevice::PdmDpiX },
   { "PdmDpiY", QPaintDevice::PdmDpiY },
   { "PdmPhysicalDpiX", QPaintDevice::PdmPhysicalDpiX },
   { "PdmPhysicalDpiY", QPaintDevice::PdmPhysicalDpiY },
   { "PdmDevicePixelRatio", QPaintDevice::PdmDevicePixelRatio },
   { "PdmDevicePixelRatioScaled", QPaintDevice::PdmDevicePixelRatioScaled },

};

QVector<PlastiQMetaObject*> PlastiQQPaintDevice::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPaintDevice::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPaintDevice::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPaintDevice", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPaintDevice::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPaintDeviceWrapper : public QPaintDevice {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    int metric(PaintDeviceMetric metric) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int metric(PaintDeviceMetric)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = metric;
            stack[1].name = QByteArrayLiteral("PaintDeviceMetric");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QPaintDevice::metric(metric);
    }

    int PlastiQParentCall_metric(PaintDeviceMetric metric) const {
        return QPaintDevice::metric(metric);
    }

};

void PlastiQQPaintDevice::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPaintDeviceWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPaintDevice *p = new PlastiQQPaintDevice();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPaintDevice *p = new PlastiQQPaintDevice();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPaintDevice *o = sc ? Q_NULLPTR : reinterpret_cast<QPaintDevice*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->colorCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->depth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->devicePixelRatio();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { double _r = o->devicePixelRatioF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->heightMM();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->logicalDpiX();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->logicalDpiY();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { QPaintEngine* _r = o->paintEngine();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPaintEngine"; } break;
        case 9: { bool _r = o->paintingActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { int _r = o->physicalDpiX();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { int _r = o->physicalDpiY();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->width();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->widthMM();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r;
                if (isWrapper) _r = ((PlastiQQPaintDeviceWrapper*)o)->PlastiQParentCall_metric(QPaintDevice::PaintDeviceMetric(stack[1].s_int64));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QPaintDevice *o = reinterpret_cast<QPaintDevice*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPaintDevice::~PlastiQQPaintDevice() {
    QPaintDevice* o = reinterpret_cast<QPaintDevice*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
