#include "plastiqmethod.h"
#include "plastiqqprocess.h"

#include "core/PlastiQQIODevice/plastiqqiodevice.h"
#include <QProcess> 
#include <QStringList>
#include <QString>
#include <QProcessEnvironment>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQProcess::plastiqConstructors = {
    { "QProcess()", { "QProcess", "", "QProcess*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProcess(QObject*)", { "QProcess", "QObject*", "QProcess*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProcess::plastiqMethods = {
    { "arguments()", { "arguments", "", "QStringList", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closeReadChannel(enum)", { "closeReadChannel", "ProcessChannel", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closeWriteChannel()", { "closeWriteChannel", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createProcessArgumentsModifier()", { "createProcessArgumentsModifier", "", "CreateProcessArgumentModifier", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "QProcess::ProcessError", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exitCode()", { "exitCode", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exitStatus()", { "exitStatus", "", "QProcess::ExitStatus", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputChannelMode()", { "inputChannelMode", "", "InputChannelMode", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeArguments()", { "nativeArguments", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processChannelMode()", { "processChannelMode", "", "ProcessChannelMode", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processEnvironment()", { "processEnvironment", "", "QProcessEnvironment", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processId()", { "processId", "", "qint64", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "program()", { "program", "", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readAllStandardError()", { "readAllStandardError", "", "QByteArray", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readAllStandardOutput()", { "readAllStandardOutput", "", "QByteArray", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readChannel()", { "readChannel", "", "ProcessChannel", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setArguments(QStringList&)", { "setArguments", "QStringList&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCreateProcessArgumentsModifier(CreateProcessArgumentModifier)", { "setCreateProcessArgumentsModifier", "CreateProcessArgumentModifier", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInputChannelMode(enum)", { "setInputChannelMode", "InputChannelMode", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNativeArguments(QString)", { "setNativeArguments", "QString&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProcessChannelMode(enum)", { "setProcessChannelMode", "ProcessChannelMode", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProcessEnvironment(QProcessEnvironment&)", { "setProcessEnvironment", "QProcessEnvironment&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProgram(QString)", { "setProgram", "QString&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReadChannel(enum)", { "setReadChannel", "ProcessChannel", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStandardErrorFile(QString)", { "setStandardErrorFile", "QString&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStandardErrorFile(QString,OpenMode)", { "setStandardErrorFile", "QString&,OpenMode", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStandardInputFile(QString)", { "setStandardInputFile", "QString&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStandardOutputFile(QString)", { "setStandardOutputFile", "QString&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStandardOutputFile(QString,OpenMode)", { "setStandardOutputFile", "QString&,OpenMode", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStandardOutputProcess(QProcess*)", { "setStandardOutputProcess", "QProcess*", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWorkingDirectory(QString)", { "setWorkingDirectory", "QString&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QString,QStringList&)", { "start", "QString&,QStringList&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QString,QStringList&,OpenMode)", { "start", "QString&,QStringList&,OpenMode", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QString)", { "start", "QString&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QString,OpenMode)", { "start", "QString&,OpenMode", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(OpenMode)", { "start", "OpenMode", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QProcess::ProcessState", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForFinished()", { "waitForFinished", "", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForFinished(int)", { "waitForFinished", "int", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForStarted()", { "waitForStarted", "", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForStarted(int)", { "waitForStarted", "int", "bool", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "workingDirectory()", { "workingDirectory", "", "QString", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "execute(QString,QStringList&)", { "execute", "QString&,QStringList&", "int", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "execute(QString)", { "execute", "QString&", "int", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "nullDevice()", { "nullDevice", "", "QString", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "startDetached(QString,QStringList&)", { "startDetached", "QString&,QStringList&", "bool", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "startDetached(QString,QStringList&,QString)", { "startDetached", "QString&,QStringList&,QString&", "bool", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "startDetached(QString,QStringList&,QString,qint64*)", { "startDetached", "QString&,QStringList&,QString&,qint64*", "bool", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "startDetached(QString)", { "startDetached", "QString&", "bool", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "systemEnvironment()", { "systemEnvironment", "", "QStringList", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setProcessState(enum)", { "setProcessState", "ProcessState", "void", 51, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setupChildProcess()", { "setupChildProcess", "", "void", 52, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "readData(char*,long)", { "readData", "char*,qint64", "qint64", 53, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "writeData(const char*,long)", { "writeData", "char*,qint64", "qint64", 54, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "kill()", { "kill", "", "void", 55, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "terminate()", { "terminate", "", "void", 56, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProcess::plastiqSignals = {
    { "errorOccurred(enum)", { "errorOccurred", "QProcess::ProcessError", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished(int,enum)", { "finished", "int,QProcess::ExitStatus", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "readyReadStandardError()", { "readyReadStandardError", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "readyReadStandardOutput()", { "readyReadStandardOutput", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "started()", { "started", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QProcess::ProcessState", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished(int)", { "finished", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQProcess::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQProcess::plastiqConstants = {

    /* QProcess::ExitStatus */
   { "NormalExit", QProcess::NormalExit },
   { "CrashExit", QProcess::CrashExit },

    /* QProcess::InputChannelMode */
   { "ManagedInputChannel", QProcess::ManagedInputChannel },
   { "ForwardedInputChannel", QProcess::ForwardedInputChannel },

    /* QProcess::ProcessChannel */
   { "StandardOutput", QProcess::StandardOutput },
   { "StandardError", QProcess::StandardError },

    /* QProcess::ProcessChannelMode */
   { "SeparateChannels", QProcess::SeparateChannels },
   { "MergedChannels", QProcess::MergedChannels },
   { "ForwardedChannels", QProcess::ForwardedChannels },
   { "ForwardedOutputChannel", QProcess::ForwardedOutputChannel },
   { "ForwardedErrorChannel", QProcess::ForwardedErrorChannel },

    /* QProcess::ProcessError */
   { "FailedToStart", QProcess::FailedToStart },
   { "Crashed", QProcess::Crashed },
   { "Timedout", QProcess::Timedout },
   { "ReadError", QProcess::ReadError },
   { "WriteError", QProcess::WriteError },
   { "UnknownError", QProcess::UnknownError },

    /* QProcess::ProcessState */
   { "NotRunning", QProcess::NotRunning },
   { "Starting", QProcess::Starting },
   { "Running", QProcess::Running },

};

QVector<PlastiQMetaObject*> PlastiQQProcess::plastiqInherits = { &PlastiQQIODevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQProcess::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQProcess::plastiq_static_metaObject = {
    { &PlastiQQIODevice::plastiq_static_metaObject, &plastiqInherits, "QProcess", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQProcess::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQProcessWrapper : public QProcess {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQProcessWrapper(QObject *parent = Q_NULLPTR)
         : QProcess(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void setupChildProcess() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setupChildProcess()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QProcess::setupChildProcess();
    }

    void PlastiQParentCall_setupChildProcess() {
        return QProcess::setupChildProcess();
    }

    qint64 readData(char *data, qint64 maxlen) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readData(char*,qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(data);
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_long = maxlen;
            stack[2].name = QByteArrayLiteral("qint64");
            stack[2].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QProcess::readData(data,maxlen);
    }

    qint64 PlastiQParentCall_readData(char *data, qint64 maxlen) {
        return QProcess::readData(data,maxlen);
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
        else return QProcess::writeData(data,len);
    }

    qint64 PlastiQParentCall_writeData(const char *data, qint64 len) {
        return QProcess::writeData(data,len);
    }

    bool atEnd() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool atEnd()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QProcess::atEnd();
    }

    bool PlastiQParentCall_atEnd() const {
        return QProcess::atEnd();
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
        else return QProcess::bytesAvailable();
    }

    qint64 PlastiQParentCall_bytesAvailable() const {
        return QProcess::bytesAvailable();
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
        else return QProcess::bytesToWrite();
    }

    qint64 PlastiQParentCall_bytesToWrite() const {
        return QProcess::bytesToWrite();
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
        else return QProcess::canReadLine();
    }

    bool PlastiQParentCall_canReadLine() const {
        return QProcess::canReadLine();
    }

    void close() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void close()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QProcess::close();
    }

    void PlastiQParentCall_close() {
        return QProcess::close();
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
        else return QProcess::isSequential();
    }

    bool PlastiQParentCall_isSequential() const {
        return QProcess::isSequential();
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
        else return QProcess::open(mode);
    }

    bool PlastiQParentCall_open(OpenMode mode) {
        return QProcess::open(mode);
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
        else return QProcess::pos();
    }

    qint64 PlastiQParentCall_pos() const {
        return QProcess::pos();
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
        else return QProcess::reset();
    }

    bool PlastiQParentCall_reset() {
        return QProcess::reset();
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
        else return QProcess::seek(pos);
    }

    bool PlastiQParentCall_seek(qint64 pos) {
        return QProcess::seek(pos);
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
        else return QProcess::size();
    }

    qint64 PlastiQParentCall_size() const {
        return QProcess::size();
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
        else return QProcess::waitForBytesWritten(msecs);
    }

    bool PlastiQParentCall_waitForBytesWritten(int msecs) {
        return QProcess::waitForBytesWritten(msecs);
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
        else return QProcess::waitForReadyRead(msecs);
    }

    bool PlastiQParentCall_waitForReadyRead(int msecs) {
        return QProcess::waitForReadyRead(msecs);
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
        else return QProcess::readLineData(data,maxSize);
    }

    qint64 PlastiQParentCall_readLineData(char *data, qint64 maxSize) {
        return QProcess::readLineData(data,maxSize);
    }

};

void PlastiQQProcess::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQProcessWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQProcessWrapper(); break;
        case 1: o = new PlastiQQProcessWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQProcess *p = new PlastiQQProcess();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQProcess *p = new PlastiQQProcess();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 57) {
            id -= 57;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QProcess *o = sc ? Q_NULLPTR : reinterpret_cast<QProcess*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->arguments());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->closeReadChannel(QProcess::ProcessChannel(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->closeWriteChannel();
                stack[0].type = PlastiQ::Void; break;
        case 3: /* o->createProcessArgumentsModifier() | ret: `CreateProcessArgumentModifier` (INTERNAL CLASS) */ break;
        case 4: { qint64 _r = o->error(); // HACK for QProcess::ProcessError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { int _r = o->exitCode();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { qint64 _r = o->exitStatus(); // HACK for QProcess::ExitStatus 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { qint64 _r = o->inputChannelMode(); // HACK for InputChannelMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { QString _r = o->nativeArguments();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { qint64 _r = o->processChannelMode(); // HACK for ProcessChannelMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { /* COPY OBJECT */
            QProcessEnvironment *_r = new QProcessEnvironment(o->processEnvironment());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QProcessEnvironment";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { long _r = o->processId();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 12: { QString _r = o->program();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { QByteArray _r = o->readAllStandardError();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 14: { QByteArray _r = o->readAllStandardOutput();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 15: { qint64 _r = o->readChannel(); // HACK for ProcessChannel 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: o->setArguments((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setCreateProcessArgumentsModifier((*reinterpret_cast< QProcess::CreateProcessArgumentModifier(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setInputChannelMode(QProcess::InputChannelMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setNativeArguments(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setProcessChannelMode(QProcess::ProcessChannelMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setProcessEnvironment((*reinterpret_cast< QProcessEnvironment(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setProgram(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setReadChannel(QProcess::ProcessChannel(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setStandardErrorFile(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 25: /* o->setStandardErrorFile(stack[1].s_string,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 26: o->setStandardInputFile(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setStandardOutputFile(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 28: /* o->setStandardOutputFile(stack[1].s_string,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 29: o->setStandardOutputProcess(reinterpret_cast<QProcess*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setWorkingDirectory(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->start(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 32: /* o->start(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 33: o->start(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 34: /* o->start(stack[1].s_string,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 35: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 36: /* o->start(UNSUPPORTED_TYPE_OpenMode) | ret: `void` */ break;
        case 37: { qint64 _r = o->state(); // HACK for QProcess::ProcessState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 38: { bool _r = o->waitForFinished();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: { bool _r = o->waitForFinished(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { bool _r = o->waitForStarted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { bool _r = o->waitForStarted(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: { QString _r = o->workingDirectory();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 43: { int _r = sc ? QProcess::execute(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))) : o->execute(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 44: { int _r = sc ? QProcess::execute(stack[1].s_string) : o->execute(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 45: { QString _r = sc ? QProcess::nullDevice() : o->nullDevice();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 46: { bool _r = sc ? QProcess::startDetached(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))) : o->startDetached(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: { bool _r = sc ? QProcess::startDetached(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    stack[3].s_string) : o->startDetached(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    stack[3].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: { bool _r = sc ? QProcess::startDetached(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    stack[3].s_string,
                    reinterpret_cast<qint64*>(stack[4].s_voidp)) : o->startDetached(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    stack[3].s_string,
                    reinterpret_cast<qint64*>(stack[4].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 49: { bool _r = sc ? QProcess::startDetached(stack[1].s_string) : o->startDetached(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QProcess::systemEnvironment()) : new QStringList(o->systemEnvironment());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 51: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 52: if (isWrapper) ((PlastiQQProcessWrapper*)o)->PlastiQParentCall_setupChildProcess();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 53: { long _r;
                if (isWrapper) _r = ((PlastiQQProcessWrapper*)o)->PlastiQParentCall_readData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 54: { long _r;
                if (isWrapper) _r = ((PlastiQQProcessWrapper*)o)->PlastiQParentCall_writeData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 55: o->kill();
                stack[0].type = PlastiQ::Void; break;
        case 56: o->terminate();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QProcess *o = reinterpret_cast<QProcess*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QProcess::errorOccurred,
            [=](QProcess::ProcessError arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QProcess::ProcessError";
                PlastiQ_activate(sender, "errorOccurred", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QProcess::*)(int,QProcess::ExitStatus)>(&QProcess::finished),
            [=](int arg0, QProcess::ExitStatus arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QProcess::ExitStatus";
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QProcess::readyReadStandardError,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "readyReadStandardError", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QProcess::readyReadStandardOutput,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "readyReadStandardOutput", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QProcess::started,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "started", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QProcess::stateChanged,
            [=](QProcess::ProcessState arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QProcess::ProcessState";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, static_cast<void (QProcess::*)(int)>(&QProcess::finished),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QProcess *o = reinterpret_cast<QProcess*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QProcess *o = reinterpret_cast<QProcess*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QProcess *o = reinterpret_cast<QProcess*>(object->plastiq_data());

        if(className == "QIODevice") {
            stack[0].s_voidp = static_cast<QIODevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQProcess::~PlastiQQProcess() {
    QProcess* o = reinterpret_cast<QProcess*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
