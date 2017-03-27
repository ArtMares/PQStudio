#include "plastiqmethod.h"
#include "plastiqqmediacontent.h"

#include <QMediaContent> 
#include <QNetworkRequest>
#include <QMediaResource>
#include <QUrl>
#include <QMediaPlaylist>
#include <QMediaResourceList>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaContent::plastiqConstructors = {
    { "QMediaContent()", { "QMediaContent", "", "QMediaContent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaContent(QUrl&)", { "QMediaContent", "QUrl&", "QMediaContent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaContent(QNetworkRequest&)", { "QMediaContent", "QNetworkRequest&", "QMediaContent*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaContent(QMediaResource&)", { "QMediaContent", "QMediaResource&", "QMediaContent*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaContent(QMediaResourceList&)", { "QMediaContent", "QMediaResourceList&", "QMediaContent*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaContent(QMediaContent&)", { "QMediaContent", "QMediaContent&", "QMediaContent*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaContent(QMediaPlaylist*)", { "QMediaContent", "QMediaPlaylist*", "QMediaContent*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaContent(QMediaPlaylist*,QUrl&)", { "QMediaContent", "QMediaPlaylist*,QUrl&", "QMediaContent*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaContent(QMediaPlaylist*,QUrl&,bool)", { "QMediaContent", "QMediaPlaylist*,QUrl&,bool", "QMediaContent*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaContent::plastiqMethods = {
    { "canonicalRequest()", { "canonicalRequest", "", "QNetworkRequest", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canonicalResource()", { "canonicalResource", "", "QMediaResource", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canonicalUrl()", { "canonicalUrl", "", "QUrl", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "playlist()", { "playlist", "", "QMediaPlaylist*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resources()", { "resources", "", "QMediaResourceList", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaContent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaContent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaContent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaContent::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMediaContent::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaContent::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMediaContent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaContent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaContent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaContent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMediaContent(); break;
        case 1: o = new QMediaContent((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))); break;
        case 2: o = new QMediaContent((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp))); break;
        case 3: o = new QMediaContent((*reinterpret_cast< QMediaResource(*) >(stack[1].s_voidp))); break;
        case 4: o = new QMediaContent((*reinterpret_cast< QMediaResourceList(*) >(stack[1].s_voidp))); break;
        case 5: o = new QMediaContent((*reinterpret_cast< QMediaContent(*) >(stack[1].s_voidp))); break;
        case 6: o = new QMediaContent(reinterpret_cast<QMediaPlaylist*>(stack[1].s_voidp)); break;
        case 7: o = new QMediaContent(reinterpret_cast<QMediaPlaylist*>(stack[1].s_voidp),
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp))); break;
        case 8: o = new QMediaContent(reinterpret_cast<QMediaPlaylist*>(stack[1].s_voidp),
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp)),
                    stack[3].s_bool); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaContent *p = new PlastiQQMediaContent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaContent *p = new PlastiQQMediaContent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaContent *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaContent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QNetworkRequest *_r = new QNetworkRequest(o->canonicalRequest());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkRequest";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QMediaResource *_r = new QMediaResource(o->canonicalResource());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaResource";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->canonicalUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { QMediaPlaylist* _r = o->playlist();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMediaPlaylist"; } break;
        case 5: /* UNSUPPORTED_RETURN_VALUE o->resources() | ret: `QMediaResourceList` */ break;

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
        QMediaContent *o = reinterpret_cast<QMediaContent*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMediaContent::~PlastiQQMediaContent() {
    QMediaContent* o = reinterpret_cast<QMediaContent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
