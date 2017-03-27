#include "plastiqmethod.h"
#include "plastiqqabstractvideobuffer.h"

#include <QAbstractVideoBuffer> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoBuffer::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoBuffer::plastiqMethods = {
    { "handle()", { "handle", "", "QVariant", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handleType()", { "handleType", "", "HandleType", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(enum,int*,int*)", { "map", "MapMode,int*,int*", "uchar*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapMode()", { "mapMode", "", "MapMode", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapPlanes(enum,int*,int[4],uchar*[4])", { "mapPlanes", "MapMode,int*,int[4],uchar*[4]", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "release()", { "release", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unmap()", { "unmap", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoBuffer::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractVideoBuffer::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractVideoBuffer::plastiqConstants = {

    /* QAbstractVideoBuffer::HandleType */
   { "NoHandle", QAbstractVideoBuffer::NoHandle },
   { "GLTextureHandle", QAbstractVideoBuffer::GLTextureHandle },
   { "XvShmImageHandle", QAbstractVideoBuffer::XvShmImageHandle },
   { "CoreImageHandle", QAbstractVideoBuffer::CoreImageHandle },
   { "QPixmapHandle", QAbstractVideoBuffer::QPixmapHandle },
   { "EGLImageHandle", QAbstractVideoBuffer::EGLImageHandle },
   { "UserHandle", QAbstractVideoBuffer::UserHandle },

    /* QAbstractVideoBuffer::MapMode */
   { "NotMapped", QAbstractVideoBuffer::NotMapped },
   { "ReadOnly", QAbstractVideoBuffer::ReadOnly },
   { "WriteOnly", QAbstractVideoBuffer::WriteOnly },
   { "ReadWrite", QAbstractVideoBuffer::ReadWrite },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractVideoBuffer::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAbstractVideoBuffer::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAbstractVideoBuffer::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAbstractVideoBuffer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractVideoBuffer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractVideoBufferWrapper : public QAbstractVideoBuffer {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QVariant handle() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant handle()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAbstractVideoBuffer::handle();
    }

    QVariant PlastiQParentCall_handle() const {
        return QAbstractVideoBuffer::handle();
    }

    void release() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void release()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractVideoBuffer::release();
    }

    void PlastiQParentCall_release() {
        return QAbstractVideoBuffer::release();
    }

};

void PlastiQQAbstractVideoBuffer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractVideoBufferWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractVideoBuffer *p = new PlastiQQAbstractVideoBuffer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractVideoBuffer *p = new PlastiQQAbstractVideoBuffer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractVideoBuffer *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractVideoBuffer*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQAbstractVideoBufferWrapper*)o)->PlastiQParentCall_handle());
                else _r = new QVariant(o->handle());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->handleType(); // HACK for HandleType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { uchar* _r = o->map(QAbstractVideoBuffer::MapMode(stack[1].s_int64),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 3: { qint64 _r = o->mapMode(); // HACK for MapMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: /* o->mapPlanes(QAbstractVideoBuffer::MapMode(stack[1].s_int64),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_int[4],
                    UNSUPPORTED_TYPE_uchar*[4]) | ret: `int` */ break;
        case 5: if (isWrapper) ((PlastiQQAbstractVideoBufferWrapper*)o)->PlastiQParentCall_release();
                else o->release();
                stack[0].type = PlastiQ::Void; break;
        case 6: o->unmap();
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
        QAbstractVideoBuffer *o = reinterpret_cast<QAbstractVideoBuffer*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAbstractVideoBuffer::~PlastiQQAbstractVideoBuffer() {
    QAbstractVideoBuffer* o = reinterpret_cast<QAbstractVideoBuffer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
