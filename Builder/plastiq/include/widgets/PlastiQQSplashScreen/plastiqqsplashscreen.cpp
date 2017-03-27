#include "plastiqmethod.h"
#include "plastiqqsplashscreen.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QSplashScreen> 
#include <QString>
#include <QPixmap>
#include <QPainter>
#include <QEvent>
#include <QMouseEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQSplashScreen::plastiqConstructors = {
    { "QSplashScreen()", { "QSplashScreen", "", "QSplashScreen*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplashScreen(QPixmap&)", { "QSplashScreen", "QPixmap&", "QSplashScreen*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplashScreen(QPixmap&,enum)", { "QSplashScreen", "QPixmap&,Qt::WindowFlags", "QSplashScreen*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplashScreen(QWidget*)", { "QSplashScreen", "QWidget*", "QSplashScreen*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplashScreen(QWidget*,QPixmap&)", { "QSplashScreen", "QWidget*,QPixmap&", "QSplashScreen*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplashScreen(QWidget*,QPixmap&,enum)", { "QSplashScreen", "QWidget*,QPixmap&,Qt::WindowFlags", "QSplashScreen*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSplashScreen::plastiqMethods = {
    { "finish(QWidget*)", { "finish", "QWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "message()", { "message", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap()", { "pixmap", "", "const QPixmap", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "repaint()", { "repaint", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixmap(QPixmap&)", { "setPixmap", "QPixmap&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawContents(QPainter*)", { "drawContents", "QPainter*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clearMessage()", { "clearMessage", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString)", { "showMessage", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString,int)", { "showMessage", "QString&,int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString,int,QColor&)", { "showMessage", "QString&,int,QColor&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSplashScreen::plastiqSignals = {
    { "messageChanged(QString)", { "messageChanged", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQSplashScreen::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSplashScreen::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSplashScreen::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSplashScreen::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQSplashScreen::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QSplashScreen", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSplashScreen::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSplashScreenWrapper : public QSplashScreen {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSplashScreenWrapper(const QPixmap &pixmap = QPixmap(), Qt::WindowFlags f = Qt::WindowFlags())
         : QSplashScreen(pixmap,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSplashScreenWrapper(QWidget *parent, const QPixmap &pixmap = QPixmap(), Qt::WindowFlags f = Qt::WindowFlags())
         : QSplashScreen(parent,pixmap,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void drawContents(QPainter *painter) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawContents(QPainter*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSplashScreen::drawContents(painter);
    }

    void PlastiQParentCall_drawContents(QPainter *painter) {
        return QSplashScreen::drawContents(painter);
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
        else return QSplashScreen::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QSplashScreen::event(e);
    }

};

void PlastiQQSplashScreen::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSplashScreenWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSplashScreenWrapper(); break;
        case 1: o = new PlastiQQSplashScreenWrapper((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))); break;
        case 2: o = new PlastiQQSplashScreenWrapper((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    Qt::WindowFlags(stack[2].s_int64)); break;
        case 3: o = new PlastiQQSplashScreenWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 4: o = new PlastiQQSplashScreenWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp))); break;
        case 5: o = new PlastiQQSplashScreenWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    Qt::WindowFlags(stack[3].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSplashScreen *p = new PlastiQQSplashScreen();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSplashScreen *p = new PlastiQQSplashScreen();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSplashScreen *o = sc ? Q_NULLPTR : reinterpret_cast<QSplashScreen*>(object->plastiq_data());

        switch(id) {
        case 0: o->finish(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QString _r = o->message();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->repaint();
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQSplashScreenWrapper*)o)->PlastiQParentCall_drawContents(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQSplashScreenWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 8: o->clearMessage();
                stack[0].type = PlastiQ::Void; break;
        case 9: o->showMessage(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->showMessage(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->showMessage(stack[1].s_string,
                    stack[2].s_int,
                    (*reinterpret_cast< QColor(*) >(stack[3].s_voidp)));
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

        QSplashScreen *o = reinterpret_cast<QSplashScreen*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QSplashScreen::messageChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "messageChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSplashScreen *o = reinterpret_cast<QSplashScreen*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSplashScreen *o = reinterpret_cast<QSplashScreen*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSplashScreen *o = reinterpret_cast<QSplashScreen*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSplashScreen::~PlastiQQSplashScreen() {
    QSplashScreen* o = reinterpret_cast<QSplashScreen*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
