#include "plastiqmethod.h"
#include "plastiqqwidgetaction.h"

#include "widgets/PlastiQQAction/plastiqqaction.h"
#include <QWidgetAction> 
#include <QWidget>
#include <QEvent>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQWidgetAction::plastiqConstructors = {
    { "QWidgetAction(QObject*)", { "QWidgetAction", "QObject*", "QWidgetAction*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWidgetAction::plastiqMethods = {
    { "defaultWidget()", { "defaultWidget", "", "QWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "releaseWidget(QWidget*)", { "releaseWidget", "QWidget*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestWidget(QWidget*)", { "requestWidget", "QWidget*", "QWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultWidget(QWidget*)", { "setDefaultWidget", "QWidget*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createWidget(QWidget*)", { "createWidget", "QWidget*", "QWidget*", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "deleteWidget(QWidget*)", { "deleteWidget", "QWidget*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWidgetAction::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWidgetAction::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWidgetAction::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWidgetAction::plastiqInherits = { &PlastiQQAction::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWidgetAction::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWidgetAction::plastiq_static_metaObject = {
    { &PlastiQQAction::plastiq_static_metaObject, &plastiqInherits, "QWidgetAction", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWidgetAction::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQWidgetActionWrapper : public QWidgetAction {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQWidgetActionWrapper(QObject *parent)
         : QWidgetAction(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QWidget* createWidget(QWidget *parent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QWidget* createWidget(QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(parent);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QWidget* _r = reinterpret_cast<QWidget*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QWidgetAction::createWidget(parent);
    }

    QWidget* PlastiQParentCall_createWidget(QWidget *parent) {
        return QWidgetAction::createWidget(parent);
    }

    void deleteWidget(QWidget *widget) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void deleteWidget(QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(widget);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWidgetAction::deleteWidget(widget);
    }

    void PlastiQParentCall_deleteWidget(QWidget *widget) {
        return QWidgetAction::deleteWidget(widget);
    }

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
        else return QWidgetAction::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QWidgetAction::event(event);
    }

    bool eventFilter(QObject *obj, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(obj);
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
        else return QWidgetAction::eventFilter(obj,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *obj, QEvent *event) {
        return QWidgetAction::eventFilter(obj,event);
    }

};

void PlastiQQWidgetAction::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQWidgetActionWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQWidgetActionWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQWidgetAction *p = new PlastiQQWidgetAction();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWidgetAction *p = new PlastiQQWidgetAction();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQAction::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWidgetAction *o = sc ? Q_NULLPTR : reinterpret_cast<QWidgetAction*>(object->plastiq_data());

        switch(id) {
        case 0: { QWidget* _r = o->defaultWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 1: o->releaseWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { QWidget* _r = o->requestWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 3: o->setDefaultWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QWidget* _r;
                if (isWrapper) _r = ((PlastiQQWidgetActionWrapper*)o)->PlastiQParentCall_createWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 5: if (isWrapper) ((PlastiQQWidgetActionWrapper*)o)->PlastiQParentCall_deleteWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQWidgetActionWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r;
                if (isWrapper) _r = ((PlastiQQWidgetActionWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAction::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWidgetAction *o = reinterpret_cast<QWidgetAction*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWidgetAction *o = reinterpret_cast<QWidgetAction*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWidgetAction *o = reinterpret_cast<QWidgetAction*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWidgetAction *o = reinterpret_cast<QWidgetAction*>(object->plastiq_data());

        if(className == "QAction") {
            stack[0].s_voidp = static_cast<QAction*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWidgetAction::~PlastiQQWidgetAction() {
    QWidgetAction* o = reinterpret_cast<QWidgetAction*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
