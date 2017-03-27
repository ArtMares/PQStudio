#include "plastiqmethod.h"
#include "plastiqqaudiobuffer.h"

#include <QAudioBuffer> 
#include <QAudioFormat>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioBuffer::plastiqConstructors = {
    { "QAudioBuffer()", { "QAudioBuffer", "", "QAudioBuffer*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioBuffer(QAudioBuffer&)", { "QAudioBuffer", "QAudioBuffer&", "QAudioBuffer*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioBuffer(QByteArray,QAudioFormat&)", { "QAudioBuffer", "QByteArray&,QAudioFormat&", "QAudioBuffer*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioBuffer(QByteArray,QAudioFormat&,long)", { "QAudioBuffer", "QByteArray&,QAudioFormat&,qint64", "QAudioBuffer*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioBuffer(int,QAudioFormat&)", { "QAudioBuffer", "int,QAudioFormat&", "QAudioBuffer*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioBuffer(int,QAudioFormat&,long)", { "QAudioBuffer", "int,QAudioFormat&,qint64", "QAudioBuffer*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioBuffer::plastiqMethods = {
    { "byteCount()", { "byteCount", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constData()", { "constData", "", "const void*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "const void*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "qint64", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QAudioFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameCount()", { "frameCount", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sampleCount()", { "sampleCount", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startTime()", { "startTime", "", "qint64", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioBuffer::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioBuffer::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioBuffer::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioBuffer::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAudioBuffer::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAudioBuffer::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAudioBuffer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioBuffer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioBuffer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioBuffer *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAudioBuffer(); break;
        case 1: o = new QAudioBuffer((*reinterpret_cast< QAudioBuffer(*) >(stack[1].s_voidp))); break;
        case 2: o = new QAudioBuffer(stack[1].s_bytearray,
                    (*reinterpret_cast< QAudioFormat(*) >(stack[2].s_voidp))); break;
        case 3: o = new QAudioBuffer(stack[1].s_bytearray,
                    (*reinterpret_cast< QAudioFormat(*) >(stack[2].s_voidp)),
                    stack[3].s_long); break;
        case 4: o = new QAudioBuffer(stack[1].s_int,
                    (*reinterpret_cast< QAudioFormat(*) >(stack[2].s_voidp))); break;
        case 5: o = new QAudioBuffer(stack[1].s_int,
                    (*reinterpret_cast< QAudioFormat(*) >(stack[2].s_voidp)),
                    stack[3].s_long); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioBuffer *p = new PlastiQQAudioBuffer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioBuffer *p = new PlastiQQAudioBuffer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioBuffer *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioBuffer*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->byteCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { void* _r = const_cast<void*>(o->constData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "void"; } break;
        case 2: { void* _r = const_cast<void*>(o->data());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "void"; } break;
        case 3: { long _r = o->duration();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 4: { /* COPY OBJECT */
            QAudioFormat *_r = new QAudioFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { int _r = o->frameCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { int _r = o->sampleCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { long _r = o->startTime();
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
        QAudioBuffer *o = reinterpret_cast<QAudioBuffer*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAudioBuffer::~PlastiQQAudioBuffer() {
    QAudioBuffer* o = reinterpret_cast<QAudioBuffer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
