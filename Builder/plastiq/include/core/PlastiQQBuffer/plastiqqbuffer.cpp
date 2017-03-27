#include "plastiqmethod.h"
#include "plastiqqbuffer.h"

#include "core/PlastiQQIODevice/plastiqqiodevice.h"
#include <QBuffer> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQBuffer::plastiqConstructors = {
    { "QBuffer()", { "QBuffer", "", "QBuffer*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBuffer(QObject*)", { "QBuffer", "QObject*", "QBuffer*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBuffer(QByteArray*)", { "QBuffer", "QByteArray*", "QBuffer*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBuffer(QByteArray*,QObject*)", { "QBuffer", "QByteArray*,QObject*", "QBuffer*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBuffer::plastiqMethods = {
    { "buffer()", { "buffer", "", "QByteArray&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "const QByteArray&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBuffer(QByteArray*)", { "setBuffer", "QByteArray*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(QByteArray)", { "setData", "QByteArray&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(const char*,int)", { "setData", "char*,int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readData(char*,long)", { "readData", "char*,qint64", "qint64", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "writeData(const char*,long)", { "writeData", "char*,qint64", "qint64", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBuffer::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQBuffer::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQBuffer::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBuffer::plastiqInherits = { &PlastiQQIODevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQBuffer::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQBuffer::plastiq_static_metaObject = {
    { &PlastiQQIODevice::plastiq_static_metaObject, &plastiqInherits, "QBuffer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBuffer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQBufferWrapper : public QBuffer {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQBufferWrapper(QObject *parent = Q_NULLPTR)
         : QBuffer(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQBufferWrapper(QByteArray *byteArray, QObject *parent = Q_NULLPTR)
         : QBuffer(byteArray,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    qint64 readData(char *data, qint64 len) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readData(char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(data);
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = len;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QBuffer::readData(data,len);
    }

    qint64 PlastiQParentCall_readData(char *data, qint64 len) {
        return QBuffer::readData(data,len);
    }

    qint64 writeData(const char *data, qint64 len) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 writeData(const char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<char*>(data));
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = len;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QBuffer::writeData(data,len);
    }

    qint64 PlastiQParentCall_writeData(const char *data, qint64 len) {
        return QBuffer::writeData(data,len);
    }

};

void PlastiQQBuffer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQBufferWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQBufferWrapper(); break;
        case 1: o = new PlastiQQBufferWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQBufferWrapper(reinterpret_cast<QByteArray*>(stack[1].s_voidp)); break;
        case 3: o = new PlastiQQBufferWrapper(reinterpret_cast<QByteArray*>(stack[1].s_voidp),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQBuffer *p = new PlastiQQBuffer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBuffer *p = new PlastiQQBuffer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBuffer *o = sc ? Q_NULLPTR : reinterpret_cast<QBuffer*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->buffer());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QByteArray *_r = new QByteArray(o->data());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QByteArray";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->setBuffer(reinterpret_cast<QByteArray*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setData(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: { long _r;
                if (isWrapper) _r = ((PlastiQQBufferWrapper*)o)->PlastiQParentCall_readData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 6: { long _r;
                if (isWrapper) _r = ((PlastiQQBufferWrapper*)o)->PlastiQParentCall_writeData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;

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
        QBuffer *o = reinterpret_cast<QBuffer*>(object->plastiq_data());

        if(className == "QIODevice") {
            stack[0].s_voidp = static_cast<QIODevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQBuffer::~PlastiQQBuffer() {
    QBuffer* o = reinterpret_cast<QBuffer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
