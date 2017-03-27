#include "plastiqmethod.h"
#include "plastiqqpdfwriter.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "gui/PlastiQQPagedPaintDevice/plastiqqpagedpaintdevice.h"
#include <QPdfWriter> 
#include <QString>
#include <QPageLayout>
#include <QPaintEngine>

QHash<QByteArray, PlastiQMethod> PlastiQQPdfWriter::plastiqConstructors = {
    { "QPdfWriter(QString)", { "QPdfWriter", "QString&", "QPdfWriter*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPdfWriter(QIODevice*)", { "QPdfWriter", "QIODevice*", "QPdfWriter*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPdfWriter::plastiqMethods = {
    { "creator()", { "creator", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageLayout()", { "pageLayout", "", "QPageLayout", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolution()", { "resolution", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCreator(QString)", { "setCreator", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageLayout(QPageLayout&)", { "setPageLayout", "QPageLayout&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageMargins(QMarginsF&)", { "setPageMargins", "QMarginsF&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageMargins(QMarginsF&,enum)", { "setPageMargins", "QMarginsF&,QPageLayout::Unit", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageOrientation(enum)", { "setPageOrientation", "QPageLayout::Orientation", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageSize(QPageSize&)", { "setPageSize", "QPageSize&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(int)", { "setResolution", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitle(QString)", { "setTitle", "QString&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintEngine()", { "paintEngine", "", "QPaintEngine*", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPdfWriter::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPdfWriter::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPdfWriter::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPdfWriter::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQPagedPaintDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPdfWriter::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPdfWriter::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QPdfWriter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPdfWriter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPdfWriterWrapper : public QPdfWriter {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQPdfWriterWrapper(const QString &filename)
         : QPdfWriter(filename),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQPdfWriterWrapper(QIODevice *device)
         : QPdfWriter(device),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QPaintEngine* paintEngine() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QPaintEngine* paintEngine()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QPaintEngine* _r = reinterpret_cast<QPaintEngine*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QPdfWriter::paintEngine();
    }

    QPaintEngine* PlastiQParentCall_paintEngine() const {
        return QPdfWriter::paintEngine();
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
        else return QPdfWriter::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QPdfWriter::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QPdfWriter::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QPdfWriter::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QPdfWriter::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QPdfWriter::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPdfWriter::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QPdfWriter::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPdfWriter::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QPdfWriter::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPdfWriter::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QPdfWriter::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPdfWriter::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QPdfWriter::disconnectNotify(signal);
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
        else return QPdfWriter::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QPdfWriter::timerEvent(event);
    }

    void setPageSize(PageSize size) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setPageSize(PageSize)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = size;
            stack[1].name = QByteArrayLiteral("PageSize");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPdfWriter::setPageSize(size);
    }

    void PlastiQParentCall_setPageSize(PageSize size) {
        return QPdfWriter::setPageSize(size);
    }

    void setPageSizeMM(const QSizeF &size) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setPageSizeMM(const QSizeF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QSizeF(size) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QSizeF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPdfWriter::setPageSizeMM(size);
    }

    void PlastiQParentCall_setPageSizeMM(const QSizeF &size) {
        return QPdfWriter::setPageSizeMM(size);
    }

};

void PlastiQQPdfWriter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPdfWriterWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQPdfWriterWrapper(stack[1].s_string); break;
        case 1: o = new PlastiQQPdfWriterWrapper(reinterpret_cast<QIODevice*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPdfWriter *p = new PlastiQQPdfWriter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPdfWriter *p = new PlastiQQPdfWriter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPdfWriter *o = sc ? Q_NULLPTR : reinterpret_cast<QPdfWriter*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->creator();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QPageLayout *_r = new QPageLayout(o->pageLayout());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPageLayout";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->resolution();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: o->setCreator(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->setPageLayout((*reinterpret_cast< QPageLayout(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->setPageMargins((*reinterpret_cast< QMarginsF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->setPageMargins((*reinterpret_cast< QMarginsF(*) >(stack[1].s_voidp)),
                    QPageLayout::Unit(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->setPageOrientation(QPageLayout::Orientation(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->setPageSize((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: o->setResolution(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 11: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { QPaintEngine* _r;
                if (isWrapper) _r = ((PlastiQQPdfWriterWrapper*)o)->PlastiQParentCall_paintEngine();
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPaintEngine"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPdfWriter *o = reinterpret_cast<QPdfWriter*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPdfWriter *o = reinterpret_cast<QPdfWriter*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPdfWriter *o = reinterpret_cast<QPdfWriter*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPdfWriter *o = reinterpret_cast<QPdfWriter*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QPagedPaintDevice") {
            stack[0].s_voidp = static_cast<QPagedPaintDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPdfWriter::~PlastiQQPdfWriter() {
    QPdfWriter* o = reinterpret_cast<QPdfWriter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
