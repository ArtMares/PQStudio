#include "plastiqmethod.h"
#include "plastiqqfilesystemwatcher.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QFileSystemWatcher> 
#include <QStringList>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQFileSystemWatcher::plastiqConstructors = {
    { "QFileSystemWatcher()", { "QFileSystemWatcher", "", "QFileSystemWatcher*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileSystemWatcher(QObject*)", { "QFileSystemWatcher", "QObject*", "QFileSystemWatcher*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileSystemWatcher(QStringList&)", { "QFileSystemWatcher", "QStringList&", "QFileSystemWatcher*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileSystemWatcher(QStringList&,QObject*)", { "QFileSystemWatcher", "QStringList&,QObject*", "QFileSystemWatcher*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileSystemWatcher::plastiqMethods = {
    { "addPath(QString)", { "addPath", "QString&", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPaths(QStringList&)", { "addPaths", "QStringList&", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "directories()", { "directories", "", "QStringList", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "files()", { "files", "", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removePath(QString)", { "removePath", "QString&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removePaths(QStringList&)", { "removePaths", "QStringList&", "QStringList", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileSystemWatcher::plastiqSignals = {
    { "directoryChanged(QString)", { "directoryChanged", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fileChanged(QString)", { "fileChanged", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQFileSystemWatcher::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFileSystemWatcher::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFileSystemWatcher::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFileSystemWatcher::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQFileSystemWatcher::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QFileSystemWatcher", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFileSystemWatcher::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFileSystemWatcher::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFileSystemWatcher *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFileSystemWatcher(); break;
        case 1: o = new QFileSystemWatcher(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QFileSystemWatcher((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); break;
        case 3: o = new QFileSystemWatcher((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFileSystemWatcher *p = new PlastiQQFileSystemWatcher();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFileSystemWatcher *p = new PlastiQQFileSystemWatcher();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFileSystemWatcher *o = sc ? Q_NULLPTR : reinterpret_cast<QFileSystemWatcher*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->addPath(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->addPaths((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->directories());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->files());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->removePath(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->removePaths((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFileSystemWatcher *o = reinterpret_cast<QFileSystemWatcher*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QFileSystemWatcher::directoryChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "directoryChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QFileSystemWatcher::fileChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "fileChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFileSystemWatcher *o = reinterpret_cast<QFileSystemWatcher*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFileSystemWatcher *o = reinterpret_cast<QFileSystemWatcher*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFileSystemWatcher *o = reinterpret_cast<QFileSystemWatcher*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFileSystemWatcher::~PlastiQQFileSystemWatcher() {
    QFileSystemWatcher* o = reinterpret_cast<QFileSystemWatcher*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
