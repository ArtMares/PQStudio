#include "plastiqmethod.h"
#include "plastiqqwebenginehistoryitem.h"

#include <QWebEngineHistoryItem> 
#include <QUrl>
#include <QDateTime>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineHistoryItem::plastiqConstructors = {
    { "QWebEngineHistoryItem(QWebEngineHistoryItem&)", { "QWebEngineHistoryItem", "QWebEngineHistoryItem&", "QWebEngineHistoryItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineHistoryItem::plastiqMethods = {
    { "iconUrl()", { "iconUrl", "", "QUrl", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastVisited()", { "lastVisited", "", "QDateTime", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "originalUrl()", { "originalUrl", "", "QUrl", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QWebEngineHistoryItem&)", { "swap", "QWebEngineHistoryItem&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineHistoryItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineHistoryItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWebEngineHistoryItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineHistoryItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWebEngineHistoryItem::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWebEngineHistoryItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWebEngineHistoryItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineHistoryItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineHistoryItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineHistoryItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWebEngineHistoryItem((*reinterpret_cast< QWebEngineHistoryItem(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineHistoryItem *p = new PlastiQQWebEngineHistoryItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineHistoryItem *p = new PlastiQQWebEngineHistoryItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEngineHistoryItem *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineHistoryItem*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->iconUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->lastVisited());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->originalUrl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->swap((*reinterpret_cast< QWebEngineHistoryItem(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QWebEngineHistoryItem *o = reinterpret_cast<QWebEngineHistoryItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWebEngineHistoryItem::~PlastiQQWebEngineHistoryItem() {
    QWebEngineHistoryItem* o = reinterpret_cast<QWebEngineHistoryItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
