#include "plastiqmethod.h"
#include "plastiqqsavefile.h"

#include "core/PlastiQQFileDevice/plastiqqfiledevice.h"
#include <QSaveFile> 

QHash<QByteArray, PlastiQMethod> PlastiQQSaveFile::plastiqConstructors = {
    { "QSaveFile(QString)", { "QSaveFile", "QString&", "QSaveFile*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSaveFile()", { "QSaveFile", "", "QSaveFile*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSaveFile(QObject*)", { "QSaveFile", "QObject*", "QSaveFile*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSaveFile(QString,QObject*)", { "QSaveFile", "QString&,QObject*", "QSaveFile*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSaveFile::plastiqMethods = {
    { "cancelWriting()", { "cancelWriting", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "commit()", { "commit", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "directWriteFallback()", { "directWriteFallback", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDirectWriteFallback(bool)", { "setDirectWriteFallback", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "writeData(const char*,long)", { "writeData", "char*,qint64", "qint64", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSaveFile::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSaveFile::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSaveFile::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSaveFile::plastiqInherits = { &PlastiQQFileDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSaveFile::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSaveFile::plastiq_static_metaObject = {
    { &PlastiQQFileDevice::plastiq_static_metaObject, &plastiqInherits, "QSaveFile", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSaveFile::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSaveFileWrapper : public QSaveFile {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSaveFileWrapper(const QString &name)
         : QSaveFile(name),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSaveFileWrapper(QObject *parent = Q_NULLPTR)
         : QSaveFile(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSaveFileWrapper(const QString &name, QObject *parent)
         : QSaveFile(name,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QSaveFile::writeData(data,len);
    }

    qint64 PlastiQParentCall_writeData(const char *data, qint64 len) {
        return QSaveFile::writeData(data,len);
    }

    QString fileName() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString fileName()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QSaveFile::fileName();
    }

    QString PlastiQParentCall_fileName() const {
        return QSaveFile::fileName();
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
        else return QSaveFile::permissions();
    }

    Permissions PlastiQParentCall_permissions() const {
        return QSaveFile::permissions();
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
        else return QSaveFile::resize(sz);
    }

    bool PlastiQParentCall_resize(qint64 sz) {
        return QSaveFile::resize(sz);
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
        else return QSaveFile::setPermissions(permissions);
    }

    bool PlastiQParentCall_setPermissions(Permissions permissions) {
        return QSaveFile::setPermissions(permissions);
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
        else return QSaveFile::readData(data,len);
    }

    qint64 PlastiQParentCall_readData(char *data, qint64 len) {
        return QSaveFile::readData(data,len);
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
        else return QSaveFile::readLineData(data,maxlen);
    }

    qint64 PlastiQParentCall_readLineData(char *data, qint64 maxlen) {
        return QSaveFile::readLineData(data,maxlen);
    }

};

void PlastiQQSaveFile::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSaveFileWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSaveFileWrapper(stack[1].s_string); break;
        case 1: o = new PlastiQQSaveFileWrapper(); break;
        case 2: o = new PlastiQQSaveFileWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 3: o = new PlastiQQSaveFileWrapper(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSaveFile *p = new PlastiQQSaveFile();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSaveFile *p = new PlastiQQSaveFile();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQFileDevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSaveFile *o = sc ? Q_NULLPTR : reinterpret_cast<QSaveFile*>(object->plastiq_data());

        switch(id) {
        case 0: o->cancelWriting();
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r = o->commit();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->directWriteFallback();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->setDirectWriteFallback(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: { long _r;
                if (isWrapper) _r = ((PlastiQQSaveFileWrapper*)o)->PlastiQParentCall_writeData(reinterpret_cast<const char*>(stack[1].s_voidp),
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
        QSaveFile *o = reinterpret_cast<QSaveFile*>(object->plastiq_data());

        if(className == "QFileDevice") {
            stack[0].s_voidp = static_cast<QFileDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSaveFile::~PlastiQQSaveFile() {
    QSaveFile* o = reinterpret_cast<QSaveFile*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
