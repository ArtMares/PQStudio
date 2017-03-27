#include "plastiqmethod.h"
#include "plastiqqdatastream.h"

#include <QDataStream> 
#include <QIODevice>

QHash<QByteArray, PlastiQMethod> PlastiQQDataStream::plastiqConstructors = {
    { "QDataStream()", { "QDataStream", "", "QDataStream*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDataStream(QIODevice*)", { "QDataStream", "QIODevice*", "QDataStream*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDataStream(QByteArray*,enum)", { "QDataStream", "QByteArray*,QIODevice::OpenMode", "QDataStream*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDataStream(QByteArray)", { "QDataStream", "QByteArray&", "QDataStream*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDataStream::plastiqMethods = {
    { "abortTransaction()", { "abortTransaction", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "atEnd()", { "atEnd", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "byteOrder()", { "byteOrder", "", "ByteOrder", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "commitTransaction()", { "commitTransaction", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QIODevice*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "floatingPointPrecision()", { "floatingPointPrecision", "", "FloatingPointPrecision", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readRawData(char*,int)", { "readRawData", "char*,int", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetStatus()", { "resetStatus", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rollbackTransaction()", { "rollbackTransaction", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setByteOrder(enum)", { "setByteOrder", "ByteOrder", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevice(QIODevice*)", { "setDevice", "QIODevice*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFloatingPointPrecision(enum)", { "setFloatingPointPrecision", "FloatingPointPrecision", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatus(enum)", { "setStatus", "Status", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVersion(int)", { "setVersion", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "skipRawData(int)", { "skipRawData", "int", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startTransaction()", { "startTransaction", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "Status", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "version()", { "version", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "writeRawData(const char*,int)", { "writeRawData", "char*,int", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDataStream::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDataStream::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDataStream::plastiqConstants = {

    /* QDataStream::ByteOrder */
   { "BigEndian", QDataStream::BigEndian },
   { "LittleEndian", QDataStream::LittleEndian },

    /* QDataStream::FloatingPointPrecision */
   { "SinglePrecision", QDataStream::SinglePrecision },
   { "DoublePrecision", QDataStream::DoublePrecision },

    /* QDataStream::Status */
   { "Ok", QDataStream::Ok },
   { "ReadPastEnd", QDataStream::ReadPastEnd },
   { "ReadCorruptData", QDataStream::ReadCorruptData },
   { "WriteFailed", QDataStream::WriteFailed },

    /* QDataStream::Version */
   { "Qt_1_0", QDataStream::Qt_1_0 },
   { "Qt_2_0", QDataStream::Qt_2_0 },
   { "Qt_2_1", QDataStream::Qt_2_1 },
   { "Qt_3_0", QDataStream::Qt_3_0 },
   { "Qt_3_1", QDataStream::Qt_3_1 },
   { "Qt_3_3", QDataStream::Qt_3_3 },
   { "Qt_4_0", QDataStream::Qt_4_0 },
   { "Qt_4_1", QDataStream::Qt_4_1 },
   { "Qt_4_2", QDataStream::Qt_4_2 },
   { "Qt_4_3", QDataStream::Qt_4_3 },
   { "Qt_4_4", QDataStream::Qt_4_4 },
   { "Qt_4_5", QDataStream::Qt_4_5 },
   { "Qt_4_6", QDataStream::Qt_4_6 },
   { "Qt_4_7", QDataStream::Qt_4_7 },
   { "Qt_4_8", QDataStream::Qt_4_8 },
   { "Qt_4_9", QDataStream::Qt_4_9 },
   { "Qt_5_0", QDataStream::Qt_5_0 },
   { "Qt_5_1", QDataStream::Qt_5_1 },
   { "Qt_5_2", QDataStream::Qt_5_2 },
   { "Qt_5_3", QDataStream::Qt_5_3 },
   { "Qt_5_4", QDataStream::Qt_5_4 },
   { "Qt_5_5", QDataStream::Qt_5_5 },
   { "Qt_5_6", QDataStream::Qt_5_6 },
   { "Qt_5_7", QDataStream::Qt_5_7 },
   { "Qt_5_8", QDataStream::Qt_5_8 },
   { "Qt_DefaultCompiledVersion", QDataStream::Qt_DefaultCompiledVersion },

};

QVector<PlastiQMetaObject*> PlastiQQDataStream::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDataStream::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDataStream::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDataStream", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDataStream::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDataStream::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDataStream *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDataStream(); break;
        case 1: o = new QDataStream(reinterpret_cast<QIODevice*>(stack[1].s_voidp)); break;
        case 2: o = new QDataStream(reinterpret_cast<QByteArray*>(stack[1].s_voidp),
                    QIODevice::OpenMode(stack[2].s_int64)); break;
        case 3: o = new QDataStream(stack[1].s_bytearray); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDataStream *p = new PlastiQQDataStream();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDataStream *p = new PlastiQQDataStream();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 19) {
            id -= 19;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDataStream *o = sc ? Q_NULLPTR : reinterpret_cast<QDataStream*>(object->plastiq_data());

        switch(id) {
        case 0: o->abortTransaction();
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r = o->atEnd();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { qint64 _r = o->byteOrder(); // HACK for ByteOrder 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { bool _r = o->commitTransaction();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { QIODevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 5: { qint64 _r = o->floatingPointPrecision(); // HACK for FloatingPointPrecision 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { int _r = o->readRawData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: o->resetStatus();
                stack[0].type = PlastiQ::Void; break;
        case 8: o->rollbackTransaction();
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setByteOrder(QDataStream::ByteOrder(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setFloatingPointPrecision(QDataStream::FloatingPointPrecision(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setStatus(QDataStream::Status(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setVersion(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: { int _r = o->skipRawData(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: o->startTransaction();
                stack[0].type = PlastiQ::Void; break;
        case 16: { qint64 _r = o->status(); // HACK for Status 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { int _r = o->version();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { int _r = o->writeRawData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
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
        QDataStream *o = reinterpret_cast<QDataStream*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDataStream::~PlastiQQDataStream() {
    QDataStream* o = reinterpret_cast<QDataStream*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
