#include "plastiqmethod.h"
#include "plastiqqpaintdevicewindow.h"

#include "gui/PlastiQQWindow/plastiqqwindow.h"
#include "gui/PlastiQQPaintDevice/plastiqqpaintdevice.h"
#include <QPaintDeviceWindow> 
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQPaintDeviceWindow::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintDeviceWindow::plastiqMethods = {
    { "update(QRect&)", { "update", "QRect&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update(QRegion&)", { "update", "QRegion&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "update()", { "update", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintDeviceWindow::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPaintDeviceWindow::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPaintDeviceWindow::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPaintDeviceWindow::plastiqInherits = { &PlastiQQWindow::plastiq_static_metaObject, &PlastiQQPaintDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPaintDeviceWindow::plastiq_static_objectType = PlastiQ::IsQWindow;
PlastiQMetaObject PlastiQQPaintDeviceWindow::plastiq_static_metaObject = {
    { &PlastiQQWindow::plastiq_static_metaObject, &plastiqInherits, "QPaintDeviceWindow", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPaintDeviceWindow::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPaintDeviceWindowWrapper : public QPaintDeviceWindow {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


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
        else return QPaintDeviceWindow::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QPaintDeviceWindow::paintEvent(event);
    }

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
        else return QPaintDeviceWindow::metric(metric);
    }

    int PlastiQParentCall_metric(PaintDeviceMetric metric) const {
        return QPaintDeviceWindow::metric(metric);
    }

};

void PlastiQQPaintDeviceWindow::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPaintDeviceWindowWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPaintDeviceWindow *p = new PlastiQQPaintDeviceWindow();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPaintDeviceWindow *p = new PlastiQQPaintDeviceWindow();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQWindow::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPaintDeviceWindow *o = sc ? Q_NULLPTR : reinterpret_cast<QPaintDeviceWindow*>(object->plastiq_data());

        switch(id) {
        case 0: o->update((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->update((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQPaintDeviceWindowWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 3: o->update();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQWindow::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPaintDeviceWindow *o = reinterpret_cast<QPaintDeviceWindow*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPaintDeviceWindow *o = reinterpret_cast<QPaintDeviceWindow*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPaintDeviceWindow *o = reinterpret_cast<QPaintDeviceWindow*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPaintDeviceWindow *o = reinterpret_cast<QPaintDeviceWindow*>(object->plastiq_data());

        if(className == "QWindow") {
            stack[0].s_voidp = static_cast<QWindow*>(o);
        }
        else if(className == "QPaintDevice") {
            stack[0].s_voidp = static_cast<QPaintDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPaintDeviceWindow::~PlastiQQPaintDeviceWindow() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
