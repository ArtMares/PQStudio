#include "plastiqmethod.h"
#include "plastiqqcommandlinkbutton.h"

#include "widgets/PlastiQQPushButton/plastiqqpushbutton.h"
#include <QCommandLinkButton> 
#include <QString>
#include <QEvent>
#include <QSize>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLinkButton::plastiqConstructors = {
    { "QCommandLinkButton()", { "QCommandLinkButton", "", "QCommandLinkButton*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLinkButton(QWidget*)", { "QCommandLinkButton", "QWidget*", "QCommandLinkButton*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLinkButton(QString)", { "QCommandLinkButton", "QString&", "QCommandLinkButton*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLinkButton(QString,QWidget*)", { "QCommandLinkButton", "QString&,QWidget*", "QCommandLinkButton*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLinkButton(QString,QString)", { "QCommandLinkButton", "QString&,QString&", "QCommandLinkButton*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLinkButton(QString,QString,QWidget*)", { "QCommandLinkButton", "QString&,QString&,QWidget*", "QCommandLinkButton*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLinkButton::plastiqMethods = {
    { "description()", { "description", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDescription(QString)", { "setDescription", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "heightForWidth(int)", { "heightForWidth", "int", "int", 3, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "minimumSizeHint()", { "minimumSizeHint", "", "QSize", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sizeHint()", { "sizeHint", "", "QSize", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLinkButton::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCommandLinkButton::plastiqProperties = {
    { "description", { "description", "QString", "setDescription", "description" } },
    { "flat", { "flat", "bool", "setFlat", "isFlat" } },

};

QHash<QByteArray, long> PlastiQQCommandLinkButton::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCommandLinkButton::plastiqInherits = { &PlastiQQPushButton::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCommandLinkButton::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQCommandLinkButton::plastiq_static_metaObject = {
    { &PlastiQQPushButton::plastiq_static_metaObject, &plastiqInherits, "QCommandLinkButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCommandLinkButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQCommandLinkButtonWrapper : public QCommandLinkButton {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQCommandLinkButtonWrapper(QWidget *parent = Q_NULLPTR)
         : QCommandLinkButton(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQCommandLinkButtonWrapper(const QString &text, QWidget *parent = Q_NULLPTR)
         : QCommandLinkButton(text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQCommandLinkButtonWrapper(const QString &text, const QString &description, QWidget *parent = Q_NULLPTR)
         : QCommandLinkButton(text,description,parent),
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
        else return QCommandLinkButton::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QCommandLinkButton::event(e);
    }

    int heightForWidth(int width) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int heightForWidth(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = width;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QCommandLinkButton::heightForWidth(width);
    }

    int PlastiQParentCall_heightForWidth(int width) const {
        return QCommandLinkButton::heightForWidth(width);
    }

    QSize minimumSizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize minimumSizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QCommandLinkButton::minimumSizeHint();
    }

    QSize PlastiQParentCall_minimumSizeHint() const {
        return QCommandLinkButton::minimumSizeHint();
    }

    QSize sizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize sizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QCommandLinkButton::sizeHint();
    }

    QSize PlastiQParentCall_sizeHint() const {
        return QCommandLinkButton::sizeHint();
    }

};

void PlastiQQCommandLinkButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQCommandLinkButtonWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQCommandLinkButtonWrapper(); break;
        case 1: o = new PlastiQQCommandLinkButtonWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQCommandLinkButtonWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQCommandLinkButtonWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 4: o = new PlastiQQCommandLinkButtonWrapper(stack[1].s_string,
                    stack[2].s_string); break;
        case 5: o = new PlastiQQCommandLinkButtonWrapper(stack[1].s_string,
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQCommandLinkButton *p = new PlastiQQCommandLinkButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCommandLinkButton *p = new PlastiQQCommandLinkButton();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQPushButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCommandLinkButton *o = sc ? Q_NULLPTR : reinterpret_cast<QCommandLinkButton*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->description();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: o->setDescription(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r;
                if (isWrapper) _r = ((PlastiQQCommandLinkButtonWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r;
                if (isWrapper) _r = ((PlastiQQCommandLinkButtonWrapper*)o)->PlastiQParentCall_heightForWidth(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQCommandLinkButtonWrapper*)o)->PlastiQParentCall_minimumSizeHint());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQCommandLinkButtonWrapper*)o)->PlastiQParentCall_sizeHint());
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQPushButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCommandLinkButton *o = reinterpret_cast<QCommandLinkButton*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCommandLinkButton *o = reinterpret_cast<QCommandLinkButton*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCommandLinkButton *o = reinterpret_cast<QCommandLinkButton*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCommandLinkButton *o = reinterpret_cast<QCommandLinkButton*>(object->plastiq_data());

        if(className == "QPushButton") {
            stack[0].s_voidp = static_cast<QPushButton*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCommandLinkButton::~PlastiQQCommandLinkButton() {
    QCommandLinkButton* o = reinterpret_cast<QCommandLinkButton*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
