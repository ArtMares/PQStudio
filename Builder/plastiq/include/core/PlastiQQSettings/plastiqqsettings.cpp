#include "plastiqmethod.h"
#include "plastiqqsettings.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QSettings> 
#include <QStringList>
#include <QString>
#include <QTextCodec>
#include <QVariant>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQSettings::plastiqConstructors = {
    { "QSettings(QString)", { "QSettings", "QString&", "QSettings*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(QString,QString)", { "QSettings", "QString&,QString&", "QSettings*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(QString,QString,QObject*)", { "QSettings", "QString&,QString&,QObject*", "QSettings*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(enum,QString)", { "QSettings", "Scope,QString&", "QSettings*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(enum,QString,QString)", { "QSettings", "Scope,QString&,QString&", "QSettings*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(enum,QString,QString,QObject*)", { "QSettings", "Scope,QString&,QString&,QObject*", "QSettings*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(enum,enum,QString)", { "QSettings", "Format,Scope,QString&", "QSettings*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(enum,enum,QString,QString)", { "QSettings", "Format,Scope,QString&,QString&", "QSettings*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(enum,enum,QString,QString,QObject*)", { "QSettings", "Format,Scope,QString&,QString&,QObject*", "QSettings*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(QString,enum)", { "QSettings", "QString&,Format", "QSettings*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(QString,enum,QObject*)", { "QSettings", "QString&,Format,QObject*", "QSettings*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings()", { "QSettings", "", "QSettings*", 11, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSettings(QObject*)", { "QSettings", "QObject*", "QSettings*", 12, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSettings::plastiqMethods = {
    { "allKeys()", { "allKeys", "", "QStringList", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "applicationName()", { "applicationName", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "beginGroup(QString)", { "beginGroup", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "beginReadArray(QString)", { "beginReadArray", "QString&", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "beginWriteArray(QString)", { "beginWriteArray", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "beginWriteArray(QString,int)", { "beginWriteArray", "QString&,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childGroups()", { "childGroups", "", "QStringList", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childKeys()", { "childKeys", "", "QStringList", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QString)", { "contains", "QString&", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endArray()", { "endArray", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endGroup()", { "endGroup", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fallbacksEnabled()", { "fallbacksEnabled", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "Format", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "group()", { "group", "", "QString", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iniCodec()", { "iniCodec", "", "QTextCodec*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWritable()", { "isWritable", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "organizationName()", { "organizationName", "", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scope()", { "scope", "", "Scope", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setArrayIndex(int)", { "setArrayIndex", "int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFallbacksEnabled(bool)", { "setFallbacksEnabled", "bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIniCodec(QTextCodec*)", { "setIniCodec", "QTextCodec*", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIniCodec(const char*)", { "setIniCodec", "char*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValue(QString,QVariant)", { "setValue", "QString&,QVariant&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "Status", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sync()", { "sync", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QString)", { "value", "QString&", "QVariant", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QString,QVariant)", { "value", "QString&,QVariant&", "QVariant", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultFormat()", { "defaultFormat", "", "Format", 30, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "registerFormat(QString,ReadFunc,WriteFunc)", { "registerFormat", "QString&,ReadFunc,WriteFunc", "Format", 31, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "registerFormat(QString,ReadFunc,WriteFunc,enum)", { "registerFormat", "QString&,ReadFunc,WriteFunc,Qt::CaseSensitivity", "Format", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setDefaultFormat(enum)", { "setDefaultFormat", "Format", "void", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPath(enum,enum,QString)", { "setPath", "Format,Scope,QString&", "void", 34, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSettings::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSettings::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSettings::plastiqConstants = {

    /* QSettings::Format */
   { "NativeFormat", QSettings::NativeFormat },
   { "IniFormat", QSettings::IniFormat },
   { "Registry32Format", QSettings::Registry32Format },
   { "Registry64Format", QSettings::Registry64Format },
   { "InvalidFormat", QSettings::InvalidFormat },
   { "CustomFormat1", QSettings::CustomFormat1 },
   { "CustomFormat2", QSettings::CustomFormat2 },
   { "CustomFormat3", QSettings::CustomFormat3 },
   { "CustomFormat4", QSettings::CustomFormat4 },
   { "CustomFormat5", QSettings::CustomFormat5 },
   { "CustomFormat6", QSettings::CustomFormat6 },
   { "CustomFormat7", QSettings::CustomFormat7 },
   { "CustomFormat8", QSettings::CustomFormat8 },
   { "CustomFormat9", QSettings::CustomFormat9 },
   { "CustomFormat10", QSettings::CustomFormat10 },
   { "CustomFormat11", QSettings::CustomFormat11 },
   { "CustomFormat12", QSettings::CustomFormat12 },
   { "CustomFormat13", QSettings::CustomFormat13 },
   { "CustomFormat14", QSettings::CustomFormat14 },
   { "CustomFormat15", QSettings::CustomFormat15 },
   { "CustomFormat16", QSettings::CustomFormat16 },

    /* QSettings::Scope */
   { "UserScope", QSettings::UserScope },
   { "SystemScope", QSettings::SystemScope },

    /* QSettings::Status */
   { "NoError", QSettings::NoError },
   { "AccessError", QSettings::AccessError },
   { "FormatError", QSettings::FormatError },

};

QVector<PlastiQMetaObject*> PlastiQQSettings::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSettings::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSettings::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QSettings", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSettings::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSettingsWrapper : public QSettings {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSettingsWrapper(const QString &organization, const QString &application = QString(), QObject *parent = Q_NULLPTR)
         : QSettings(organization,application,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSettingsWrapper(Scope scope, const QString &organization, const QString &application = QString(), QObject *parent = Q_NULLPTR)
         : QSettings(scope,organization,application,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSettingsWrapper(Format format, Scope scope, const QString &organization, const QString &application = QString(), QObject *parent = Q_NULLPTR)
         : QSettings(format,scope,organization,application,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSettingsWrapper(const QString &fileName, Format format, QObject *parent = Q_NULLPTR)
         : QSettings(fileName,format,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSettingsWrapper(QObject *parent = Q_NULLPTR)
         : QSettings(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool event(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QSettings::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QSettings::event(event);
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
        else return QSettings::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QSettings::eventFilter(watched,event);
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
        else return QSettings::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QSettings::metaObject();
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
        else return QSettings::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QSettings::childEvent(event);
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
        else return QSettings::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QSettings::connectNotify(signal);
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
        else return QSettings::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QSettings::customEvent(event);
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
        else return QSettings::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QSettings::disconnectNotify(signal);
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
        else return QSettings::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QSettings::timerEvent(event);
    }

};

void PlastiQQSettings::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSettingsWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSettingsWrapper(stack[1].s_string); break;
        case 1: o = new PlastiQQSettingsWrapper(stack[1].s_string,
                    stack[2].s_string); break;
        case 2: o = new PlastiQQSettingsWrapper(stack[1].s_string,
                    stack[2].s_string,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;
        case 3: o = new PlastiQQSettingsWrapper(QSettings::Scope(stack[1].s_int64),
                    stack[2].s_string); break;
        case 4: o = new PlastiQQSettingsWrapper(QSettings::Scope(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_string); break;
        case 5: o = new PlastiQQSettingsWrapper(QSettings::Scope(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_string,
                    reinterpret_cast<QObject*>(stack[4].s_voidp)); break;
        case 6: o = new PlastiQQSettingsWrapper(QSettings::Format(stack[1].s_int64),
                    QSettings::Scope(stack[2].s_int64),
                    stack[3].s_string); break;
        case 7: o = new PlastiQQSettingsWrapper(QSettings::Format(stack[1].s_int64),
                    QSettings::Scope(stack[2].s_int64),
                    stack[3].s_string,
                    stack[4].s_string); break;
        case 8: o = new PlastiQQSettingsWrapper(QSettings::Format(stack[1].s_int64),
                    QSettings::Scope(stack[2].s_int64),
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<QObject*>(stack[5].s_voidp)); break;
        case 9: o = new PlastiQQSettingsWrapper(stack[1].s_string,
                    QSettings::Format(stack[2].s_int64)); break;
        case 10: o = new PlastiQQSettingsWrapper(stack[1].s_string,
                    QSettings::Format(stack[2].s_int64),
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;
        case 11: o = new PlastiQQSettingsWrapper(); break;
        case 12: o = new PlastiQQSettingsWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSettings *p = new PlastiQQSettings();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSettings *p = new PlastiQQSettings();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 36) {
            id -= 36;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSettings *o = sc ? Q_NULLPTR : reinterpret_cast<QSettings*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->allKeys());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->applicationName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: o->beginGroup(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 3: { int _r = o->beginReadArray(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->beginWriteArray(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->beginWriteArray(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->childGroups());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->childKeys());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 9: { bool _r = o->contains(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->endArray();
                stack[0].type = PlastiQ::Void; break;
        case 11: o->endGroup();
                stack[0].type = PlastiQ::Void; break;
        case 12: { bool _r = o->fallbacksEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { qint64 _r = o->format(); // HACK for Format 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { QString _r = o->group();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 16: { QTextCodec* _r = o->iniCodec();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QTextCodec"; } break;
        case 17: { bool _r = o->isWritable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { QString _r = o->organizationName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: o->remove(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 20: { qint64 _r = o->scope(); // HACK for Scope 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: o->setArrayIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setFallbacksEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setIniCodec(reinterpret_cast<QTextCodec*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setIniCodec(reinterpret_cast<const char*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setValue(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 26: { qint64 _r = o->status(); // HACK for Status 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 27: o->sync();
                stack[0].type = PlastiQ::Void; break;
        case 28: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->value(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->value(stack[1].s_string,
                    stack[2].s_variant));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { qint64 _r = sc ? QSettings::defaultFormat() : o->defaultFormat(); // HACK for Format 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 31: { qint64 _r = sc ? QSettings::registerFormat(stack[1].s_string,
                    (*reinterpret_cast< QSettings::ReadFunc(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QSettings::WriteFunc(*) >(stack[3].s_voidp))) : o->registerFormat(stack[1].s_string,
                    (*reinterpret_cast< QSettings::ReadFunc(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QSettings::WriteFunc(*) >(stack[3].s_voidp))); // HACK for Format 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 32: { qint64 _r = sc ? QSettings::registerFormat(stack[1].s_string,
                    (*reinterpret_cast< QSettings::ReadFunc(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QSettings::WriteFunc(*) >(stack[3].s_voidp)),
                    Qt::CaseSensitivity(stack[4].s_int64)) : o->registerFormat(stack[1].s_string,
                    (*reinterpret_cast< QSettings::ReadFunc(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QSettings::WriteFunc(*) >(stack[3].s_voidp)),
                    Qt::CaseSensitivity(stack[4].s_int64)); // HACK for Format 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 33: if(sc) { QSettings::setDefaultFormat(QSettings::Format(stack[1].s_int64)); } else { o->setDefaultFormat(QSettings::Format(stack[1].s_int64)); }
                stack[0].type = PlastiQ::Void; break;
        case 34: if(sc) { QSettings::setPath(QSettings::Format(stack[1].s_int64),
                    QSettings::Scope(stack[2].s_int64),
                    stack[3].s_string); } else { o->setPath(QSettings::Format(stack[1].s_int64),
                    QSettings::Scope(stack[2].s_int64),
                    stack[3].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 35: { bool _r;
                if (isWrapper) _r = ((PlastiQQSettingsWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSettings *o = reinterpret_cast<QSettings*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSettings *o = reinterpret_cast<QSettings*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSettings *o = reinterpret_cast<QSettings*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSettings *o = reinterpret_cast<QSettings*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSettings::~PlastiQQSettings() {
    QSettings* o = reinterpret_cast<QSettings*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
