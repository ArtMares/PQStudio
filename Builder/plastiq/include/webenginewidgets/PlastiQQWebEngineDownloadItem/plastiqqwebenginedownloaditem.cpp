#include "plastiqmethod.h"
#include "plastiqqwebenginedownloaditem.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QWebEngineDownloadItem> 
#include <QString>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineDownloadItem::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineDownloadItem::plastiqMethods = {
    { "id()", { "id", "", "quint32", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFinished()", { "isFinished", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeType()", { "mimeType", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "path()", { "path", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "receivedBytes()", { "receivedBytes", "", "qint64", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "savePageFormat()", { "savePageFormat", "", "SavePageFormat", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPath(QString)", { "setPath", "QString", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSavePageFormat(enum)", { "setSavePageFormat", "SavePageFormat", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "DownloadState", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "totalBytes()", { "totalBytes", "", "qint64", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "DownloadType", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "accept()", { "accept", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "cancel()", { "cancel", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineDownloadItem::plastiqSignals = {
    { "downloadProgress(long,long)", { "downloadProgress", "qint64,qint64", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished()", { "finished", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QWebEngineDownloadItem::DownloadState", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineDownloadItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWebEngineDownloadItem::plastiqConstants = {

    /* QWebEngineDownloadItem::DownloadState */
   { "DownloadRequested", QWebEngineDownloadItem::DownloadRequested },
   { "DownloadInProgress", QWebEngineDownloadItem::DownloadInProgress },
   { "DownloadCompleted", QWebEngineDownloadItem::DownloadCompleted },
   { "DownloadCancelled", QWebEngineDownloadItem::DownloadCancelled },
   { "DownloadInterrupted", QWebEngineDownloadItem::DownloadInterrupted },

    /* QWebEngineDownloadItem::DownloadType */
   { "Attachment", QWebEngineDownloadItem::Attachment },
   { "DownloadAttribute", QWebEngineDownloadItem::DownloadAttribute },
   { "UserRequested", QWebEngineDownloadItem::UserRequested },
   { "SavePage", QWebEngineDownloadItem::SavePage },

    /* QWebEngineDownloadItem::SavePageFormat */
   { "UnknownSaveFormat", QWebEngineDownloadItem::UnknownSaveFormat },
   { "SingleHtmlSaveFormat", QWebEngineDownloadItem::SingleHtmlSaveFormat },
   { "CompleteHtmlSaveFormat", QWebEngineDownloadItem::CompleteHtmlSaveFormat },
   { "MimeHtmlSaveFormat", QWebEngineDownloadItem::MimeHtmlSaveFormat },

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineDownloadItem::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWebEngineDownloadItem::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWebEngineDownloadItem::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWebEngineDownloadItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineDownloadItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineDownloadItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineDownloadItem *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineDownloadItem *p = new PlastiQQWebEngineDownloadItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineDownloadItem *p = new PlastiQQWebEngineDownloadItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEngineDownloadItem *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineDownloadItem*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->id() | ret: `quint32` */ break;
        case 1: { bool _r = o->isFinished();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QString _r = o->mimeType();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->path();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { long _r = o->receivedBytes();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 5: { qint64 _r = o->savePageFormat(); // HACK for SavePageFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: o->setPath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setSavePageFormat(QWebEngineDownloadItem::SavePageFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: { qint64 _r = o->state(); // HACK for DownloadState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { long _r = o->totalBytes();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 10: { qint64 _r = o->type(); // HACK for DownloadType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->accept();
                stack[0].type = PlastiQ::Void; break;
        case 13: o->cancel();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWebEngineDownloadItem *o = reinterpret_cast<QWebEngineDownloadItem*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWebEngineDownloadItem::downloadProgress,
            [=](qint64 arg0, qint64 arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                    cstack[1].s_long = arg1;
                    cstack[1].type = PlastiQ::Long; cstack[1].name = "qint64";
                PlastiQ_activate(sender, "downloadProgress", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QWebEngineDownloadItem::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QWebEngineDownloadItem::stateChanged,
            [=](QWebEngineDownloadItem::DownloadState arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QWebEngineDownloadItem::DownloadState";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWebEngineDownloadItem *o = reinterpret_cast<QWebEngineDownloadItem*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWebEngineDownloadItem *o = reinterpret_cast<QWebEngineDownloadItem*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWebEngineDownloadItem *o = reinterpret_cast<QWebEngineDownloadItem*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWebEngineDownloadItem::~PlastiQQWebEngineDownloadItem() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
