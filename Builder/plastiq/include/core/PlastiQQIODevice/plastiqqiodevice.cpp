#include "plastiqmethod.h"
#include "plastiqqiodevice.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QIODevice> 
#include <QString>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQIODevice::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQIODevice::plastiqMethods = {
    { "atEnd()", { "atEnd", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesAvailable()", { "bytesAvailable", "", "qint64", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesToWrite()", { "bytesToWrite", "", "qint64", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canReadLine()", { "canReadLine", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "close()", { "close", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "commitTransaction()", { "commitTransaction", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentReadChannel()", { "currentReadChannel", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentWriteChannel()", { "currentWriteChannel", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getChar(char*)", { "getChar", "char*", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isOpen()", { "isOpen", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadable()", { "isReadable", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSequential()", { "isSequential", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTextModeEnabled()", { "isTextModeEnabled", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTransactionStarted()", { "isTransactionStarted", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWritable()", { "isWritable", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(enum)", { "open", "OpenMode", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openMode()", { "openMode", "", "OpenMode", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peek(char*,long)", { "peek", "char*,qint64", "qint64", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peek(long)", { "peek", "qint64", "QByteArray", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "qint64", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "putChar(char)", { "putChar", "char", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(char*,long)", { "read", "char*,qint64", "qint64", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(long)", { "read", "qint64", "QByteArray", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readAll()", { "readAll", "", "QByteArray", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readChannelCount()", { "readChannelCount", "", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readLine(char*,long)", { "readLine", "char*,qint64", "qint64", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readLine()", { "readLine", "", "QByteArray", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readLine(long)", { "readLine", "qint64", "QByteArray", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reset()", { "reset", "", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rollbackTransaction()", { "rollbackTransaction", "", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "seek(long)", { "seek", "qint64", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentReadChannel(int)", { "setCurrentReadChannel", "int", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentWriteChannel(int)", { "setCurrentWriteChannel", "int", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextModeEnabled(bool)", { "setTextModeEnabled", "bool", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "qint64", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startTransaction()", { "startTransaction", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ungetChar(char)", { "ungetChar", "char", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForBytesWritten(int)", { "waitForBytesWritten", "int", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForReadyRead(int)", { "waitForReadyRead", "int", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(const char*,long)", { "write", "char*,qint64", "qint64", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(const char*)", { "write", "char*", "qint64", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QByteArray)", { "write", "QByteArray&", "qint64", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "writeChannelCount()", { "writeChannelCount", "", "int", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readData(char*,long)", { "readData", "char*,qint64", "qint64", 44, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "readLineData(char*,long)", { "readLineData", "char*,qint64", "qint64", 45, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setErrorString(QString)", { "setErrorString", "QString&", "void", 46, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setOpenMode(enum)", { "setOpenMode", "OpenMode", "void", 47, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "writeData(const char*,long)", { "writeData", "char*,qint64", "qint64", 48, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIODevice::plastiqSignals = {
    { "aboutToClose()", { "aboutToClose", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "bytesWritten(long)", { "bytesWritten", "qint64", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "channelBytesWritten(int,long)", { "channelBytesWritten", "int,qint64", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "channelReadyRead(int)", { "channelReadyRead", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "readChannelFinished()", { "readChannelFinished", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "readyRead()", { "readyRead", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQIODevice::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQIODevice::plastiqConstants = {

    /* QIODevice::OpenModeFlag */
   { "NotOpen", QIODevice::NotOpen },
   { "ReadOnly", QIODevice::ReadOnly },
   { "WriteOnly", QIODevice::WriteOnly },
   { "ReadWrite", QIODevice::ReadWrite },
   { "Append", QIODevice::Append },
   { "Truncate", QIODevice::Truncate },
   { "Text", QIODevice::Text },
   { "Unbuffered", QIODevice::Unbuffered },

};

QVector<PlastiQMetaObject*> PlastiQQIODevice::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQIODevice::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQIODevice::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QIODevice", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQIODevice::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQIODeviceWrapper : public QIODevice {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    bool atEnd() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool atEnd()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QIODevice::atEnd();
    }

    bool PlastiQParentCall_atEnd() const {
        return QIODevice::atEnd();
    }

    qint64 bytesAvailable() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 bytesAvailable()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QIODevice::bytesAvailable();
    }

    qint64 PlastiQParentCall_bytesAvailable() const {
        return QIODevice::bytesAvailable();
    }

    qint64 bytesToWrite() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 bytesToWrite()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QIODevice::bytesToWrite();
    }

    qint64 PlastiQParentCall_bytesToWrite() const {
        return QIODevice::bytesToWrite();
    }

    bool canReadLine() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool canReadLine()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QIODevice::canReadLine();
    }

    bool PlastiQParentCall_canReadLine() const {
        return QIODevice::canReadLine();
    }

    void close() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void close()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QIODevice::close();
    }

    void PlastiQParentCall_close() {
        return QIODevice::close();
    }

    bool isSequential() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isSequential()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QIODevice::isSequential();
    }

    bool PlastiQParentCall_isSequential() const {
        return QIODevice::isSequential();
    }

    bool open(OpenMode mode) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool open(OpenMode)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = mode;
            stack[1].name = QByteArrayLiteral("OpenMode");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QIODevice::open(mode);
    }

    bool PlastiQParentCall_open(OpenMode mode) {
        return QIODevice::open(mode);
    }

    qint64 pos() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 pos()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QIODevice::pos();
    }

    qint64 PlastiQParentCall_pos() const {
        return QIODevice::pos();
    }

    bool reset() override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool reset()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QIODevice::reset();
    }

    bool PlastiQParentCall_reset() {
        return QIODevice::reset();
    }

    bool seek(qint64 pos) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool seek(qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_long = pos;
            stack[1].name = QByteArrayLiteral("qint64");
            stack[1].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QIODevice::seek(pos);
    }

    bool PlastiQParentCall_seek(qint64 pos) {
        return QIODevice::seek(pos);
    }

    qint64 size() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 size()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QIODevice::size();
    }

    qint64 PlastiQParentCall_size() const {
        return QIODevice::size();
    }

    bool waitForBytesWritten(int msecs) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool waitForBytesWritten(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = msecs;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QIODevice::waitForBytesWritten(msecs);
    }

    bool PlastiQParentCall_waitForBytesWritten(int msecs) {
        return QIODevice::waitForBytesWritten(msecs);
    }

    bool waitForReadyRead(int msecs) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool waitForReadyRead(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = msecs;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QIODevice::waitForReadyRead(msecs);
    }

    bool PlastiQParentCall_waitForReadyRead(int msecs) {
        return QIODevice::waitForReadyRead(msecs);
    }

    qint64 readLineData(char *data, qint64 maxSize) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readLineData(char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(data);
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = maxSize;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QIODevice::readLineData(data,maxSize);
    }

    qint64 PlastiQParentCall_readLineData(char *data, qint64 maxSize) {
        return QIODevice::readLineData(data,maxSize);
    }

};

void PlastiQQIODevice::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQIODeviceWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQIODevice *p = new PlastiQQIODevice();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQIODevice *p = new PlastiQQIODevice();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 49) {
            id -= 49;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QIODevice *o = sc ? Q_NULLPTR : reinterpret_cast<QIODevice*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_atEnd();
                else _r = o->atEnd();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { long _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_bytesAvailable();
                else _r = o->bytesAvailable();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 2: { long _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_bytesToWrite();
                else _r = o->bytesToWrite();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_canReadLine();
                else _r = o->canReadLine();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: if (isWrapper) ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_close();
                else o->close();
                stack[0].type = PlastiQ::Void; break;
        case 5: o->commitTransaction();
                stack[0].type = PlastiQ::Void; break;
        case 6: { int _r = o->currentReadChannel();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->currentWriteChannel();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { bool _r = o->getChar(reinterpret_cast<char*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isOpen();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isReadable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_isSequential();
                else _r = o->isSequential();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->isTextModeEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isTransactionStarted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isWritable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_open(QIODevice::OpenMode(stack[1].s_int64));
                else _r = o->open(QIODevice::OpenMode(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { qint64 _r = o->openMode(); // HACK for OpenMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 18: { long _r = o->peek(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 19: { QByteArray _r = o->peek(stack[1].s_long);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 20: { long _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_pos();
                else _r = o->pos();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 21: { bool _r = o->putChar(stack[1].s_char);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { long _r = o->read(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 23: { QByteArray _r = o->read(stack[1].s_long);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 24: { QByteArray _r = o->readAll();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 25: { int _r = o->readChannelCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { long _r = o->readLine(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 27: { QByteArray _r = o->readLine();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 28: { QByteArray _r = o->readLine(stack[1].s_long);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 29: { bool _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_reset();
                else _r = o->reset();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: o->rollbackTransaction();
                stack[0].type = PlastiQ::Void; break;
        case 31: { bool _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_seek(stack[1].s_long);
                else _r = o->seek(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: o->setCurrentReadChannel(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setCurrentWriteChannel(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setTextModeEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 35: { long _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_size();
                else _r = o->size();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 36: o->startTransaction();
                stack[0].type = PlastiQ::Void; break;
        case 37: o->ungetChar(stack[1].s_char);
                stack[0].type = PlastiQ::Void; break;
        case 38: { bool _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_waitForBytesWritten(stack[1].s_int);
                else _r = o->waitForBytesWritten(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: { bool _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_waitForReadyRead(stack[1].s_int);
                else _r = o->waitForReadyRead(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { long _r = o->write(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 41: { long _r = o->write(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 42: { long _r = o->write(stack[1].s_bytearray);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 43: { int _r = o->writeChannelCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 44: { long _r; stack[0].type = PlastiQ::Error; } break;
        case 45: { long _r;
                if (isWrapper) _r = ((PlastiQQIODeviceWrapper*)o)->PlastiQParentCall_readLineData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 46: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 47: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 48: { long _r; stack[0].type = PlastiQ::Error; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QIODevice *o = reinterpret_cast<QIODevice*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QIODevice::aboutToClose,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "aboutToClose", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QIODevice::bytesWritten,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "bytesWritten", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QIODevice::channelBytesWritten,
            [=](int arg0, qint64 arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_long = arg1;
                    cstack[1].type = PlastiQ::Long; cstack[1].name = "qint64";
                PlastiQ_activate(sender, "channelBytesWritten", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QIODevice::channelReadyRead,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "channelReadyRead", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QIODevice::readChannelFinished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "readChannelFinished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QIODevice::readyRead,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "readyRead", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QIODevice *o = reinterpret_cast<QIODevice*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QIODevice *o = reinterpret_cast<QIODevice*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QIODevice *o = reinterpret_cast<QIODevice*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQIODevice::~PlastiQQIODevice() {
    QIODevice* o = reinterpret_cast<QIODevice*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
