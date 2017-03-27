#include "plastiqmethod.h"
#include "plastiqqwebenginehistory.h"

#include <QWebEngineHistory> 
#include <QWebEngineHistoryItem>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineHistory::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineHistory::plastiqMethods = {
    { "back()", { "back", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backItem()", { "backItem", "", "QWebEngineHistoryItem", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canGoBack()", { "canGoBack", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canGoForward()", { "canGoForward", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentItem()", { "currentItem", "", "QWebEngineHistoryItem", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentItemIndex()", { "currentItemIndex", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "forward()", { "forward", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "forwardItem()", { "forwardItem", "", "QWebEngineHistoryItem", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "goToItem(QWebEngineHistoryItem&)", { "goToItem", "QWebEngineHistoryItem&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int)", { "itemAt", "int", "QWebEngineHistoryItem", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineHistory::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineHistory::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWebEngineHistory::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineHistory::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWebEngineHistory::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWebEngineHistory::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWebEngineHistory", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineHistory::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineHistory::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineHistory *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineHistory *p = new PlastiQQWebEngineHistory();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineHistory *p = new PlastiQQWebEngineHistory();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEngineHistory *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineHistory*>(object->plastiq_data());

        switch(id) {
        case 0: o->back();
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QWebEngineHistoryItem *_r = new QWebEngineHistoryItem(o->backItem());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QWebEngineHistoryItem";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->canGoBack();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->canGoForward();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 5: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { /* COPY OBJECT */
            QWebEngineHistoryItem *_r = new QWebEngineHistoryItem(o->currentItem());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QWebEngineHistoryItem";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->currentItemIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: o->forward();
                stack[0].type = PlastiQ::Void; break;
        case 9: { /* COPY OBJECT */
            QWebEngineHistoryItem *_r = new QWebEngineHistoryItem(o->forwardItem());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QWebEngineHistoryItem";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: o->goToItem((*reinterpret_cast< QWebEngineHistoryItem(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: { /* COPY OBJECT */
            QWebEngineHistoryItem *_r = new QWebEngineHistoryItem(o->itemAt(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QWebEngineHistoryItem";
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
        QWebEngineHistory *o = reinterpret_cast<QWebEngineHistory*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWebEngineHistory::~PlastiQQWebEngineHistory() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
