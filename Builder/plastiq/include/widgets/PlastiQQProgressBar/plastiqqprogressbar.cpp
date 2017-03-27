#include "plastiqmethod.h"
#include "plastiqqprogressbar.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QProgressBar> 
#include <QString>
#include <QEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQProgressBar::plastiqConstructors = {
    { "QProgressBar()", { "QProgressBar", "", "QProgressBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProgressBar(QWidget*)", { "QProgressBar", "QWidget*", "QProgressBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProgressBar::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invertedAppearance()", { "invertedAppearance", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTextVisible()", { "isTextVisible", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximum()", { "maximum", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimum()", { "minimum", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetFormat()", { "resetFormat", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QString)", { "setFormat", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInvertedAppearance(bool)", { "setInvertedAppearance", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextDirection(enum)", { "setTextDirection", "QProgressBar::Direction", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextVisible(bool)", { "setTextVisible", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textDirection()", { "textDirection", "", "QProgressBar::Direction", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionProgressBar*)", { "initStyleOption", "QStyleOptionProgressBar*", "void", 16, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "reset()", { "reset", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMaximum(int)", { "setMaximum", "int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMinimum(int)", { "setMinimum", "int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOrientation(enum)", { "setOrientation", "Qt::Orientation", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setRange(int,int)", { "setRange", "int,int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setValue(int)", { "setValue", "int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProgressBar::plastiqSignals = {
    { "valueChanged(int)", { "valueChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQProgressBar::plastiqProperties = {
    { "alignment", { "alignment", "long", "setAlignment", "alignment" } },
    { "format", { "format", "QString", "setFormat", "format" } },
    { "invertedAppearance", { "invertedAppearance", "bool", "setInvertedAppearance", "invertedAppearance" } },
    { "maximum", { "maximum", "int", "setMaximum", "maximum" } },
    { "minimum", { "minimum", "int", "setMinimum", "minimum" } },
    { "orientation", { "orientation", "long", "setOrientation", "orientation" } },
    { "text", { "text", "QString", "", "text" } },
    { "textDirection", { "textDirection", "long", "setTextDirection", "textDirection" } },
    { "textVisible", { "textVisible", "bool", "setTextVisible", "isTextVisible" } },
    { "value", { "value", "int", "setValue", "value" } },

};

QHash<QByteArray, long> PlastiQQProgressBar::plastiqConstants = {

    /* QProgressBar::Direction */
   { "TopToBottom", QProgressBar::TopToBottom },
   { "BottomToTop", QProgressBar::BottomToTop },

};

QVector<PlastiQMetaObject*> PlastiQQProgressBar::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQProgressBar::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQProgressBar::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QProgressBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQProgressBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQProgressBarWrapper : public QProgressBar {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQProgressBarWrapper(QWidget *parent = Q_NULLPTR)
         : QProgressBar(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QString text() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString text()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QProgressBar::text();
    }

    QString PlastiQParentCall_text() const {
        return QProgressBar::text();
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
        else return QProgressBar::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QProgressBar::event(e);
    }

};

void PlastiQQProgressBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQProgressBarWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQProgressBarWrapper(); break;
        case 1: o = new PlastiQQProgressBarWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQProgressBar *p = new PlastiQQProgressBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQProgressBar *p = new PlastiQQProgressBar();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QProgressBar *o = sc ? Q_NULLPTR : reinterpret_cast<QProgressBar*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QString _r = o->format();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->invertedAppearance();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isTextVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { int _r = o->maximum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->minimum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: o->resetFormat();
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setInvertedAppearance(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setTextDirection(QProgressBar::Direction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setTextVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: { QString _r;
                if (isWrapper) _r = ((PlastiQQProgressBarWrapper*)o)->PlastiQParentCall_text();
                else _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { qint64 _r = o->textDirection(); // HACK for QProgressBar::Direction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { int _r = o->value();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 17: { bool _r;
                if (isWrapper) _r = ((PlastiQQProgressBarWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 19: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setMaximum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setMinimum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setOrientation(Qt::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setRange(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setValue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QProgressBar *o = reinterpret_cast<QProgressBar*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QProgressBar::valueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QProgressBar *o = reinterpret_cast<QProgressBar*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QProgressBar *o = reinterpret_cast<QProgressBar*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QProgressBar *o = reinterpret_cast<QProgressBar*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQProgressBar::~PlastiQQProgressBar() {
    QProgressBar* o = reinterpret_cast<QProgressBar*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
