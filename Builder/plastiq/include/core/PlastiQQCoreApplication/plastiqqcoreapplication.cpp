#include "plastiqmethod.h"
#include "plastiqqcoreapplication.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QCoreApplication> 
#include <QObject>
#include <QEvent>
#include <QString>
#include <QStringList>
#include <QAbstractEventDispatcher>

QHash<QByteArray, PlastiQMethod> PlastiQQCoreApplication::plastiqConstructors = {
    { "QCoreApplication(int&,char**)", { "QCoreApplication", "int&,char**", "QCoreApplication*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCoreApplication::plastiqMethods = {
    { "installNativeEventFilter(QAbstractNativeEventFilter*)", { "installNativeEventFilter", "QAbstractNativeEventFilter*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "notify(QObject*,QEvent*)", { "notify", "QObject*,QEvent*", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeNativeEventFilter(QAbstractNativeEventFilter*)", { "removeNativeEventFilter", "QAbstractNativeEventFilter*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLibraryPath(QString)", { "addLibraryPath", "QString&", "void", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "applicationDirPath()", { "applicationDirPath", "", "QString", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "applicationFilePath()", { "applicationFilePath", "", "QString", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "applicationName()", { "applicationName", "", "QString", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "applicationPid()", { "applicationPid", "", "qint64", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "applicationVersion()", { "applicationVersion", "", "QString", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "arguments()", { "arguments", "", "QStringList", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "closingDown()", { "closingDown", "", "bool", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "eventDispatcher()", { "eventDispatcher", "", "QAbstractEventDispatcher*", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exec()", { "exec", "", "int", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exit()", { "exit", "", "void", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exit(int)", { "exit", "int", "void", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "flush()", { "flush", "", "void", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "installTranslator(QTranslator*)", { "installTranslator", "QTranslator*", "bool", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "instance()", { "instance", "", "QCoreApplication*", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isQuitLockEnabled()", { "isQuitLockEnabled", "", "bool", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isSetuidAllowed()", { "isSetuidAllowed", "", "bool", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "libraryPaths()", { "libraryPaths", "", "QStringList", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "organizationDomain()", { "organizationDomain", "", "QString", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "organizationName()", { "organizationName", "", "QString", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "postEvent(QObject*,QEvent*)", { "postEvent", "QObject*,QEvent*", "void", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "postEvent(QObject*,QEvent*,int)", { "postEvent", "QObject*,QEvent*,int", "void", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "processEvents()", { "processEvents", "", "void", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "processEvents(enum)", { "processEvents", "QEventLoop::ProcessEventsFlags", "void", 26, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "processEvents(enum,int)", { "processEvents", "QEventLoop::ProcessEventsFlags,int", "void", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "removeLibraryPath(QString)", { "removeLibraryPath", "QString&", "void", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "removePostedEvents(QObject*)", { "removePostedEvents", "QObject*", "void", 29, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "removePostedEvents(QObject*,int)", { "removePostedEvents", "QObject*,int", "void", 30, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "removeTranslator(QTranslator*)", { "removeTranslator", "QTranslator*", "bool", 31, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sendEvent(QObject*,QEvent*)", { "sendEvent", "QObject*,QEvent*", "bool", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sendPostedEvents()", { "sendPostedEvents", "", "void", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sendPostedEvents(QObject*)", { "sendPostedEvents", "QObject*", "void", 34, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sendPostedEvents(QObject*,int)", { "sendPostedEvents", "QObject*,int", "void", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setApplicationName(QString)", { "setApplicationName", "QString&", "void", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setApplicationVersion(QString)", { "setApplicationVersion", "QString&", "void", 37, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setAttribute(enum)", { "setAttribute", "Qt::ApplicationAttribute", "void", 38, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setAttribute(enum,bool)", { "setAttribute", "Qt::ApplicationAttribute,bool", "void", 39, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setEventDispatcher(QAbstractEventDispatcher*)", { "setEventDispatcher", "QAbstractEventDispatcher*", "void", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setLibraryPaths(QStringList&)", { "setLibraryPaths", "QStringList&", "void", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setOrganizationDomain(QString)", { "setOrganizationDomain", "QString&", "void", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setOrganizationName(QString)", { "setOrganizationName", "QString&", "void", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setQuitLockEnabled(bool)", { "setQuitLockEnabled", "bool", "void", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setSetuidAllowed(bool)", { "setSetuidAllowed", "bool", "void", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "startingUp()", { "startingUp", "", "bool", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "testAttribute(enum)", { "testAttribute", "Qt::ApplicationAttribute", "bool", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "translate(const char*,const char*)", { "translate", "char*,char*", "QString", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "translate(const char*,const char*,const char*)", { "translate", "char*,char*,char*", "QString", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "translate(const char*,const char*,const char*,int)", { "translate", "char*,char*,char*,int", "QString", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 51, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "quit()", { "quit", "", "void", 52, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCoreApplication::plastiqSignals = {
    { "aboutToQuit()", { "aboutToQuit", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCoreApplication::plastiqProperties = {
    { "applicationName", { "applicationName", "QString", "setApplicationName", "applicationName" } },
    { "applicationVersion", { "applicationVersion", "QString", "setApplicationVersion", "applicationVersion" } },
    { "organizationDomain", { "organizationDomain", "QString", "setOrganizationDomain", "organizationDomain" } },
    { "organizationName", { "organizationName", "QString", "setOrganizationName", "organizationName" } },
    { "quitLockEnabled", { "quitLockEnabled", "bool", "setQuitLockEnabled", "isQuitLockEnabled" } },

};

QHash<QByteArray, long> PlastiQQCoreApplication::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCoreApplication::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCoreApplication::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCoreApplication::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QCoreApplication", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCoreApplication::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQCoreApplicationWrapper : public QCoreApplication {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQCoreApplicationWrapper(int &argc, char **argv)
         : QCoreApplication(argc,argv),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool notify(QObject *receiver, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool notify(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(receiver);
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
        else return QCoreApplication::notify(receiver,event);
    }

    bool PlastiQParentCall_notify(QObject *receiver, QEvent *event) {
        return QCoreApplication::notify(receiver,event);
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
        else return QCoreApplication::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QCoreApplication::event(e);
    }

};

void PlastiQQCoreApplication::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQCoreApplicationWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQCoreApplicationWrapper((*reinterpret_cast< int(*) >(stack[1].s_voidp)),
                    reinterpret_cast<char**>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQCoreApplication *p = new PlastiQQCoreApplication();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCoreApplication *p = new PlastiQQCoreApplication();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 53) {
            id -= 53;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCoreApplication *o = sc ? Q_NULLPTR : reinterpret_cast<QCoreApplication*>(object->plastiq_data());

        switch(id) {
        case 0: o->installNativeEventFilter(reinterpret_cast<QAbstractNativeEventFilter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r;
                if (isWrapper) _r = ((PlastiQQCoreApplicationWrapper*)o)->PlastiQParentCall_notify(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else _r = o->notify(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->removeNativeEventFilter(reinterpret_cast<QAbstractNativeEventFilter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: if(sc) { QCoreApplication::addLibraryPath(stack[1].s_string); } else { o->addLibraryPath(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 4: { QString _r = sc ? QCoreApplication::applicationDirPath() : o->applicationDirPath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = sc ? QCoreApplication::applicationFilePath() : o->applicationFilePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = sc ? QCoreApplication::applicationName() : o->applicationName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { long _r = sc ? QCoreApplication::applicationPid() : o->applicationPid();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 8: { QString _r = sc ? QCoreApplication::applicationVersion() : o->applicationVersion();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QCoreApplication::arguments()) : new QStringList(o->arguments());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { bool _r = sc ? QCoreApplication::closingDown() : o->closingDown();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { QAbstractEventDispatcher* _r = sc ? QCoreApplication::eventDispatcher() : o->eventDispatcher();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractEventDispatcher"; } break;
        case 12: { int _r = sc ? QCoreApplication::exec() : o->exec();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: if(sc) { QCoreApplication::exit(); } else { o->exit(); }
                stack[0].type = PlastiQ::Void; break;
        case 14: if(sc) { QCoreApplication::exit(stack[1].s_int); } else { o->exit(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 15: if(sc) { QCoreApplication::flush(); } else { o->flush(); }
                stack[0].type = PlastiQ::Void; break;
        case 16: { bool _r = sc ? QCoreApplication::installTranslator(reinterpret_cast<QTranslator*>(stack[1].s_voidp)) : o->installTranslator(reinterpret_cast<QTranslator*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { QCoreApplication* _r = sc ? QCoreApplication::instance() : o->instance();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCoreApplication"; } break;
        case 18: { bool _r = sc ? QCoreApplication::isQuitLockEnabled() : o->isQuitLockEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = sc ? QCoreApplication::isSetuidAllowed() : o->isSetuidAllowed();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QCoreApplication::libraryPaths()) : new QStringList(o->libraryPaths());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { QString _r = sc ? QCoreApplication::organizationDomain() : o->organizationDomain();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: { QString _r = sc ? QCoreApplication::organizationName() : o->organizationName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: if(sc) { QCoreApplication::postEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp)); } else { o->postEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 24: if(sc) { QCoreApplication::postEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp),
                    stack[3].s_int); } else { o->postEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp),
                    stack[3].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 25: if(sc) { QCoreApplication::processEvents(); } else { o->processEvents(); }
                stack[0].type = PlastiQ::Void; break;
        case 26: if(sc) { QCoreApplication::processEvents(QEventLoop::ProcessEventsFlags(stack[1].s_int64)); } else { o->processEvents(QEventLoop::ProcessEventsFlags(stack[1].s_int64)); }
                stack[0].type = PlastiQ::Void; break;
        case 27: if(sc) { QCoreApplication::processEvents(QEventLoop::ProcessEventsFlags(stack[1].s_int64),
                    stack[2].s_int); } else { o->processEvents(QEventLoop::ProcessEventsFlags(stack[1].s_int64),
                    stack[2].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 28: if(sc) { QCoreApplication::removeLibraryPath(stack[1].s_string); } else { o->removeLibraryPath(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 29: if(sc) { QCoreApplication::removePostedEvents(reinterpret_cast<QObject*>(stack[1].s_voidp)); } else { o->removePostedEvents(reinterpret_cast<QObject*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 30: if(sc) { QCoreApplication::removePostedEvents(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int); } else { o->removePostedEvents(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 31: { bool _r = sc ? QCoreApplication::removeTranslator(reinterpret_cast<QTranslator*>(stack[1].s_voidp)) : o->removeTranslator(reinterpret_cast<QTranslator*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { bool _r = sc ? QCoreApplication::sendEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp)) : o->sendEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: if(sc) { QCoreApplication::sendPostedEvents(); } else { o->sendPostedEvents(); }
                stack[0].type = PlastiQ::Void; break;
        case 34: if(sc) { QCoreApplication::sendPostedEvents(reinterpret_cast<QObject*>(stack[1].s_voidp)); } else { o->sendPostedEvents(reinterpret_cast<QObject*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 35: if(sc) { QCoreApplication::sendPostedEvents(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int); } else { o->sendPostedEvents(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 36: if(sc) { QCoreApplication::setApplicationName(stack[1].s_string); } else { o->setApplicationName(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 37: if(sc) { QCoreApplication::setApplicationVersion(stack[1].s_string); } else { o->setApplicationVersion(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 38: if(sc) { QCoreApplication::setAttribute(Qt::ApplicationAttribute(stack[1].s_int64)); } else { o->setAttribute(Qt::ApplicationAttribute(stack[1].s_int64)); }
                stack[0].type = PlastiQ::Void; break;
        case 39: if(sc) { QCoreApplication::setAttribute(Qt::ApplicationAttribute(stack[1].s_int64),
                    stack[2].s_bool); } else { o->setAttribute(Qt::ApplicationAttribute(stack[1].s_int64),
                    stack[2].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 40: if(sc) { QCoreApplication::setEventDispatcher(reinterpret_cast<QAbstractEventDispatcher*>(stack[1].s_voidp)); } else { o->setEventDispatcher(reinterpret_cast<QAbstractEventDispatcher*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 41: if(sc) { QCoreApplication::setLibraryPaths((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); } else { o->setLibraryPaths((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 42: if(sc) { QCoreApplication::setOrganizationDomain(stack[1].s_string); } else { o->setOrganizationDomain(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 43: if(sc) { QCoreApplication::setOrganizationName(stack[1].s_string); } else { o->setOrganizationName(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 44: if(sc) { QCoreApplication::setQuitLockEnabled(stack[1].s_bool); } else { o->setQuitLockEnabled(stack[1].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 45: if(sc) { QCoreApplication::setSetuidAllowed(stack[1].s_bool); } else { o->setSetuidAllowed(stack[1].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 46: { bool _r = sc ? QCoreApplication::startingUp() : o->startingUp();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: { bool _r = sc ? QCoreApplication::testAttribute(Qt::ApplicationAttribute(stack[1].s_int64)) : o->testAttribute(Qt::ApplicationAttribute(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: { QString _r = sc ? QCoreApplication::translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp)) : o->translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 49: { QString _r = sc ? QCoreApplication::translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp)) : o->translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 50: { QString _r = sc ? QCoreApplication::translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    stack[4].s_int) : o->translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    stack[4].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 51: { bool _r;
                if (isWrapper) _r = ((PlastiQQCoreApplicationWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 52: o->quit();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCoreApplication *o = reinterpret_cast<QCoreApplication*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCoreApplication::aboutToQuit,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "aboutToQuit", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCoreApplication *o = reinterpret_cast<QCoreApplication*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCoreApplication *o = reinterpret_cast<QCoreApplication*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCoreApplication *o = reinterpret_cast<QCoreApplication*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCoreApplication::~PlastiQQCoreApplication() {
    QCoreApplication* o = reinterpret_cast<QCoreApplication*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
