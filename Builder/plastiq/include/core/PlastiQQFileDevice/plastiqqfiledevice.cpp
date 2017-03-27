#include "plastiqmethod.h"
#include "plastiqqfiledevice.h"

#include "core/PlastiQQIODevice/plastiqqiodevice.h"
#include <QFileDevice> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQFileDevice::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileDevice::plastiqMethods = {
    { "error()", { "error", "", "FileError", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flush()", { "flush", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handle()", { "handle", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(long,long)", { "map", "qint64,qint64", "uchar*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(long,long,enum)", { "map", "qint64,qint64,MemoryMapFlags", "uchar*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "permissions()", { "permissions", "", "Permissions", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(long)", { "resize", "qint64", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPermissions(enum)", { "setPermissions", "Permissions", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unmap(uchar*)", { "unmap", "uchar*", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetError()", { "unsetError", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readData(char*,long)", { "readData", "char*,qint64", "qint64", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "readLineData(char*,long)", { "readLineData", "char*,qint64", "qint64", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "writeData(const char*,long)", { "writeData", "char*,qint64", "qint64", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileDevice::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFileDevice::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFileDevice::plastiqConstants = {

    /* QFileDevice::FileError */
   { "NoError", QFileDevice::NoError },
   { "ReadError", QFileDevice::ReadError },
   { "WriteError", QFileDevice::WriteError },
   { "FatalError", QFileDevice::FatalError },
   { "ResourceError", QFileDevice::ResourceError },
   { "OpenError", QFileDevice::OpenError },
   { "AbortError", QFileDevice::AbortError },
   { "TimeOutError", QFileDevice::TimeOutError },
   { "UnspecifiedError", QFileDevice::UnspecifiedError },
   { "RemoveError", QFileDevice::RemoveError },
   { "RenameError", QFileDevice::RenameError },
   { "PositionError", QFileDevice::PositionError },
   { "ResizeError", QFileDevice::ResizeError },
   { "PermissionsError", QFileDevice::PermissionsError },
   { "CopyError", QFileDevice::CopyError },

    /* QFileDevice::FileHandleFlag */
   { "AutoCloseHandle", QFileDevice::AutoCloseHandle },
   { "DontCloseHandle", QFileDevice::DontCloseHandle },

    /* QFileDevice::MemoryMapFlags */
   { "NoOptions", QFileDevice::NoOptions },
   { "MapPrivateOption", QFileDevice::MapPrivateOption },

    /* QFileDevice::Permission */
   { "ReadOwner", QFileDevice::ReadOwner },
   { "WriteOwner", QFileDevice::WriteOwner },
   { "ExeOwner", QFileDevice::ExeOwner },
   { "ReadUser", QFileDevice::ReadUser },
   { "WriteUser", QFileDevice::WriteUser },
   { "ExeUser", QFileDevice::ExeUser },
   { "ReadGroup", QFileDevice::ReadGroup },
   { "WriteGroup", QFileDevice::WriteGroup },
   { "ExeGroup", QFileDevice::ExeGroup },
   { "ReadOther", QFileDevice::ReadOther },
   { "WriteOther", QFileDevice::WriteOther },
   { "ExeOther", QFileDevice::ExeOther },

};

QVector<PlastiQMetaObject*> PlastiQQFileDevice::plastiqInherits = { &PlastiQQIODevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFileDevice::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFileDevice::plastiq_static_metaObject = {
    { &PlastiQQIODevice::plastiq_static_metaObject, &plastiqInherits, "QFileDevice", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFileDevice::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQFileDeviceWrapper : public QFileDevice {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QString fileName() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString fileName()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QFileDevice::fileName();
    }

    QString PlastiQParentCall_fileName() const {
        return QFileDevice::fileName();
    }

    Permissions permissions() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("Permissions permissions()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            Permissions _r = Permissions(stack[0].s_int64);
            delete [] stack;
            return _r;
        }
        else return QFileDevice::permissions();
    }

    Permissions PlastiQParentCall_permissions() const {
        return QFileDevice::permissions();
    }

    bool resize(qint64 sz) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool resize(qint64)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_long = sz;
            stack[1].name = QByteArrayLiteral("qint64");
            stack[1].type = PlastiQ::Long;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QFileDevice::resize(sz);
    }

    bool PlastiQParentCall_resize(qint64 sz) {
        return QFileDevice::resize(sz);
    }

    bool setPermissions(Permissions permissions) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool setPermissions(Permissions)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = permissions;
            stack[1].name = QByteArrayLiteral("Permissions");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QFileDevice::setPermissions(permissions);
    }

    bool PlastiQParentCall_setPermissions(Permissions permissions) {
        return QFileDevice::setPermissions(permissions);
    }

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
        else return QFileDevice::readData(data,len);
    }

    qint64 PlastiQParentCall_readData(char *data, qint64 len) {
        return QFileDevice::readData(data,len);
    }

    qint64 readLineData(char *data, qint64 maxlen) override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 readLineData(char*,qint64)");
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
        else return QFileDevice::readLineData(data,maxlen);
    }

    qint64 PlastiQParentCall_readLineData(char *data, qint64 maxlen) {
        return QFileDevice::readLineData(data,maxlen);
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
        else return QFileDevice::writeData(data,len);
    }

    qint64 PlastiQParentCall_writeData(const char *data, qint64 len) {
        return QFileDevice::writeData(data,len);
    }

};

void PlastiQQFileDevice::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQFileDeviceWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQFileDevice *p = new PlastiQQFileDevice();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFileDevice *p = new PlastiQQFileDevice();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQIODevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFileDevice *o = sc ? Q_NULLPTR : reinterpret_cast<QFileDevice*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->error(); // HACK for FileError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QString _r;
                if (isWrapper) _r = ((PlastiQQFileDeviceWrapper*)o)->PlastiQParentCall_fileName();
                else _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->flush();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->handle();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { uchar* _r = o->map(stack[1].s_long,
                    stack[2].s_long);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 5: { uchar* _r = o->map(stack[1].s_long,
                    stack[2].s_long,
                    QFileDevice::MemoryMapFlags(stack[3].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 6: { qint64 _r;
                if (isWrapper) _r = ((PlastiQQFileDeviceWrapper*)o)->PlastiQParentCall_permissions();
                else _r = o->permissions(); // HACK for Permissions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { bool _r;
                if (isWrapper) _r = ((PlastiQQFileDeviceWrapper*)o)->PlastiQParentCall_resize(stack[1].s_long);
                else _r = o->resize(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r;
                if (isWrapper) _r = ((PlastiQQFileDeviceWrapper*)o)->PlastiQParentCall_setPermissions(QFileDevice::Permissions(stack[1].s_int64));
                else _r = o->setPermissions(QFileDevice::Permissions(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->unmap(reinterpret_cast<uchar*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->unsetError();
                stack[0].type = PlastiQ::Void; break;
        case 11: { long _r;
                if (isWrapper) _r = ((PlastiQQFileDeviceWrapper*)o)->PlastiQParentCall_readData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 12: { long _r;
                if (isWrapper) _r = ((PlastiQQFileDeviceWrapper*)o)->PlastiQParentCall_readLineData(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 13: { long _r;
                if (isWrapper) _r = ((PlastiQQFileDeviceWrapper*)o)->PlastiQParentCall_writeData(reinterpret_cast<const char*>(stack[1].s_voidp),
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
        QFileDevice *o = reinterpret_cast<QFileDevice*>(object->plastiq_data());

        if(className == "QIODevice") {
            stack[0].s_voidp = static_cast<QIODevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFileDevice::~PlastiQQFileDevice() {
    QFileDevice* o = reinterpret_cast<QFileDevice*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
