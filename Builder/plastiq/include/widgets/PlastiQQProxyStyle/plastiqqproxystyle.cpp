#include "plastiqmethod.h"
#include "plastiqqproxystyle.h"

#include "widgets/PlastiQQCommonStyle/plastiqqcommonstyle.h"
#include <QProxyStyle> 
#include <QStyle>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQProxyStyle::plastiqConstructors = {
    { "QProxyStyle()", { "QProxyStyle", "", "QProxyStyle*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProxyStyle(QStyle*)", { "QProxyStyle", "QStyle*", "QProxyStyle*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProxyStyle(QString)", { "QProxyStyle", "QString&", "QProxyStyle*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProxyStyle::plastiqMethods = {
    { "baseStyle()", { "baseStyle", "", "QStyle*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBaseStyle(QStyle*)", { "setBaseStyle", "QStyle*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProxyStyle::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQProxyStyle::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQProxyStyle::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQProxyStyle::plastiqInherits = { &PlastiQQCommonStyle::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQProxyStyle::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQProxyStyle::plastiq_static_metaObject = {
    { &PlastiQQCommonStyle::plastiq_static_metaObject, &plastiqInherits, "QProxyStyle", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQProxyStyle::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQProxyStyleWrapper : public QProxyStyle {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQProxyStyleWrapper(QStyle *style = Q_NULLPTR)
         : QProxyStyle(style),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQProxyStyleWrapper(const QString &key)
         : QProxyStyle(key),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QProxyStyle::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QProxyStyle::event(e);
    }

};

void PlastiQQProxyStyle::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQProxyStyleWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQProxyStyleWrapper(); break;
        case 1: o = new PlastiQQProxyStyleWrapper(reinterpret_cast<QStyle*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQProxyStyleWrapper(stack[1].s_string); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQProxyStyle *p = new PlastiQQProxyStyle();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQProxyStyle *p = new PlastiQQProxyStyle();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQCommonStyle::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QProxyStyle *o = sc ? Q_NULLPTR : reinterpret_cast<QProxyStyle*>(object->plastiq_data());

        switch(id) {
        case 0: { QStyle* _r = o->baseStyle();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;
        case 1: o->setBaseStyle(reinterpret_cast<QStyle*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r;
                if (isWrapper) _r = ((PlastiQQProxyStyleWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QProxyStyle *o = reinterpret_cast<QProxyStyle*>(object->plastiq_data());

        if(className == "QCommonStyle") {
            stack[0].s_voidp = static_cast<QCommonStyle*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQProxyStyle::~PlastiQQProxyStyle() {
    QProxyStyle* o = reinterpret_cast<QProxyStyle*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
